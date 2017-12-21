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

final class Containers extends Endpoint
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
     * List all containers on the server.
     *
     * <code>
     *  $lxd->containers->all();
     * </code>
     *
     * @return array
     */
    public function all() -> array
    {
        var ret = [], item;
        var response = this->curl->get(this->getBase());

        if response["type"] === "error" {
            return response;
        }

        for item in (array) response["metadata"] {
            let ret[] = this->stripEndpoint(item);
        }
        return ret;
    }

    /**
     * List all containers on the server.
     *
     * <code>
     *  $lxd->containers->info('container-name');
     * </code>
     *
     * @param string name Name of container
     * @return array
     */
    public function info(string! name) -> array
    {
        return this->curl->get(this->getBase(Containers::ENDPOINT)."/".name);
    }

    /**
     * Get the current state of the container.
     *
     * <code>
     *  $lxd->containers->state('container-name');
     * </code>
     *
     * @param string name Name of container
     * @return array
     */
    public function state(string! name) -> array
    {
        return this->curl->get(this->getBase(Containers::ENDPOINT)."/".name."/state");
    }

    /**
     * Main set state mrthod for container, methods below are shortcuts.
     *
     * <code>
     *  $lxd->containers->setState('container-name', 'start', 30, true, true, true);
     * </code>
     *
     * @param  string   name     Name of container
     * @param  string   action   State change action (stop, start, restart, freeze or unfreeze)
     * @param  int      timeout  Time after which the operation is considered to have failed (default: no timeout)
     * @param  boolean  force    Whether to force the operation by killing the container
     * @param  boolean  stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  boolean  wait     Wait for operation to finish
     * @return array
     */
    public function setState(
        string! name, 
        string! action, 
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        var response, options = [
            "action"   : action,
            "timeout"  : timeout,
            "force"    : force,
            "stateful" : stateful
        ];

        let response = this->curl->put(
            this->getBase(Containers::ENDPOINT)."/".name."/state", options
        );

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : timeout
                ]
            );
        }

        return response;
    }

    /**
     * Start a container.
     *
     * <code>
     *  $lxd->containers->start('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function start(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->setState(name, "start", timeout, force, stateful, wait);
    }

    /**
     * Stop a container.
     *
     * <code>
     *  $lxd->containers->stop('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function stop(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->setState(name, "stop", timeout, force, stateful, wait);
    }

    /**
     * Shutdown a container - alias of stop.
     *
     * <code>
     *  $lxd->containers->shutdown('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function shutdown(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->stop(name, timeout, force, stateful, wait);
    }

    /**
     * Restart a container.
     *
     * <code>
     *  $lxd->containers->restart('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function restart(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->setState(name, "restart", timeout, force, stateful, wait);
    }

    /**
     * Reboot a container - alias of restart.
     *
     * <code>
     *  $lxd->containers->reboot('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function reboot(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->restart(name, timeout, force, stateful, wait);
    }

    /**
     * Freeze a container.
     *
     * <code>
     *  $lxd->containers->freeze('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function freeze(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->setState(name, "freeze", timeout, force, stateful, wait);
    }

    /**
     * Pause a container - alias of freeze.
     *
     * <code>
     *  $lxd->containers->pause('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function pause(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->freeze(name, timeout, force, stateful, wait);
    }

    /**
     * Unfreeze a container.
     *
     * <code>
     *  $lxd->containers->unfreeze('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function unfreeze(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->setState(name, "unfreeze", timeout, force, stateful, wait);
    }

    /**
     * Thaw a container - alias of unfreeze.
     *
     * <code>
     *  $lxd->containers->thaw('container-name', 30, true, true, true);
     * </code>
     *
     * @param  string name     Name of container
     * @param  int    timeout  Time after which the operation is considered to have failed (default: 30 seconds)
     * @param  bool   force    Whether to force the operation by killing the container
     * @param  bool   stateful Whether to store/restore runtime state (only valid for stop and start, default: false)
     * @param  bool   wait     Wait for operation to finish
     * @return array
     */
    public function thaw(
        string! name,
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        return this->unfreeze(name, timeout, force, stateful, wait);
    }

    /**
     *
     */
    public function create(string! name, array! options, boolean! wait = false) -> array
    {
        var source, opts, response;

        let source = this->getSource(options);

        if (isset options["empty"] && empty options["empty"]) && empty source {
            throw "Source empty";
        }

        if isset options["empty"] && empty options["empty"] {
            let opts = this->getOptions(name, options);
            let opts["source"] = source;
        } elseif isset options["empty"] && options["empty"] {
            let opts = this->getEmptyOptions(name, options);
        } elseif isset options["server"] && !empty options["server"] {
            let opts = this->getRemoteImageOptions(name, source, options);
        } else {
            let opts = this->getLocalImageOptions(name, source, options);
        }

        let response = this->curl->post(this->getBase(Containers::ENDPOINT), opts);

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
    public function copy(string! name, string! copyName, array! options = [], boolean! wait = false) -> array
    {
        var opts, response;

        let opts = this->getOptions(copyName, options);
        let opts["source"]["type"]   = "copy";
        let opts["source"]["source"] = name;

        let response = this->curl->post(this->getBase(Containers::ENDPOINT), opts);

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
    public function replace(string! name, array! opts, boolean! wait = false) -> array
    {
        var response;

        let response = this->curl->put(this->getBase(Containers::ENDPOINT)."/".name, opts);

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
     * Private method for getting container [source] options.
     *
     * @param array options Options for payload
     */
    final private function getSource(array! options) -> array
    {
        var only, opts, attr;

        if isset options["source"] {
            let only = [
                "type",
                "mode",
                "source",
                "server",
                "operation",
                "protocol",
                "base-image",
                "certificate",
                "secret",
                "secrets",
                "alias",
                "fingerprint",
                "properties",
                "live"
            ];

            let opts = array_intersect_key(options, array_flip(only));

            return opts["source"];
        }

        for attr in ["alias", "fingerprint", "properties"] {
            if isset options[attr] && !empty options[attr] {
                return [attr : options[attr]];
            }
        }
        return [];
    }

    /**
     * Private method for getting container [default] options.
     *
     * @param string name    Name for options
     * @param array  options Options for payload
     * @return array
     */
    final private function getOptions(string! name, array! options) -> array
    {
        var opts, only = [
            "architecture",
            "profiles",
            "ephemeral",
            "config",
            "devices"
        ];

        let opts         = array_intersect_key(options, array_flip(only));
        let opts["name"] = name;

        return opts;
    }

    /**
     * Private method for getting default container [empty] options.
     *
     * @param string name    Name for options
     * @param array  options Options for payload
     * @return array
     */
    final private function getEmptyOptions(string! name, array! options) -> array
    {
        var attr, opts, attrs = [
            "alias",
            "fingerprint",
            "properties",
            "server",
            "secret",
            "protocol",
            "certificate"
        ];

        for attr in attrs {
            if isset options[attr] && !empty options[attr] {
                throw "empty => true is not compatible with ".attr;
            }
        }

        let opts                   = this->getOptions(name, options);
        let opts["source"]["type"] = "none";

        return opts;
    }

    /**
     * Private method for getting default container [remote] options.
     *
     * @param string name    Name for options
     * @param array  source  Source for payload
     * @param array  options Options for payload
     * @return array
     */
    final private function getRemoteImageOptions(string! name, array! source, array! options) -> array
    {
        var opts, remoteOptions, only = [
            "server",
            "secret",
            "protocol",
            "certificate"
        ];

        if isset options["protocol"] && !in_array(options["protocol"], ["lxd", "simplestreams"]) {
            throw "Invalid protocol.  Valid choices: lxd, simplestreams";
        }

        let remoteOptions          = array_intersect_key(options, only->flip());
        let opts                   = this->getOptions(name, options);
        let opts["source"]         = source->merge(remoteOptions);
        let opts["source"]["type"] = "image";
        let opts["source"]["mode"] = "pull";

        return opts;
    }

    /**
     * Private method for getting default container [local] options.
     *
     * @param string name    Name for options
     * @param array  source  Source for payload
     * @param array  options Options for payload
     * @return array
     */
    final private function getLocalImageOptions(string! name, array! source, array! options) -> array
    {
        var opts, attr, attrs = [
            "secret",
            "protocol",
            "certificate"
        ];

        for attr in attrs {
            if isset options[attr] && !empty options[attr] {
                throw "Only setting remote server is compatible with ".attr;
            }
        }

        let opts                   = this->getOptions(name, options);
        let opts["source"]         = source;
        let opts["source"]["type"] = "image";

        return opts;
    }

}
