namespace Lxd\Lib;

class Curl
{
    private config;

    public function __construct(config) -> void
    {
        let this->config = config;
    }

    /**
     *  GET request
     *  @param  string      Resource to fetch
     *  @param  array       Associative array with additional parameters
     *  @return array       Associative array with the result
     */
    public function get(url, array parameters = []) -> array
    {
        var query, curl, curl_options, response, httpCode;

        // the query string
        let query = http_build_query(parameters);

        // construct curl resource
        let curl =  curl_init(url.(!empty(query) ? "?".query : null));

        // additional curl_options
        let curl_options = [
            CURLOPT_RETURNTRANSFER : true,
            CURLOPT_SSL_VERIFYPEER : false,
            CURLOPT_SSL_VERIFYHOST : false
        ];

        if (this->config["certificate_path"] && this->config["ip"]) {
            let curl_options[CURLOPT_SSLKEY]  = this->config["certificate_path"]."/".this->config["ip"]."/private.key";
            let curl_options[CURLOPT_SSLCERT] = this->config["certificate_path"]."/".this->config["ip"]."/client.pem";
        }

        curl_setopt_array(curl, curl_options);

        // do the call
        let response   = curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        // clean up curl resource
        curl_close(curl);

        // decode response
        let response = json_decode(response, true);

        // done
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
        var curl, curl_options, response, httpCode;

        // construct curl resource
        let curl =  curl_init(url);

        // additional curl_options
        let curl_options = [
            CURLOPT_POST : true, 
            CURLOPT_RETURNTRANSFER : true,
            CURLOPT_SSL_VERIFYPEER : false,
            CURLOPT_SSL_VERIFYHOST : false,
            CURLOPT_HTTPHEADER : [
                "Content-Type: application/json"
            ], 
            CURLOPT_POSTFIELDS : json_encode(parameters)
        ];

        if (this->config["certificate_path"] && this->config["ip"]) {
            let curl_options[CURLOPT_SSLKEY]  = this->config["certificate_path"]."/".this->config["ip"]."/private.key";
            let curl_options[CURLOPT_SSLCERT] = this->config["certificate_path"]."/".this->config["ip"]."/client.pem";
        }

        curl_setopt_array(curl, curl_options);

        // do the call
        let response   = curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        // clean up curl resource
        curl_close(curl);

        // bad request
        if !(httpCode) || httpCode == 400 {
            //return false;
        }

        // return the id of the created item
        return json_decode(response, true);
    }

    /**
     *  Do a PUT request
     *  @param  string      Resource name
     *  @param  array       Associative array with data to post
     *  @param  array       Associative array with additional parameters
     *  @return bool
     */
    public function put(url, array data = [], array parameters = []) -> array
    {
        var curl, curl_options, response, httpCode;

        // construct curl resource
        let curl =  curl_init(url);

        // additional curl_options
        let curl_options = [
            CURLOPT_CUSTOMREQUEST : "PUT", 
            CURLOPT_SSL_VERIFYPEER : false,
            CURLOPT_SSL_VERIFYHOST : false,
            CURLOPT_HTTPHEADER : [
                "Content-Type: application/json"
            ], 
            CURLOPT_POSTFIELDS : json_encode(parameters)
        ];

        if (this->config["certificate_path"] && this->config["ip"]) {
            let curl_options[CURLOPT_SSLKEY]  = this->config["certificate_path"]."/".this->config["ip"]."/private.key";
            let curl_options[CURLOPT_SSLCERT] = this->config["certificate_path"]."/".this->config["ip"]."/client.pem";
        }

        curl_setopt_array(curl, curl_options);

        // do the call
        let response =  curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        // clean up curl resource
        curl_close(curl);

        // bad request
        if !(httpCode) || httpCode == 400 {
            //return false;
        }

        // return the id of the created item
        return json_decode(response, true);
    }

    /**
     *  Do a DELETE request
     *  @param  string      Resource name
     *  @return bool
     */
    public function delete(url) -> bool
    {
        var curl, curl_options, response, httpCode;

        // construct curl resource
        let curl =  curl_init(url);

        // additional curl_options
        let curl_options = [
            CURLOPT_CUSTOMREQUEST : "DELETE",
            CURLOPT_SSL_VERIFYPEER : false,
            CURLOPT_SSL_VERIFYHOST : false,
            CURLOPT_HTTPHEADER : [
                "Content-Type: application/json"
            ]
        ];

        if (this->config["certificate_path"] && this->config["ip"]) {
            let curl_options[CURLOPT_SSLKEY]  = this->config["certificate_path"]."/".this->config["ip"]."/private.key";
            let curl_options[CURLOPT_SSLCERT] = this->config["certificate_path"]."/".this->config["ip"]."/client.pem";
        }

        curl_setopt_array(curl, curl_options);

        // do the call
        let response = curl_exec(curl);
        let httpCode = curl_getinfo(curl, CURLINFO_HTTP_CODE);

        // clean up curl resource
        curl_close(curl);

        // bad request
        if !(httpCode) || httpCode == 400 {
            //return false;
        }

        // return the id of the created item
        return json_decode(response, true);
    }

}