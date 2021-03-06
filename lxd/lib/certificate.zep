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

/**
 * Lxd\Lib\Certificate
 *
 * Provides SSL certificate facilities to the application
 *
 *<code>
 *</code>
 */
final class Certificate
{
    private cert_path;

    public function __construct(string! cert_path = "tmp/certificates") -> void
    {
        let this->cert_path = cert_path;
    }

    /**
     * Generate certificate
     */
    public function generate(string! ip) -> array
    {
        if !filter_var(ip, FILTER_VALIDATE_IP) {
            throw new \InvalidArgumentException("Parameter must be a valid IP address.");
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
        string pemHash; let pemHash = (string) pemString->sha1();

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