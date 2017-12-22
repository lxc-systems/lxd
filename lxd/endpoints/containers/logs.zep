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

/**
 * Lxd\Endpoints\Containers\Logs
 *
 * Provides containers logs facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/containers/logs.zep
 */
final class Logs extends Endpoint
{
    /**
     * @var - Base API endpoint
     */
    const ENDPOINT = "containers";
    
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
     * List logs for a container.
     *
     * <code>
     *  $lxd->containers->logs->all('conainer-name');
     * </code>
     *
     * @param  string name     Name of container
     * @return array
     */
    public function all(string! name) -> array
    {
        var key, value, response = [
            "metadata": []
        ];

        let response = this->curl->get(
            this->getBase(Logs::ENDPOINT)."/".name."/logs"
        );
        
        if response["type"] === "error" {
            return response;
        }

        for key, value in response["metadata"] {
            let response["metadata"][key] = str_replace(
                "/".this->getVersion()."/".Logs::ENDPOINT."/".name."/logs/", null, value
            );
        }

        return response;
    }

    /**
     * Get the contents of a particular log file.
     *
     * <code>
     *  $lxd->containers->logs->read('conainer-name', 'log-name.log');
     * </code>
     *
     * @param  string name  Name of container
     * @param  string log   Name of log
     * @return string
     */
    public function read(string! name, string! log) -> string
    {
        return this->curl->get(
            this->getBase(Logs::ENDPOINT)."/".name."/logs/".log
        );
    }
    
    /**
     * Remove a particular log file.
     *
     * <code>
     *  $lxd->containers->logs->remove('conainer-name', 'log-name.log');
     * </code>
     *
     * @param  string name  Name of container
     * @param  string log   Name of log
     * @return array
     */
    public function remove(string! name, string! log) -> array
    {
        return this->delete(name, log);
    }
    
    /**
     * Delete a particular log file - alias of remove.
     *
     * <code>
     *  $lxd->containers->logs->delete('conainer-name', 'log-name.log');
     * </code>
     *
     * @param  string name  Name of container
     * @param  string log   Name of log
     * @return array
     */
    public function delete(string! name, string! log) -> array
    {
        return this->curl->delete(
            this->getBase(Logs::ENDPOINT)."/".name."/logs/".log
        );
    }

}
