namespace Lxd\Endpoints\Containers;

use Lxd\Endpoint;

final class Files extends Endpoint
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
    public function read(string! name, string! filepath) -> string
    {
        return this->curl->get(
            this->getBase(Files::ENDPOINT)."/".name."/files",
            [
                "path" : filepath
            ]
        );
    }

    /**
     *
     */
    public function write(
        string! name, 
        string! filepath, 
        string! data, 
        var mode = null,
        int! uid = 0, 
        int! gid = 0
    ) -> array
    {
        var headers = [];

        if is_int(uid) {
            let headers[] = "X-LXD-uid: ".intval(uid);
        }
        
        if is_int(gid) {
            let headers[] = "X-LXD-gid: ".intval(gid);
        }
        
        if mode !== null && is_numeric(mode) {
            let headers[] = "X-LXD-mode: ".sprintf("%04d", decoct(mode));
        }

        return this->curl->post(
            this->getBase(Files::ENDPOINT)."/".name."/files?path=".filepath,
            data,
            headers
        );
    }
    
    /**
     *
     */
    public function delete(string! name, string! filepath) -> array
    {
        return this->curl->delete(
            this->getBase(Files::ENDPOINT)."/".name."/files?path=".filepath
        );
    }

}
