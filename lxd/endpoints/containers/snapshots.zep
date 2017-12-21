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
     * List of snapshots for a container.
     *
     * <code>
     *  $lxd->containers->snapshots->all('conainer-name');
     * </code>
     *
     * @param  string name  Name of container
     * @return array
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
     * Show information on a snapshot.
     *
     * <code>
     *  $lxd->containers->snapshots->all('conainer-name');
     * </code>
     *
     * @param  string name      Name of container
     * @param  string snapshot  Name of snapshot
     * @return array
     */
    public function info(string! name, string! snapshot) -> array
    {
        return this->curl->get(
            this->getBase(Snapshots::ENDPOINT)."/".name."/snapshots/".snapshot
        );
    }

    /**
     * Create a snapshot of a container.
     *
     * <code>
     *  $lxd->containers->snapshots->create('container-name', 'snapshot-name', false, true);
     * </code>
     *
     * @param  string   name     Name of container
     * @param  string   snapshot Name of snapshot
     * @param  boolean  stateful Save runtime state for a running container
     * @param  boolean  wait     Wait for operation to finish
     * @return array
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
     * Restore a container from a snapshot.
     *
     * <code>
     *  $lxd->containers->snapshots->restore('container-name', 'snapshot-name', false, true);
     * </code>
     *
     * @param  string   name     Name of container
     * @param  string   snapshot Name of snapshot
     * @param  boolean  stateful Save runtime state for a running container
     * @param  boolean  wait     Wait for operation to finish
     * @return array
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
     * Rename a container snapshot.
     *
     * <code>
     *  $lxd->containers->snapshots->rename('container-name', 'snapshot-name', 'new-snapshot-name', false, true);
     * </code>
     *
     * @param  string   name        Name of container
     * @param  string   snapshot    Name of snapshot
     * @param  boolean  newSnapshot New name for snapshot
     * @param  boolean  stateful    Save runtime state for a running container
     * @param  boolean  wait        Wait for operation to finish
     * @return array
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
     * Remove a container snapshot.
     *
     * <code>
     *  $lxd->containers->snapshots->remove('container-name', 'snapshot-name', true);
     * </code>
     *
     * @param  string   name        Name of container
     * @param  string   snapshot    Name of snapshot
     * @param  boolean  wait        Wait for operation to finish
     * @return array
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
     * Delete a container snapshot - alias of remove.
     *
     * <code>
     *  $lxd->containers->snapshots->delete('container-name', 'snapshot-name', true);
     * </code>
     *
     * @param  string   name        Name of container
     * @param  string   snapshot    Name of snapshot
     * @param  boolean  wait        Wait for operation to finish
     * @return array
     */
    public function delete(string! name, string! snaphot, boolean! wait = false) -> array
    {
        return this->remove(name, snaphot, wait);
    }

}
