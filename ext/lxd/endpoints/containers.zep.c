
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


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Containers, lxd, endpoints_containers, lxd_endpoint_ce, lxd_endpoints_containers_method_entry, 0);

	zend_declare_property_null(lxd_endpoints_containers_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_endpoints_containers_ce, SL("endpoint"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Lxd_Endpoints_Containers, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Containers");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_containers_ce, getThis(), "__construct", &_0, 0, config, curl, &_1);
	zephir_check_call_status();
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_3, &_2, SL("url"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 14 TSRMLS_CC);
	zephir_read_property(&_4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_5, &_4, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 14 TSRMLS_CC);
	zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_7, &_6, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 14 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_8);
	ZEPHIR_CONCAT_VSVSV(&_8, &_3, "/", &_5, "/", &_7);
	zephir_update_property_zval(this_ptr, SL("endpoint"), &_8);
	ZEPHIR_MM_RESTORE();

}

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
	zephir_array_fetch_string(&_2, &response, SL("metadata"), PH_NOISY, "lxd/endpoints/containers.zep", 22 TSRMLS_CC);
	zephir_get_arrval(&_3, &_2);
	zephir_is_iterable(&_3, 0, "lxd/endpoints/containers.zep", 25);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&_3), _4)
	{
		ZEPHIR_INIT_NVAR(&item);
		ZVAL_COPY(&item, _4);
		ZEPHIR_INIT_NVAR(&_5$$3);
		zephir_read_property(&_6$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_7$$3, &_6$$3, SL("version"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 23 TSRMLS_CC);
		zephir_read_property(&_8$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_9$$3, &_8$$3, SL("endpoint"), PH_NOISY | PH_READONLY, "lxd/endpoints/containers.zep", 23 TSRMLS_CC);
		ZEPHIR_INIT_LNVAR(_10$$3);
		ZEPHIR_CONCAT_SVSVS(&_10$$3, "/", &_7$$3, "/", &_9$$3, "/");
		zephir_fast_str_replace(&_5$$3, &_10$$3, &__$null, &item TSRMLS_CC);
		zephir_array_append(&ret, &_5$$3, PH_SEPARATE, "lxd/endpoints/containers.zep", 23);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&item);
	RETURN_CCTOR(&ret);

}

PHP_METHOD(Lxd_Endpoints_Containers, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name, name_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Containers, state) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name, name_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSVS(&_2, &_1, "/", name, "/state");
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Containers, setState) {

	zend_bool force, stateful, wait;
	zend_long timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *name, name_sub, *action, action_sub, *timeout_param = NULL, *force_param = NULL, *stateful_param = NULL, *wait_param = NULL, options, _0, response, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 4, &name, &action, &timeout_param, &force_param, &stateful_param, &wait_param);

	if (!timeout_param) {
		timeout = 30;
	} else {
		timeout = zephir_get_intval(timeout_param);
	}
	if (!force_param) {
		force = 1;
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
	zephir_array_update_string(&options, SL("action"), action, PH_COPY | PH_SEPARATE);
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
	ZEPHIR_CONCAT_VSVS(&_3, &_2, "/", name, "/state");
	ZEPHIR_CALL_METHOD(&response, &_1, "put", NULL, 0, &_3, &options);
	zephir_check_call_status();
	if (wait) {
	}
	RETURN_CCTOR(&response);

}

PHP_METHOD(Lxd_Endpoints_Containers, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint, fingerprint_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint_sub);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint);



	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 0, fingerprint);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Lxd_Endpoints_Containers, remove) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *fingerprint, fingerprint_sub, _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &fingerprint);



	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VSV(&_2, &_1, "/", fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

