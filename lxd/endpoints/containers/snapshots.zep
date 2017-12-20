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

namespace Lxd\Endpoints\Containers;

use Lxd\Endpoint;

final class Snapshots extends Endpoint
{
    const ENDPOINT = "containers";

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
    public function all(string! name) -> array
    {
        var key, value, response = [
            "metadata": []
        ];

        let response = this->curl->get(
            this->getBase(Snapshots::ENDPOINT)."/".name."/snapshots"
        );
        
        if response["type"] === "error" {
            return response;
        }

        for key, value in response["metadata"] {
            let response["metadata"][key] = str_replace(
                "/".this->getVersion()."/".Snapshots::ENDPOINT."/".name."/snapshots/", null, value
            );
        }

        return response;
    }

    /**
     *
     */
    public function info(string! name, string! snapshot) -> array
    {
        return this->curl->get(
            this->getBase(Snapshots::ENDPOINT)."/".name."/snapshots/".snapshot
        );
    }

    /**
     *
     */
    public function create(string! name, string! snapshot, boolean! stateful = false, boolean! wait = false) -> array
    {
        var options, response;

        let options = [
            "name"     : snapshot,
            "stateful" : stateful
        ];

        let response = this->curl->post(
            this->getBase(Snapshots::ENDPOINT)."/".name."/snapshots",
            options
        );

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : this->config["timeout"]
                ]
            );
        }

        return response;
    }

    /**
     *
     */
    public function restore(string! name, string! snapshot, boolean! wait = false) -> array
    {
        var response, opts = [
            "restore" : snapshot
        ];

        let response = this->curl->put(this->getBase(Snapshots::ENDPOINT)."/".name, opts);

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : this->config["timeout"]
                ]
            );
        }

        return response;
    }

    /**
     *
     */
    public function rename(string! name, string! snaphot, string! newSnapshot, boolean! wait = false) -> array
    {
        var response, opts = [
            "name" : newSnapshot
        ];

        let response = this->curl->post(this->getBase(Snapshots::ENDPOINT)."/".name."/snapshots/".snaphot, opts);

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : this->config["timeout"]
                ]
            );
        }

        return response;
    }
    
    /**
     *
     */
    public function remove(string! name, string! snaphot, boolean! wait = false) -> array
    {
        var response;

        let response = this->curl->delete(this->getBase(Snapshots::ENDPOINT)."/".name."/snapshots/".snaphot);

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : this->config["timeout"]
                ]
            );
        }

        return response;
    }
    
    /**
     *
     */
    public function delete(string! name, string! snaphot, boolean! wait = false) -> array
    {
        return this->remove(name, snaphot, wait);
    }

}
