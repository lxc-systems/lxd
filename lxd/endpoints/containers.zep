namespace Lxd\Endpoints;

use Lxd\Endpoint;

class Containers extends Endpoint
{
    protected curl;
    private endpoint;

    /**
     *
     */
    public function __construct(array config, resource curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);

        let this->endpoint = this->config["url"]."/".this->config["version"]."/".this->config["endpoint"];
    }

    /**
     *
     */
    public function all() -> array
    {
        var response = this->curl->get(this->endpoint);

        var ret = [], item;
        for item in (array) response["metadata"] {
            let ret[] = str_replace("/".this->config["version"]."/".this->config["endpoint"]."/", null, item);
        }
        return ret;
    }

    /**
     *
     */
    public function info(string name) -> array
    {
        return this->curl->get(this->endpoint."/".name);
    }

    /**
     *
     */
    public function state(string name) -> array
    {
        return this->curl->get(this->endpoint."/".name."/state");
    }

    /**
     *
     */
    public function setState(
        string name, 
        string action, 
        int timeout = 30, 
        boolean force = false, 
        boolean stateful = false, 
        boolean wait = false) -> array
    {
        var options = [
            "action"   : action,
            "timeout"  : timeout,
            "force"    : force,
            "stateful" : stateful
        ], response;

        let response = this->curl->put(this->endpoint."/".name."/state", options);

        if wait {
            let response = this->curl->get(this->endpoint."/".response["metadata"]["id"]."/wait?timeout=".timeout);
        }

        return response;
    }

    /**
     *
     */
    public function start(
        string name,
        int timeout = 30, 
        boolean force = false, 
        boolean stateful = false, 
        boolean wait = false) -> array
    {
        return this->setState(name, "start", timeout, force, stateful, wait);
    }

    /**
     *
     */
    public function stop(
        string name,
        int timeout = 30, 
        boolean force = false, 
        boolean stateful = false, 
        boolean wait = false) -> array
    {
        return this->setState(name, "stop", timeout, force, stateful, wait);
    }

    /**
     *
     */
    public function restart(
        string name,
        int timeout = 30, 
        boolean force = false, 
        boolean stateful = false, 
        boolean wait = false) -> array
    {
        return this->setState(name, "restart", timeout, force, stateful, wait);
    }

    /**
     *
     */
    public function freeze(
        string name,
        int timeout = 30, 
        boolean force = false, 
        boolean stateful = false, 
        boolean wait = false) -> array
    {
        return this->setState(name, "freeze", timeout, force, stateful, wait);
    }

    /**
     *
     */
    public function unfreeze(
        string name,
        int timeout = 30, 
        boolean force = false, 
        boolean stateful = false, 
        boolean wait = false) -> array
    {
        return this->setState(name, "unfreeze", timeout, force, stateful, wait);
    }

    /**
     *
     */
    private function getSource(array options) -> array
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

    private function getOptions(string name, array options) -> array
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

    private function getEmptyOptions(string name, array options) -> array
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

    private function getRemoteImageOptions(string name, array source, array options) -> array
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

    private function getLocalImageOptions(string name, array source, array options) -> array
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
    public function create(string name, array options, boolean wait = false) -> array
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

        let response = this->curl->post(this->endpoint, opts);

        if wait {
            let response = this->curl->get(this->endpoint."/".response["metadata"]["id"]."/wait");
        }

        return response;
    }


    /**
     *
     */
    public function delete(string fingerprint) -> bool
    {
        return this->remove(fingerprint);
    }

    /**
     *
     */
    public function remove(string fingerprint) -> bool
    {
        return this->curl->delete(this->endpoint."/".fingerprint);
    }

}
