namespace Lxd;

use Lxd\Lib\Curl;
use Lxd\Lib\Certificate;

final class Client
{

    protected config;
    protected curl;
    protected certificate;

    /**
     *
     */
    public function __construct(array! config = []) -> void
    {
        let this->config = array_merge([
            "url"      : null,
            "ip"       : null,
            "port"     : null,
            "secret"   : null,
            "version"  : "1.0",
            "endpoint" : null
        ], config);

        // check and set client certificate path
        if !isset this->config["certificate_path"] {
            let this->config["certificate_path"] = ".certificates";
        }

        // check and set client timeout
        if !isset this->config["timeout"] {
            let this->config["timeout"] = 10;
        } else {
            if !is_numeric(this->config["timeout"]) {
                let this->config["timeout"] = 10;
            }
        }
    }

    /**
     *
     */
    public function __get(string! endpoint)
    {
        string ns = __NAMESPACE__."\\Endpoints\\".ucfirst(endpoint);

        let this->config["endpoint"] = endpoint;

        if class_exists(ns) {
            return new {ns}(this->config, this->curl);
        } else {
            throw new \Exception(
                "Endpoint ".ns.", not implemented."
            );
        }
    }
    
    /**
     *
     */
    public function info() -> array
    {
        if !<Lxd\Lib\Curl> (this->curl) {
            let this->curl = new Curl(this->config);
        }

        return this->curl->get(this->config["url"]."/".this->config["version"]);
    }

    /**
     *
     */
    public function connect(string! url = null, string! secret = null)
    {
        var ip, port, ping;

        let ip   = parse_url(url, PHP_URL_HOST);
        let port = parse_url(url, PHP_URL_PORT);
        if empty(port) {
            let port = 8443;
        }

        let this->config["url"]    = url;
        let this->config["ip"]     = ip;
        let this->config["port"]   = port;
        let this->config["secret"] = secret;

        let ping = this->connectable(ip, port, this->config["timeout"]);

        if ping === -1 {
            throw new \Exception("Could not connect.");
        }

        //
        if !file_exists(this->config["certificate_path"]."/".ip."/client.pem") {
            //
            let this->certificate = new Certificate(this->config["certificate_path"]);
            //
            this->certificate->generate(ip);
        }

        //
        if !<Lxd\Lib\Curl> (this->curl) {
            let this->curl = new Curl(this->config);
        }

        return this;
    }

    /**
     * Check connection to server
     *
     * @param string ip
     * @param int port
     * @param int timeout
     *
     * @return int - response time -1 for error
     */
    public function connectable(string! ip, int! port = 8443, int! timeout = 10)
    {
        ulong start, stop; var time, sock; 

        if ip === null {
            return -1;
        }

        let start = (float) microtime(true);
        let sock  = fsockopen(ip, port, null, null, timeout);
        let stop  = (float) microtime(true);
        let time = 0;

        if (!sock) {
            let time = -1;
        } else {
            fclose(sock);
            let time = (float) round(((stop - start) * 1000), 2);
        }

        return (float) time;
    }

}
