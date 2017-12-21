/*
 +------------------------------------------------------------------------+
 | PHP LXD Extension                                                      |
 +------------------------------------------------------------------------+
 | Copyright (c)2017-2017 LXC.systems (https://github.com/lxc-systems/lxd)|
 +------------------------------------------------------------------------+
 | This source file is subject to GNU General Public License v2.0 License |
 | that is bundled with this package in the file LICENSE.                 |
 |                                                                        |
 | If you did not receive a copy of the license and are unable to         |
 | obtain it through the world-wide-web, please send an email             |
 | to license@lxd.systems so we can send you a copy immediately.          |
 +------------------------------------------------------------------------+
 | Authors: Lawrence Cherone <lawrence@lxd.systems>                       |
 +------------------------------------------------------------------------+
 */

namespace Lxd\Endpoints;

use Lxd\Endpoint;

final class Certificates extends Endpoint
{
    /**
     * @var - Base API endpoint
     */
    const ENDPOINT = "certificates";

    /**
     * @var
     */
    protected curl;

    /**
     * Class construct
     *
     * @param  array          config Config array which holds object configuration
     * @param  <Lxd\Lib\Curl> curl
     * @return void
     */
    public function __construct(array! config, <Lxd\Lib\Curl> curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);
    }

    /**
     * List all trusted certificates on the server.
     *
     * <code>
     *  $lxd->certificates->all();
     * </code>
     *
     * @return array
     */
    public function all() -> array
    {
        var key, value, response = [
            "metadata": []
        ];

        let response = this->curl->get(this->getBase(Certificates::ENDPOINT));

        if response["type"] === "error" {
            return response;
        }

        for key, value in response["metadata"] {
            let response["metadata"][key] = this->stripEndpoint(value);
        }

        return response;
    }

    /**
     * Add a new trusted certificate to the server.
     *
     * <code>
     *  $lxd->certificates->add('./local-certificate-path.pem', 'lxd-server-secret', 'certificate-label');
     * </code>
     *
     * @param  string certificate  Path to PEM certificate
     * @param  string password     LXD server secret
     * @param  string name         Name/Label of certificate
     * @return array
     */
    public function add(string! certificate, string! password = null, string! name = null) -> array
    {
        var raw, pem, options = [];

        if !file_exists(certificate) || !is_file(certificate) {
            throw "Certificate not found.";
        }

        //
        let raw = file_get_contents(certificate);

        // check its PEM format
        if strpos(raw, "BEGIN CERTIFICATE") === false {
            throw "Certificate not in PEM format.";
        }

        //
        let pem = trim(str_replace([
            "-----BEGIN CERTIFICATE-----",
            "-----END CERTIFICATE-----"
        ], null, raw));

        //
        let options["type"] = "client";
        let options["certificate"] = pem;
        if (name !== null) {
            let options["name"] = name;
        }
        if (password !== null) {
            let options["password"] = password;
        }

        return this->curl->post(this->getBase(Certificates::ENDPOINT), options);
    }

    /**
     * Show information of a certificate.
     *
     * <code>
     *  $lxd->certificates->info('cerfiticate-fingerprint');
     * </code>
     *
     * @param  string fingerprint  Fingerprint of certificate
     * @return array
     */
    public function info(string! fingerprint) -> array
    {
        return this->curl->get(this->getBase(Certificates::ENDPOINT)."/".fingerprint);
    }

    /**
     * Remove a trusted certificate - alias of delete.
     *
     * <code>
     *  $lxd->certificates->delete('cerfiticate-fingerprint');
     * </code>
     *
     * @param  string fingerprint  Fingerprint of certificate
     * @return array
     */
    public function delete(string! fingerprint) -> bool
    {
        return this->remove(fingerprint);
    }

    /**
     * Delete a trusted certificate.
     *
     * <code>
     *  $lxd->certificates->remove('cerfiticate-fingerprint');
     * </code>
     *
     * @param  string fingerprint  Fingerprint of certificate
     * @return array
     */
    public function remove(string! fingerprint) -> bool
    {
        return this->curl->delete(this->getBase(Certificates::ENDPOINT)."/".fingerprint);
    }

}
