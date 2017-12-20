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

        if wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : 30
                ]
            );
        }
        
        return response;
    }

}
