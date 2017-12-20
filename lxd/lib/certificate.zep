namespace Lxd\Lib;

final class Certificate
{
    private cert_path;

    public function __construct(string cert_path = "tmp/certificates") -> void
    {
        let this->cert_path = cert_path;
    }

    /**
     * Generate certificate
     */
    public function generate(string ip) -> array
    {
        if empty(ip) {
            throw new \Exception("Server IP");
        }

        // generate private key
        var privkey; let privkey = openssl_pkey_new([
            "digest_alg"       : "rsa",
            "private_key_bits" : 2048,
            "private_key_type" : OPENSSL_KEYTYPE_RSA
        ]);

        // generate certificate request
        var cert; let cert = openssl_csr_new([
            "countryName"            : "NA",
            "stateOrProvinceName"    : "NA",
            "localityName"           : "NA",
            "organizationName"       : "NA",
            "organizationalUnitName" : "NA",
            "commonName"             : ip,
            "emailAddress"           : "NA"
        ], privkey);

        // sign certificate request
        let cert = openssl_csr_sign(cert, null, privkey, 365*5);

        // export keys
        string certString;    openssl_x509_export(cert, certString);
        string privkeyString; openssl_pkey_export(privkey, privkeyString);
        string p12String;     openssl_pkcs12_export(certString, p12String, privkeyString, "", []);

        // concat into pem format
        string pemString; let pemString = certString.privkeyString;

        // hash for reference
        string pemHash; let pemHash = (string) hash("sha1", pemString);

        // check storage directory exists
        string cert_path; let cert_path = this->cert_path."/".ip;
        if !file_exists(cert_path) {
            mkdir(cert_path, 0755, true);
        }

        // save certificate files
        file_put_contents(cert_path."/cert.crt", certString);
        file_put_contents(cert_path."/private.key", privkeyString);
        file_put_contents(cert_path."/client.pem", pemString);
        file_put_contents(cert_path."/cert.p12", p12String);

        // return certificate array
        return [
            "ip"        : ip,
            "pem_hash"  : pemHash,
            "cert_path" : cert_path,
            "created"   : date_create()
        ];
    }
}