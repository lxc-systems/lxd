
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


/**
 * Lxd\Endpoints\Containers\Logs
 *
 * Provides containers logs facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/containers/logs.zep
 */
ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers_Logs) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints\\Containers, Logs, lxd, endpoints_containers_logs, lxd_endpoint_ce, lxd_endpoints_containers_logs_method_entry, ZEND_ACC_FINAL_CLASS);

	/**
	 * @var
	 */
	zend_declare_property_null(lxd_endpoints_containers_logs_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	/**
	 * @var - Base API endpoint
	 */
	zephir_declare_class_constant_string(lxd_endpoints_containers_logs_ce, SL("ENDPOINT"), "containers");

	return SUCCESS;

}

/**
 * Class construct
 *
 * @param  array          config Config array which holds object configuration
 * @param  <Lxd\Lib\Curl> curl
 * @return void
 */
PHP_METHOD(Lxd_Endpoints_Containers_Logs, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Containers\\Logs");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_containers_logs_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 * List of logs for a container
 *
 * <code>
 *  $lxd->containers->logs->all('conainer-name');
 * </code>
 *
 * @param  string name     Name of container
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Containers_Logs, all) {

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
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVS(&_3, &_2, "/", &name, "/logs");
	ZEPHIR_CALL_METHOD(&response, &_1, "get", NULL, 0, &_3);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/logs.zep", 72 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_4, "error")) {
		RETURN_CCTOR(&response);
	}
	zephir_array_fetch_string(&_5, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers/logs.zep", 76 TSRMLS_CC);
	zephir_is_iterable(&_5, 0, "lxd/endpoints/containers/logs.zep", 82);
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
		ZEPHIR_CONCAT_SVSSSVS(&_12$$4, "/", &_10$$4, "/", "containers", "/", &name, "/logs/");
		zephir_fast_str_replace(&_9$$4, &_12$$4, &__$null, &value TSRMLS_CC);
		zephir_array_update_multi(&response, &_9$$4 TSRMLS_CC, SL("sz"), 3, SL("metadata"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&value);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 * Get the contents of a particular log file
 *
 * <code>
 *  $lxd->containers->logs->read('conainer-name', 'log-name.log');
 * </code>
 *
 * @param  string name  Name of container
 * @param  string log   Name of log
 * @return string
 */
PHP_METHOD(Lxd_Endpoints_Containers_Logs, read) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *log_param = NULL, _0, _1, _2, _3;
	zval name, log;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&log);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &log_param);

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
	if (UNEXPECTED(Z_TYPE_P(log_param) != IS_STRING && Z_TYPE_P(log_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'log' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(log_param) == IS_STRING)) {
		zephir_get_strval(&log, log_param);
	} else {
		ZEPHIR_INIT_VAR(&log);
		ZVAL_EMPTY_STRING(&log);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVSV(&_3, &_1, "/", &name, "/logs/", &log);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Remove a particular log file
 *
 * <code>
 *  $lxd->containers->logs->remove('conainer-name', 'log-name.log');
 * </code>
 *
 * @param  string name  Name of container
 * @param  string log   Name of log
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Containers_Logs, remove) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *log_param = NULL;
	zval name, log;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&log);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &log_param);

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
	if (UNEXPECTED(Z_TYPE_P(log_param) != IS_STRING && Z_TYPE_P(log_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'log' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(log_param) == IS_STRING)) {
		zephir_get_strval(&log, log_param);
	} else {
		ZEPHIR_INIT_VAR(&log);
		ZVAL_EMPTY_STRING(&log);
	}


	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "delete", NULL, 26, &name, &log);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Delete a particular log file - alias of remove
 *
 * <code>
 *  $lxd->containers->logs->delete('conainer-name', 'log-name.log');
 * </code>
 *
 * @param  string name  Name of container
 * @param  string log   Name of log
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Containers_Logs, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *log_param = NULL, _0, _1, _2, _3;
	zval name, log;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&log);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &log_param);

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
	if (UNEXPECTED(Z_TYPE_P(log_param) != IS_STRING && Z_TYPE_P(log_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'log' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(log_param) == IS_STRING)) {
		zephir_get_strval(&log, log_param);
	} else {
		ZEPHIR_INIT_VAR(&log);
		ZVAL_EMPTY_STRING(&log);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVSV(&_3, &_1, "/", &name, "/logs/", &log);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

