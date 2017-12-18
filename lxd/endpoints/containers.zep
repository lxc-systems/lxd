namespace Lxd\Endpoints;

use Lxd\Endpoint;

class Containers extends Endpoint
{
    protected curl;
    private endpoint;

    public function __construct(config, curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);

        let this->endpoint = this->config["url"]."/".this->config["version"]."/".this->config["endpoint"];
    }

    public function all() -> array
    {
        var response = this->curl->get(this->endpoint);

        var ret = [], item;
        for item in (array) response["metadata"] {
            let ret[] = str_replace("/".this->config["version"]."/".this->config["endpoint"]."/", null, item);
        }
        return ret;
    }

    public function info(name) -> array
    {
        return this->curl->get(this->endpoint."/".name);
    }
    
    public function state(name) -> array
    {
        return this->curl->get(this->endpoint."/".name."/state");
    }
    
    public function setState(name, action, int timeout = 30, boolean force = true, boolean stateful = false, boolean wait = false) -> array
    {
        var options = [
            "action"   : action,
            "timeout"  : timeout,
            "force"    : force,
            "stateful" : stateful
        ], response;

        let response = this->curl->put(this->endpoint."/".name."/state", options);
        
        if wait {
            //let response = this->curl->get(this->endpoint."/".response["metadata"]["id"]."/wait?timeout=".timeout);
        }

        return response;
    }

    public function delete(fingerprint) -> bool
    {
        return this->remove(fingerprint);
    }

    public function remove(fingerprint) -> bool
    {
        return this->curl->delete(this->endpoint."/".fingerprint);
    }

}
