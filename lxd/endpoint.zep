namespace Lxd;

class Endpoint
{
    protected config;
    protected curl;
    protected endpoint;

    public function __construct(array config, curl, string endpoint = "") -> void
    {
        let this->config   = config;
        let this->curl     = curl;
        let this->endpoint = endpoint;
    }

    public function __get(string method)
    {
        string ns; let ns = this->endpoint."\\".method;

        if class_exists(ns) {
            let this->config["endpoint"] = this->endpoint;
            let this->config["method"] = method;
            return new {ns}(this->config);
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

}
