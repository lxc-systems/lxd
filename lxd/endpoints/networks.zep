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

/**
 * Lxd\Endpoints\Networks
 *
 * Provides networks facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/networks.zep
 */
final class Networks extends Endpoint
{
    /**
     * @var - Base API endpoint
     */
    const ENDPOINT = "networks";

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
     * List of all networks.
     *
     * <code>
     *  $lxd->networks->all();
     * </code>
     *
     * @return array
     */
    public function all() -> array
    {
        var response = [
            "metadata" : []
        ];

        let response = this->curl->get(this->getBase(Networks::ENDPOINT));

        if response["type"] === "error" {
            return response;
        }

        var item, key;
        for key, item in (array) response["metadata"] {
            let response["metadata"][key] = this->stripEndpoint(item);
        }

        return response;
    }

    /**
     * Show information on a network.
     *
     * <code>
     *  $lxd->networks->info('network-name');
     * </code>
     *
     * @param  string name  Name of network
     * @return array
     */
    public function info(string! name) -> array
    {
        var response = [
            "metadata" : [
                "used_by" : []
            ]
        ];

        let response = this->curl->get(this->getBase(Networks::ENDPOINT)."/".name);

        if response["type"] === "error" {
            return response;
        }

        var item, key;
        for key, item in (array) response["metadata"]["used_by"] {
            let response["metadata"]["used_by"][key] = str_replace("/".this->getVersion()."/containers/", null, item);
        }

        return response;
    }

    /**
     * Create new network.
     *
     * <code>
     *  $lxd->networks->create(
     *      'network-name', 
     *      'My Network', 
     *      [
     *          'ipv4.address' => '192.168.1.1/8',
     *          'ipv4.nat' => 'true',
     *          'ipv6.address' => '2001:470:b368:4242::1/64',
     *          'ipv6.nat' => 'true'
     *      ], 
     *      'bridge',
     *      true
     *  );
     * </code>
     *
     * @param  string   name         Name of new network
     * @param  string   description  Decription of new network
     * @param  array    config       Network configuration
     * @param  string   type         Type of network
     * @param  boolean  managed      LXD managed network
     * @return array
     */
    public function create(
        string! name, 
        string! description, 
        array! config = [], 
        string! type = "bridge", 
        boolean! managed = true) -> array
    {
        var opt = [
            "name" : name,
            "description" : description,
            "config" : config,
            "type" : type,
            "managed" : managed
        ];

        return this->curl->post(
            this->getBase(Networks::ENDPOINT),
            opt
        );
    }

    /**
     * Rename network.
     *
     * <code>
     *  $lxd->networks->remove('network-name', 'new-network-name');
     * </code>
     *
     * @param  string  name  Name of network
     * @param  string  name  New name of network
     * @return array
     */
    public function rename(string! name, string! newName) -> array
    {
        var opt = [
            "name" : newName
        ];

        return this->curl->post(
            this->getBase(Networks::ENDPOINT)."/".name,
            opt
        );
    }  

    /**
     * Replace network.
     *
     * <code>
     *  $lxd->networks->replace(
     *      'network-name', 
     *      'My Network', 
     *      [
     *          'ipv4.address' => '192.168.1.1/8',
     *          'ipv4.nat' => 'true',
     *          'ipv6.address' => '2001:470:b368:4242::1/64',
     *          'ipv6.nat' => 'true'
     *      ], 
     *      'bridge',
     *      true
     *  );
     * </code>
     *
     * @param  string   name         Name of new network
     * @param  string   description  Decription of new network
     * @param  array    config       Network configuration
     * @param  string   type         Type of network
     * @param  boolean  managed      LXD managed network
     * @return array
     */
    public function replace(
        string! name, 
        string! description, 
        array! config = [], 
        string! type = "bridge", 
        boolean! managed = true) -> array
    {
        var opt = [
            "name" : name,
            "description" : description,
            "config" : config,
            "type" : type,
            "managed" : managed
        ];

        return this->curl->put(
            this->getBase(Networks::ENDPOINT)."/".name,
            opt
        );
    }    

    /**
     * Update network.
     *
     * <code>
     *  $lxd->networks->update(
     *      'network-name', 
     *      'My Network', 
     *      [
     *          'ipv4.address' => '192.168.1.1/8',
     *          'ipv4.nat' => 'true',
     *          'ipv6.address' => '2001:470:b368:4242::1/64',
     *          'ipv6.nat' => 'true'
     *      ], 
     *      'bridge',
     *      true
     *  );
     * </code>
     *
     * @param  string   name         Name of new network
     * @param  string   description  Decription of new network
     * @param  array    config       Network configuration
     * @param  string   type         Type of network
     * @param  boolean  managed      LXD managed network
     * @return array
     */
    public function update(
        string! name, 
        string! description, 
        array! config = [], 
        string! type = "bridge", 
        boolean! managed = true) -> array
    {
        var opt = [
            "name" : name,
            "description" : description,
            "config" : config,
            "type" : type,
            "managed" : managed
        ];

        return this->curl->patch(
            this->getBase(Networks::ENDPOINT)."/".name,
            opt
        );
    }

    /**
     * Remove network.
     *
     * <code>
     *  $lxd->networks->remove('network-name');
     * </code>
     *
     * @param  string  name  Name of new network
     * @return array
     */
    public function remove(string! name) -> array
    {
        return this->curl->delete(this->getBase(Networks::ENDPOINT)."/".name);
    }  

    /**
     * Delete network - alias of remove.
     *
     * <code>
     *  $lxd->networks->delete('network-name');
     * </code>
     *
     * @param  string  name  Name of new network
     * @return array
     */
    public function delete(string! name) -> array
    {
        return this->remove(name);
    }  

}
