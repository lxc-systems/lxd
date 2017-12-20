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
    public function all() -> array
    {
        var ret = [], item;
        var response = this->curl->get(this->getBase());

        for item in (array) response["metadata"] {
            let ret[] = this->stripEndpoint(item);
        }
        return ret;
    }

    /**
     *
     */
    public function info(string! name) -> array
    {
        return this->curl->get(this->getBase(Containers::ENDPOINT)."/".name);
    }

    /**
     *
     */
    public function state(string! name) -> array
    {
        return this->curl->get(this->getBase(Containers::ENDPOINT)."/".name."/state");
    }

    /**
     *
     */
    public function setState(
        string! name, 
        string! action, 
        int! timeout = 30, 
        boolean! force = false, 
        boolean! stateful = false, 
        boolean! wait = false) -> array
    {
        var options = [
            "action"   : action,
            "timeout"  : timeout,
            "force"    : force,
            "stateful" : stateful
        ], response;

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
     *
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
     *
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
     *
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
     *
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
     *
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
     *
     */
    private function getSource(array! options) -> array
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
     *
     */
    private function getOptions(string! name, array! options) -> array
    {
        var only, opts;

        let only = [
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
     *
     */
    private function getEmptyOptions(string! name, array! options) -> array
    {
        var attrs, attr, opts;

        let attrs = [
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
                throw new \Exception("empty => true is not compatible with ".attr);
            }
        }

        let opts                   = this->getOptions(name, options);
        let opts["source"]["type"] = "none";

        return opts;
    }

    /**
     *
     */
    private function getRemoteImageOptions(string! name, array! source, array! options) -> array
    {
        var only, opts, remoteOptions;

        if isset options["protocol"] && !in_array(options["protocol"], ["lxd", "simplestreams"]) {
            throw new \Exception("Invalid protocol.  Valid choices: lxd, simplestreams");
        }

        let only = [
            "server",
            "secret",
            "protocol",
            "certificate"
        ];

        let remoteOptions          = array_intersect_key(options, array_flip(only));
        let opts                   = this->getOptions(name, options);
        let opts["source"]         = array_merge(source, remoteOptions);
        let opts["source"]["type"] = "image";
        let opts["source"]["mode"] = "pull";

        return opts;
    }

    /**
     *
     */
    private function getLocalImageOptions(string! name, array! source, array! options) -> array
    {
        var attrs, attr, opts;

        let attrs = [
            "secret",
            "protocol",
            "certificate"
        ];

        for attr in attrs {
            if isset options[attr] && !empty options[attr] {
                throw new \Exception("Only setting remote server is compatible with ".attr);
            }
        }

        let opts                   = this->getOptions(name, options);
        let opts["source"]         = source;
        let opts["source"]["type"] = "image";

        return opts;
    }

    /**
     *
     */
    public function create(string! name, array! options, boolean! wait = false) -> array
    {
        var source, opts, response;

        let source = this->getSource(options);

        if (isset options["empty"] && empty options["empty"]) && empty source {
            throw new \Exception("Source empty");
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
        return this->curl->delete(this->getBase()."/".fingerprint);
    }

}
