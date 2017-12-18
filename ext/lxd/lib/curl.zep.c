
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
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/concat.h"
#include "kernel/fcall.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Lxd_Lib_Curl) {

	ZEPHIR_REGISTER_CLASS(Lxd\\Lib, Curl, lxd, lib_curl, lxd_lib_curl_method_entry, 0);

	zend_declare_property_null(lxd_lib_curl_ce, SL("config"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(lxd_lib_curl_ce, SL("curl_options"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Lib_Curl, __construct) {

	zend_bool _5;
	zval _0, _1;
	zval *config, config_sub, __$true, __$false, _2, _3, _4, _6, _7, _8$$3, _9$$3, _10$$3, _11$$3, _12$$3, _13$$3, _14$$3, _15$$3, _16$$3, _17$$3, _18$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config_sub);
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
	zephir_fetch_params(1, 1, 0, &config);



	zephir_update_property_zval(this_ptr, SL("config"), config);
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
	zephir_update_property_zval(this_ptr, SL("curl_options"), &_0);
	zephir_read_property(&_3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_4, &_3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 25 TSRMLS_CC);
	_5 = zephir_is_true(&_4);
	if (_5) {
		zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_7, &_6, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 25 TSRMLS_CC);
		_5 = zephir_is_true(&_7);
	}
	if (_5) {
		zephir_read_property(&_8$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_9$$3, &_8$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 26 TSRMLS_CC);
		zephir_read_property(&_10$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_11$$3, &_10$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 26 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_12$$3);
		ZEPHIR_CONCAT_VSVS(&_12$$3, &_9$$3, "/", &_11$$3, "/private.key");
		ZEPHIR_INIT_VAR(&_13$$3);
		ZVAL_LONG(&_13$$3, 10087);
		zephir_update_property_array(this_ptr, SL("curl_options"), &_13$$3, &_12$$3 TSRMLS_CC);
		zephir_read_property(&_14$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_15$$3, &_14$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 27 TSRMLS_CC);
		zephir_read_property(&_16$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_17$$3, &_16$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 27 TSRMLS_CC);
		ZEPHIR_INIT_LNVAR(_12$$3);
		ZEPHIR_CONCAT_VSVS(&_12$$3, &_15$$3, "/", &_17$$3, "/client.pem");
		ZEPHIR_INIT_VAR(&_18$$3);
		ZVAL_LONG(&_18$$3, 10025);
		zephir_update_property_array(this_ptr, SL("curl_options"), &_18$$3, &_12$$3 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

/**
 *  GET request
 *  @param  string      Resource to fetch
 *  @param  array       Associative array with additional parameters
 *  @return array       Associative array with the result
 */
PHP_METHOD(Lxd_Lib_Curl, get) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters, _5;
	zval *url, url_sub, *parameters_param = NULL, __$true, query, curl, response, httpCode, _0, _1, _2, _3, _4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&query);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&parameters);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &url, &parameters_param);

	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
		zephir_get_arrval(&parameters, parameters_param);
	}


	ZEPHIR_CALL_FUNCTION(&query, "http_build_query", NULL, 25, &parameters);
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
	ZEPHIR_CONCAT_VV(&_1, url, &_0);
	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 26, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("curl_options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 27, &curl, &_2);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 28, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_3, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 29, &curl, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 30, &curl);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_4);
	zephir_json_decode(&_4, &response, zephir_get_intval(&__$true) );
	ZEPHIR_CPY_WRT(&response, &_4);
	zephir_get_arrval(&_5, &response);
	RETURN_CTOR(&_5);

}

/**
 *  Do a POST request
 *  @param  string      Resource name
 *  @param  array       Associative array with data to post
 *  @return mixed       False on failure or the id of the created item           
 */
PHP_METHOD(Lxd_Lib_Curl, post) {

	zend_bool _5;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters;
	zval *url, url_sub, *parameters_param = NULL, __$true, curl, response, httpCode, _0, _1, _2, _3, _4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&parameters);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &url, &parameters_param);

	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
		zephir_get_arrval(&parameters, parameters_param);
	}


	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 26, url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 47);
	zephir_update_property_array(this_ptr, SL("curl_options"), &_0, &__$true TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	zephir_json_encode(&_1, &parameters, 0 );
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_LONG(&_2, 10015);
	zephir_update_property_array(this_ptr, SL("curl_options"), &_2, &_1 TSRMLS_CC);
	zephir_read_property(&_3, this_ptr, SL("curl_options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 27, &curl, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 28, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_4, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 29, &curl, &_4);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 30, &curl);
	zephir_check_call_status();
	_5 = !zephir_is_true(&httpCode);
	if (!(_5)) {
		_5 = ZEPHIR_IS_LONG(&httpCode, 400);
	}
	if (_5) {
	}
	zephir_json_decode(return_value, &response, zephir_get_intval(&__$true) );
	RETURN_MM();

}

/**
 *  Do a PUT request
 *  @param  string      Resource name
 *  @param  array       Associative array with data to post
 *  @param  array       Associative array with additional parameters
 *  @return bool
 */
PHP_METHOD(Lxd_Lib_Curl, put) {

	zend_bool _6;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters;
	zval *url, url_sub, *parameters_param = NULL, __$true, curl, response, httpCode, _0, _1, _2, _3, _4, _5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&parameters);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &url, &parameters_param);

	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
		zephir_get_arrval(&parameters, parameters_param);
	}


	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 26, url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 10036);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "PUT");
	zephir_update_property_array(this_ptr, SL("curl_options"), &_0, &_1 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	zephir_json_encode(&_2, &parameters, 0 );
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_LONG(&_3, 10015);
	zephir_update_property_array(this_ptr, SL("curl_options"), &_3, &_2 TSRMLS_CC);
	zephir_read_property(&_4, this_ptr, SL("curl_options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 27, &curl, &_4);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 28, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_5, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 29, &curl, &_5);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 30, &curl);
	zephir_check_call_status();
	_6 = !zephir_is_true(&httpCode);
	if (!(_6)) {
		_6 = ZEPHIR_IS_LONG(&httpCode, 400);
	}
	if (_6) {
	}
	zephir_json_decode(return_value, &response, zephir_get_intval(&__$true) );
	RETURN_MM();

}

/**
 *  Do a DELETE request
 *  @param  string      Resource name
 *  @return bool
 */
PHP_METHOD(Lxd_Lib_Curl, delete) {

	zend_bool _4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *url, url_sub, __$true, curl, response, httpCode, _0, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &url);



	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 26, url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 10036);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "DELETE");
	zephir_update_property_array(this_ptr, SL("curl_options"), &_0, &_1 TSRMLS_CC);
	zephir_read_property(&_2, this_ptr, SL("curl_options"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 27, &curl, &_2);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 28, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_3, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 29, &curl, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 30, &curl);
	zephir_check_call_status();
	_4 = !zephir_is_true(&httpCode);
	if (!(_4)) {
		_4 = ZEPHIR_IS_LONG(&httpCode, 400);
	}
	if (_4) {
	}
	zephir_json_decode(return_value, &response, zephir_get_intval(&__$true) );
	RETURN_MM();

}

