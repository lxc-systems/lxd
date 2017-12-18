
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
#include "kernel/fcall.h"
#include "kernel/concat.h"
#include "kernel/operators.h"
#include "kernel/array.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Lxd_Lib_Curl) {

	ZEPHIR_REGISTER_CLASS(Lxd\\Lib, Curl, lxd, lib_curl, lxd_lib_curl_method_entry, 0);

	zend_declare_property_null(lxd_lib_curl_ce, SL("config"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Lxd_Lib_Curl, __construct) {

	zval *config, config_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config_sub);

	zephir_fetch_params(0, 1, 0, &config);



	zephir_update_property_zval(this_ptr, SL("config"), config);

}

/**
 *  GET request
 *  @param  string      Resource to fetch
 *  @param  array       Associative array with additional parameters
 *  @return array       Associative array with the result
 */
PHP_METHOD(Lxd_Lib_Curl, get) {

	zend_bool _4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters, _19;
	zval *url, url_sub, *parameters_param = NULL, __$true, __$false, query, curl, curl_options, response, httpCode, _0, _1, _2, _3, _5, _6, _17, _18, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _12$$3, _13$$3, _14$$3, _15$$3, _16$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_BOOL(&__$false, 0);
	ZVAL_UNDEF(&query);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&curl_options);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_12$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_15$$3);
	ZVAL_UNDEF(&_16$$3);
	ZVAL_UNDEF(&parameters);
	ZVAL_UNDEF(&_19);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &url, &parameters_param);

	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
		zephir_get_arrval(&parameters, parameters_param);
	}


	ZEPHIR_CALL_FUNCTION(&query, "http_build_query", NULL, 18, &parameters);
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
	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 19, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&curl_options);
	zephir_create_array(&curl_options, 3, 0 TSRMLS_CC);
	zephir_array_update_long(&curl_options, 19913, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&curl_options, 64, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&curl_options, 81, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 35 TSRMLS_CC);
	_4 = zephir_is_true(&_3);
	if (_4) {
		zephir_read_property(&_5, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_6, &_5, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 35 TSRMLS_CC);
		_4 = zephir_is_true(&_6);
	}
	if (_4) {
		zephir_read_property(&_7$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_8$$3, &_7$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 36 TSRMLS_CC);
		zephir_read_property(&_9$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 36 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_8$$3, "/", &_10$$3, "/private.key");
		zephir_array_update_long(&curl_options, 10087, &_11$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
		zephir_read_property(&_12$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_13$$3, &_12$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 37 TSRMLS_CC);
		zephir_read_property(&_14$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_15$$3, &_14$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 37 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_16$$3);
		ZEPHIR_CONCAT_VSVS(&_16$$3, &_13$$3, "/", &_15$$3, "/client.pem");
		zephir_array_update_long(&curl_options, 10025, &_16$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
	}
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 20, &curl, &curl_options);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 21, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_17, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 22, &curl, &_17);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 23, &curl);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_18);
	zephir_json_decode(&_18, &response, zephir_get_intval(&__$true) );
	ZEPHIR_CPY_WRT(&response, &_18);
	zephir_get_arrval(&_19, &response);
	RETURN_CTOR(&_19);

}

/**
 *  Do a POST request
 *  @param  string      Resource name
 *  @param  array       Associative array with data to post
 *  @return mixed       False on failure or the id of the created item           
 */
PHP_METHOD(Lxd_Lib_Curl, post) {

	zend_bool _4, _18;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval parameters, _0;
	zval *url, url_sub, *parameters_param = NULL, __$true, __$false, curl, curl_options, response, httpCode, _1, _2, _3, _5, _6, _17, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _12$$3, _13$$3, _14$$3, _15$$3, _16$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_BOOL(&__$false, 0);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&curl_options);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_12$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_15$$3);
	ZVAL_UNDEF(&_16$$3);
	ZVAL_UNDEF(&parameters);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &url, &parameters_param);

	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
		zephir_get_arrval(&parameters, parameters_param);
	}


	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 19, url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&curl_options);
	zephir_create_array(&curl_options, 6, 0 TSRMLS_CC);
	zephir_array_update_long(&curl_options, 47, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&curl_options, 19913, &__$true, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&curl_options, 64, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&curl_options, 81, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Content-Type: application/json");
	zephir_array_fast_append(&_0, &_1);
	zephir_array_update_long(&curl_options, 10023, &_0, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	ZEPHIR_INIT_NVAR(&_1);
	zephir_json_encode(&_1, &parameters, 0 );
	zephir_array_update_long(&curl_options, 10015, &_1, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 81 TSRMLS_CC);
	_4 = zephir_is_true(&_3);
	if (_4) {
		zephir_read_property(&_5, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_6, &_5, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 81 TSRMLS_CC);
		_4 = zephir_is_true(&_6);
	}
	if (_4) {
		zephir_read_property(&_7$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_8$$3, &_7$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 82 TSRMLS_CC);
		zephir_read_property(&_9$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 82 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_8$$3, "/", &_10$$3, "/private.key");
		zephir_array_update_long(&curl_options, 10087, &_11$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
		zephir_read_property(&_12$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_13$$3, &_12$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 83 TSRMLS_CC);
		zephir_read_property(&_14$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_15$$3, &_14$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 83 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_16$$3);
		ZEPHIR_CONCAT_VSVS(&_16$$3, &_13$$3, "/", &_15$$3, "/client.pem");
		zephir_array_update_long(&curl_options, 10025, &_16$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
	}
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 20, &curl, &curl_options);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 21, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_17, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 22, &curl, &_17);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 23, &curl);
	zephir_check_call_status();
	_18 = !zephir_is_true(&httpCode);
	if (!(_18)) {
		_18 = ZEPHIR_IS_LONG(&httpCode, 400);
	}
	if (_18) {
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

	zend_bool _4, _18;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval data, parameters, _0;
	zval *url, url_sub, *data_param = NULL, *parameters_param = NULL, __$false, __$true, curl, curl_options, response, httpCode, _1, _2, _3, _5, _6, _17, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _12$$3, _13$$3, _14$$3, _15$$3, _16$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$false, 0);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&curl_options);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_12$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_15$$3);
	ZVAL_UNDEF(&_16$$3);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&parameters);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &url, &data_param, &parameters_param);

	if (!data_param) {
		ZEPHIR_INIT_VAR(&data);
		array_init(&data);
	} else {
		zephir_get_arrval(&data, data_param);
	}
	if (!parameters_param) {
		ZEPHIR_INIT_VAR(&parameters);
		array_init(&parameters);
	} else {
		zephir_get_arrval(&parameters, parameters_param);
	}


	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 19, url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&curl_options);
	zephir_create_array(&curl_options, 5, 0 TSRMLS_CC);
	add_index_stringl(&curl_options, 10036, SL("PUT"));
	zephir_array_update_long(&curl_options, 64, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&curl_options, 81, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Content-Type: application/json");
	zephir_array_fast_append(&_0, &_1);
	zephir_array_update_long(&curl_options, 10023, &_0, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	ZEPHIR_INIT_NVAR(&_1);
	zephir_json_encode(&_1, &parameters, 0 );
	zephir_array_update_long(&curl_options, 10015, &_1, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 129 TSRMLS_CC);
	_4 = zephir_is_true(&_3);
	if (_4) {
		zephir_read_property(&_5, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_6, &_5, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 129 TSRMLS_CC);
		_4 = zephir_is_true(&_6);
	}
	if (_4) {
		zephir_read_property(&_7$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_8$$3, &_7$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 130 TSRMLS_CC);
		zephir_read_property(&_9$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 130 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_8$$3, "/", &_10$$3, "/private.key");
		zephir_array_update_long(&curl_options, 10087, &_11$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
		zephir_read_property(&_12$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_13$$3, &_12$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 131 TSRMLS_CC);
		zephir_read_property(&_14$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_15$$3, &_14$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 131 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_16$$3);
		ZEPHIR_CONCAT_VSVS(&_16$$3, &_13$$3, "/", &_15$$3, "/client.pem");
		zephir_array_update_long(&curl_options, 10025, &_16$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
	}
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 20, &curl, &curl_options);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 21, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_17, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 22, &curl, &_17);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 23, &curl);
	zephir_check_call_status();
	_18 = !zephir_is_true(&httpCode);
	if (!(_18)) {
		_18 = ZEPHIR_IS_LONG(&httpCode, 400);
	}
	if (_18) {
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

	zend_bool _4, _18;
	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *url, url_sub, __$false, __$true, curl, curl_options, response, httpCode, _1, _2, _3, _5, _6, _17, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _12$$3, _13$$3, _14$$3, _15$$3, _16$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url_sub);
	ZVAL_BOOL(&__$false, 0);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&curl);
	ZVAL_UNDEF(&curl_options);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&httpCode);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_12$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_15$$3);
	ZVAL_UNDEF(&_16$$3);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &url);



	ZEPHIR_CALL_FUNCTION(&curl, "curl_init", NULL, 19, url);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&curl_options);
	zephir_create_array(&curl_options, 4, 0 TSRMLS_CC);
	add_index_stringl(&curl_options, 10036, SL("DELETE"));
	zephir_array_update_long(&curl_options, 64, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_array_update_long(&curl_options, 81, &__$false, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Content-Type: application/json");
	zephir_array_fast_append(&_0, &_1);
	zephir_array_update_long(&curl_options, 10023, &_0, PH_COPY ZEPHIR_DEBUG_PARAMS_DUMMY);
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 174 TSRMLS_CC);
	_4 = zephir_is_true(&_3);
	if (_4) {
		zephir_read_property(&_5, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_6, &_5, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 174 TSRMLS_CC);
		_4 = zephir_is_true(&_6);
	}
	if (_4) {
		zephir_read_property(&_7$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_8$$3, &_7$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 175 TSRMLS_CC);
		zephir_read_property(&_9$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 175 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_8$$3, "/", &_10$$3, "/private.key");
		zephir_array_update_long(&curl_options, 10087, &_11$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
		zephir_read_property(&_12$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_13$$3, &_12$$3, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 176 TSRMLS_CC);
		zephir_read_property(&_14$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_15$$3, &_14$$3, SL("ip"), PH_NOISY | PH_READONLY, "lxd/lib/curl.zep", 176 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_16$$3);
		ZEPHIR_CONCAT_VSVS(&_16$$3, &_13$$3, "/", &_15$$3, "/client.pem");
		zephir_array_update_long(&curl_options, 10025, &_16$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
	}
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt_array", NULL, 20, &curl, &curl_options);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&response, "curl_exec", NULL, 21, &curl);
	zephir_check_call_status();
	ZVAL_LONG(&_17, 2097154);
	ZEPHIR_CALL_FUNCTION(&httpCode, "curl_getinfo", NULL, 22, &curl, &_17);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 23, &curl);
	zephir_check_call_status();
	_18 = !zephir_is_true(&httpCode);
	if (!(_18)) {
		_18 = ZEPHIR_IS_LONG(&httpCode, 400);
	}
	if (_18) {
	}
	zephir_json_decode(return_value, &response, zephir_get_intval(&__$true) );
	RETURN_MM();

}

