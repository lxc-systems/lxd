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

namespace Lxd;

class Endpoint
{
    protected config;
    protected curl;
    protected endpoint;
    
    /**
     *
     */
    public function __construct(array! config, <Lxd\Lib\Curl> curl, string! endpoint = "") -> void
    {
        let this->config   = config;
        let this->curl     = curl;
        let this->endpoint = endpoint;
    }
    
    /**
     *
     */
    public function __get(string! method)
    {
        string ns; let ns = this->endpoint."\\".ucfirst(method);

        if class_exists(ns) {
            let this->config["endpoint"] = this->endpoint;
            let this->config["method"] = method;
            return new {ns}(this->config, this->curl);
        }

        if method_exists(this, method) {
            return call_user_func(
                [this, method],
                [this->config, this->curl]
            );
        } else {
            throw new \Exception("Endpoint ".ns.", not implemented.");
        }
    }
    
    /**
     *
     */
    final protected function getVersion() -> string
    {
        return (string) this->config["version"];
    }  
    
    /**
     *
     */
    final protected function getUrl() -> string
    {
        return (string) this->config["url"];
    }  
    
    /**
     *
     */
    final protected function getBase(string! endpoint = null) -> string
    {
        return (string) this->getUrl()."/".this->getVersion().(!empty endpoint ? "/".endpoint : null);
    }   
    
    /**
     *
     */
    final protected function stripEndpoint(string! endpoint = null) -> string
    {
        return (string) str_replace("/".this->getVersion()."/".this->config["endpoint"]."/", null, endpoint);
    } 

}
