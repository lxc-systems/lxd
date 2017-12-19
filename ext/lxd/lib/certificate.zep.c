
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
#include "kernel/operators.h"
#include "kernel/exception.h"
#include "kernel/array.h"
#include "kernel/fcall.h"
#include "kernel/concat.h"
#include "kernel/file.h"


ZEPHIR_INIT_CLASS(Lxd_Lib_Certificate) {

	ZEPHIR_REGISTER_CLASS(Lxd\\Lib, Certificate, lxd, lib_certificate, lxd_lib_certificate_method_entry, 0);

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
		zephir_get_strval(&cert_path, cert_path_param);
	}


	zephir_update_property_zval(this_ptr, SL("cert_path"), &cert_path);
	ZEPHIR_MM_RESTORE();

}

/**
 * Generate certificate
 */
PHP_METHOD(Lxd_Lib_Certificate, generate) {

	zval _0, _1;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *ip_param = NULL, __$null, __$true, privkey, cert, _2, _3, _4, _5, _7, _13, _8$$4;
	zval ip, certString, privkeyString, p12String, pemString, pemHash, _6, cert_path, _9, _10, _11, _12;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ip);
	ZVAL_UNDEF(&certString);
	ZVAL_UNDEF(&privkeyString);
	ZVAL_UNDEF(&p12String);
	ZVAL_UNDEF(&pemString);
	ZVAL_UNDEF(&pemHash);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&cert_path);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_NULL(&__$null);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&privkey);
	ZVAL_UNDEF(&cert);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &ip_param);

	zephir_get_strval(&ip, ip_param);


	if (ZEPHIR_IS_EMPTY(&ip)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Server IP", "lxd/lib/certificate.zep", 18);
		return;
	}
	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 3, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&_0, SL("digest_alg"), SL("rsa"));
	add_assoc_long_ex(&_0, SL("private_key_bits"), 2048);
	add_assoc_long_ex(&_0, SL("private_key_type"), 0);
	ZEPHIR_CALL_FUNCTION(&privkey, "openssl_pkey_new", NULL, 18, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_1);
	zephir_create_array(&_1, 7, 0 TSRMLS_CC);
	add_assoc_stringl_ex(&_1, SL("countryName"), SL("NA"));
	add_assoc_stringl_ex(&_1, SL("stateOrProvinceName"), SL("NA"));
	add_assoc_stringl_ex(&_1, SL("localityName"), SL("NA"));
	add_assoc_stringl_ex(&_1, SL("organizationName"), SL("NA"));
	add_assoc_stringl_ex(&_1, SL("organizationalUnitName"), SL("NA"));
	zephir_array_update_string(&_1, SL("commonName"), &ip, PH_COPY | PH_SEPARATE);
	add_assoc_stringl_ex(&_1, SL("emailAddress"), SL("NA"));
	ZEPHIR_MAKE_REF(&privkey);
	ZEPHIR_CALL_FUNCTION(&cert, "openssl_csr_new", NULL, 19, &_1, &privkey);
	ZEPHIR_UNREF(&privkey);
	zephir_check_call_status();
	ZVAL_LONG(&_2, 1825);
	ZEPHIR_CALL_FUNCTION(&_3, "openssl_csr_sign", NULL, 20, &cert, &__$null, &privkey, &_2);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(&cert, &_3);
	ZEPHIR_MAKE_REF(&certString);
	ZEPHIR_CALL_FUNCTION(NULL, "openssl_x509_export", NULL, 21, &cert, &certString);
	ZEPHIR_UNREF(&certString);
	zephir_check_call_status();
	ZEPHIR_MAKE_REF(&privkeyString);
	ZEPHIR_CALL_FUNCTION(NULL, "openssl_pkey_export", NULL, 22, &privkey, &privkeyString);
	ZEPHIR_UNREF(&privkeyString);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_4);
	array_init(&_4);
	ZEPHIR_INIT_VAR(&_5);
	ZVAL_STRING(&_5, "");
	ZEPHIR_MAKE_REF(&p12String);
	ZEPHIR_CALL_FUNCTION(NULL, "openssl_pkcs12_export", NULL, 23, &certString, &p12String, &privkeyString, &_5, &_4);
	ZEPHIR_UNREF(&p12String);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&pemString);
	ZEPHIR_CONCAT_VV(&pemString, &certString, &privkeyString);
	ZEPHIR_INIT_NVAR(&_5);
	ZVAL_STRING(&_5, "sha1");
	ZEPHIR_CALL_FUNCTION(&_3, "hash", NULL, 24, &_5, &pemString);
	zephir_check_call_status();
	zephir_get_strval(&_6, &_3);
	ZEPHIR_CPY_WRT(&pemHash, &_6);
	zephir_read_property(&_2, this_ptr, SL("cert_path"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_7);
	ZEPHIR_CONCAT_VSV(&_7, &_2, "/", &ip);
	zephir_get_strval(&cert_path, &_7);
	if (!((zephir_file_exists(&cert_path TSRMLS_CC) == SUCCESS))) {
		ZVAL_LONG(&_8$$4, 0755);
		ZEPHIR_CALL_FUNCTION(NULL, "mkdir", NULL, 25, &cert_path, &_8$$4, &__$true);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(&_9);
	ZEPHIR_CONCAT_VS(&_9, &cert_path, "/cert.crt");
	zephir_file_put_contents(NULL, &_9, &certString TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_10);
	ZEPHIR_CONCAT_VS(&_10, &cert_path, "/private.key");
	zephir_file_put_contents(NULL, &_10, &privkeyString TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_11);
	ZEPHIR_CONCAT_VS(&_11, &cert_path, "/client.pem");
	zephir_file_put_contents(NULL, &_11, &pemString TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_12);
	ZEPHIR_CONCAT_VS(&_12, &cert_path, "/cert.p12");
	zephir_file_put_contents(NULL, &_12, &p12String TSRMLS_CC);
	zephir_create_array(return_value, 4, 0 TSRMLS_CC);
	zephir_array_update_string(return_value, SL("ip"), &ip, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(return_value, SL("pem_hash"), &pemHash, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(return_value, SL("cert_path"), &cert_path, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_FUNCTION(&_13, "date_create", NULL, 26);
	zephir_check_call_status();
	zephir_array_update_string(return_value, SL("created"), &_13, PH_COPY | PH_SEPARATE);
	RETURN_MM();

}

