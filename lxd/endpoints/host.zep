namespace Lxd\Endpoints;

use Lxd\Endpoint;

class Host extends Endpoint
{
    protected curl;

    public function __construct(config, curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);
    }

    public function info()
    {
        string endpoint = this->config["url"]."/".this->config["version"];

        return this->curl->get(
            endpoint
        );
    }

}
