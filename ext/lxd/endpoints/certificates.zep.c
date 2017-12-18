
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
#include "kernel/concat.h"
#include "kernel/object.h"
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Certificates) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Certificates, lxd, endpoints_certificates, lxd_endpoint_ce, lxd_endpoints_certificates_method_entry, 0);

	zend_declare_property_null(lxd_endpoints_certificates_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoints_certificates_ce, SL("endpoint"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Lxd_Endpoints_Certificates, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *config, config_sub, *curl, curl_sub, _1, _2, _3, _4, _5, _6, _7, _8;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config_sub);
	ZVAL_UNDEF(&curl_sub);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &config, &curl);



	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Certificates");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_certificates_ce, getThis(), "__construct", &_0, 0, config, curl, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("url"), PH_NOISY | PH_READONLY, "lxd/endpoints/certificates.zep", 14 TSRMLS_CC);
	zephir_read_property(&_4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_5, &_4, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/certificates.zep", 14 TSRMLS_CC);
	zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_7, &_6, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/certificates.zep", 14 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_8);
	ZEPHIR_CONCAT_VSVSV(&_8, &_3, "/", &_5, "/", &_7);
	zephir_update_property_zval(this_ptr, SL("endpoint"), &_8);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Lxd_Endpoints_Certificates, all) {

	zval _3;
	zval __$null, response, _0, _1, certificate, certificates, _2, *_4, _5$$3, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&certificate);
	ZVAL_UNDEF(&certificates);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&response, &_0, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&certificates);
	array_init(&certificates);
	ZEPHIR_OBS_VAR(&_2);
	zephir_array_fetch_string(&_2, &response, SL("metadata"), PH_NOISY, "lxd/endpoints/certificates.zep", 23 TSRMLS_CC);
	zephir_get_arrval(&_3, &_2);
	zephir_is_iterable(&_3, 0, "lxd/endpoints/certificates.zep", 26);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_3), _4)
	{
		ZEPHIR_INIT_NVAR(&certificate);
		ZVAL_COPY(&certificate, _4);
		ZEPHIR_INIT_NVAR(&_5$$3);
		zephir_read_property(&_6$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_7$$3, &_6$$3, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/certificates.zep", 24 TSRMLS_CC);
		zephir_read_property(&_8$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_9$$3, &_8$$3, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/certificates.zep", 24 TSRMLS_CC);
		ZEPHIR_INIT_LNVAR(_10$$3);
		ZEPHIR_CONCAT_SVSVS(&_10$$3, "/", &_7$$3, "/", &_9$$3, "/");
		zephir_fast_str_replace(&_5$$3, &_10$$3, &__$null, &certificate TSRMLS_CC);
		zephir_array_append(&certificates, &_5$$3, PH_SEPARATE, "lxd/endpoints/certificates.zep", 24);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&certificate);
	RETURN_CCTOR(&certificates);

}

PHP_METHOD(Lxd_Endpoints_Certificates, add) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval password, name;
	zval *certificate, certificate_sub, *password_param = NULL, *name_param = NULL, begin, end, pem_data, der, fingerprint, options, _0, _1, _2, _3, _4, _5, _6, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&certificate_sub);
	ZVAL_UNDEF(&begin);
	ZVAL_UNDEF(&end);
	ZVAL_UNDEF(&pem_data);
	ZVAL_UNDEF(&der);
	ZVAL_UNDEF(&fingerprint);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&password);
	ZVAL_UNDEF(&name);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &certificate, &password_param, &name_param);

	if (!password_param) {
		ZEPHIR_INIT_VAR(&password);
		ZVAL_STRING(&password, "");
	} else {
		zephir_get_strval(&password, password_param);
	}
	if (!name_param) {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_STRING(&name, "");
	} else {
		zephir_get_strval(&name, name_param);
	}


	ZEPHIR_INIT_VAR(&begin);
	ZVAL_STRING(&begin, "CERTIFICATE-----");
	ZEPHIR_INIT_VAR(&end);
	ZVAL_STRING(&end, "-----END");
	ZEPHIR_INIT_VAR(&_0);
	zephir_fast_strpos(&_0, certificate, &begin, 0 );
	ZVAL_LONG(&_1, (zephir_get_numberval(&_0) + zephir_fast_strlen_ev(&begin)));
	ZEPHIR_INIT_VAR(&pem_data);
	zephir_substr(&pem_data, certificate, zephir_get_intval(&_1), 0, ZEPHIR_SUBSTR_NO_LENGTH);
	ZEPHIR_INIT_VAR(&_2);
	zephir_fast_strpos(&_2, &pem_data, &end, 0 );
	ZVAL_LONG(&_3, 0);
	ZEPHIR_INIT_VAR(&_4);
	zephir_substr(&_4, &pem_data, 0 , zephir_get_intval(&_2), 0);
	ZEPHIR_CPY_WRT(&pem_data, &_4);
	ZEPHIR_CALL_FUNCTION(&der, "base64_decode", NULL, 7, &pem_data);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_4);
	ZVAL_STRING(&_4, "sha256");
	ZEPHIR_CALL_FUNCTION(&fingerprint, "hash", NULL, 8, &_4, &der);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&options);
	array_init(&options);
	ZEPHIR_INIT_NVAR(&_4);
	ZVAL_STRING(&_4, "client");
	zephir_array_update_string(&options, SL("type"), &_4, PH_COPY | PH_SEPARATE);
	ZEPHIR_CALL_FUNCTION(&_5, "base64_encode", NULL, 9, &der);
	zephir_check_call_status();
	zephir_array_update_string(&options, SL("certificate"), &_5, PH_COPY | PH_SEPARATE);
	if (!ZEPHIR_IS_STRING_IDENTICAL(&password, "")) {
		zephir_array_update_string(&options, SL("password"), &password, PH_COPY | PH_SEPARATE);
	}
	if (!ZEPHIR_IS_STRING_IDENTICAL(&name, "")) {
		zephir_array_update_string(&options, SL("name"), &name, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_6, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_7, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_METHOD(&_6, "post", NULL, 0, &_7, &options);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Certificates, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint, fingerprint_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Certificates, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint, fingerprint_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint_sub);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint);



	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 0, fingerprint);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Certificates, remove) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint, fingerprint_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

