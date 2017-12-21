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

final class Networks extends Endpoint
{
    const ENDPOINT = "networks";

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
     *
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
     *
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
     *
     */
    public function create(
        string! name, 
        string! description, 
        array! config = [], 
        string! type = "bridge", 
        boolean! managed = true) -> string
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
     *
     */
    public function rename(string! name, string! newName) -> string
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
     *
     */
    public function replace(
        string! name, 
        string! description, 
        array! config = [], 
        string! type = "bridge", 
        boolean! managed = true) -> string
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
     *
     */
    public function update(
        string! name, 
        string! description, 
        array! config = [], 
        string! type = "bridge", 
        boolean! managed = true) -> string
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
     *
     */
    public function remove(string! name) -> string
    {
        return this->curl->delete(this->getBase(Networks::ENDPOINT)."/".name);
    }  
    
    /**
     *
     */
    public function delete(string! name) -> string
    {
        return this->remove(name);
    }  

}
