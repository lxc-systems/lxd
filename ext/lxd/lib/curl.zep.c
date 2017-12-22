
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
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/concat.h"
#include "kernel/fcall.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Lxd_Lib_Curl) {

	ZEPHIR_REGISTER_CLASS(Lxd\\Lib, Curl, lxd, lib_curl, lxd_lib_curl_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lxd_lib_curl_ce, SL("config"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(lxd_lib_curl_ce, SL("options"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Lib_Curl, __construct) {

	zval *config_param = NULL;
	zval config;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &config_param);

	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}


	zephir_update_property_zval(this_ptr, SL("config"), &config);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Lxd_Lib_Curl, setOptions) {

	zend_bool _5;
	zval _0, _1;
	zval __$true, __$false, _2, _3, _4, _6, _7, _8$$3, _9$$3, _10$$3, _11$$3, _12$$3, _13$$3, _14$$3, _15$$3, _16$$3, _17$$3, _18$$3;
	zval *this_ptr = getThis();

	ZVAL_BOOL(&__$true, 1);
	ZVAL_BOOL(&__$false, 0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_12$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_15$$3);
	ZVAL_UNDEF(&_16$$3);
	ZVAL_UNDEF(&_17$$3);
	ZVAL_UNDEF(&_18$$3);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 4, 0 TSRMLS_CC);
	zephir_array_update_long(&_0, 19913, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&_0, 64, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&_0, 81, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	ZEPHIR_INIT_VAR(&_1);
	zephir_create_array(&_1, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "Content-Type: application/json");
	zephir_array_fast_append(&_1, &_2);
	zephir_array_update_long(&_0, 10023, &_1, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_update_property_zval(this_ptr, SL("options"), &_0);
	zephir_read_property(&_3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_4, &_3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 48 TSRMLS_CC);
	_5 = zephir_is_true(&_4);
	if (_5) {
		zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_7, &_6, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 48 TSRMLS_CC);
		_5 = zephir_is_true(&_7);
	}
	if (_5) {
		zephir_read_property(&_8$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_9$$3, &_8$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 49 TSRMLS_CC);
		zephir_read_property(&_10$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_11$$3, &_10$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 49 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_12$$3);
		ZEPHIR_CONCAT_VSVS(&_12$$3, &_9$$3, "/", &_11$$3, "/private.key");
		ZEPHIR_INIT_VAR(&_13$$3);
		ZVAL_LONG(&_13$$3, 10087);
		zephir_update_property_array(this_ptr, SL("options"), &_13$$3, &_12$$3 TSRMLS_CC);
		zephir_read_property(&_14$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_15$$3, &_14$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 50 TSRMLS_CC);
		zephir_read_property(&_16$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_17$$3, &_16$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 50 TSRMLS_CC);
		ZEPHIR_INIT_LNVAR(_12$$3);
		ZEPHIR_CONCAT_VSVS(&_12$$3, &_15$$3, "/", &_17$$3, "/client.pem");
		ZEPHIR_INIT_VAR(&_18$$3);
		ZVAL_LONG(&_18$$3, 10025);
		zephir_update_property_array(this_ptr, SL("options"), &_18$$3, &_12$$3 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

/**
 *  GET
 *  Should handle non json response, like with /containers/files
 */
PHP_METHOD(Lxd_Lib_Curl, get) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters, headers, _7$$5;
	zval *url_param = NULL, *parameters_param = NULL, *headers_param = NULL, __$true, query, curl, body, response, _0, _1, _3, _4, _6, header$$3, *_2$$3;
	zval url, _5, _8;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_8);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&query);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&body);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&header$$3);
	ZVAL_UNDEF(&parameters);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_7$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &url_param, &parameters_param, &headers_param);

	if (UNEXPECTED(Z_TYPE_P(url_param) != IS_STRING && Z_TYPE_P(url_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'url' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(url_param) == IS_STRING)) {
		zephir_get_strval(&url, url_param);
	} else {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_EMPTY_STRING(&url);
	}
	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&parameters, parameters_param);
	}
	if (!headers_param) {
		ZEPHIR_INIT_VAR(&headers);
		array_init(&headers);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&headers, headers_param);
	}


	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setoptions", NULL, 44);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&query, "http_build_query", NULL, 45, &parameters);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	if (!(ZEPHIR_IS_EMPTY(&query))) {
		ZEPHIR_INIT_NVAR(&_0);
		ZEPHIR_CONCAT_SV(&_0, "?", &query);
	} else {
		ZEPHIR_INIT_NVAR(&_0);
		ZVAL_NULL(&_0);
	}
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_VV(&_1, &url, &_0);
	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 46, &_1);
	zephir_check_call_status();
	if (!(ZEPHIR_IS_EMPTY(&headers))) {
		zephir_is_iterable(&headers, 0, "lxd/lib/curl.zep", 76);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&headers), _2$$3)
		{
			ZEPHIR_INIT_NVAR(&header$$3);
			ZVAL_COPY(&header$$3, _2$$3);
			zephir_update_property_array_multi(this_ptr, SL("options"), &header$$3 TSRMLS_CC, SL("la"), 2, 10023);
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&header$$3);
	}
	zephir_read_property(&_3, this_ptr, SL("options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 47, &curl, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_4, "curl_exec", NULL, 48, &curl);
	zephir_check_call_status();
	zephir_get_strval(&_5, &_4);
	ZEPHIR_CPY_WRT(&body, &_5);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 49, &curl);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&response);
	zephir_json_decode(&response, &body, zephir_get_intval(&__$true) );
	ZEPHIR_CALL_FUNCTION(&_6, "json_last_error", NULL, 50);
	zephir_check_call_status();
	if (ZEPHIR_IS_LONG_IDENTICAL(&_6, 0)) {
		zephir_get_arrval(&_7$$5, &response);
		RETURN_CTOR(&_7$$5);
	}
	zephir_get_strval(&_8, &body);
	RETURN_CTOR(&_8);

}

/**
 *  POST
 *  Should handle non array data parameters, like with /containers/files
 */
PHP_METHOD(Lxd_Lib_Curl, post) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval headers, _9;
	zval *url_param = NULL, *parameters = NULL, parameters_sub, *headers_param = NULL, __$true, __$null, curl, body, _1, _3, _5, _6, _8, _0$$3, header$$4, *_4$$4;
	zval url, _2, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&parameters_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&body);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&header$$4);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_9);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &url_param, &parameters, &headers_param);

	if (UNEXPECTED(Z_TYPE_P(url_param) != IS_STRING && Z_TYPE_P(url_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'url' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(url_param) == IS_STRING)) {
		zephir_get_strval(&url, url_param);
	} else {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_EMPTY_STRING(&url);
	}
	if (!parameters) {
		parameters = &parameters_sub;
		ZEPHIR_CPY_WRT(parameters, &__$null);
	} else {
		ZEPHIR_SEPARATE_PARAM(parameters);
	}
	if (!headers_param) {
		ZEPHIR_INIT_VAR(&headers);
		array_init(&headers);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&headers, headers_param);
	}


	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setoptions", NULL, 44);
	zephir_check_call_status();
	if (Z_TYPE_P(parameters) == IS_ARRAY) {
		ZEPHIR_INIT_VAR(&_0$$3);
		zephir_json_encode(&_0$$3, parameters, 0 );
		ZEPHIR_CPY_WRT(parameters, &_0$$3);
	}
	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 46, &url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, 47);
	zephir_update_property_array(this_ptr, SL("options"), &_1, &__$true TSRMLS_CC);
	zephir_get_strval(&_2, parameters);
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_LONG(&_3, 10015);
	zephir_update_property_array(this_ptr, SL("options"), &_3, &_2 TSRMLS_CC);
	if (!(ZEPHIR_IS_EMPTY(&headers))) {
		zephir_is_iterable(&headers, 0, "lxd/lib/curl.zep", 125);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&headers), _4$$4)
		{
			ZEPHIR_INIT_NVAR(&header$$4);
			ZVAL_COPY(&header$$4, _4$$4);
			zephir_update_property_array_multi(this_ptr, SL("options"), &header$$4 TSRMLS_CC, SL("la"), 2, 10023);
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&header$$4);
	}
	zephir_read_property(&_5, this_ptr, SL("options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 47, &curl, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_6, "curl_exec", NULL, 48, &curl);
	zephir_check_call_status();
	zephir_get_strval(&_7, &_6);
	ZEPHIR_CPY_WRT(&body, &_7);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 49, &curl);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_8);
	zephir_json_decode(&_8, &body, zephir_get_intval(&__$true) );
	zephir_get_arrval(&_9, &_8);
	RETURN_CTOR(&_9);

}

/**
 *  PUT
 */
PHP_METHOD(Lxd_Lib_Curl, put) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters, headers, _8;
	zval *url_param = NULL, *parameters_param = NULL, *headers_param = NULL, __$true, curl, body, _0, _1, _2, _3, _5, _6, header$$3, *_4$$3;
	zval url, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_7);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&body);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&header$$3);
	ZVAL_UNDEF(&parameters);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &url_param, &parameters_param, &headers_param);

	if (UNEXPECTED(Z_TYPE_P(url_param) != IS_STRING && Z_TYPE_P(url_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'url' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(url_param) == IS_STRING)) {
		zephir_get_strval(&url, url_param);
	} else {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_EMPTY_STRING(&url);
	}
	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&parameters, parameters_param);
	}
	if (!headers_param) {
		ZEPHIR_INIT_VAR(&headers);
		array_init(&headers);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&headers, headers_param);
	}


	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setoptions", NULL, 44);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 46, &url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 10036);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	zephir_update_property_array(this_ptr, SL("options"), &_0, &_1 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	zephir_json_encode(&_2, &parameters, 0 );
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_LONG(&_3, 10015);
	zephir_update_property_array(this_ptr, SL("options"), &_3, &_2 TSRMLS_CC);
	if (!(ZEPHIR_IS_EMPTY(&headers))) {
		zephir_is_iterable(&headers, 0, "lxd/lib/curl.zep", 162);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&headers), _4$$3)
		{
			ZEPHIR_INIT_NVAR(&header$$3);
			ZVAL_COPY(&header$$3, _4$$3);
			zephir_update_property_array_multi(this_ptr, SL("options"), &header$$3 TSRMLS_CC, SL("la"), 2, 10023);
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&header$$3);
	}
	zephir_read_property(&_5, this_ptr, SL("options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 47, &curl, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_6, "curl_exec", NULL, 48, &curl);
	zephir_check_call_status();
	zephir_get_strval(&_7, &_6);
	ZEPHIR_CPY_WRT(&body, &_7);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 49, &curl);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_2);
	zephir_json_decode(&_2, &body, zephir_get_intval(&__$true) );
	zephir_get_arrval(&_8, &_2);
	RETURN_CTOR(&_8);

}

/**
 *  PATCH
 */
PHP_METHOD(Lxd_Lib_Curl, patch) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters, headers, _8;
	zval *url_param = NULL, *parameters_param = NULL, *headers_param = NULL, __$true, curl, body, _0, _1, _2, _3, _5, _6, header$$3, *_4$$3;
	zval url, _7;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_7);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&body);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&header$$3);
	ZVAL_UNDEF(&parameters);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &url_param, &parameters_param, &headers_param);

	if (UNEXPECTED(Z_TYPE_P(url_param) != IS_STRING && Z_TYPE_P(url_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'url' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(url_param) == IS_STRING)) {
		zephir_get_strval(&url, url_param);
	} else {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_EMPTY_STRING(&url);
	}
	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&parameters, parameters_param);
	}
	if (!headers_param) {
		ZEPHIR_INIT_VAR(&headers);
		array_init(&headers);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&headers, headers_param);
	}


	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setoptions", NULL, 44);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 46, &url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 10036);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "PATCH");
	zephir_update_property_array(this_ptr, SL("options"), &_0, &_1 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	zephir_json_encode(&_2, &parameters, 0 );
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_LONG(&_3, 10015);
	zephir_update_property_array(this_ptr, SL("options"), &_3, &_2 TSRMLS_CC);
	if (!(ZEPHIR_IS_EMPTY(&headers))) {
		zephir_is_iterable(&headers, 0, "lxd/lib/curl.zep", 199);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&headers), _4$$3)
		{
			ZEPHIR_INIT_NVAR(&header$$3);
			ZVAL_COPY(&header$$3, _4$$3);
			zephir_update_property_array_multi(this_ptr, SL("options"), &header$$3 TSRMLS_CC, SL("la"), 2, 10023);
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&header$$3);
	}
	zephir_read_property(&_5, this_ptr, SL("options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 47, &curl, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_6, "curl_exec", NULL, 48, &curl);
	zephir_check_call_status();
	zephir_get_strval(&_7, &_6);
	ZEPHIR_CPY_WRT(&body, &_7);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 49, &curl);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_2);
	zephir_json_decode(&_2, &body, zephir_get_intval(&__$true) );
	zephir_get_arrval(&_8, &_2);
	RETURN_CTOR(&_8);

}

/**
 *  DELETE
 */
PHP_METHOD(Lxd_Lib_Curl, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval headers, _7;
	zval *url_param = NULL, *headers_param = NULL, __$true, curl, body, _0, _1, _3, _4, _6, header$$3, *_2$$3;
	zval url, _5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_5);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&body);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&header$$3);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_7);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &url_param, &headers_param);

	if (UNEXPECTED(Z_TYPE_P(url_param) != IS_STRING && Z_TYPE_P(url_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'url' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(url_param) == IS_STRING)) {
		zephir_get_strval(&url, url_param);
	} else {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_EMPTY_STRING(&url);
	}
	if (!headers_param) {
		ZEPHIR_INIT_VAR(&headers);
		array_init(&headers);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&headers, headers_param);
	}


	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setoptions", NULL, 44);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 46, &url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 10036);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "DELETE");
	zephir_update_property_array(this_ptr, SL("options"), &_0, &_1 TSRMLS_CC);
	if (!(ZEPHIR_IS_EMPTY(&headers))) {
		zephir_is_iterable(&headers, 0, "lxd/lib/curl.zep", 235);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&headers), _2$$3)
		{
			ZEPHIR_INIT_NVAR(&header$$3);
			ZVAL_COPY(&header$$3, _2$$3);
			zephir_update_property_array_multi(this_ptr, SL("options"), &header$$3 TSRMLS_CC, SL("la"), 2, 10023);
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&header$$3);
	}
	zephir_read_property(&_3, this_ptr, SL("options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 47, &curl, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_4, "curl_exec", NULL, 48, &curl);
	zephir_check_call_status();
	zephir_get_strval(&_5, &_4);
	ZEPHIR_CPY_WRT(&body, &_5);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 49, &curl);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_6);
	zephir_json_decode(&_6, &body, zephir_get_intval(&__$true) );
	zephir_get_arrval(&_7, &_6);
	RETURN_CTOR(&_7);

}

