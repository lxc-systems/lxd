namespace Lxd\Lib;

class Curl
{
    private config;
    private curl_options;

    /**
     *
     */
    public function __construct(config) -> void
    {
        let this->config = config;

        let this->curl_options = [
            CURLOPT_RETURNTRANSFER : true,
            CURLOPT_SSL_VERIFYPEER : false,
            CURLOPT_SSL_VERIFYHOST : false,
            CURLOPT_HTTPHEADER     : [
                "Content-Type: application/json"
            ]
        ];

        //
        if (this->config["certificate_path"] && this->config["ip"]) {
            let this->curl_options[CURLOPT_SSLKEY]  = this->config["certificate_path"]."/".this->config["ip"]."/private.key";
            let this->curl_options[CURLOPT_SSLCERT] = this->config["certificate_path"]."/".this->config["ip"]."/client.pem";
        }
    }

    /**
     *  GET request
     *  @param  string      Resource to fetch
     *  @param  array       Associative array with additional parameters
     *  @return array       Associative array with the result
     */
    public function get(url, array parameters = []) -> array
    {
        var query, curl, response, httpCode;

        //
        let query = http_build_query(parameters);

        //
        let curl =  curl_init(url.(!empty(query) ? "?".query : null));

        //
        curl_setopt_array(curl, this->curl_options);

        //
        let response = curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        //
        curl_close(curl);

        //
        let response = json_decode(response, true);

        return (array) response;
    }

    /**
     *  Do a POST request
     *  @param  string      Resource name
     *  @param  array       Associative array with data to post
     *  @return mixed       False on failure or the id of the created item           
     */
    public function post(url, array parameters = []) -> array
    {
        var curl, response, httpCode;

        //
        let curl =  curl_init(url);

        //
        let this->curl_options[CURLOPT_POST] = true;
        let this->curl_options[CURLOPT_POSTFIELDS] = json_encode(parameters);

        //
        curl_setopt_array(curl, this->curl_options);

        //
        let response = curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        //
        curl_close(curl);

        //
        if !(httpCode) || httpCode == 400 {
            //return false;
        }

        //
        return json_decode(response, true);
    }

    /**
     *  Do a PUT request
     *  @param  string      Resource name
     *  @param  array       Associative array with data to post
     *  @param  array       Associative array with additional parameters
     *  @return bool
     */
    public function put(url, array parameters = []) -> array
    {
        var curl, response, httpCode;

        //
        let curl = curl_init(url);

        //
        let this->curl_options[CURLOPT_CUSTOMREQUEST] = "PUT";
        let this->curl_options[CURLOPT_POSTFIELDS] = json_encode(parameters);

        //
        curl_setopt_array(curl, this->curl_options);

        //
        let response = curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        //
        curl_close(curl);

        //
        if !(httpCode) || httpCode == 400 {
            //return false;
        }

        //
        return json_decode(response, true);
    }

    /**
     *  Do a DELETE request
     *  @param  string      Resource name
     *  @return bool
     */
    public function delete(url) -> bool
    {
        var curl, response, httpCode;

        //
        let curl =  curl_init(url);

        //
        let this->curl_options[CURLOPT_CUSTOMREQUEST] = "DELETE";

        //
        curl_setopt_array(curl, this->curl_options);

        //
        let response = curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        //
        curl_close(curl);

        //
        if !(httpCode) || httpCode == 400 {
            //return false;
        }

        //
        return json_decode(response, true);
    }

}