namespace Lxd\Endpoints\Containers;

use Lxd\Endpoint;

class Files extends Endpoint
{
    protected curl;
    private endpoint;

    /**
     *
     */
    public function __construct(array config, resource curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);
    }

    /**
     *
     */
    public function read(string name, string filepath) -> array
    {
        return this->curl->get(this->getBase()."/containers/".name."/files?path=".filepath);
    }

}
