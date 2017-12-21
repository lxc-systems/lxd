
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"
#include "kernel/array.h"
#include "kernel/concat.h"
#include "kernel/file.h"


/**
 * Lxd\Lib\Certificate
 *
 * Provides SSL certificate facilities to the application
 *
 *<code>
 *</code>
 */
ZEPHIR_INIT_CLASS(Lxd_Lib_Certificate) {

	ZEPHIR_REGISTER_CLASS(Lxd\\Lib, Certificate, lxd, lib_certificate, lxd_lib_certificate_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lxd_lib_certificate_ce, SL("cert_path"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Lxd_Lib_Certificate, __construct) {

	zval *cert_path_param = NULL;
	zval cert_path;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cert_path);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &cert_path_param);

	if (!cert_path_param) {
		ZEPHIR_INIT_VAR(&cert_path);
		ZVAL_STRING(&cert_path, "tmp/certificates");
	} else {
	if (UNEXPECTED(Z_TYPE_P(cert_path_param) != IS_STRING && Z_TYPE_P(cert_path_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'cert_path' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(cert_path_param) == IS_STRING)) {
		zephir_get_strval(&cert_path, cert_path_param);
	} else {
		ZEPHIR_INIT_VAR(&cert_path);
		ZVAL_EMPTY_STRING(&cert_path);
	}
	}


	zephir_update_property_zval(this_ptr, SL("cert_path"), &cert_path);
	ZEPHIR_MM_RESTORE();

}

/**
 * Generate certificate
 */
PHP_METHOD(Lxd_Lib_Certificate, generate) {

	zval _2, _3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *ip_param = NULL, __$null, __$true, _0, _1, privkey, cert, _4, _5, _6, _7, _9, _15, _10$$4;
	zval ip, certString, privkeyString, p12String, pemString, pemHash, _8, cert_path, _11, _12, _13, _14;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ip);
	ZVAL_UNDEF(&certString);
	ZVAL_UNDEF(&privkeyString);
	ZVAL_UNDEF(&p12String);
	ZVAL_UNDEF(&pemString);
	ZVAL_UNDEF(&pemHash);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&cert_path);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZVAL_NULL(&__$null);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&privkey);
	ZVAL_UNDEF(&cert);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &ip_param);

	if (UNEXPECTED(Z_TYPE_P(ip_param) != IS_STRING && Z_TYPE_P(ip_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'ip' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(ip_param) == IS_STRING)) {
		zephir_get_strval(&ip, ip_param);
	} else {
		ZEPHIR_INIT_VAR(&ip);
		ZVAL_EMPTY_STRING(&ip);
	}


	ZVAL_LONG(&_0, 275);
	ZEPHIR_CALL_FUNCTION(&_1, "filter_var", NULL, 32, &ip, &_0);
	zephir_check_call_status();
	if (!(zephir_is_true(&_1))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(spl_ce_InvalidArgumentException, "Parameter must be a valid IP address.", "lxd/lib/certificate.zep", 43);
		return;
	}
	ZEPHIR_INIT_VAR(&_2);
	zephir_create_array(&_2, 3, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&_2, SL("digest_alg"), SL("rsa"));
	add_assoc_long_ex(&_2, SL("private_key_bits"), 2048);
	add_assoc_long_ex(&_2, SL("private_key_type"), 0);
	ZEPHIR_CALL_FUNCTION(&privkey, "openssl_pkey_new", NULL, 33, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 7, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&_3, SL("countryName"), SL("NA"));
	add_assoc_stringl_ex(&_3, SL("stateOrProvinceName"), SL("NA"));
	add_assoc_stringl_ex(&_3, SL("localityName"), SL("NA"));
	add_assoc_stringl_ex(&_3, SL("organizationName"), SL("NA"));
	add_assoc_stringl_ex(&_3, SL("organizationalUnitName"), SL("NA"));
	zephir_array_update_string(&_3, SL("commonName"), &ip, PH_COPY | PH_SEPARATE);
	add_assoc_stringl_ex(&_3, SL("emailAddress"), SL("NA"));
	ZEPHIR_MAKE_REF(&privkey);
	ZEPHIR_CALL_FUNCTION(&cert, "openssl_csr_new", NULL, 34, &_3, &privkey);
	ZEPHIR_UNREF(&privkey);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 1825);
	ZEPHIR_CALL_FUNCTION(&_4, "openssl_csr_sign", NULL, 35, &cert, &__$null, &privkey, &_0);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(&cert, &_4);
	ZEPHIR_MAKE_REF(&certString);
	ZEPHIR_CALL_FUNCTION(NULL, "openssl_x509_export", NULL, 36, &cert, &certString);
	ZEPHIR_UNREF(&certString);
	zephir_check_call_status();
	ZEPHIR_MAKE_REF(&privkeyString);
	ZEPHIR_CALL_FUNCTION(NULL, "openssl_pkey_export", NULL, 37, &privkey, &privkeyString);
	ZEPHIR_UNREF(&privkeyString);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_5);
	array_init(&_5);
	ZEPHIR_INIT_VAR(&_6);
	ZVAL_STRING(&_6, "");
	ZEPHIR_MAKE_REF(&p12String);
	ZEPHIR_CALL_FUNCTION(NULL, "openssl_pkcs12_export", NULL, 38, &certString, &p12String, &privkeyString, &_6, &_5);
	ZEPHIR_UNREF(&p12String);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&pemString);
	ZEPHIR_CONCAT_VV(&pemString, &certString, &privkeyString);
	ZEPHIR_CALL_FUNCTION(&_7, "sha1", NULL, 39, &pemString);
	zephir_check_call_status();
	zephir_get_strval(&_8, &_7);
	ZEPHIR_CPY_WRT(&pemHash, &_8);
	zephir_read_property(&_0, this_ptr, SL("cert_path"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_9);
	ZEPHIR_CONCAT_VSV(&_9, &_0, "/", &ip);
	zephir_get_strval(&cert_path, &_9);
	if (!((zephir_file_exists(&cert_path TSRMLS_CC) == SUCCESS))) {
		ZVAL_LONG(&_10$$4, 0755);
		ZEPHIR_CALL_FUNCTION(NULL, "mkdir", NULL, 40, &cert_path, &_10$$4, &__$true);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(&_11);
	ZEPHIR_CONCAT_VS(&_11, &cert_path, "/cert.crt");
	zephir_file_put_contents(NULL, &_11, &certString TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_12);
	ZEPHIR_CONCAT_VS(&_12, &cert_path, "/private.key");
	zephir_file_put_contents(NULL, &_12, &privkeyString TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_13);
	ZEPHIR_CONCAT_VS(&_13, &cert_path, "/client.pem");
	zephir_file_put_contents(NULL, &_13, &pemString TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_14);
	ZEPHIR_CONCAT_VS(&_14, &cert_path, "/cert.p12");
	zephir_file_put_contents(NULL, &_14, &p12String TSRMLS_CC);
	zephir_create_array(return_value, 4, 0 TSRMLS_CC);
	zephir_array_update_string(return_value, SL("ip"), &ip, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(return_value, SL("pem_hash"), &pemHash, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(return_value, SL("cert_path"), &cert_path, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_FUNCTION(&_15, "date_create", NULL, 41);
	zephir_check_call_status();
	zephir_array_update_string(return_value, SL("created"), &_15, PH_COPY | PH_SEPARATE);
	RETURN_MM();

}

