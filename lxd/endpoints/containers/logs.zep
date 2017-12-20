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

final class Logs extends Endpoint
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
            this->getBase(Logs::ENDPOINT)."/".name."/logs"
        );

        for key, value in response["metadata"] {
            let response["metadata"][key] = str_replace(
                "/".this->getVersion()."/".Logs::ENDPOINT."/".name."/logs/", null, value
            );
        }

        return response;
    }

    /**
     *
     */
    public function read(string! name, string! log) -> string
    {
        return this->curl->get(
            this->getBase(Logs::ENDPOINT)."/".name."/logs/".log
        );
    }
    
    /**
     *
     */
    public function remove(string! name, string! log) -> array
    {
        return this->delete(name, log);
    }
    
    /**
     *
     */
    public function delete(string! name, string! log) -> array
    {
        return this->curl->delete(
            this->getBase(Logs::ENDPOINT)."/".name."/logs/".log
        );
    }

}
