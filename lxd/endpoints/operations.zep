namespace Lxd\Endpoints;

use Lxd\Endpoint;

final class Operations extends Endpoint
{
    const ENDPOINT = "operations";

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
        var response = this->curl->get(this->getBase(Operations::ENDPOINT));

        var ret = [], item, key, operation_id;
        for key, item in (array) response["metadata"] {
            for operation_id in item {
                let ret[key][] = this->stripEndpoint(operation_id);
            }
        }
        return ret;
    }

    /**
     *
     */
    public function info(string! uuid) -> array
    {
        return this->curl->get(this->getBase(Operations::ENDPOINT)."/".uuid);
    }

    /**
     *
     */
    public function cancel(string! uuid) -> bool
    {
        return this->curl->delete(this->getBase(Operations::ENDPOINT)."/".uuid);
    }

    /**
     *
     */
    public function wait(string! uuid, int! timeout = null) -> array
    {
        string endpoint;

        let endpoint = this->getBase(Operations::ENDPOINT)."/".uuid."/wait";

        if is_numeric(timeout) && timeout > 0 {
            let endpoint .= "?timeout=".timeout;
        }

        return this->curl->get(endpoint);
    }

}
