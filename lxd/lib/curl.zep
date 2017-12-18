namespace Lxd\Lib;

class Curl
{

    private config  = [];
    private options = [];

    /**
     *
     */
    public function __construct(array config = []) -> void
    {
        //
        let this->config = config;

        //
        let this->options = [
            CURLOPT_RETURNTRANSFER : true,
            CURLOPT_SSL_VERIFYPEER : false,
            CURLOPT_SSL_VERIFYHOST : false,
            CURLOPT_HTTPHEADER     : [
                "Content-Type: application/json"
            ]
        ];

        //
        if (this->config["certificate_path"] && this->config["ip"]) {
            let this->options[CURLOPT_SSLKEY]  = this->config["certificate_path"]."/".this->config["ip"]."/private.key";
            let this->options[CURLOPT_SSLCERT] = this->config["certificate_path"]."/".this->config["ip"]."/client.pem";
        }
    }

    /**
     *  GET
     */
    public function get(string url, array parameters = []) -> array
    {
        var query, curl, response;

        //
        let query = http_build_query(parameters);

        //
        let curl = curl_init(url.(!empty query ? "?".query : null));

        //
        curl_setopt_array(curl, this->options);

        //
        let response = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(response, true);
    }

    /**
     *  POST         
     */
    public function post(string url, array parameters = []) -> array
    {
        var curl, response;

        //
        let curl = curl_init(url);

        //
        let this->options[CURLOPT_POST] = true;
        let this->options[CURLOPT_POSTFIELDS] = json_encode(parameters);

        //
        curl_setopt_array(curl, this->options);

        //
        let response = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(response, true);
    }

    /**
     *  PUT
     */
    public function put(string url, array parameters = []) -> array
    {
        var curl, response;

        //
        let curl = curl_init(url);

        //
        let this->options[CURLOPT_CUSTOMREQUEST] = "PUT";
        let this->options[CURLOPT_POSTFIELDS] = json_encode(parameters);

        //
        curl_setopt_array(curl, this->options);

        //
        let response = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(response, true);
    }

    /**
     *  DELETE
     */
    public function delete(string url) -> array
    {
        var curl, response;

        //
        let curl = curl_init(url);

        //
        let this->options[CURLOPT_CUSTOMREQUEST] = "DELETE";

        //
        curl_setopt_array(curl, this->options);

        //
        let response = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(response, true);
    }

}