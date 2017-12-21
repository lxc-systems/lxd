
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
#include "kernel/object.h"
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Containers, lxd, endpoints_containers, lxd_endpoint_ce, lxd_endpoints_containers_method_entry, ZEND_ACC_FINAL_CLASS);

	/**
	 * @var
	 */
	zend_declare_property_null(lxd_endpoints_containers_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	/**
	 * @var - Base API endpoint
	 */
	zephir_declare_class_constant_string(lxd_endpoints_containers_ce, SL("ENDPOINT"), "containers");

	return SUCCESS;

}

/**
 * Class construct
 *
 * @param  array          config Config array which holds object configuration
 * @param  <Lxd\Lib\Curl> curl
 * @return void
 */
PHP_METHOD(Lxd_Endpoints_Containers, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Containers");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_containers_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, all) {

	zval _4;
	zval ret, item, response, _0, _1, _2, _3, *_5, _6$$4;
	zephir_fcall_cache_entry *_7 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ret);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&ret);
	array_init(&ret);
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_0, "get", NULL, 0, &_1);
	zephir_check_call_status();
	zephir_array_fetch_string(&_2, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 54 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_2, "error")) {
		RETURN_CCTOR(&response);
	}
	ZEPHIR_OBS_VAR(&_3);
	zephir_array_fetch_string(&_3, &response, SL("metadata"), PH_NOISY, "lxd/endpoints/containers.zep", 58 TSRMLS_CC);
	zephir_get_arrval(&_4, &_3);
	zephir_is_iterable(&_4, 0, "lxd/endpoints/containers.zep", 61);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_4), _5)
	{
		ZEPHIR_INIT_NVAR(&item);
		ZVAL_COPY(&item, _5);
		ZEPHIR_CALL_METHOD(&_6$$4, this_ptr, "stripendpoint", &_7, 12, &item);
		zephir_check_call_status();
		zephir_array_append(&ret, &_6$$4, PH_SEPARATE, "lxd/endpoints/containers.zep", 59);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&item);
	RETURN_CCTOR(&ret);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, _0, _1, _2, _3;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

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


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, state) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, _0, _1, _2, _3;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

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


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVS(&_3, &_1, "/", &name, "/state");
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, setState) {

	zval _12$$3;
	zend_bool force, stateful, wait, _5;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *action_param = NULL, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, response, options, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3;
	zval name, action;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&action);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&options);
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
	ZVAL_UNDEF(&_12$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 4, &name_param, &action_param, &timeout_param, &force_param, &stateful_param, &wait_param);

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
	if (UNEXPECTED(Z_TYPE_P(action_param) != IS_STRING && Z_TYPE_P(action_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'action' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(action_param) == IS_STRING)) {
		zephir_get_strval(&action, action_param);
	} else {
		ZEPHIR_INIT_VAR(&action);
		ZVAL_EMPTY_STRING(&action);
	}
	if (!timeout_param) {
		timeout = 30;
	} else {
	if (UNEXPECTED(Z_TYPE_P(timeout_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'timeout' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	timeout = Z_LVAL_P(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(force_param) != IS_TRUE && Z_TYPE_P(force_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'force' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	force = (Z_TYPE_P(force_param) == IS_TRUE);
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
	zephir_create_array(&options, 4, 0 TSRMLS_CC);
	zephir_array_update_string(&options, SL("action"), &action, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, timeout);
	zephir_array_update_string(&options, SL("timeout"), &_0, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_BOOL(&_0, force);
	zephir_array_update_string(&options, SL("force"), &_0, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_BOOL(&_0, stateful);
	zephir_array_update_string(&options, SL("stateful"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "containers");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVS(&_3, &_2, "/", &name, "/state");
	ZEPHIR_CALL_METHOD(&response, &_1, "put", NULL, 0, &_3, &options);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 102 TSRMLS_CC);
	_5 = !ZEPHIR_IS_STRING_IDENTICAL(&_4, "error");
	if (_5) {
		_5 = wait;
	}
	if (_5) {
		zephir_read_property(&_6$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "operations");
		ZEPHIR_CALL_METHOD(&_7$$3, this_ptr, "getbase", NULL, 11, &_8$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 104 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 104 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		ZEPHIR_INIT_NVAR(&_8$$3);
		ZVAL_LONG(&_8$$3, timeout);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_8$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, start) {

	zend_bool force, stateful, wait;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, _0, _1, _2, _3, _4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 4, &name_param, &timeout_param, &force_param, &stateful_param, &wait_param);

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
	if (!timeout_param) {
		timeout = 30;
	} else {
	if (UNEXPECTED(Z_TYPE_P(timeout_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'timeout' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	timeout = Z_LVAL_P(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(force_param) != IS_TRUE && Z_TYPE_P(force_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'force' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	force = (Z_TYPE_P(force_param) == IS_TRUE);
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


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "start");
	ZVAL_LONG(&_1, timeout);
	if (force) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	if (stateful) {
		ZVAL_BOOL(&_3, 1);
	} else {
		ZVAL_BOOL(&_3, 0);
	}
	if (wait) {
		ZVAL_BOOL(&_4, 1);
	} else {
		ZVAL_BOOL(&_4, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 15, &name, &_0, &_1, &_2, &_3, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, stop) {

	zend_bool force, stateful, wait;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, _0, _1, _2, _3, _4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 4, &name_param, &timeout_param, &force_param, &stateful_param, &wait_param);

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
	if (!timeout_param) {
		timeout = 30;
	} else {
	if (UNEXPECTED(Z_TYPE_P(timeout_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'timeout' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	timeout = Z_LVAL_P(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(force_param) != IS_TRUE && Z_TYPE_P(force_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'force' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	force = (Z_TYPE_P(force_param) == IS_TRUE);
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


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "stop");
	ZVAL_LONG(&_1, timeout);
	if (force) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	if (stateful) {
		ZVAL_BOOL(&_3, 1);
	} else {
		ZVAL_BOOL(&_3, 0);
	}
	if (wait) {
		ZVAL_BOOL(&_4, 1);
	} else {
		ZVAL_BOOL(&_4, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 15, &name, &_0, &_1, &_2, &_3, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, restart) {

	zend_bool force, stateful, wait;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, _0, _1, _2, _3, _4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 4, &name_param, &timeout_param, &force_param, &stateful_param, &wait_param);

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
	if (!timeout_param) {
		timeout = 30;
	} else {
	if (UNEXPECTED(Z_TYPE_P(timeout_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'timeout' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	timeout = Z_LVAL_P(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(force_param) != IS_TRUE && Z_TYPE_P(force_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'force' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	force = (Z_TYPE_P(force_param) == IS_TRUE);
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


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "restart");
	ZVAL_LONG(&_1, timeout);
	if (force) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	if (stateful) {
		ZVAL_BOOL(&_3, 1);
	} else {
		ZVAL_BOOL(&_3, 0);
	}
	if (wait) {
		ZVAL_BOOL(&_4, 1);
	} else {
		ZVAL_BOOL(&_4, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 15, &name, &_0, &_1, &_2, &_3, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, freeze) {

	zend_bool force, stateful, wait;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, _0, _1, _2, _3, _4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 4, &name_param, &timeout_param, &force_param, &stateful_param, &wait_param);

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
	if (!timeout_param) {
		timeout = 30;
	} else {
	if (UNEXPECTED(Z_TYPE_P(timeout_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'timeout' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	timeout = Z_LVAL_P(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(force_param) != IS_TRUE && Z_TYPE_P(force_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'force' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	force = (Z_TYPE_P(force_param) == IS_TRUE);
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


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "freeze");
	ZVAL_LONG(&_1, timeout);
	if (force) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	if (stateful) {
		ZVAL_BOOL(&_3, 1);
	} else {
		ZVAL_BOOL(&_3, 0);
	}
	if (wait) {
		ZVAL_BOOL(&_4, 1);
	} else {
		ZVAL_BOOL(&_4, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 15, &name, &_0, &_1, &_2, &_3, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, unfreeze) {

	zend_bool force, stateful, wait;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, _0, _1, _2, _3, _4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 4, &name_param, &timeout_param, &force_param, &stateful_param, &wait_param);

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
	if (!timeout_param) {
		timeout = 30;
	} else {
	if (UNEXPECTED(Z_TYPE_P(timeout_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'timeout' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	timeout = Z_LVAL_P(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(force_param) != IS_TRUE && Z_TYPE_P(force_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'force' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	force = (Z_TYPE_P(force_param) == IS_TRUE);
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


	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "unfreeze");
	ZVAL_LONG(&_1, timeout);
	if (force) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	if (stateful) {
		ZVAL_BOOL(&_3, 1);
	} else {
		ZVAL_BOOL(&_3, 0);
	}
	if (wait) {
		ZVAL_BOOL(&_4, 1);
	} else {
		ZVAL_BOOL(&_4, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 15, &name, &_0, &_1, &_2, &_3, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, getSource) {

	zend_bool _6$$4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *options_param = NULL, only, opts, attr, _4, *_5, _0$$3, _1$$3, _2$$3, _7$$4, _8$$5;
	zval options, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&only);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&attr);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_8$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &options_param);

	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);


	if (zephir_array_isset_string(&options, SL("source"))) {
		ZEPHIR_INIT_VAR(&only);
		zephir_create_array(&only, 14, 0 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "type");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "mode");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "source");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "server");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "operation");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "protocol");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "base-image");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "certificate");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "secret");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "secrets");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "alias");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "fingerprint");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "properties");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_INIT_NVAR(&_0$$3);
		ZVAL_STRING(&_0$$3, "live");
		zephir_array_fast_append(&only, &_0$$3);
		ZEPHIR_CALL_FUNCTION(&_1$$3, "array_flip", NULL, 16, &only);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&opts, "array_intersect_key", NULL, 17, &options, &_1$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_2$$3, &opts, SL("source"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 206 TSRMLS_CC);
		RETURN_CTOR(&_2$$3);
	}
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 3, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_4);
	ZVAL_STRING(&_4, "alias");
	zephir_array_fast_append(&_3, &_4);
	ZEPHIR_INIT_NVAR(&_4);
	ZVAL_STRING(&_4, "fingerprint");
	zephir_array_fast_append(&_3, &_4);
	ZEPHIR_INIT_NVAR(&_4);
	ZVAL_STRING(&_4, "properties");
	zephir_array_fast_append(&_3, &_4);
	zephir_is_iterable(&_3, 0, "lxd/endpoints/containers.zep", 214);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_3), _5)
	{
		ZEPHIR_INIT_NVAR(&attr);
		ZVAL_COPY(&attr, _5);
		_6$$4 = zephir_array_isset(&options, &attr);
		if (_6$$4) {
			zephir_array_fetch(&_7$$4, &options, &attr, PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 210 TSRMLS_CC);
			_6$$4 = !(ZEPHIR_IS_EMPTY(&_7$$4));
		}
		if (_6$$4) {
			zephir_create_array(return_value, 1, 0 TSRMLS_CC);
			ZEPHIR_OBS_NVAR(&_8$$5);
			zephir_array_fetch(&_8$$5, &options, &attr, PH_NOISY, "lxd/endpoints/containers.zep", 211 TSRMLS_CC);
			zephir_array_update_zval(return_value, &attr, &_8$$5, PH_COPY);
			RETURN_MM();
		}
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&attr);
	array_init(return_value);
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, getOptions) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval options;
	zval *name_param = NULL, *options_param = NULL, opts, only, _0, _1;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&only);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &options_param);

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
	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);


	ZEPHIR_INIT_VAR(&only);
	zephir_create_array(&only, 5, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "architecture");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "profiles");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "ephemeral");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "config");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "devices");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_CALL_FUNCTION(&_1, "array_flip", NULL, 16, &only);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&opts, "array_intersect_key", NULL, 17, &options, &_1);
	zephir_check_call_status();
	zephir_array_update_string(&opts, SL("name"), &name, PH_COPY | PH_SEPARATE);
	RETURN_CCTOR(&opts);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, getEmptyOptions) {

	zend_bool _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval options;
	zval *name_param = NULL, *options_param = NULL, attr, opts, attrs, _0, *_1, _3$$3, _4$$4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&attr);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&attrs);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &options_param);

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
	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);


	ZEPHIR_INIT_VAR(&attrs);
	zephir_create_array(&attrs, 7, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "alias");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "fingerprint");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "properties");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "server");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "secret");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "protocol");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "certificate");
	zephir_array_fast_append(&attrs, &_0);
	zephir_is_iterable(&attrs, 0, "lxd/endpoints/containers.zep", 257);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&attrs), _1)
	{
		ZEPHIR_INIT_NVAR(&attr);
		ZVAL_COPY(&attr, _1);
		_2$$3 = zephir_array_isset(&options, &attr);
		if (_2$$3) {
			zephir_array_fetch(&_3$$3, &options, &attr, PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 252 TSRMLS_CC);
			_2$$3 = !(ZEPHIR_IS_EMPTY(&_3$$3));
		}
		if (_2$$3) {
			ZEPHIR_INIT_LNVAR(_4$$4);
			ZEPHIR_CONCAT_SV(&_4$$4, "empty => true is not compatible with ", &attr);
			zephir_throw_exception_debug(&_4$$4, "lxd/endpoints/containers.zep", 253 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&attr);
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 18, &name, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "none");
	zephir_array_update_multi(&opts, &_0 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	RETURN_CCTOR(&opts);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, getRemoteImageOptions) {

	zend_bool _1;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval source, options, _3;
	zval *name_param = NULL, *source_param = NULL, *options_param = NULL, opts, remoteOptions, only, _0, _2, _4, _5, _6;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&remoteOptions);
	ZVAL_UNDEF(&only);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&source);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &name_param, &source_param, &options_param);

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
	ZEPHIR_OBS_COPY_OR_DUP(&source, source_param);
	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);


	ZEPHIR_INIT_VAR(&only);
	zephir_create_array(&only, 4, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "server");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "secret");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "protocol");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "certificate");
	zephir_array_fast_append(&only, &_0);
	_1 = zephir_array_isset_string(&options, SL("protocol"));
	if (_1) {
		zephir_array_fetch_string(&_2, &options, SL("protocol"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 275 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_3);
		zephir_create_array(&_3, 2, 0 TSRMLS_CC);
		ZEPHIR_INIT_NVAR(&_0);
		ZVAL_STRING(&_0, "lxd");
		zephir_array_fast_append(&_3, &_0);
		ZEPHIR_INIT_NVAR(&_0);
		ZVAL_STRING(&_0, "simplestreams");
		zephir_array_fast_append(&_3, &_0);
		_1 = !(zephir_fast_in_array(&_2, &_3 TSRMLS_CC));
	}
	if (_1) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Invalid protocol.  Valid choices: lxd, simplestreams", "lxd/endpoints/containers.zep", 276);
		return;
	}
	ZEPHIR_CALL_METHOD(&_4, &only, "flip", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&remoteOptions, "array_intersect_key", NULL, 17, &options, &_4);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 18, &name, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_0);
	zephir_fast_array_merge(&_0, &source, &remoteOptions TSRMLS_CC);
	zephir_array_update_string(&opts, SL("source"), &_0, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_6);
	ZVAL_STRING(&_6, "image");
	zephir_array_update_multi(&opts, &_6 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	ZEPHIR_INIT_NVAR(&_6);
	ZVAL_STRING(&_6, "pull");
	zephir_array_update_multi(&opts, &_6 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("mode"));
	RETURN_CCTOR(&opts);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, getLocalImageOptions) {

	zend_bool _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval source, options;
	zval *name_param = NULL, *source_param = NULL, *options_param = NULL, opts, attr, attrs, _0, *_1, _3$$3, _4$$4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&attr);
	ZVAL_UNDEF(&attrs);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&source);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &name_param, &source_param, &options_param);

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
	ZEPHIR_OBS_COPY_OR_DUP(&source, source_param);
	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);


	ZEPHIR_INIT_VAR(&attrs);
	zephir_create_array(&attrs, 3, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "secret");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "protocol");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "certificate");
	zephir_array_fast_append(&attrs, &_0);
	zephir_is_iterable(&attrs, 0, "lxd/endpoints/containers.zep", 305);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&attrs), _1)
	{
		ZEPHIR_INIT_NVAR(&attr);
		ZVAL_COPY(&attr, _1);
		_2$$3 = zephir_array_isset(&options, &attr);
		if (_2$$3) {
			zephir_array_fetch(&_3$$3, &options, &attr, PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 300 TSRMLS_CC);
			_2$$3 = !(ZEPHIR_IS_EMPTY(&_3$$3));
		}
		if (_2$$3) {
			ZEPHIR_INIT_LNVAR(_4$$4);
			ZEPHIR_CONCAT_SV(&_4$$4, "Only setting remote server is compatible with ", &attr);
			zephir_throw_exception_debug(&_4$$4, "lxd/endpoints/containers.zep", 301 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&attr);
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 18, &name, &options);
	zephir_check_call_status();
	zephir_array_update_string(&opts, SL("source"), &source, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "image");
	zephir_array_update_multi(&opts, &_0 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	RETURN_CCTOR(&opts);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, create) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _0, _2, _3, _5, _7, _13;
	zval options, _20$$8;
	zval *name_param = NULL, *options_param = NULL, *wait_param = NULL, source, opts, response, _1, _4, _6, _8, _9, _10, _11, _12, _14$$8, _15$$8, _16$$8, _17$$8, _18$$8, _19$$8, _21$$8, _22$$8;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&source);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_14$$8);
	ZVAL_UNDEF(&_15$$8);
	ZVAL_UNDEF(&_16$$8);
	ZVAL_UNDEF(&_17$$8);
	ZVAL_UNDEF(&_18$$8);
	ZVAL_UNDEF(&_19$$8);
	ZVAL_UNDEF(&_21$$8);
	ZVAL_UNDEF(&_22$$8);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_20$$8);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &name_param, &options_param, &wait_param);

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
	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);
	if (!wait_param) {
		wait = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(wait_param) != IS_TRUE && Z_TYPE_P(wait_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'wait' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	wait = (Z_TYPE_P(wait_param) == IS_TRUE);
	}


	ZEPHIR_CALL_METHOD(&source, this_ptr, "getsource", NULL, 19, &options);
	zephir_check_call_status();
	_0 = zephir_array_isset_string(&options, SL("empty"));
	if (_0) {
		zephir_array_fetch_string(&_1, &options, SL("empty"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 321 TSRMLS_CC);
		_0 = ZEPHIR_IS_EMPTY(&_1);
	}
	_2 = _0;
	if (_2) {
		_2 = ZEPHIR_IS_EMPTY(&source);
	}
	if (_2) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Source empty", "lxd/endpoints/containers.zep", 322);
		return;
	}
	_3 = zephir_array_isset_string(&options, SL("empty"));
	if (_3) {
		zephir_array_fetch_string(&_4, &options, SL("empty"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 325 TSRMLS_CC);
		_3 = ZEPHIR_IS_EMPTY(&_4);
	}
	_5 = zephir_array_isset_string(&options, SL("empty"));
	if (_5) {
		zephir_array_fetch_string(&_6, &options, SL("empty"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 328 TSRMLS_CC);
		_5 = zephir_is_true(&_6);
	}
	_7 = zephir_array_isset_string(&options, SL("server"));
	if (_7) {
		zephir_array_fetch_string(&_8, &options, SL("server"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 330 TSRMLS_CC);
		_7 = !(ZEPHIR_IS_EMPTY(&_8));
	}
	if (_3) {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 18, &name, &options);
		zephir_check_call_status();
		zephir_array_update_string(&opts, SL("source"), &source, PH_COPY | PH_SEPARATE);
	} else if (_5) {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getemptyoptions", NULL, 20, &name, &options);
		zephir_check_call_status();
	} else if (_7) {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getremoteimageoptions", NULL, 21, &name, &source, &options);
		zephir_check_call_status();
	} else {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getlocalimageoptions", NULL, 22, &name, &source, &options);
		zephir_check_call_status();
	}
	zephir_read_property(&_9, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_11);
	ZVAL_STRING(&_11, "containers");
	ZEPHIR_CALL_METHOD(&_10, this_ptr, "getbase", NULL, 11, &_11);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_9, "post", NULL, 0, &_10, &opts);
	zephir_check_call_status();
	zephir_array_fetch_string(&_12, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 338 TSRMLS_CC);
	_13 = !ZEPHIR_IS_STRING_IDENTICAL(&_12, "error");
	if (_13) {
		_13 = wait;
	}
	if (_13) {
		zephir_read_property(&_14$$8, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_16$$8);
		ZVAL_STRING(&_16$$8, "operations");
		ZEPHIR_CALL_METHOD(&_15$$8, this_ptr, "getbase", NULL, 11, &_16$$8);
		zephir_check_call_status();
		zephir_array_fetch_string(&_17$$8, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 340 TSRMLS_CC);
		zephir_array_fetch_string(&_18$$8, &_17$$8, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 340 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_19$$8);
		ZEPHIR_CONCAT_VSVS(&_19$$8, &_15$$8, "/", &_18$$8, "/wait");
		ZEPHIR_INIT_VAR(&_20$$8);
		zephir_create_array(&_20$$8, 1, 0 TSRMLS_CC);
		zephir_read_property(&_21$$8, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_22$$8);
		zephir_array_fetch_string(&_22$$8, &_21$$8, SL("timeout"), PH_NOISY, "lxd/endpoints/containers.zep", 343 TSRMLS_CC);
		zephir_array_update_string(&_20$$8, SL("timeout"), &_22$$8, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_14$$8, "get", NULL, 0, &_19$$8, &_20$$8);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, copy) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _4;
	zval options, _11$$3;
	zval *name_param = NULL, *copyName_param = NULL, *options_param = NULL, *wait_param = NULL, opts, response, _0, _1, _2, _3, _5$$3, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _12$$3, _13$$3;
	zval name, copyName;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&copyName);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_12$$3);
	ZVAL_UNDEF(&_13$$3);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_11$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 2, &name_param, &copyName_param, &options_param, &wait_param);

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
	if (UNEXPECTED(Z_TYPE_P(copyName_param) != IS_STRING && Z_TYPE_P(copyName_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'copyName' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(copyName_param) == IS_STRING)) {
		zephir_get_strval(&copyName, copyName_param);
	} else {
		ZEPHIR_INIT_VAR(&copyName);
		ZVAL_EMPTY_STRING(&copyName);
	}
	if (!options_param) {
		ZEPHIR_INIT_VAR(&options);
		array_init(&options);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);
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


	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 18, &copyName, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "copy");
	zephir_array_update_multi(&opts, &_0 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	zephir_array_update_multi(&opts, &name TSRMLS_CC, SL("ss"), 4, SL("source"), SL("source"));
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "containers");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_1, "post", NULL, 0, &_2, &opts);
	zephir_check_call_status();
	zephir_array_fetch_string(&_3, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 363 TSRMLS_CC);
	_4 = !ZEPHIR_IS_STRING_IDENTICAL(&_3, "error");
	if (_4) {
		_4 = wait;
	}
	if (_4) {
		zephir_read_property(&_5$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_7$$3);
		ZVAL_STRING(&_7$$3, "operations");
		ZEPHIR_CALL_METHOD(&_6$$3, this_ptr, "getbase", NULL, 11, &_7$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_8$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 365 TSRMLS_CC);
		zephir_array_fetch_string(&_9$$3, &_8$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 365 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_10$$3);
		ZEPHIR_CONCAT_VSVS(&_10$$3, &_6$$3, "/", &_9$$3, "/wait");
		ZEPHIR_INIT_VAR(&_11$$3);
		zephir_create_array(&_11$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_12$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_13$$3);
		zephir_array_fetch_string(&_13$$3, &_12$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/containers.zep", 368 TSRMLS_CC);
		zephir_array_update_string(&_11$$3, SL("timeout"), &_13$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_5$$3, "get", NULL, 0, &_10$$3, &_11$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, replace) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _5;
	zval opts, _12$$3;
	zval *name_param = NULL, *opts_param = NULL, *wait_param = NULL, response, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _13$$3, _14$$3;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
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
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_12$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &name_param, &opts_param, &wait_param);

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
	ZEPHIR_OBS_COPY_OR_DUP(&opts, opts_param);
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
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_CALL_METHOD(&response, &_0, "put", NULL, 0, &_3, &opts);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 384 TSRMLS_CC);
	_5 = !ZEPHIR_IS_STRING_IDENTICAL(&_4, "error");
	if (_5) {
		_5 = wait;
	}
	if (_5) {
		zephir_read_property(&_6$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "operations");
		ZEPHIR_CALL_METHOD(&_7$$3, this_ptr, "getbase", NULL, 11, &_8$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 386 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 386 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_13$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_14$$3);
		zephir_array_fetch_string(&_14$$3, &_13$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/containers.zep", 389 TSRMLS_CC);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_14$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, delete) {

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


	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 23, &fingerprint);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, remove) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint_param = NULL, _0, _1, _2;
	zval fingerprint;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

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
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", &fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

