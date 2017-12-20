
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/concat.h"
#include "kernel/string.h"
#include "kernel/fcall.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoint) {

	ZEPHIR_REGISTER_CLASS(Lxd, Endpoint, lxd, endpoint, lxd_endpoint_method_entry, 0);

	zend_declare_property_null(lxd_endpoint_ce, SL("config"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoint_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoint_ce, SL("endpoint"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoint, __construct) {

	zval endpoint;
	zval *config_param = NULL, *curl, curl_sub, *endpoint_param = NULL;
	zval config;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&curl_sub);
	ZVAL_UNDEF(&endpoint);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &config_param, &curl, &endpoint_param);

	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	if (!endpoint_param) {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_STRING(&endpoint, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(endpoint_param) != IS_STRING && Z_TYPE_P(endpoint_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'endpoint' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(endpoint_param) == IS_STRING)) {
		zephir_get_strval(&endpoint, endpoint_param);
	} else {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_EMPTY_STRING(&endpoint);
	}
	}


	zephir_update_property_zval(this_ptr, SL("config"), &config);
	zephir_update_property_zval(this_ptr, SL("curl"), curl);
	zephir_update_property_zval(this_ptr, SL("endpoint"), &endpoint);
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoint, __get) {

	zval _9$$4, _10$$4;
	zend_class_entry *_7$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *method_param = NULL, _0, _1, _2, _3$$3, _4$$3, _5$$3, _6$$3, _8$$3, _11$$4;
	zval method, ns, _12$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&ns);
	ZVAL_UNDEF(&_12$$5);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &method_param);

	if (UNEXPECTED(Z_TYPE_P(method_param) != IS_STRING && Z_TYPE_P(method_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'method' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(method_param) == IS_STRING)) {
		zephir_get_strval(&method, method_param);
	} else {
		ZEPHIR_INIT_VAR(&method);
		ZVAL_EMPTY_STRING(&method);
	}


	zephir_read_property(&_0, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_1);
	zephir_ucfirst(&_1, &method);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_0, "\\", &_1);
	zephir_get_strval(&ns, &_2);
	if (zephir_class_exists(&ns, 1 TSRMLS_CC)) {
		zephir_read_property(&_3$$3, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_4$$3);
		ZVAL_STRING(&_4$$3, "endpoint");
		zephir_update_property_array(this_ptr, SL("config"), &_4$$3, &_3$$3 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_5$$3);
		ZVAL_STRING(&_5$$3, "method");
		zephir_update_property_array(this_ptr, SL("config"), &_5$$3, &method TSRMLS_CC);
		zephir_fetch_safe_class(&_6$$3, &ns);
		_7$$3 = zephir_fetch_class_str_ex(Z_STRVAL_P(&_6$$3), Z_STRLEN_P(&_6$$3), ZEND_FETCH_CLASS_AUTO);
		object_init_ex(return_value, _7$$3);
		if (zephir_has_constructor(return_value TSRMLS_CC)) {
			zephir_read_property(&_3$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_8$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 0, &_3$$3, &_8$$3);
			zephir_check_call_status();
		}
		RETURN_MM();
	}
	if ((zephir_method_exists(this_ptr, &method TSRMLS_CC)  == SUCCESS)) {
		ZEPHIR_INIT_VAR(&_9$$4);
		zephir_create_array(&_9$$4, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(&_9$$4, this_ptr);
		zephir_array_fast_append(&_9$$4, &method);
		ZEPHIR_INIT_VAR(&_10$$4);
		zephir_create_array(&_10$$4, 2, 0 TSRMLS_CC);
		ZEPHIR_OBS_VAR(&_11$$4);
		zephir_read_property(&_11$$4, this_ptr, SL("config"), PH_NOISY_CC);
		zephir_array_fast_append(&_10$$4, &_11$$4);
		ZEPHIR_OBS_NVAR(&_11$$4);
		zephir_read_property(&_11$$4, this_ptr, SL("curl"), PH_NOISY_CC);
		zephir_array_fast_append(&_10$$4, &_11$$4);
		ZEPHIR_RETURN_CALL_FUNCTION("call_user_func", NULL, 1, &_9$$4, &_10$$4);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		ZEPHIR_INIT_VAR(&_12$$5);
		ZEPHIR_CONCAT_SVS(&_12$$5, "Endpoint ", &ns, ", not implemented.");
		zephir_throw_exception_debug(&_12$$5, "lxd/endpoint.zep", 55 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoint, getVersion) {

	zval _2;
	zval _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&_1);
	zephir_array_fetch_string(&_1, &_0, SL("version"), PH_NOISY, "lxd/endpoint.zep", 64 TSRMLS_CC);
	zephir_get_strval(&_2, &_1);
	RETURN_CTOR(&_2);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoint, getUrl) {

	zval _2;
	zval _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&_1);
	zephir_array_fetch_string(&_1, &_0, SL("url"), PH_NOISY, "lxd/endpoint.zep", 72 TSRMLS_CC);
	zephir_get_strval(&_2, &_1);
	RETURN_CTOR(&_2);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoint, getBase) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *endpoint_param = NULL, _0, _2, _3;
	zval endpoint, _1, _4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&endpoint);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &endpoint_param);

	if (!endpoint_param) {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_STRING(&endpoint, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(endpoint_param) != IS_STRING && Z_TYPE_P(endpoint_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'endpoint' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(endpoint_param) == IS_STRING)) {
		zephir_get_strval(&endpoint, endpoint_param);
	} else {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_EMPTY_STRING(&endpoint);
	}
	}


	ZEPHIR_CALL_METHOD(&_0, this_ptr, "geturl", NULL, 2);
	zephir_check_call_status();
	zephir_get_strval(&_1, &_0);
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getversion", NULL, 3);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	if (!(ZEPHIR_IS_EMPTY(&endpoint))) {
		ZEPHIR_INIT_VAR(&_4);
		ZEPHIR_CONCAT_SV(&_4, "/", &endpoint);
		ZEPHIR_CPY_WRT(&_3, &_4);
	} else {
		ZEPHIR_INIT_NVAR(&_3);
		ZVAL_NULL(&_3);
	}
	ZEPHIR_CONCAT_VSVV(return_value, &_1, "/", &_2, &_3);
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoint, stripEndpoint) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *endpoint_param = NULL, __$null, _0, _1, _2, _3, _4;
	zval endpoint, _5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&endpoint);
	ZVAL_UNDEF(&_5);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &endpoint_param);

	if (!endpoint_param) {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_STRING(&endpoint, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(endpoint_param) != IS_STRING && Z_TYPE_P(endpoint_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'endpoint' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(endpoint_param) == IS_STRING)) {
		zephir_get_strval(&endpoint, endpoint_param);
	} else {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_EMPTY_STRING(&endpoint);
	}
	}


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getversion", NULL, 3);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoint.zep", 88 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_4);
	ZEPHIR_CONCAT_SVSVS(&_4, "/", &_1, "/", &_3, "/");
	zephir_fast_str_replace(&_0, &_4, &__$null, &endpoint TSRMLS_CC);
	zephir_get_strval(&_5, &_0);
	RETURN_CTOR(&_5);

}

