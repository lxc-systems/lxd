/*
 +------------------------------------------------------------------------+
 | PHP LXD Extension                                                      |
 +------------------------------------------------------------------------+
 | Copyright (c)2017-2017 LXC.systems (https://github.com/lxc-systems/lxd)|
 +------------------------------------------------------------------------+
 | This source file is subject to GNU General Public License v2.0 License |
 | that is bundled with this package in the file LICENSE.                 |
 |                                                                        |
 | If you did not receive a copy of the license and are unable to         |
 | obtain it through the world-wide-web, please send an email             |
 | to license@lxd.systems so we can send you a copy immediately.          |
 +------------------------------------------------------------------------+
 | Authors: Lawrence Cherone <lawrence@lxd.systems>                       |
 +------------------------------------------------------------------------+
 */

namespace Lxd\Lib;

final class Curl
{

    private config;
    private options;

    /**
     *
     */
    public function __construct(array! config = []) -> void
    {
        //
        let this->config = config;
    }

    final private function setOptions() -> void
    {
        //
        let this->options = [
            CURLOPT_FOLLOWLOCATION : true,
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
     *  Should handle non json response, like with /containers/files
     */
    public function get(string! url, array! parameters = [], array! headers = []) -> array|string
    {
        var query, curl, body, response;
        
        //
        this->setOptions();

        //
        let query = http_build_query(parameters);

        //
        let curl = curl_init(url.(!empty query ? "?".query : null));

        //
        if !empty headers {
            var header; for header in headers {
                let this->options[CURLOPT_HTTPHEADER][] = header;
            } 
        }

        //
        curl_setopt_array(curl, this->options);

        //
        let body = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        let response = json_decode(body, true);

        if (json_last_error() === JSON_ERROR_NONE) {
            return (array) response;
        }

        return (string) body;
    }

    /**
     *  POST
     *  Should handle non array data parameters, like with /containers/files
     */
    public function post(string! url, var parameters = null, array! headers = []) -> array
    {
        var curl, body;
                
        //
        this->setOptions();

        //
        if is_array(parameters) {
            let parameters = json_encode(parameters);
        }

        //
        let curl = curl_init(url);

        //
        let this->options[CURLOPT_POST] = true;
        let this->options[CURLOPT_POSTFIELDS] = (string) parameters;

        //
        if !empty headers {
            var header; for header in headers {
                let this->options[CURLOPT_HTTPHEADER][] = header;
            } 
        }

        //
        curl_setopt_array(curl, this->options);

        //
        let body = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(body, true);
    }

    /**
     *  PUT
     */
    public function put(string! url, array! parameters = [], array! headers = []) -> array
    {
        var curl, body;
                
        //
        this->setOptions();

        //
        let curl = curl_init(url);

        //
        let this->options[CURLOPT_CUSTOMREQUEST] = "PUT";
        let this->options[CURLOPT_POSTFIELDS] = json_encode(parameters);

        //
        if !empty headers {
            var header; for header in headers {
                let this->options[CURLOPT_HTTPHEADER][] = header;
            } 
        }

        //
        curl_setopt_array(curl, this->options);

        //
        let body = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(body, true);
    }
    
    /**
     *  PATCH
     */
    public function patch(string! url, array! parameters = [], array! headers = []) -> array
    {
        var curl, body;
                
        //
        this->setOptions();

        //
        let curl = curl_init(url);

        //
        let this->options[CURLOPT_CUSTOMREQUEST] = "PATCH";
        let this->options[CURLOPT_POSTFIELDS] = json_encode(parameters);

        //
        if !empty headers {
            var header; for header in headers {
                let this->options[CURLOPT_HTTPHEADER][] = header;
            } 
        }

        //
        curl_setopt_array(curl, this->options);

        //
        let body = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(body, true);
    }

    /**
     *  DELETE
     */
    public function delete(string! url, array! headers = []) -> array
    {
        var curl, body;
                
        //
        this->setOptions();

        //
        let curl = curl_init(url);

        //
        let this->options[CURLOPT_CUSTOMREQUEST] = "DELETE";

        //
        if !empty headers {
            var header; for header in headers {
                let this->options[CURLOPT_HTTPHEADER][] = header;
            } 
        }

        //
        curl_setopt_array(curl, this->options);

        //
        let body = (string) curl_exec(curl);

        //
        curl_close(curl);

        //
        return (array) json_decode(body, true);
    }

}