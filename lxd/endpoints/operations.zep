namespace Lxd\Endpoints;

use Lxd\Endpoint;

class Operations extends Endpoint
{
    protected curl;
    private endpoint;

    public function __construct(config, curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);
    }

    public function all() -> array
    {
        var response = this->curl->get(this->getBase()."/operations");

        var ret = [], item, key, operation_id;
        for key, item in (array) response["metadata"] {
            for operation_id in item {
                let ret[key][] = this->stripEndpoint(operation_id);
            }
        }
        return ret;
    }

    public function info(uuid) -> array
    {
        return this->curl->get(this->getBase()."/operations/".uuid);
    }

    public function cancel(uuid) -> bool
    {
        return this->curl->delete(this->getBase()."/operations/".uuid);
    }

    public function wait(uuid, int timeout = null) -> array
    {
        string endpoint;
        
        let endpoint = this->getBase()."/operations/".uuid."/wait";

        if is_numeric(timeout) && timeout > 0 {
            let endpoint .= "?timeout=".timeout;
        }

        return this->curl->get(endpoint);
    }

}
