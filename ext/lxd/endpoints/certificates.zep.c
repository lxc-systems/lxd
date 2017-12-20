
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
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/array.h"
#include "kernel/object.h"
#include "kernel/file.h"
#include "kernel/operators.h"
#include "kernel/string.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Certificates) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Certificates, lxd, endpoints_certificates, lxd_endpoint_ce, lxd_endpoints_certificates_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lxd_endpoints_certificates_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zephir_declare_class_constant_string(lxd_endpoints_certificates_ce, SL("ENDPOINT"), "certificates");

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Certificates, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *config_param = NULL, *curl, curl_sub, _1;
	zval config;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&curl_sub);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &config_param, &curl);

	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);


	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Certificates");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_certificates_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Certificates, all) {

	zend_string *_6;
	zend_ulong _5;
	zval key, value, response, _0, _1, _2, _3, *_4, _7$$3;
	zephir_fcall_cache_entry *_8 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_7$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&response);
	zephir_create_array(&response, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	array_init(&_0);
	zephir_array_update_string(&response, SL("metadata"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "certificates");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 10, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_1, "get", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_string(&_3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/certificates.zep", 47 TSRMLS_CC);
	zephir_is_iterable(&_3, 0, "lxd/endpoints/certificates.zep", 51);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_3), _5, _6, _4)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_6 != NULL) { 
			ZVAL_STR_COPY(&key, _6);
		} else {
			ZVAL_LONG(&key, _5);
		}
		ZEPHIR_INIT_NVAR(&value);
		ZVAL_COPY(&value, _4);
		ZEPHIR_CALL_METHOD(&_7$$3, this_ptr, "stripendpoint", &_8, 11, &value);
		zephir_check_call_status();
		zephir_array_update_multi(&response, &_7$$3 TSRMLS_CC, SL("sz"), 3, SL("metadata"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&value);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Certificates, add) {

	zval _5;
	zend_bool _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *certificate_param = NULL, *password_param = NULL, *name_param = NULL, __$null, raw, pem, options, _1, _2, _3, _4, _6, _7, _8, _9;
	zval certificate, password, name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&certificate);
	ZVAL_UNDEF(&password);
	ZVAL_UNDEF(&name);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&raw);
	ZVAL_UNDEF(&pem);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &certificate_param, &password_param, &name_param);

	if (UNEXPECTED(Z_TYPE_P(certificate_param) != IS_STRING && Z_TYPE_P(certificate_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'certificate' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(certificate_param) == IS_STRING)) {
		zephir_get_strval(&certificate, certificate_param);
	} else {
		ZEPHIR_INIT_VAR(&certificate);
		ZVAL_EMPTY_STRING(&certificate);
	}
	if (!password_param) {
		ZEPHIR_INIT_VAR(&password);
		ZVAL_STRING(&password, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(password_param) != IS_STRING && Z_TYPE_P(password_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'password' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(password_param) == IS_STRING)) {
		zephir_get_strval(&password, password_param);
	} else {
		ZEPHIR_INIT_VAR(&password);
		ZVAL_EMPTY_STRING(&password);
	}
	}
	if (!name_param) {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_STRING(&name, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(&name, name_param);
	} else {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_EMPTY_STRING(&name);
	}
	}


	ZEPHIR_INIT_VAR(&options);
	array_init(&options);
	_0 = !((zephir_file_exists(&certificate TSRMLS_CC) == SUCCESS));
	if (!(_0)) {
		ZEPHIR_CALL_FUNCTION(&_1, "is_file", NULL, 12, &certificate);
		zephir_check_call_status();
		_0 = !zephir_is_true(&_1);
	}
	if (_0) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Certificate not found.", "lxd/endpoints/certificates.zep", 62);
		return;
	}
	ZEPHIR_INIT_VAR(&raw);
	zephir_file_get_contents(&raw, &certificate TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "BEGIN CERTIFICATE");
	ZEPHIR_INIT_VAR(&_3);
	zephir_fast_strpos(&_3, &raw, &_2, 0 );
	if (ZEPHIR_IS_FALSE_IDENTICAL(&_3)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Certificate not in PEM format.", "lxd/endpoints/certificates.zep", 70);
		return;
	}
	ZEPHIR_INIT_VAR(&_4);
	ZEPHIR_INIT_VAR(&_5);
	zephir_create_array(&_5, 2, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_6);
	ZVAL_STRING(&_6, "-----BEGIN CERTIFICATE-----");
	zephir_array_fast_append(&_5, &_6);
	ZEPHIR_INIT_NVAR(&_6);
	ZVAL_STRING(&_6, "-----END CERTIFICATE-----");
	zephir_array_fast_append(&_5, &_6);
	zephir_fast_str_replace(&_4, &_5, &__$null, &raw TSRMLS_CC);
	ZEPHIR_INIT_VAR(&pem);
	zephir_fast_trim(&pem, &_4, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_6);
	ZVAL_STRING(&_6, "client");
	zephir_array_update_string(&options, SL("type"), &_6, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&options, SL("certificate"), &pem, PH_COPY | PH_SEPARATE);
	if (!ZEPHIR_IS_STRING_IDENTICAL(&name, "")) {
		zephir_array_update_string(&options, SL("name"), &name, PH_COPY | PH_SEPARATE);
	}
	if (!ZEPHIR_IS_STRING_IDENTICAL(&password, "")) {
		zephir_array_update_string(&options, SL("password"), &password, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_7, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_9);
	ZVAL_STRING(&_9, "certificates");
	ZEPHIR_CALL_METHOD(&_8, this_ptr, "getbase", NULL, 10, &_9);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(&_7, "post", NULL, 0, &_8, &options);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Certificates, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint_param = NULL, _0, _1, _2, _3;
	zval fingerprint;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint_param);

	if (UNEXPECTED(Z_TYPE_P(fingerprint_param) != IS_STRING && Z_TYPE_P(fingerprint_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'fingerprint' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(fingerprint_param) == IS_STRING)) {
		zephir_get_strval(&fingerprint, fingerprint_param);
	} else {
		ZEPHIR_INIT_VAR(&fingerprint);
		ZVAL_EMPTY_STRING(&fingerprint);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "certificates");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 10, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Certificates, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint_param = NULL;
	zval fingerprint;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint_param);

	if (UNEXPECTED(Z_TYPE_P(fingerprint_param) != IS_STRING && Z_TYPE_P(fingerprint_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'fingerprint' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(fingerprint_param) == IS_STRING)) {
		zephir_get_strval(&fingerprint, fingerprint_param);
	} else {
		ZEPHIR_INIT_VAR(&fingerprint);
		ZVAL_EMPTY_STRING(&fingerprint);
	}


	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 13, &fingerprint);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Certificates, remove) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint_param = NULL, _0, _1, _2, _3;
	zval fingerprint;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint_param);

	if (UNEXPECTED(Z_TYPE_P(fingerprint_param) != IS_STRING && Z_TYPE_P(fingerprint_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'fingerprint' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(fingerprint_param) == IS_STRING)) {
		zephir_get_strval(&fingerprint, fingerprint_param);
	} else {
		ZEPHIR_INIT_VAR(&fingerprint);
		ZVAL_EMPTY_STRING(&fingerprint);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "certificates");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 10, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

