
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
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/array.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Operations) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Operations, lxd, endpoints_operations, lxd_endpoint_ce, lxd_endpoints_operations_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lxd_endpoints_operations_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zephir_declare_class_constant_string(lxd_endpoints_operations_ce, SL("ENDPOINT"), "operations");

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Operations, __construct) {

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

	zephir_get_arrval(&config, config_param);


	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Operations");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_operations_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Operations, all) {

	zend_string *_7;
	zend_ulong _6;
	zval _4;
	zval response, _0, _1, _2, ret, item, key, operation_id, _3, *_5, *_8$$3, _9$$4;
	zephir_fcall_cache_entry *_10 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&ret);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&operation_id);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "operations");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 10, &_2);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_0, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&ret);
	array_init(&ret);
	ZEPHIR_OBS_VAR(&_3);
	zephir_array_fetch_string(&_3, &response, SL("metadata"), PH_NOISY, "lxd/endpoints/operations.zep", 27 TSRMLS_CC);
	zephir_get_arrval(&_4, &_3);
	zephir_is_iterable(&_4, 0, "lxd/endpoints/operations.zep", 32);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_4), _6, _7, _5)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_7 != NULL) { 
			ZVAL_STR_COPY(&key, _7);
		} else {
			ZVAL_LONG(&key, _6);
		}
		ZEPHIR_INIT_NVAR(&item);
		ZVAL_COPY(&item, _5);
		zephir_is_iterable(&item, 0, "lxd/endpoints/operations.zep", 31);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&item), _8$$3)
		{
			ZEPHIR_INIT_NVAR(&operation_id);
			ZVAL_COPY(&operation_id, _8$$3);
			ZEPHIR_CALL_METHOD(&_9$$4, this_ptr, "stripendpoint", &_10, 11, &operation_id);
			zephir_check_call_status();
			zephir_array_update_multi(&ret, &_9$$4 TSRMLS_CC, SL("za"), 2, &key);
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&operation_id);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&ret);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Operations, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *uuid, uuid_sub, _0, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&uuid_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &uuid);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "operations");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 10, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", uuid);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Operations, cancel) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *uuid, uuid_sub, _0, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&uuid_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &uuid);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "operations");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 10, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", uuid);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Operations, wait) {

	zend_bool _4;
	zval endpoint, _6$$3;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *uuid, uuid_sub, *timeout_param = NULL, _0, _1, _2, _3, _7, _5$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&uuid_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&endpoint);
	ZVAL_UNDEF(&_6$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &uuid, &timeout_param);

	if (!timeout_param) {
		timeout = 0;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}


	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "operations");
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getbase", NULL, 10, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSVS(&_2, &_0, "/", uuid, "/wait");
	zephir_get_strval(&endpoint, &_2);
	ZVAL_LONG(&_3, timeout);
	_4 = zephir_is_numeric(&_3);
	if (_4) {
		_4 = timeout > 0;
	}
	if (_4) {
		ZEPHIR_SINIT_VAR(_5$$3);
		ZVAL_LONG(&_5$$3, timeout);
		ZEPHIR_INIT_VAR(&_6$$3);
		ZEPHIR_CONCAT_SV(&_6$$3, "?timeout=", &_5$$3);
		zephir_concat_self(&endpoint, &_6$$3 TSRMLS_CC);
	}
	zephir_read_property(&_7, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_METHOD(&_7, "get", NULL, 0, &endpoint);
	zephir_check_call_status();
	RETURN_MM();

}

