
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


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Operations) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Operations, lxd, endpoints_operations, lxd_endpoint_ce, lxd_endpoints_operations_method_entry, 0);

	zend_declare_property_null(lxd_endpoints_operations_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoints_operations_ce, SL("endpoint"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Lxd_Endpoints_Operations, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Operations");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_operations_ce, getThis(), "__construct", &_0, 0, config, curl, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("url"), PH_NOISY | PH_READONLY, "lxd/endpoints/operations.zep", 14 TSRMLS_CC);
	zephir_read_property(&_4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_5, &_4, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/operations.zep", 14 TSRMLS_CC);
	zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_7, &_6, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/operations.zep", 14 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_8);
	ZEPHIR_CONCAT_VSVSV(&_8, &_3, "/", &_5, "/", &_7);
	zephir_update_property_zval(this_ptr, SL("endpoint"), &_8);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Lxd_Endpoints_Operations, all) {

	zend_string *_6;
	zend_ulong _5;
	zval _3;
	zval __$null, response, _0, _1, ret, item, key, operation_id, _2, *_4, *_7$$3, _8$$4, _9$$4, _10$$4, _11$$4, _12$$4, _13$$4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&ret);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&operation_id);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_12$$4);
	ZVAL_UNDEF(&_13$$4);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&response, &_0, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&ret);
	array_init(&ret);
	ZEPHIR_OBS_VAR(&_2);
	zephir_array_fetch_string(&_2, &response, SL("metadata"), PH_NOISY, "lxd/endpoints/operations.zep", 22 TSRMLS_CC);
	zephir_get_arrval(&_3, &_2);
	zephir_is_iterable(&_3, 0, "lxd/endpoints/operations.zep", 27);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_3), _5, _6, _4)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_6 != NULL) { 
			ZVAL_STR_COPY(&key, _6);
		} else {
			ZVAL_LONG(&key, _5);
		}
		ZEPHIR_INIT_NVAR(&item);
		ZVAL_COPY(&item, _4);
		zephir_is_iterable(&item, 0, "lxd/endpoints/operations.zep", 26);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&item), _7$$3)
		{
			ZEPHIR_INIT_NVAR(&operation_id);
			ZVAL_COPY(&operation_id, _7$$3);
			ZEPHIR_INIT_NVAR(&_8$$4);
			zephir_read_property(&_9$$4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_string(&_10$$4, &_9$$4, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/operations.zep", 24 TSRMLS_CC);
			zephir_read_property(&_11$$4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch_string(&_12$$4, &_11$$4, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/operations.zep", 24 TSRMLS_CC);
			ZEPHIR_INIT_LNVAR(_13$$4);
			ZEPHIR_CONCAT_SVSVS(&_13$$4, "/", &_10$$4, "/", &_12$$4, "/");
			zephir_fast_str_replace(&_8$$4, &_13$$4, &__$null, &operation_id TSRMLS_CC);
			zephir_array_update_multi(&ret, &_8$$4 TSRMLS_CC, SL("za"), 2, &key);
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&operation_id);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&ret);

}

PHP_METHOD(Lxd_Endpoints_Operations, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *uuid, uuid_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&uuid_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &uuid);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", uuid);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Operations, cancel) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *uuid, uuid_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&uuid_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &uuid);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", uuid);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Operations, wait) {

	zval _4$$3;
	zend_bool _2;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *uuid, uuid_sub, *timeout_param = NULL, _0, _1, _5, _6, _3$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&uuid_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &uuid, &timeout_param);

	if (!timeout_param) {
		timeout = 0;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SVS(&_0, "/", uuid, "/wait");
	zephir_update_property_zval(this_ptr, SL("endpoint"), &_0);
	ZVAL_LONG(&_1, timeout);
	_2 = zephir_is_numeric(&_1);
	if (_2) {
		_2 = timeout > 0;
	}
	if (_2) {
		ZEPHIR_SINIT_VAR(_3$$3);
		ZVAL_LONG(&_3$$3, timeout);
		ZEPHIR_INIT_VAR(&_4$$3);
		ZEPHIR_CONCAT_SV(&_4$$3, "?timeout=", &_3$$3);
		zephir_update_property_zval(this_ptr, SL("endpoint"), &_4$$3);
	}
	zephir_read_property(&_5, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_6, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_RETURN_CALL_METHOD(&_5, "get", NULL, 0, &_6);
	zephir_check_call_status();
	RETURN_MM();

}

