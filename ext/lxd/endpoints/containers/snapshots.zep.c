
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

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
#include "kernel/concat.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers_Snapshots) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints\\Containers, Snapshots, lxd, endpoints_containers_snapshots, lxd_endpoint_ce, lxd_endpoints_containers_snapshots_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lxd_endpoints_containers_snapshots_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zephir_declare_class_constant_string(lxd_endpoints_containers_snapshots_ce, SL("ENDPOINT"), "containers");

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Containers\\Snapshots");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_containers_snapshots_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, all) {

	zend_string *_8;
	zend_ulong _7;
	zephir_fcall_cache_entry *_11 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, __$null, key, value, response, _0, _1, _2, _3, _4, _5, *_6, _9$$4, _10$$4, _12$$4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);
	ZVAL_UNDEF(&_12$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

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


	ZEPHIR_INIT_VAR(&response);
	zephir_create_array(&response, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	array_init(&_0);
	zephir_array_update_string(&response, SL("metadata"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "containers");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 9, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVS(&_3, &_2, "/", &name, "/snapshots");
	ZEPHIR_CALL_METHOD(&response, &_1, "get", NULL, 0, &_3);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 49 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_4, "error")) {
		RETURN_CCTOR(&response);
	}
	zephir_array_fetch_string(&_5, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 53 TSRMLS_CC);
	zephir_is_iterable(&_5, 0, "lxd/endpoints/containers/snapshots.zep", 59);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_5), _7, _8, _6)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_8 != NULL) { 
			ZVAL_STR_COPY(&key, _8);
		} else {
			ZVAL_LONG(&key, _7);
		}
		ZEPHIR_INIT_NVAR(&value);
		ZVAL_COPY(&value, _6);
		ZEPHIR_INIT_NVAR(&_9$$4);
		ZEPHIR_CALL_METHOD(&_10$$4, this_ptr, "getversion", &_11, 3);
		zephir_check_call_status();
		ZEPHIR_INIT_LNVAR(_12$$4);
		ZEPHIR_CONCAT_SVSSSVS(&_12$$4, "/", &_10$$4, "/", "containers", "/", &name, "/snapshots/");
		zephir_fast_str_replace(&_9$$4, &_12$$4, &__$null, &value TSRMLS_CC);
		zephir_array_update_multi(&response, &_9$$4 TSRMLS_CC, SL("sz"), 3, SL("metadata"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&value);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *snapshot_param = NULL, _0, _1, _2, _3;
	zval name, snapshot;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&snapshot);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &snapshot_param);

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
	if (UNEXPECTED(Z_TYPE_P(snapshot_param) != IS_STRING && Z_TYPE_P(snapshot_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'snapshot' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(snapshot_param) == IS_STRING)) {
		zephir_get_strval(&snapshot, snapshot_param);
	} else {
		ZEPHIR_INIT_VAR(&snapshot);
		ZVAL_EMPTY_STRING(&snapshot);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 9, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVSV(&_3, &_1, "/", &name, "/snapshots/", &snapshot);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, create) {

	zval _12$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool stateful, wait, _5;
	zval *name_param = NULL, *snapshot_param = NULL, *stateful_param = NULL, *wait_param = NULL, options, response, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _13$$3, _14$$3;
	zval name, snapshot;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&snapshot);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_12$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 2, &name_param, &snapshot_param, &stateful_param, &wait_param);

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
	if (UNEXPECTED(Z_TYPE_P(snapshot_param) != IS_STRING && Z_TYPE_P(snapshot_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'snapshot' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(snapshot_param) == IS_STRING)) {
		zephir_get_strval(&snapshot, snapshot_param);
	} else {
		ZEPHIR_INIT_VAR(&snapshot);
		ZVAL_EMPTY_STRING(&snapshot);
	}
	if (!stateful_param) {
		stateful = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(stateful_param) != IS_TRUE && Z_TYPE_P(stateful_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'stateful' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	stateful = (Z_TYPE_P(stateful_param) == IS_TRUE);
	}
	if (!wait_param) {
		wait = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(wait_param) != IS_TRUE && Z_TYPE_P(wait_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'wait' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	wait = (Z_TYPE_P(wait_param) == IS_TRUE);
	}


	ZEPHIR_INIT_VAR(&options);
	zephir_create_array(&options, 2, 0 TSRMLS_CC);
	zephir_array_update_string(&options, SL("name"), &snapshot, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_BOOL(&_0, stateful);
	zephir_array_update_string(&options, SL("stateful"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "containers");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 9, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVS(&_3, &_2, "/", &name, "/snapshots");
	ZEPHIR_CALL_METHOD(&response, &_1, "post", NULL, 0, &_3, &options);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 89 TSRMLS_CC);
	_5 = !ZEPHIR_IS_STRING_IDENTICAL(&_4, "error");
	if (_5) {
		_5 = wait;
	}
	if (_5) {
		zephir_read_property(&_6$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "operations");
		ZEPHIR_CALL_METHOD(&_7$$3, this_ptr, "getbase", NULL, 9, &_8$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 91 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 91 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_13$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_14$$3);
		zephir_array_fetch_string(&_14$$3, &_13$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/containers/snapshots.zep", 94 TSRMLS_CC);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_14$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, restore) {

	zval _12$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _5;
	zval *name_param = NULL, *snapshot_param = NULL, *wait_param = NULL, response, opts, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _13$$3, _14$$3;
	zval name, snapshot;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&snapshot);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_12$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &name_param, &snapshot_param, &wait_param);

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
	if (UNEXPECTED(Z_TYPE_P(snapshot_param) != IS_STRING && Z_TYPE_P(snapshot_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'snapshot' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(snapshot_param) == IS_STRING)) {
		zephir_get_strval(&snapshot, snapshot_param);
	} else {
		ZEPHIR_INIT_VAR(&snapshot);
		ZVAL_EMPTY_STRING(&snapshot);
	}
	if (!wait_param) {
		wait = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(wait_param) != IS_TRUE && Z_TYPE_P(wait_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'wait' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	wait = (Z_TYPE_P(wait_param) == IS_TRUE);
	}


	ZEPHIR_INIT_VAR(&opts);
	zephir_create_array(&opts, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&opts, SL("restore"), &snapshot, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 9, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_CALL_METHOD(&response, &_0, "put", NULL, 0, &_3, &opts);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 112 TSRMLS_CC);
	_5 = !ZEPHIR_IS_STRING_IDENTICAL(&_4, "error");
	if (_5) {
		_5 = wait;
	}
	if (_5) {
		zephir_read_property(&_6$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "operations");
		ZEPHIR_CALL_METHOD(&_7$$3, this_ptr, "getbase", NULL, 9, &_8$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 114 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 114 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_13$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_14$$3);
		zephir_array_fetch_string(&_14$$3, &_13$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/containers/snapshots.zep", 117 TSRMLS_CC);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_14$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, rename) {

	zval _12$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _5;
	zval *name_param = NULL, *snaphot_param = NULL, *newSnapshot_param = NULL, *wait_param = NULL, response, opts, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _13$$3, _14$$3;
	zval name, snaphot, newSnapshot;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&snaphot);
	ZVAL_UNDEF(&newSnapshot);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_12$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 1, &name_param, &snaphot_param, &newSnapshot_param, &wait_param);

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
	if (UNEXPECTED(Z_TYPE_P(snaphot_param) != IS_STRING && Z_TYPE_P(snaphot_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'snaphot' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(snaphot_param) == IS_STRING)) {
		zephir_get_strval(&snaphot, snaphot_param);
	} else {
		ZEPHIR_INIT_VAR(&snaphot);
		ZVAL_EMPTY_STRING(&snaphot);
	}
	if (UNEXPECTED(Z_TYPE_P(newSnapshot_param) != IS_STRING && Z_TYPE_P(newSnapshot_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'newSnapshot' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(newSnapshot_param) == IS_STRING)) {
		zephir_get_strval(&newSnapshot, newSnapshot_param);
	} else {
		ZEPHIR_INIT_VAR(&newSnapshot);
		ZVAL_EMPTY_STRING(&newSnapshot);
	}
	if (!wait_param) {
		wait = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(wait_param) != IS_TRUE && Z_TYPE_P(wait_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'wait' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	wait = (Z_TYPE_P(wait_param) == IS_TRUE);
	}


	ZEPHIR_INIT_VAR(&opts);
	zephir_create_array(&opts, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&opts, SL("name"), &newSnapshot, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 9, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVSV(&_3, &_1, "/", &name, "/snapshots/", &snaphot);
	ZEPHIR_CALL_METHOD(&response, &_0, "post", NULL, 0, &_3, &opts);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 135 TSRMLS_CC);
	_5 = !ZEPHIR_IS_STRING_IDENTICAL(&_4, "error");
	if (_5) {
		_5 = wait;
	}
	if (_5) {
		zephir_read_property(&_6$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "operations");
		ZEPHIR_CALL_METHOD(&_7$$3, this_ptr, "getbase", NULL, 9, &_8$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 137 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 137 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_13$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_14$$3);
		zephir_array_fetch_string(&_14$$3, &_13$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/containers/snapshots.zep", 140 TSRMLS_CC);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_14$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, remove) {

	zval _12$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _5;
	zval *name_param = NULL, *snaphot_param = NULL, *wait_param = NULL, response, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _13$$3, _14$$3;
	zval name, snaphot;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&snaphot);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_11$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&_14$$3);
	ZVAL_UNDEF(&_12$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &name_param, &snaphot_param, &wait_param);

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
	if (UNEXPECTED(Z_TYPE_P(snaphot_param) != IS_STRING && Z_TYPE_P(snaphot_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'snaphot' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(snaphot_param) == IS_STRING)) {
		zephir_get_strval(&snaphot, snaphot_param);
	} else {
		ZEPHIR_INIT_VAR(&snaphot);
		ZVAL_EMPTY_STRING(&snaphot);
	}
	if (!wait_param) {
		wait = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(wait_param) != IS_TRUE && Z_TYPE_P(wait_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'wait' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	wait = (Z_TYPE_P(wait_param) == IS_TRUE);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 9, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVSV(&_3, &_1, "/", &name, "/snapshots/", &snaphot);
	ZEPHIR_CALL_METHOD(&response, &_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 156 TSRMLS_CC);
	_5 = !ZEPHIR_IS_STRING_IDENTICAL(&_4, "error");
	if (_5) {
		_5 = wait;
	}
	if (_5) {
		zephir_read_property(&_6$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "operations");
		ZEPHIR_CALL_METHOD(&_7$$3, this_ptr, "getbase", NULL, 9, &_8$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 158 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/snapshots.zep", 158 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_13$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_14$$3);
		zephir_array_fetch_string(&_14$$3, &_13$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/containers/snapshots.zep", 161 TSRMLS_CC);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_14$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait;
	zval *name_param = NULL, *snaphot_param = NULL, *wait_param = NULL, _0;
	zval name, snaphot;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&snaphot);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &name_param, &snaphot_param, &wait_param);

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
	if (UNEXPECTED(Z_TYPE_P(snaphot_param) != IS_STRING && Z_TYPE_P(snaphot_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'snaphot' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(snaphot_param) == IS_STRING)) {
		zephir_get_strval(&snaphot, snaphot_param);
	} else {
		ZEPHIR_INIT_VAR(&snaphot);
		ZVAL_EMPTY_STRING(&snaphot);
	}
	if (!wait_param) {
		wait = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(wait_param) != IS_TRUE && Z_TYPE_P(wait_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'wait' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	wait = (Z_TYPE_P(wait_param) == IS_TRUE);
	}


	if (wait) {
		ZVAL_BOOL(&_0, 1);
	} else {
		ZVAL_BOOL(&_0, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 25, &name, &snaphot, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

