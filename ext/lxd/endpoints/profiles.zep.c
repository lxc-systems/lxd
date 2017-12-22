
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
#include "kernel/string.h"
#include "kernel/concat.h"


/**
 * Lxd\Endpoints\Profiles
 *
 * Provides profiles facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/profiles.zep
 */
ZEPHIR_INIT_CLASS(Lxd_Endpoints_Profiles) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Profiles, lxd, endpoints_profiles, lxd_endpoint_ce, lxd_endpoints_profiles_method_entry, ZEND_ACC_FINAL_CLASS);

	/**
	 * @var
	 */
	zend_declare_property_null(lxd_endpoints_profiles_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	/**
	 * @var - Base API endpoint
	 */
	zephir_declare_class_constant_string(lxd_endpoints_profiles_ce, SL("ENDPOINT"), "profiles");

	return SUCCESS;

}

/**
 * Class construct
 *
 * @param  array          config Config array which holds object configuration
 * @param  <Lxd\Lib\Curl> curl
 * @return void
 */
PHP_METHOD(Lxd_Endpoints_Profiles, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Profiles");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_profiles_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 * List of all profiles.
 *
 * <code>
 *  $lxd->profiles->all();
 * </code>
 *
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, all) {

	zend_string *_7;
	zend_ulong _6;
	zval __$null, key, value, response, _0, _1, _2, _3, _4, *_5, _8$$4, _9$$4, _11$$4;
	zephir_fcall_cache_entry *_10 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_8$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_11$$4);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&response);
	zephir_create_array(&response, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	array_init(&_0);
	zephir_array_update_string(&response, SL("metadata"), &_0, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_1, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "profiles");
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "getbase", NULL, 11, &_0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_1, "get", NULL, 0, &_2);
	zephir_check_call_status();
	zephir_array_fetch_string(&_3, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/profiles.zep", 71 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_3, "error")) {
		RETURN_CCTOR(&response);
	}
	zephir_array_fetch_string(&_4, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/profiles.zep", 75 TSRMLS_CC);
	zephir_is_iterable(&_4, 0, "lxd/endpoints/profiles.zep", 81);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_4), _6, _7, _5)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_7 != NULL) { 
			ZVAL_STR_COPY(&key, _7);
		} else {
			ZVAL_LONG(&key, _6);
		}
		ZEPHIR_INIT_NVAR(&value);
		ZVAL_COPY(&value, _5);
		ZEPHIR_INIT_NVAR(&_8$$4);
		ZEPHIR_CALL_METHOD(&_9$$4, this_ptr, "getversion", &_10, 3);
		zephir_check_call_status();
		ZEPHIR_INIT_LNVAR(_11$$4);
		ZEPHIR_CONCAT_SVSSS(&_11$$4, "/", &_9$$4, "/", "profiles", "/");
		zephir_fast_str_replace(&_8$$4, &_11$$4, &__$null, &value TSRMLS_CC);
		zephir_array_update_multi(&response, &_8$$4 TSRMLS_CC, SL("sz"), 3, SL("metadata"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&value);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 * Show information on a profile.
 *
 * <code>
 *  $lxd->profiles->info('profile-name');
 * </code>
 *
 * @param  string name  Name of profile
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, info) {

	zend_string *_10;
	zend_ulong _9;
	zval _0;
	zephir_fcall_cache_entry *_13 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, __$null, key, value, response, _1, _2, _3, _4, _5, _6, _7, *_8, _11$$4, _12$$4, _14$$4;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_11$$4);
	ZVAL_UNDEF(&_12$$4);
	ZVAL_UNDEF(&_14$$4);
	ZVAL_UNDEF(&_0);

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
	ZVAL_STRING(&_1, "profiles");
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "getbase", NULL, 11, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_4);
	ZEPHIR_CONCAT_VSV(&_4, &_3, "/", &name);
	ZEPHIR_CALL_METHOD(&response, &_2, "get", NULL, 0, &_4);
	zephir_check_call_status();
	zephir_array_fetch_string(&_5, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/profiles.zep", 106 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_5, "error")) {
		RETURN_CCTOR(&response);
	}
	zephir_array_fetch_string(&_6, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/profiles.zep", 110 TSRMLS_CC);
	zephir_array_fetch_string(&_7, &_6, SL("used_by"), PH_NOISY | PH_READONLY, "lxd/endpoints/profiles.zep", 110 TSRMLS_CC);
	zephir_is_iterable(&_7, 0, "lxd/endpoints/profiles.zep", 116);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_7), _9, _10, _8)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_10 != NULL) { 
			ZVAL_STR_COPY(&key, _10);
		} else {
			ZVAL_LONG(&key, _9);
		}
		ZEPHIR_INIT_NVAR(&value);
		ZVAL_COPY(&value, _8);
		ZEPHIR_INIT_NVAR(&_11$$4);
		ZEPHIR_CALL_METHOD(&_12$$4, this_ptr, "getversion", &_13, 3);
		zephir_check_call_status();
		ZEPHIR_INIT_LNVAR(_14$$4);
		ZEPHIR_CONCAT_SVSSS(&_14$$4, "/", &_12$$4, "/", "containers", "/");
		zephir_fast_str_replace(&_11$$4, &_14$$4, &__$null, &value TSRMLS_CC);
		zephir_array_update_multi(&response, &_11$$4 TSRMLS_CC, SL("ssz"), 5, SL("metadata"), SL("used_by"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&value);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 * Create a new profile.
 *
 * <code>
 *  $lxd->profiles->create(
 *      'profile-name',
 *      'My new profile',
 *      ["limits.memory" => "1GB"],
 *      [
 *          "kvm" => [
 *              "type" => "unix-char",
 *              "path" => "/dev/kvm"
 *          ],
 *      ]
 *  );
 * </code>
 *
 * @param  string name        Name of profile
 * @param  string description Description of profile
 * @param  array  config      Config for profile
 * @param  array  devices     Devices for profile
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, create) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval config, devices;
	zval *name_param = NULL, *description_param = NULL, *config_param = NULL, *devices_param = NULL, profile, _0, _1, _2;
	zval name, description;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&profile);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&devices);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 3, &name_param, &description_param, &config_param, &devices_param);

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
	if (!description_param) {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_STRING(&description, "");
	} else {
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
	}
	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}
	if (!devices_param) {
		ZEPHIR_INIT_VAR(&devices);
		array_init(&devices);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&devices, devices_param);
	}


	ZEPHIR_INIT_VAR(&profile);
	zephir_create_array(&profile, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&profile, SL("name"), &name, PH_COPY | PH_SEPARATE);
	if (!(ZEPHIR_IS_EMPTY(&description))) {
		zephir_array_update_string(&profile, SL("description"), &description, PH_COPY | PH_SEPARATE);
	}
	if (!(ZEPHIR_IS_EMPTY(&config))) {
		zephir_array_update_string(&profile, SL("config"), &config, PH_COPY | PH_SEPARATE);
	}
	if (!(ZEPHIR_IS_EMPTY(&devices))) {
		zephir_array_update_string(&profile, SL("devices"), &devices, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "profiles");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_METHOD(&_0, "post", NULL, 0, &_1, &profile);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Update profile.
 *
 * <code>
 *  $lxd->profiles->update(
 *      'profile-name',
 *      'My new profile',
 *      ["limits.memory" => "1GB"],
 *      [
 *          "kvm" => [
 *              "type" => "unix-char",
 *              "path" => "/dev/kvm"
 *          ],
 *      ]
 *  );
 * </code>
 *
 * @param  string name        Name of profile
 * @param  string description Description of profile
 * @param  array  config      Config for profile
 * @param  array  devices     Devices for profile
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, update) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval config, devices;
	zval *name_param = NULL, *description_param = NULL, *config_param = NULL, *devices_param = NULL, profile, _0, _1, _2, _3;
	zval name, description;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&profile);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&devices);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 3, &name_param, &description_param, &config_param, &devices_param);

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
	if (!description_param) {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_STRING(&description, "");
	} else {
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
	}
	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}
	if (!devices_param) {
		ZEPHIR_INIT_VAR(&devices);
		array_init(&devices);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&devices, devices_param);
	}


	ZEPHIR_INIT_VAR(&profile);
	array_init(&profile);
	if (!(ZEPHIR_IS_EMPTY(&description))) {
		zephir_array_update_string(&profile, SL("description"), &description, PH_COPY | PH_SEPARATE);
	}
	if (!(ZEPHIR_IS_EMPTY(&config))) {
		zephir_array_update_string(&profile, SL("config"), &config, PH_COPY | PH_SEPARATE);
	}
	if (!(ZEPHIR_IS_EMPTY(&devices))) {
		zephir_array_update_string(&profile, SL("devices"), &devices, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "profiles");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "patch", NULL, 0, &_3, &profile);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Replace profile.
 *
 * <code>
 *  $lxd->profiles->replace(
 *      'profile-name',
 *      'My new profile',
 *      ["limits.memory" => "1GB"],
 *      [
 *          "kvm" => [
 *              "type" => "unix-char",
 *              "path" => "/dev/kvm"
 *          ],
 *      ]
 *  );
 * </code>
 *
 * @param  string name        Name of profile
 * @param  string description Description of profile
 * @param  array  config      Config for profile
 * @param  array  devices     Devices for profile
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, replace) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval config, devices;
	zval *name_param = NULL, *description_param = NULL, *config_param = NULL, *devices_param = NULL, profile, _0, _1, _2, _3;
	zval name, description;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&profile);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&devices);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 3, &name_param, &description_param, &config_param, &devices_param);

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
	if (!description_param) {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_STRING(&description, "");
	} else {
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
	}
	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}
	if (!devices_param) {
		ZEPHIR_INIT_VAR(&devices);
		array_init(&devices);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&devices, devices_param);
	}


	ZEPHIR_INIT_VAR(&profile);
	array_init(&profile);
	if (!(ZEPHIR_IS_EMPTY(&description))) {
		zephir_array_update_string(&profile, SL("description"), &description, PH_COPY | PH_SEPARATE);
	}
	if (!(ZEPHIR_IS_EMPTY(&config))) {
		zephir_array_update_string(&profile, SL("config"), &config, PH_COPY | PH_SEPARATE);
	}
	if (!(ZEPHIR_IS_EMPTY(&devices))) {
		zephir_array_update_string(&profile, SL("devices"), &devices, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "profiles");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "put", NULL, 0, &_3, &profile);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Rename profile.
 *
 * <code>
 *  $lxd->profiles->rename('profile-name', 'new-profile-name');
 * </code>
 *
 * @param  string name     Name of profile
 * @param  string newName  New name of profile
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, rename) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *newName_param = NULL, profile, _0, _1, _2, _3;
	zval name, newName;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&newName);
	ZVAL_UNDEF(&profile);
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


	ZEPHIR_INIT_VAR(&profile);
	zephir_create_array(&profile, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&profile, SL("name"), &newName, PH_COPY | PH_SEPARATE);
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "profiles");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "post", NULL, 0, &_3, &profile);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Remove a profile.
 *
 * <code>
 *  $lxd->profiles->remove('profile-name');
 * </code>
 *
 * @param  string  name  Name of profile
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, remove) {

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
	ZVAL_STRING(&_2, "profiles");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &name);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Delete a profile - alias of remove.
 *
 * <code>
 *  $lxd->profiles->delete('profile-name');
 * </code>
 *
 * @param  string  name  Name of profile
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Profiles, delete) {

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


	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "remove", NULL, 32, &name);
	zephir_check_call_status();
	RETURN_MM();

}

