
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/concat.h"
#include "kernel/fcall.h"
#include "kernel/array.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoint) {

	ZEPHIR_REGISTER_CLASS(Lxd, Endpoint, lxd, endpoint, lxd_endpoint_method_entry, 0);

	zend_declare_property_null(lxd_endpoint_ce, SL("config"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoint_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoint_ce, SL("endpoint"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

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

	zephir_get_arrval(&config, config_param);
	if (!endpoint_param) {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_STRING(&endpoint, "");
	} else {
		zephir_get_strval(&endpoint, endpoint_param);
	}


	zephir_update_property_zval(this_ptr, SL("config"), &config);
	zephir_update_property_zval(this_ptr, SL("curl"), curl);
	zephir_update_property_zval(this_ptr, SL("endpoint"), &endpoint);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Lxd_Endpoint, __get) {

	zval _7$$4, _8$$4;
	zend_class_entry *_6$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *method_param = NULL, _0, _1, _2$$3, _3$$3, _4$$3, _5$$3, _9$$4, _10$$5;
	zval method, ns, _11$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&ns);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &method_param);

	zephir_get_strval(&method, method_param);


	zephir_read_property(&_0, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_VSV(&_1, &_0, "\\", &method);
	zephir_get_strval(&ns, &_1);
	if (zephir_class_exists(&ns, 1 TSRMLS_CC)) {
		zephir_read_property(&_2$$3, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "endpoint");
		zephir_update_property_array(this_ptr, SL("config"), &_3$$3, &_2$$3 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_4$$3);
		ZVAL_STRING(&_4$$3, "method");
		zephir_update_property_array(this_ptr, SL("config"), &_4$$3, &method TSRMLS_CC);
		zephir_fetch_safe_class(&_5$$3, &ns);
		_6$$3 = zephir_fetch_class_str_ex(Z_STRVAL_P(&_5$$3), Z_STRLEN_P(&_5$$3), ZEND_FETCH_CLASS_AUTO);
		object_init_ex(return_value, _6$$3);
		if (zephir_has_constructor(return_value TSRMLS_CC)) {
			zephir_read_property(&_2$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 0, &_2$$3);
			zephir_check_call_status();
		}
		RETURN_MM();
	}
	if ((zephir_method_exists(this_ptr, &method TSRMLS_CC)  == SUCCESS)) {
		ZEPHIR_INIT_VAR(&_7$$4);
		zephir_create_array(&_7$$4, 2, 0 TSRMLS_CC);
		zephir_array_fast_append(&_7$$4, this_ptr);
		zephir_array_fast_append(&_7$$4, &method);
		ZEPHIR_INIT_VAR(&_8$$4);
		zephir_create_array(&_8$$4, 2, 0 TSRMLS_CC);
		ZEPHIR_OBS_VAR(&_9$$4);
		zephir_read_property(&_9$$4, this_ptr, SL("config"), PH_NOISY_CC);
		zephir_array_fast_append(&_8$$4, &_9$$4);
		ZEPHIR_OBS_NVAR(&_9$$4);
		zephir_read_property(&_9$$4, this_ptr, SL("curl"), PH_NOISY_CC);
		zephir_array_fast_append(&_8$$4, &_9$$4);
		ZEPHIR_RETURN_CALL_FUNCTION("call_user_func", NULL, 1, &_7$$4, &_8$$4);
		zephir_check_call_status();
		RETURN_MM();
	} else {
		ZEPHIR_INIT_VAR(&_10$$5);
		object_init_ex(&_10$$5, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(&_11$$5);
		ZEPHIR_CONCAT_SVS(&_11$$5, "Endpoint ", &ns, ", not implemented.");
		ZEPHIR_CALL_METHOD(NULL, &_10$$5, "__construct", NULL, 2, &_11$$5);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_10$$5, "lxd/endpoint.zep", 32 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}

}

