
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
#include "kernel/array.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/concat.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Networks) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Networks, lxd, endpoints_networks, lxd_endpoint_ce, lxd_endpoints_networks_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lxd_endpoints_networks_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zephir_declare_class_constant_string(lxd_endpoints_networks_ce, SL("ENDPOINT"), "networks");

	return SUCCESS;

}

/**
 * Class construct
 *
 * @param  array          config Config array which holds object configuration
 * @param  <Lxd\Lib\Curl> curl
 * @return void
 */
PHP_METHOD(Lxd_Endpoints_Networks, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Networks");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_networks_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, all) {

	zend_string *_8;
	zend_ulong _7;
	zval _5;
	zval response, _0, _1, _2, _3, item, key, _4, *_6, _9$$4;
	zephir_fcall_cache_entry *_10 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_5);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&response);
	zephir_create_array(&response, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	array_init(&_0);
	zephir_array_update_string(&response, SL("metadata"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "networks");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_1, "get", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_string(&_3, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/networks.zep", 51 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_3, "error")) {
		RETURN_CCTOR(&response);
	}
	ZEPHIR_OBS_VAR(&_4);
	zephir_array_fetch_string(&_4, &response, SL("metadata"), PH_NOISY, "lxd/endpoints/networks.zep", 56 TSRMLS_CC);
	zephir_get_arrval(&_5, &_4);
	zephir_is_iterable(&_5, 0, "lxd/endpoints/networks.zep", 60);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_5), _7, _8, _6)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_8 != NULL) { 
			ZVAL_STR_COPY(&key, _8);
		} else {
			ZVAL_LONG(&key, _7);
		}
		ZEPHIR_INIT_NVAR(&item);
		ZVAL_COPY(&item, _6);
		ZEPHIR_CALL_METHOD(&_9$$4, this_ptr, "stripendpoint", &_10, 12, &item);
		zephir_check_call_status();
		zephir_array_update_multi(&response, &_9$$4 TSRMLS_CC, SL("sz"), 3, SL("metadata"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, info) {

	zend_string *_11;
	zend_ulong _10;
	zval _0, _8;
	zephir_fcall_cache_entry *_14 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, __$null, response, _1, _2, _3, _4, _5, item, key, _6, _7, *_9, _12$$4, _13$$4, _15$$4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&item);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_12$$4);
	ZVAL_UNDEF(&_13$$4);
	ZVAL_UNDEF(&_15$$4);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_8);

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
	zephir_create_array(&_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	array_init(&_1);
	zephir_array_update_string(&_0, SL("used_by"), &_1, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&response, SL("metadata"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_2, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "networks");
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "getbase", NULL, 11, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_4);
	ZEPHIR_CONCAT_VSV(&_4, &_3, "/", &name);
	ZEPHIR_CALL_METHOD(&response, &_2, "get", NULL, 0, &_4);
	zephir_check_call_status();
	zephir_array_fetch_string(&_5, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/networks.zep", 76 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_5, "error")) {
		RETURN_CCTOR(&response);
	}
	zephir_array_fetch_string(&_6, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/networks.zep", 81 TSRMLS_CC);
	ZEPHIR_OBS_VAR(&_7);
	zephir_array_fetch_string(&_7, &_6, SL("used_by"), PH_NOISY, "lxd/endpoints/networks.zep", 81 TSRMLS_CC);
	zephir_get_arrval(&_8, &_7);
	zephir_is_iterable(&_8, 0, "lxd/endpoints/networks.zep", 85);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_8), _10, _11, _9)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_11 != NULL) { 
			ZVAL_STR_COPY(&key, _11);
		} else {
			ZVAL_LONG(&key, _10);
		}
		ZEPHIR_INIT_NVAR(&item);
		ZVAL_COPY(&item, _9);
		ZEPHIR_INIT_NVAR(&_12$$4);
		ZEPHIR_CALL_METHOD(&_13$$4, this_ptr, "getversion", &_14, 3);
		zephir_check_call_status();
		ZEPHIR_INIT_LNVAR(_15$$4);
		ZEPHIR_CONCAT_SVS(&_15$$4, "/", &_13$$4, "/containers/");
		zephir_fast_str_replace(&_12$$4, &_15$$4, &__$null, &item TSRMLS_CC);
		zephir_array_update_multi(&response, &_12$$4 TSRMLS_CC, SL("ssz"), 5, SL("metadata"), SL("used_by"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&item);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, create) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool managed;
	zval config;
	zval *name_param = NULL, *description_param = NULL, *config_param = NULL, *type_param = NULL, *managed_param = NULL, opt, _0, _1, _2;
	zval name, description, type;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&type);
	ZVAL_UNDEF(&opt);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&config);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 3, &name_param, &description_param, &config_param, &type_param, &managed_param);

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
	if (UNEXPECTED(Z_TYPE_P(description_param) != IS_STRING && Z_TYPE_P(description_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'description' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(description_param) == IS_STRING)) {
		zephir_get_strval(&description, description_param);
	} else {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_EMPTY_STRING(&description);
	}
	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}
	if (!type_param) {
		ZEPHIR_INIT_VAR(&type);
		ZVAL_STRING(&type, "bridge");
	} else {
	if (UNEXPECTED(Z_TYPE_P(type_param) != IS_STRING && Z_TYPE_P(type_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'type' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(type_param) == IS_STRING)) {
		zephir_get_strval(&type, type_param);
	} else {
		ZEPHIR_INIT_VAR(&type);
		ZVAL_EMPTY_STRING(&type);
	}
	}
	if (!managed_param) {
		managed = 1;
	} else {
	if (UNEXPECTED(Z_TYPE_P(managed_param) != IS_TRUE && Z_TYPE_P(managed_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'managed' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	managed = (Z_TYPE_P(managed_param) == IS_TRUE);
	}


	ZEPHIR_INIT_VAR(&opt);
	zephir_create_array(&opt, 5, 0 TSRMLS_CC);
	zephir_array_update_string(&opt, SL("name"), &name, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("description"), &description, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("config"), &config, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("type"), &type, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_BOOL(&_0, managed);
	zephir_array_update_string(&opt, SL("managed"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "networks");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(&_1, "post", NULL, 0, &_2, &opt);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, rename) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *newName_param = NULL, opt, _0, _1, _2, _3;
	zval name, newName;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&newName);
	ZVAL_UNDEF(&opt);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &newName_param);

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
	if (UNEXPECTED(Z_TYPE_P(newName_param) != IS_STRING && Z_TYPE_P(newName_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'newName' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(newName_param) == IS_STRING)) {
		zephir_get_strval(&newName, newName_param);
	} else {
		ZEPHIR_INIT_VAR(&newName);
		ZVAL_EMPTY_STRING(&newName);
	}


	ZEPHIR_INIT_VAR(&opt);
	zephir_create_array(&opt, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&opt, SL("name"), &newName, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "networks");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "post", NULL, 0, &_3, &opt);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, replace) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool managed;
	zval config;
	zval *name_param = NULL, *description_param = NULL, *config_param = NULL, *type_param = NULL, *managed_param = NULL, opt, _0, _1, _2, _3;
	zval name, description, type;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&type);
	ZVAL_UNDEF(&opt);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&config);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 3, &name_param, &description_param, &config_param, &type_param, &managed_param);

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
	if (UNEXPECTED(Z_TYPE_P(description_param) != IS_STRING && Z_TYPE_P(description_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'description' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(description_param) == IS_STRING)) {
		zephir_get_strval(&description, description_param);
	} else {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_EMPTY_STRING(&description);
	}
	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}
	if (!type_param) {
		ZEPHIR_INIT_VAR(&type);
		ZVAL_STRING(&type, "bridge");
	} else {
	if (UNEXPECTED(Z_TYPE_P(type_param) != IS_STRING && Z_TYPE_P(type_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'type' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(type_param) == IS_STRING)) {
		zephir_get_strval(&type, type_param);
	} else {
		ZEPHIR_INIT_VAR(&type);
		ZVAL_EMPTY_STRING(&type);
	}
	}
	if (!managed_param) {
		managed = 1;
	} else {
	if (UNEXPECTED(Z_TYPE_P(managed_param) != IS_TRUE && Z_TYPE_P(managed_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'managed' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	managed = (Z_TYPE_P(managed_param) == IS_TRUE);
	}


	ZEPHIR_INIT_VAR(&opt);
	zephir_create_array(&opt, 5, 0 TSRMLS_CC);
	zephir_array_update_string(&opt, SL("name"), &name, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("description"), &description, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("config"), &config, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("type"), &type, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_BOOL(&_0, managed);
	zephir_array_update_string(&opt, SL("managed"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "networks");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_2, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_1, "put", NULL, 0, &_3, &opt);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, update) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool managed;
	zval config;
	zval *name_param = NULL, *description_param = NULL, *config_param = NULL, *type_param = NULL, *managed_param = NULL, opt, _0, _1, _2, _3;
	zval name, description, type;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&type);
	ZVAL_UNDEF(&opt);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&config);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 3, &name_param, &description_param, &config_param, &type_param, &managed_param);

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
	if (UNEXPECTED(Z_TYPE_P(description_param) != IS_STRING && Z_TYPE_P(description_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'description' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(description_param) == IS_STRING)) {
		zephir_get_strval(&description, description_param);
	} else {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_EMPTY_STRING(&description);
	}
	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}
	if (!type_param) {
		ZEPHIR_INIT_VAR(&type);
		ZVAL_STRING(&type, "bridge");
	} else {
	if (UNEXPECTED(Z_TYPE_P(type_param) != IS_STRING && Z_TYPE_P(type_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'type' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(type_param) == IS_STRING)) {
		zephir_get_strval(&type, type_param);
	} else {
		ZEPHIR_INIT_VAR(&type);
		ZVAL_EMPTY_STRING(&type);
	}
	}
	if (!managed_param) {
		managed = 1;
	} else {
	if (UNEXPECTED(Z_TYPE_P(managed_param) != IS_TRUE && Z_TYPE_P(managed_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'managed' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	managed = (Z_TYPE_P(managed_param) == IS_TRUE);
	}


	ZEPHIR_INIT_VAR(&opt);
	zephir_create_array(&opt, 5, 0 TSRMLS_CC);
	zephir_array_update_string(&opt, SL("name"), &name, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("description"), &description, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("config"), &config, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&opt, SL("type"), &type, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_BOOL(&_0, managed);
	zephir_array_update_string(&opt, SL("managed"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "networks");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_2, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_1, "patch", NULL, 0, &_3, &opt);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, remove) {

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
	ZVAL_STRING(&_2, "networks");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Endpoints_Networks, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);

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


	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 28, &name);
	zephir_check_call_status();
	RETURN_MM();

}

