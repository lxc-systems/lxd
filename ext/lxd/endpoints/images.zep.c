
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
#include "kernel/operators.h"
#include "kernel/concat.h"
#include "kernel/object.h"
#include "kernel/string.h"


/**
 * Lxd\Endpoints\Images
 *
 * Provides image facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/images.zep
 */
ZEPHIR_INIT_CLASS(Lxd_Endpoints_Images) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints, Images, lxd, endpoints_images, lxd_endpoint_ce, lxd_endpoints_images_method_entry, ZEND_ACC_FINAL_CLASS);

	/**
	 * @var
	 */
	zend_declare_property_null(lxd_endpoints_images_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	/**
	 * @var - Base API endpoint
	 */
	zephir_declare_class_constant_string(lxd_endpoints_images_ce, SL("ENDPOINT"), "images");

	return SUCCESS;

}

/**
 * Class construct
 *
 * @param  array          config Config array which holds object configuration
 * @param  <Lxd\Lib\Curl> curl
 * @return void
 */
PHP_METHOD(Lxd_Endpoints_Images, __construct) {

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
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Images");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_images_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 * List of all images.
 *
 * <code>
 *  // images on connected server
 *  $lxd->images->all();
 *
 *  // images on public image server. (URL must include /1.0/images)
 *  $lxd->images->all("https://images.linuxcontainers.org:8443/1.0/images");
 * </code>
 *
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, all) {

	zend_string *_12;
	zend_ulong _11;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *url_param = NULL, __$null, key, value, response, _0, _4, _5, _6, _7, _8, _9, *_10, _1$$3, _2$$3, _13$$6, _14$$6, _15$$6;
	zval url, _3$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&response);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_13$$6);
	ZVAL_UNDEF(&_14$$6);
	ZVAL_UNDEF(&_15$$6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &url_param);

	if (!url_param) {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_STRING(&url, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(url_param) != IS_STRING && Z_TYPE_P(url_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'url' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(url_param) == IS_STRING)) {
		zephir_get_strval(&url, url_param);
	} else {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_EMPTY_STRING(&url);
	}
	}


	ZEPHIR_INIT_VAR(&response);
	zephir_create_array(&response, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	array_init(&_0);
	zephir_array_update_string(&response, SL("metadata"), &_0, PH_COPY | PH_SEPARATE);
	if (ZEPHIR_IS_STRING_IDENTICAL(&url, "")) {
		ZEPHIR_INIT_VAR(&_2$$3);
		ZVAL_STRING(&_2$$3, "images");
		ZEPHIR_CALL_METHOD(&_1$$3, this_ptr, "getbase", NULL, 11, &_2$$3);
		zephir_check_call_status();
		zephir_get_strval(&_3$$3, &_1$$3);
		ZEPHIR_CPY_WRT(&url, &_3$$3);
	}
	ZVAL_LONG(&_4, 5);
	ZEPHIR_CALL_FUNCTION(&_5, "parse_url", NULL, 5, &url, &_4);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_6, this_ptr, "getversion", NULL, 3);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_7);
	ZEPHIR_CONCAT_SVS(&_7, "/", &_6, "/images");
	if (!ZEPHIR_IS_IDENTICAL(&_5, &_7)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Invalid image server URL", "lxd/endpoints/images.zep", 76);
		return;
	}
	zephir_read_property(&_4, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_METHOD(&response, &_4, "get", NULL, 0, &url);
	zephir_check_call_status();
	zephir_array_fetch_string(&_8, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 83 TSRMLS_CC);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_8, "error")) {
		RETURN_CCTOR(&response);
	}
	zephir_array_fetch_string(&_9, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 87 TSRMLS_CC);
	zephir_is_iterable(&_9, 0, "lxd/endpoints/images.zep", 93);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&_9), _11, _12, _10)
	{
		ZEPHIR_INIT_NVAR(&key);
		if (_12 != NULL) { 
			ZVAL_STR_COPY(&key, _12);
		} else {
			ZVAL_LONG(&key, _11);
		}
		ZEPHIR_INIT_NVAR(&value);
		ZVAL_COPY(&value, _10);
		ZEPHIR_INIT_NVAR(&_13$$6);
		ZEPHIR_CALL_METHOD(&_14$$6, this_ptr, "getversion", NULL, 3);
		zephir_check_call_status();
		ZEPHIR_INIT_LNVAR(_15$$6);
		ZEPHIR_CONCAT_SVSSS(&_15$$6, "/", &_14$$6, "/", "images", "/");
		zephir_fast_str_replace(&_13$$6, &_15$$6, &__$null, &value TSRMLS_CC);
		zephir_array_update_multi(&response, &_13$$6 TSRMLS_CC, SL("sz"), 3, SL("metadata"), &key);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&value);
	ZEPHIR_INIT_NVAR(&key);
	RETURN_CCTOR(&response);

}

/**
 * Get image info.
 *
 * <code>
 *  // image info on connected server
 *  $lxd->images->info(null, "images-fingerprint", "secret");
 *
 *  // images on public image server. (URL must include /1.0/images)
 *  $lxd->images->info("https://uk.images.linuxcontainers.org:8443/1.0/images", "images-fingerprint"));
 * </code>
 *
 * @param  null|string  url          null or full URL to public image endpoint
 * @param  string       fingerprint  Fingerprint of image
 * @param  string       secret       Secret for untrusted client
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, info) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *url_param = NULL, *fingerprint_param = NULL, *secret_param = NULL, param, _3, _4, _5, _6, _0$$3, _1$$3;
	zval url, fingerprint, secret, _7, _2$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&fingerprint);
	ZVAL_UNDEF(&secret);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&param);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &url_param, &fingerprint_param, &secret_param);

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
	if (!url_param) {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_STRING(&url, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(url_param) != IS_STRING && Z_TYPE_P(url_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'url' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(url_param) == IS_STRING)) {
		zephir_get_strval(&url, url_param);
	} else {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_EMPTY_STRING(&url);
	}
	}
	if (!secret_param) {
		ZEPHIR_INIT_VAR(&secret);
		ZVAL_STRING(&secret, "");
	} else {
	if (UNEXPECTED(Z_TYPE_P(secret_param) != IS_STRING && Z_TYPE_P(secret_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'secret' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(secret_param) == IS_STRING)) {
		zephir_get_strval(&secret, secret_param);
	} else {
		ZEPHIR_INIT_VAR(&secret);
		ZVAL_EMPTY_STRING(&secret);
	}
	}


	ZEPHIR_INIT_VAR(&param);
	array_init(&param);
	if (ZEPHIR_IS_STRING_IDENTICAL(&url, "")) {
		ZEPHIR_INIT_VAR(&_1$$3);
		ZVAL_STRING(&_1$$3, "images");
		ZEPHIR_CALL_METHOD(&_0$$3, this_ptr, "getbase", NULL, 11, &_1$$3);
		zephir_check_call_status();
		zephir_get_strval(&_2$$3, &_0$$3);
		ZEPHIR_CPY_WRT(&url, &_2$$3);
	}
	ZVAL_LONG(&_3, 5);
	ZEPHIR_CALL_FUNCTION(&_4, "parse_url", NULL, 5, &url, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_5, this_ptr, "getversion", NULL, 3);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_6);
	ZEPHIR_CONCAT_SVS(&_6, "/", &_5, "/images");
	if (!ZEPHIR_IS_IDENTICAL(&_4, &_6)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Invalid image server URL", "lxd/endpoints/images.zep", 121);
		return;
	}
	if (!(ZEPHIR_IS_EMPTY(&secret))) {
		zephir_array_update_string(&param, SL("secret"), &secret, PH_COPY | PH_SEPARATE);
	}
	zephir_read_property(&_3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_7);
	ZEPHIR_CONCAT_VSV(&_7, &url, "/", &fingerprint);
	ZEPHIR_RETURN_CALL_METHOD(&_3, "get", NULL, 0, &_7, &param);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Create a new image.
 *
 * <code>
 *  $lxd->images->create(
 *      [],
 *      [],
 *      true
 *  );
 * </code>
 *
 * @param  array    options  New image options
 * @param  array    headers  Endpoint headers
 * @param  boolean  wait     Wait for image to create
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, create) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _4;
	zval *options_param = NULL, *headers_param = NULL, *wait_param = NULL, response, _0, _1, _2, _3, _5$$3, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _12$$3, _13$$3;
	zval options, headers, _11$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_11$$3);
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

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &options_param, &headers_param, &wait_param);

	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);
	if (!headers_param) {
		ZEPHIR_INIT_VAR(&headers);
		array_init(&headers);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&headers, headers_param);
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
	ZVAL_STRING(&_2, "images");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&response, &_0, "post", NULL, 0, &_1, &options, &headers);
	zephir_check_call_status();
	zephir_array_fetch_string(&_3, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 157 TSRMLS_CC);
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
		zephir_array_fetch_string(&_8$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 159 TSRMLS_CC);
		zephir_array_fetch_string(&_9$$3, &_8$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 159 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_10$$3);
		ZEPHIR_CONCAT_VSVS(&_10$$3, &_6$$3, "/", &_9$$3, "/wait");
		ZEPHIR_INIT_VAR(&_11$$3);
		zephir_create_array(&_11$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_12$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_13$$3);
		zephir_array_fetch_string(&_13$$3, &_12$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/images.zep", 162 TSRMLS_CC);
		zephir_array_update_string(&_11$$3, SL("timeout"), &_13$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_5$$3, "get", NULL, 0, &_10$$3, &_11$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 * Create from remote.
 *
 * <code>
 *  // Import an image by alias
 *  $lxd->images->createFromRemote(
 *      "https://images.linuxcontainers.org:8443",
 *      [
 *          "alias" => "ubuntu/xenial/amd64",
 *      ]
 *  );
 *
 *  // Import an image by fingerprint
 *  $lxd->images->createFromRemote(
 *      "https://images.linuxcontainers.org:8443",
 *      [
 *          "fingerprint" => "b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087",
 *      ]
 *  );     
 *
 *  // Import an image by fingerprint, set auto update and wait for pull
 *  $lxd->images->createFromRemote(
 *      "https://images.linuxcontainers.org:8443",
 *      [
 *          "fingerprint" => "b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087",
 *      ],
 *      true,
 *      true
 *  );
 * </code>
 *
 * @param  array    options  New image options
 * @param  array    headers  Endpoint headers
 * @param  boolean  wait     Wait for image to create
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, createFromRemote) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool autoUpdate, wait, _0;
	zval options, _2;
	zval *server_param = NULL, *options_param = NULL, *autoUpdate_param = NULL, *wait_param = NULL, opts, source, _1, _3, only, remoteOptions, _4, _5, _6, _7;
	zval server;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&server);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&source);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&only);
	ZVAL_UNDEF(&remoteOptions);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 2, &server_param, &options_param, &autoUpdate_param, &wait_param);

	if (UNEXPECTED(Z_TYPE_P(server_param) != IS_STRING && Z_TYPE_P(server_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'server' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(server_param) == IS_STRING)) {
		zephir_get_strval(&server, server_param);
	} else {
		ZEPHIR_INIT_VAR(&server);
		ZVAL_EMPTY_STRING(&server);
	}
	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);
	if (!autoUpdate_param) {
		autoUpdate = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(autoUpdate_param) != IS_TRUE && Z_TYPE_P(autoUpdate_param) != IS_FALSE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'autoUpdate' must be a bool") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	autoUpdate = (Z_TYPE_P(autoUpdate_param) == IS_TRUE);
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


	ZEPHIR_CALL_METHOD(&source, this_ptr, "getsource", NULL, 31, &options);
	zephir_check_call_status();
	_0 = zephir_array_isset_string(&options, SL("protocol"));
	if (_0) {
		zephir_array_fetch_string(&_1, &options, SL("protocol"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 215 TSRMLS_CC);
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
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Invalid protocol.  Valid choices: lxd, simplestreams", "lxd/endpoints/images.zep", 216);
		return;
	}
	ZEPHIR_INIT_VAR(&only);
	zephir_create_array(&only, 3, 0 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "secret");
	zephir_array_fast_append(&only, &_3);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "protocol");
	zephir_array_fast_append(&only, &_3);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "certificate");
	zephir_array_fast_append(&only, &_3);
	ZEPHIR_CALL_FUNCTION(&_4, "array_flip", NULL, 25, &only);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&remoteOptions, "array_intersect_key", NULL, 26, &options, &_4);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 32, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_BOOL(&_3, autoUpdate);
	zephir_array_update_string(&opts, SL("auto_update"), &_3, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_5);
	zephir_fast_array_merge(&_5, &source, &remoteOptions TSRMLS_CC);
	zephir_array_update_string(&opts, SL("source"), &_5, PH_COPY | PH_SEPARATE);
	ZEPHIR_INIT_VAR(&_6);
	ZVAL_STRING(&_6, "image");
	zephir_array_update_multi(&opts, &_6 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	ZEPHIR_INIT_NVAR(&_6);
	ZVAL_STRING(&_6, "pull");
	zephir_array_update_multi(&opts, &_6 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("mode"));
	zephir_array_update_multi(&opts, &server TSRMLS_CC, SL("ss"), 4, SL("source"), SL("server"));
	ZEPHIR_INIT_NVAR(&_6);
	array_init(&_6);
	if (wait) {
		ZVAL_BOOL(&_7, 1);
	} else {
		ZVAL_BOOL(&_7, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "create", NULL, 33, &opts, &_6, &_7);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Create an image from a container.
 *
 * <code>
 *  // Create a private image from container.
 *  $lxd->images->createFromContainer('container-name');
 *
 *  // Create a public image from container
 *  $lxd->images->createFromContainer(
 *      'container-name',
 *      [
 *          'public' => true
 *      ]
 *  );     
 *
 *  // Create an image from container, store properties with the new image and override its filename.
 *  $lxd->images->createFromContainer(
 *      'container-name',
 *      [
 *          'filename'   => 'ubuntu-trusty.tar.gz',
 *          'properties' => ['os' => 'Ubuntu'],
 *      ]
 *  );
 * </code>
 *
 * @param  array    options  New image options
 * @param  array    headers  Endpoint headers
 * @param  boolean  wait     Wait for image to create
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, createFromContainer) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait;
	zval options;
	zval *name_param = NULL, *options_param = NULL, *wait_param = NULL, opts, _0, _1;
	zval name;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&options);

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


	ZEPHIR_INIT_VAR(&opts);
	array_init(&opts);
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 32, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "container");
	zephir_array_update_multi(&opts, &_0 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	zephir_array_update_multi(&opts, &name TSRMLS_CC, SL("ss"), 4, SL("source"), SL("name"));
	ZEPHIR_INIT_NVAR(&_0);
	array_init(&_0);
	if (wait) {
		ZVAL_BOOL(&_1, 1);
	} else {
		ZVAL_BOOL(&_1, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "create", NULL, 33, &opts, &_0, &_1);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Create an image from a snapshot
 *
 * <code>
 *  // Create a private image from snapshot
 *  $lxd->images->createFromSnapshot("container_name", "snapshot_name");
 *
 *  // Create a public image from snapshot
 *  $lxd->images->createFromSnapshot(
 *      "container_name",
 *      "snapshot_name",
 *      [
 *          "public" => true
 *      ]
 *  );
 *
 *  // Store properties with the new image, and override its filename
 *  $lxd->images->createFromSnapshot(
 *      "container-name",
 *      "snapshot-name",
 *      [
 *          "filename"   => "ubuntu-trusty.tar.gz",
 *          "properties" => ["os" => "Ubuntu"]
 *      ]
 *  );
 * </code>
 *
 * @param  string  container The name of the container
 * @param  string  snapshot  The name of the snapshot
 * @param  array   options   Options to create the container
 * @param  bool    wait      Wait for operation to finish
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, createFromSnapshot) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait;
	zval options;
	zval *container_param = NULL, *snapshot_param = NULL, *options_param = NULL, *wait_param = NULL, opts, _0, _2;
	zval container, snapshot, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&container);
	ZVAL_UNDEF(&snapshot);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&opts);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&options);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 1, &container_param, &snapshot_param, &options_param, &wait_param);

	if (UNEXPECTED(Z_TYPE_P(container_param) != IS_STRING && Z_TYPE_P(container_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'container' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(container_param) == IS_STRING)) {
		zephir_get_strval(&container, container_param);
	} else {
		ZEPHIR_INIT_VAR(&container);
		ZVAL_EMPTY_STRING(&container);
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


	ZEPHIR_INIT_VAR(&opts);
	array_init(&opts);
	ZEPHIR_CALL_METHOD(&opts, this_ptr, "getoptions", NULL, 32, &options);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "snapshot");
	zephir_array_update_multi(&opts, &_0 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("type"));
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_VSV(&_1, &container, "/", &snapshot);
	zephir_array_update_multi(&opts, &_1 TSRMLS_CC, SL("ss"), 4, SL("source"), SL("name"));
	ZEPHIR_INIT_NVAR(&_0);
	array_init(&_0);
	if (wait) {
		ZVAL_BOOL(&_2, 1);
	} else {
		ZVAL_BOOL(&_2, 0);
	}
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "create", NULL, 33, &opts, &_0, &_2);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Replace the configuration of a image
 *
 * Configuration is overwritten, not merged. Clients should
 * first call the info method to obtain the current configuration of a
 * image. The resulting objects metadata should be modified and then passed to
 * the update method.
 *
 * <code>
 *  $image = $lxd->images->info(null, 'b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087');
 *  $image['metadata']['public'] = true;
 *  $lxd->images->replace('container-name', $image['metadata']);
 * </code>
 *
 * @param  string   fingerprint  Fingerprint of image
 * @param  array    options      Options to replace
 * @param  boolean  wait         Wait for operation to finish
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, replace) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _5;
	zval options, _12$$3;
	zval *fingerprint_param = NULL, *options_param = NULL, *wait_param = NULL, response, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _13$$3, _14$$3;
	zval fingerprint;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint);
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
	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_12$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &fingerprint_param, &options_param, &wait_param);

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


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "images");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &fingerprint);
	ZEPHIR_CALL_METHOD(&response, &_0, "put", NULL, 0, &_3, &options);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 348 TSRMLS_CC);
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
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 350 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 350 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_13$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_14$$3);
		zephir_array_fetch_string(&_14$$3, &_13$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/images.zep", 353 TSRMLS_CC);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_14$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 * Delete an image.
 *
 * <code>
 *  $lxd->images->remove('b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087', true);
 * </code>
 *
 * @param  string fingerprint Fingerprint of image
 * @param  bool   wait        Wait for operation to finish
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, remove) {

	zval _12$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zend_bool wait, _5;
	zval *fingerprint_param = NULL, *wait_param = NULL, response, _0, _1, _2, _3, _4, _6$$3, _7$$3, _8$$3, _9$$3, _10$$3, _11$$3, _13$$3, _14$$3;
	zval fingerprint;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&fingerprint);
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
	zephir_fetch_params(1, 1, 1, &fingerprint_param, &wait_param);

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
	ZVAL_STRING(&_2, "images");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSV(&_3, &_1, "/", &fingerprint);
	ZEPHIR_CALL_METHOD(&response, &_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	zephir_array_fetch_string(&_4, &response, SL("type"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 376 TSRMLS_CC);
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
		zephir_array_fetch_string(&_9$$3, &response, SL("metadata"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 378 TSRMLS_CC);
		zephir_array_fetch_string(&_10$$3, &_9$$3, SL("id"), PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 378 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_11$$3);
		ZEPHIR_CONCAT_VSVS(&_11$$3, &_7$$3, "/", &_10$$3, "/wait");
		ZEPHIR_INIT_VAR(&_12$$3);
		zephir_create_array(&_12$$3, 1, 0 TSRMLS_CC);
		zephir_read_property(&_13$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_OBS_VAR(&_14$$3);
		zephir_array_fetch_string(&_14$$3, &_13$$3, SL("timeout"), PH_NOISY, "lxd/endpoints/images.zep", 381 TSRMLS_CC);
		zephir_array_update_string(&_12$$3, SL("timeout"), &_14$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_CALL_METHOD(&response, &_6$$3, "get", NULL, 0, &_11$$3, &_12$$3);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&response);

}

/**
 * Get image source attribute
 *
 * @param  array $options Options for creating image
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, getSource) {

	zend_bool _2$$3;
	zval *options_param = NULL, attr, attrs, _0, *_1, _3$$3, _4$$4;
	zval options;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&attr);
	ZVAL_UNDEF(&attrs);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &options_param);

	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);


	ZEPHIR_INIT_VAR(&attrs);
	zephir_create_array(&attrs, 2, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "alias");
	zephir_array_fast_append(&attrs, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "fingerprint");
	zephir_array_fast_append(&attrs, &_0);
	zephir_is_iterable(&attrs, 0, "lxd/endpoints/images.zep", 406);
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&attrs), _1)
	{
		ZEPHIR_INIT_NVAR(&attr);
		ZVAL_COPY(&attr, _1);
		_2$$3 = zephir_array_isset(&options, &attr);
		if (_2$$3) {
			zephir_array_fetch(&_3$$3, &options, &attr, PH_NOISY | PH_READONLY, "lxd/endpoints/images.zep", 401 TSRMLS_CC);
			_2$$3 = !(ZEPHIR_IS_EMPTY(&_3$$3));
		}
		if (_2$$3) {
			zephir_create_array(return_value, 1, 0 TSRMLS_CC);
			ZEPHIR_OBS_NVAR(&_4$$4);
			zephir_array_fetch(&_4$$4, &options, &attr, PH_NOISY, "lxd/endpoints/images.zep", 402 TSRMLS_CC);
			zephir_array_update_zval(return_value, &attr, &_4$$4, PH_COPY);
			RETURN_MM();
		}
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&attr);
	ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Alias or Fingerprint must be set", "lxd/endpoints/images.zep", 406);
	return;

}

/**
 * Get the options for creating image
 *
 * @param  string $name Name of image
 * @param  array  $options Options for creating image
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Images, getOptions) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *options_param = NULL, only, _0, _1, _2;
	zval options, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&options);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&only);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &options_param);

	ZEPHIR_OBS_COPY_OR_DUP(&options, options_param);


	ZEPHIR_INIT_VAR(&only);
	zephir_create_array(&only, 4, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "filename");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "public");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "properties");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "auto_update");
	zephir_array_fast_append(&only, &_0);
	ZEPHIR_CALL_FUNCTION(&_1, "array_flip", NULL, 25, &only);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_2, "array_intersect_key", NULL, 26, &options, &_1);
	zephir_check_call_status();
	zephir_get_arrval(&_3, &_2);
	RETURN_CTOR(&_3);

}

