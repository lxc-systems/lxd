namespace Lxd\Endpoints;

use Lxd\Endpoint;

class Operations extends Endpoint
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

        var ret = [], item, key, operation_id;
        for key, item in (array) response["metadata"] {
            for operation_id in item {
                let ret[key][] = str_replace("/".this->config["version"]."/".this->config["endpoint"]."/", null, operation_id);
            }
        }
        return ret;
    }

    public function info(uuid) -> array
    {
        return this->curl->get(this->endpoint."/".uuid);
    }

    public function cancel(uuid) -> bool
    {
        return this->curl->delete(this->endpoint."/".uuid);
    }

    public function wait(uuid, int timeout = null) -> array
    {
        let this->endpoint .= "/".uuid."/wait";

        if is_numeric(timeout) && timeout > 0 {
            let this->endpoint .= "?timeout=".timeout;
        }

        return this->curl->get(this->endpoint);
    }

}
