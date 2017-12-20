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
    const ENDPOINT = "certificates";

    protected curl;

    /**
     *
     */
    public function __construct(array! config, <Lxd\Lib\Curl> curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);
    }

    /**
     *
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
     *
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
     *
     */
    public function info(string! fingerprint) -> array
    {
        return this->curl->get(this->getBase(Certificates::ENDPOINT)."/".fingerprint);
    }

    /**
     *
     */
    public function delete(string! fingerprint) -> bool
    {
        return this->remove(fingerprint);
    }

    /**
     *
     */
    public function remove(string! fingerprint) -> bool
    {
        return this->curl->delete(this->getBase(Certificates::ENDPOINT)."/".fingerprint);
    }

}
