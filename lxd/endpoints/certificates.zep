namespace Lxd\Endpoints;

use Lxd\Endpoint;

class Certificates extends Endpoint
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
        
        var certificate;
        var certificates = [];
        for certificate in (array) response["metadata"] {
            let certificates[] = str_replace("/".this->config["version"]."/".this->config["endpoint"]."/", null, certificate);
        }
        return certificates;
    }
    
    public function add(certificate, string password = null, string name = null) -> array
    {
        var begin, end, pem_data, der, fingerprint, options;

        let begin = "CERTIFICATE-----";
        let end   = "-----END";
        let pem_data = substr(certificate, strpos(certificate, begin)+strlen(begin));
        let pem_data = substr(pem_data, 0, strpos(pem_data, end));
        let der = base64_decode(pem_data);
        let fingerprint = hash("sha256", der);

        let options = [];
        let options["type"] = "client";
        let options["certificate"] = base64_encode(der);
        if (password !== null) {
            let options["password"] = password;
        }
        if (name !== null) {
           let options["name"] = name;
        }

        return this->curl->post(this->endpoint, options);
    }
    
    public function info(fingerprint) -> array
    {
        return this->curl->get(this->endpoint."/".fingerprint);
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
