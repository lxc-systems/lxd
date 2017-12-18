
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
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Containers, lxd, endpoints_containers, lxd_endpoint_ce, lxd_endpoints_containers_method_entry, 0);

	zend_declare_property_null(lxd_endpoints_containers_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoints_containers_ce, SL("endpoint"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *config_param = NULL, *curl, curl_sub, _1, _2, _3, _4, _5, _6, _7, _8;
	zval config;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config);
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
	zephir_fetch_params(1, 2, 0, &config_param, &curl);

	zephir_get_arrval(&config, config_param);


	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Containers");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_containers_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("url"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 17 TSRMLS_CC);
	zephir_read_property(&_4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_5, &_4, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 17 TSRMLS_CC);
	zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_7, &_6, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 17 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_8);
	ZEPHIR_CONCAT_VSVSV(&_8, &_3, "/", &_5, "/", &_7);
	zephir_update_property_zval(this_ptr, SL("endpoint"), &_8);
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, all) {

	zval _3;
	zval __$null, response, _0, _1, ret, item, _2, *_4, _5$$3, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&ret);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&response, &_0, "get", NULL, 0, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&ret);
	array_init(&ret);
	ZEPHIR_OBS_VAR(&_2);
	zephir_array_fetch_string(&_2, &response, SL("metadata"), PH_NOISY, "lxd/endpoints/containers.zep", 28 TSRMLS_CC);
	zephir_get_arrval(&_3, &_2);
	zephir_is_iterable(&_3, 0, "lxd/endpoints/containers.zep", 31);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_3), _4)
	{
		ZEPHIR_INIT_NVAR(&item);
		ZVAL_COPY(&item, _4);
		ZEPHIR_INIT_NVAR(&_5$$3);
		zephir_read_property(&_6$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_7$$3, &_6$$3, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 29 TSRMLS_CC);
		zephir_read_property(&_8$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_9$$3, &_8$$3, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 29 TSRMLS_CC);
		ZEPHIR_INIT_LNVAR(_10$$3);
		ZEPHIR_CONCAT_SVSVS(&_10$$3, "/", &_7$$3, "/", &_9$$3, "/");
		zephir_fast_str_replace(&_5$$3, &_10$$3, &__$null, &item TSRMLS_CC);
		zephir_array_append(&ret, &_5$$3, PH_SEPARATE, "lxd/endpoints/containers.zep", 29);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&item);
	RETURN_CCTOR(&ret);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, _0, _1, _2;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	zephir_get_strval(&name, name_param);


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, state) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, _0, _1, _2;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	zephir_get_strval(&name, name_param);


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSVS(&_2, &_1, "/", &name, "/state");
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Containers, setState) {

	zend_bool force, stateful, wait;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *action_param = NULL, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, options, _0, response, _1, _2, _3, _4$$3, _5$$3, _6$$3, _7$$3, _8$$3, _9$$3;
	zval name, action;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&action);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 4, &name_param, &action_param, &timeout_param, &force_param, &stateful_param, &wait_param);

	zephir_get_strval(&name, name_param);
	zephir_get_strval(&action, action_param);
	if (!timeout_param) {
		timeout = 30;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
		force = zephir_get_boolval(force_param);
	}
	if (!stateful_param) {
		stateful = 0;
	} else {
		stateful = zephir_get_boolval(stateful_param);
	}
	if (!wait_param) {
		wait = 0;
	} else {
		wait = zephir_get_boolval(wait_param);
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
	zephir_read_property(&_2, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVS(&_3, &_2, "/", &name, "/state");
	ZEPHIR_CALL_METHOD(&response, &_1, "put", NULL, 0, &_3, &options);
	zephir_check_call_status();
	if (wait) {
		zephir_read_property(&_4$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_5$$3, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_6$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 71 TSRMLS_CC);
		zephir_array_fetch_string(&_7$$3, &_6$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 71 TSRMLS_CC);
		ZEPHIR_SINIT_VAR(_8$$3);
		ZVAL_LONG(&_8$$3, timeout);
		ZEPHIR_INIT_VAR(&_9$$3);
		ZEPHIR_CONCAT_VSVSV(&_9$$3, &_5$$3, "/", &_7$$3, "/wait?timeout=", &_8$$3);
		ZEPHIR_CALL_METHOD(&response, &_4$$3, "get", NULL, 0, &_9$$3);
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

	zephir_get_strval(&name, name_param);
	if (!timeout_param) {
		timeout = 30;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
		force = zephir_get_boolval(force_param);
	}
	if (!stateful_param) {
		stateful = 0;
	} else {
		stateful = zephir_get_boolval(stateful_param);
	}
	if (!wait_param) {
		wait = 0;
	} else {
		wait = zephir_get_boolval(wait_param);
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
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 0, &name, &_0, &_1, &_2, &_3, &_4);
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

	zephir_get_strval(&name, name_param);
	if (!timeout_param) {
		timeout = 30;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
		force = zephir_get_boolval(force_param);
	}
	if (!stateful_param) {
		stateful = 0;
	} else {
		stateful = zephir_get_boolval(stateful_param);
	}
	if (!wait_param) {
		wait = 0;
	} else {
		wait = zephir_get_boolval(wait_param);
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
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 0, &name, &_0, &_1, &_2, &_3, &_4);
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

	zephir_get_strval(&name, name_param);
	if (!timeout_param) {
		timeout = 30;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
		force = zephir_get_boolval(force_param);
	}
	if (!stateful_param) {
		stateful = 0;
	} else {
		stateful = zephir_get_boolval(stateful_param);
	}
	if (!wait_param) {
		wait = 0;
	} else {
		wait = zephir_get_boolval(wait_param);
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
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 0, &name, &_0, &_1, &_2, &_3, &_4);
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

	zephir_get_strval(&name, name_param);
	if (!timeout_param) {
		timeout = 30;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
		force = zephir_get_boolval(force_param);
	}
	if (!stateful_param) {
		stateful = 0;
	} else {
		stateful = zephir_get_boolval(stateful_param);
	}
	if (!wait_param) {
		wait = 0;
	} else {
		wait = zephir_get_boolval(wait_param);
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
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 0, &name, &_0, &_1, &_2, &_3, &_4);
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

	zephir_get_strval(&name, name_param);
	if (!timeout_param) {
		timeout = 30;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}
	if (!force_param) {
		force = 0;
	} else {
		force = zephir_get_boolval(force_param);
	}
	if (!stateful_param) {
		stateful = 0;
	} else {
		stateful = zephir_get_boolval(stateful_param);
	}
	if (!wait_param) {
		wait = 0;
	} else {
		wait = zephir_get_boolval(wait_param);
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
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstate", NULL, 0, &name, &_0, &_1, &_2, &_3, &_4);
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

	zephir_get_arrval(&options, options_param);


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
		ZEPHIR_CALL_FUNCTION(&_1$$3, "array_flip", NULL, 10, &only);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&opts, "array_intersect_key", NULL, 11, &options, &_1$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_2$$3, &opts, SL("source"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 169 TSRMLS_CC);
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
	zephir_is_iterable(&_3, 0, "lxd/endpoints/containers.zep", 177);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_3), _5)
	{
		ZEPHIR_INIT_NVAR(&attr);
		ZVAL_COPY(&attr, _5);
		_6$$4 = zephir_array_isset(&options, &attr);
		if (_6$$4) {
			zephir_array_fetch(&_7$$4, &options, &attr, PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 173 TSRMLS_CC);
			_6$$4 = !(ZEPHIR_IS_EMPTY(&_7$$4));
		}
		if (_6$$4) {
			zephir_create_array(return_value, 1, 0 TSRMLS_CC);
			ZEPHIR_OBS_NVAR(&_8$$5);
			zephir_array_fetch(&_8$$5, &options, &attr, PH_NOISY, "lxd/endpoints/containers.zep", 174 TSRMLS_CC);
			zephir_array_update_zval(return_value, &attr, &_8$$5, PH_COPY);
			RETURN_MM();
		}
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&attr);
	array_init(return_value);
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Containers, getOptions) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval options;
	zval *name_param = NULL, *options_param = NULL, only, opts, _0, _1;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&only);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &options_param);

	zephir_get_strval(&name, name_param);
	zephir_get_arrval(&options, options_param);


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
	ZEPHIR_CALL_FUNCTION(&_1, "array_flip", NULL, 10, &only);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&opts, "array_intersect_key", NULL, 11, &options, &_1);
	zephir_check_call_status();
	zephir_array_update_string(&opts, SL("name"), &name, PH_COPY | PH_SEPARATE);
	RETURN_CCTOR(&opts);

}

PHP_METHOD(Lxd_Endpoints_Containers, getEmptyOptions) {

	zend_bool _2$$3;
	zephir_fcall_cache_entry *_6 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval options;
	zval *name_param = NULL, *options_param = NULL, attrs, attr, opts, _0, *_1, _3$$3, _4$$4, _5$$4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&attrs);
	ZVAL_UNDEF(&attr);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &options_param);

	zephir_get_strval(&name, name_param);
	zephir_get_arrval(&options, options_param);


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
	zephir_is_iterable(&attrs, 0, "lxd/endpoints/containers.zep", 218);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&attrs), _1)
	{
		ZEPHIR_INIT_NVAR(&attr);
		ZVAL_COPY(&attr, _1);
		_2$$3 = zephir_array_isset(&options, &attr);
		if (_2$$3) {
			zephir_array_fetch(&_3$$3, &options, &attr, PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 213 TSRMLS_CC);
			_2$$3 = !(ZEPHIR_IS_EMPTY(&_3$$3));
		}
		if (_2$$3) {
			ZEPHIR_INIT_NVAR(&_4$$4);
			object_init_ex(&_4$$4, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_INIT_LNVAR(_5$$4);
			ZEPHIR_CONCAT_SV(&_5$$4, "empty => true is not compatible with ", &attr);
			ZEPHIR_CALL_METHOD(NULL, &_4$$4, "__construct", &_6, 2, &_5$$4);
			zephir_check_call_status();
			zephir_throw_exception_debug(&_4$$4, "lxd/endpoints/containers.zep", 214 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&attr);
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 12, &name, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "none");
	zephir_array_update_multi(&opts, &_0 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	RETURN_CCTOR(&opts);

}

PHP_METHOD(Lxd_Endpoints_Containers, getRemoteImageOptions) {

	zend_bool _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval source, options, _2;
	zval *name_param = NULL, *source_param = NULL, *options_param = NULL, only, opts, remoteOptions, _1, _3, _4, _5;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&only);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&remoteOptions);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&source);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &name_param, &source_param, &options_param);

	zephir_get_strval(&name, name_param);
	zephir_get_arrval(&source, source_param);
	zephir_get_arrval(&options, options_param);


	_0 = zephir_array_isset_string(&options, SL("protocol"));
	if (_0) {
		zephir_array_fetch_string(&_1, &options, SL("protocol"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 228 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_2);
		zephir_create_array(&_2, 2, 0 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_3);
		ZVAL_STRING(&_3, "lxd");
		zephir_array_fast_append(&_2, &_3);
		ZEPHIR_INIT_NVAR(&_3);
		ZVAL_STRING(&_3, "simplestreams");
		zephir_array_fast_append(&_2, &_3);
		_0 = !(zephir_fast_in_array(&_1, &_2 TSRMLS_CC));
	}
	if (_0) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Invalid protocol.  Valid choices: lxd, simplestreams", "lxd/endpoints/containers.zep", 229);
		return;
	}
	ZEPHIR_INIT_VAR(&only);
	zephir_create_array(&only, 4, 0 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "server");
	zephir_array_fast_append(&only, &_3);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "secret");
	zephir_array_fast_append(&only, &_3);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "protocol");
	zephir_array_fast_append(&only, &_3);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "certificate");
	zephir_array_fast_append(&only, &_3);
	ZEPHIR_CALL_FUNCTION(&_4, "array_flip", NULL, 10, &only);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&remoteOptions, "array_intersect_key", NULL, 11, &options, &_4);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 12, &name, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_3);
	zephir_fast_array_merge(&_3, &source, &remoteOptions TSRMLS_CC);
	zephir_array_update_string(&opts, SL("source"), &_3, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_5);
	ZVAL_STRING(&_5, "image");
	zephir_array_update_multi(&opts, &_5 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	ZEPHIR_INIT_NVAR(&_5);
	ZVAL_STRING(&_5, "pull");
	zephir_array_update_multi(&opts, &_5 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("mode"));
	RETURN_CCTOR(&opts);

}

PHP_METHOD(Lxd_Endpoints_Containers, getLocalImageOptions) {

	zend_bool _2$$3;
	zephir_fcall_cache_entry *_6 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval source, options;
	zval *name_param = NULL, *source_param = NULL, *options_param = NULL, attrs, attr, opts, _0, *_1, _3$$3, _4$$4, _5$$4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&attrs);
	ZVAL_UNDEF(&attr);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&source);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &name_param, &source_param, &options_param);

	zephir_get_strval(&name, name_param);
	zephir_get_arrval(&source, source_param);
	zephir_get_arrval(&options, options_param);


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
	zephir_is_iterable(&attrs, 0, "lxd/endpoints/containers.zep", 264);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&attrs), _1)
	{
		ZEPHIR_INIT_NVAR(&attr);
		ZVAL_COPY(&attr, _1);
		_2$$3 = zephir_array_isset(&options, &attr);
		if (_2$$3) {
			zephir_array_fetch(&_3$$3, &options, &attr, PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 259 TSRMLS_CC);
			_2$$3 = !(ZEPHIR_IS_EMPTY(&_3$$3));
		}
		if (_2$$3) {
			ZEPHIR_INIT_NVAR(&_4$$4);
			object_init_ex(&_4$$4, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_INIT_LNVAR(_5$$4);
			ZEPHIR_CONCAT_SV(&_5$$4, "Only setting remote server is compatible with ", &attr);
			ZEPHIR_CALL_METHOD(NULL, &_4$$4, "__construct", &_6, 2, &_5$$4);
			zephir_check_call_status();
			zephir_throw_exception_debug(&_4$$4, "lxd/endpoints/containers.zep", 260 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&attr);
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 12, &name, &options);
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
	zend_bool wait, _0, _2, _3, _5, _7;
	zval options;
	zval *name_param = NULL, *options_param = NULL, *wait_param = NULL, source, opts, response, _1, _4, _6, _8, _9, _10, _11$$8, _12$$8, _13$$8, _14$$8, _15$$8;
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
	ZVAL_UNDEF(&_11$$8);
	ZVAL_UNDEF(&_12$$8);
	ZVAL_UNDEF(&_13$$8);
	ZVAL_UNDEF(&_14$$8);
	ZVAL_UNDEF(&_15$$8);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &name_param, &options_param, &wait_param);

	zephir_get_strval(&name, name_param);
	zephir_get_arrval(&options, options_param);
	if (!wait_param) {
		wait = 0;
	} else {
		wait = zephir_get_boolval(wait_param);
	}


	ZEPHIR_CALL_METHOD(&source, this_ptr, "getsource", NULL, 13, &options);
	zephir_check_call_status();
	_0 = zephir_array_isset_string(&options, SL("empty"));
	if (_0) {
		zephir_array_fetch_string(&_1, &options, SL("empty"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 280 TSRMLS_CC);
		_0 = ZEPHIR_IS_EMPTY(&_1);
	}
	_2 = _0;
	if (_2) {
		_2 = ZEPHIR_IS_EMPTY(&source);
	}
	if (_2) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Source empty", "lxd/endpoints/containers.zep", 281);
		return;
	}
	_3 = zephir_array_isset_string(&options, SL("empty"));
	if (_3) {
		zephir_array_fetch_string(&_4, &options, SL("empty"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 284 TSRMLS_CC);
		_3 = ZEPHIR_IS_EMPTY(&_4);
	}
	_5 = zephir_array_isset_string(&options, SL("empty"));
	if (_5) {
		zephir_array_fetch_string(&_6, &options, SL("empty"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 287 TSRMLS_CC);
		_5 = zephir_is_true(&_6);
	}
	_7 = zephir_array_isset_string(&options, SL("server"));
	if (_7) {
		zephir_array_fetch_string(&_8, &options, SL("server"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 289 TSRMLS_CC);
		_7 = !(ZEPHIR_IS_EMPTY(&_8));
	}
	if (_3) {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 12, &name, &options);
		zephir_check_call_status();
		zephir_array_update_string(&opts, SL("source"), &source, PH_COPY | PH_SEPARATE);
	} else if (_5) {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getemptyoptions", NULL, 14, &name, &options);
		zephir_check_call_status();
	} else if (_7) {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getremoteimageoptions", NULL, 15, &name, &source, &options);
		zephir_check_call_status();
	} else {
		ZEPHIR_CALL_METHOD(&opts, this_ptr, "getlocalimageoptions", NULL, 16, &name, &source, &options);
		zephir_check_call_status();
	}
	zephir_read_property(&_9, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_10, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&response, &_9, "post", NULL, 0, &_10, &opts);
	zephir_check_call_status();
	if (wait) {
		zephir_read_property(&_11$$8, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_12$$8, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_13$$8, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 298 TSRMLS_CC);
		zephir_array_fetch_string(&_14$$8, &_13$$8, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 298 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_15$$8);
		ZEPHIR_CONCAT_VSVS(&_15$$8, &_12$$8, "/", &_14$$8, "/wait");
		ZEPHIR_CALL_METHOD(&response, &_11$$8, "get", NULL, 0, &_15$$8);
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

	zephir_get_strval(&fingerprint, fingerprint_param);


	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 0, &fingerprint);
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

	zephir_get_strval(&fingerprint, fingerprint_param);


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", &fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

