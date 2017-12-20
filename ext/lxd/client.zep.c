
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/concat.h"
#include "kernel/string.h"
#include "kernel/fcall.h"
#include "kernel/file.h"
#include "kernel/time.h"
#include "kernel/math.h"


ZEPHIR_INIT_CLASS(Lxd_Client) {

	ZEPHIR_REGISTER_CLASS(Lxd, Client, lxd, client, lxd_client_method_entry, ZEND_ACC_FINAL_CLASS);

	zend_declare_property_null(lxd_client_ce, SL("config"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_client_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(lxd_client_ce, SL("certificate"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

/**
 *
 */
PHP_METHOD(Lxd_Client, __construct) {

	zend_bool _6;
	zval *config_param = NULL, __$null, _0, _2, _5, _7, _8, _3$$3, _4$$3, _9$$4, _10$$4;
	zval config, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&_1);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_10$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &config_param);

	if (!config_param) {
		ZEPHIR_INIT_VAR(&config);
		array_init(&config);
	} else {
	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);
	}


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_VAR(&_1);
	zephir_create_array(&_1, 6, 0 TSRMLS_CC);
	zephir_array_update_string(&_1, SL("url"), &__$null, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&_1, SL("ip"), &__$null, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&_1, SL("port"), &__$null, PH_COPY | PH_SEPARATE);
	zephir_array_update_string(&_1, SL("secret"), &__$null, PH_COPY | PH_SEPARATE);
	add_assoc_stringl_ex(&_1, SL("version"), SL("1.0"));
	zephir_array_update_string(&_1, SL("endpoint"), &__$null, PH_COPY | PH_SEPARATE);
	zephir_fast_array_merge(&_0, &_1, &config TSRMLS_CC);
	zephir_update_property_zval(this_ptr, SL("config"), &_0);
	zephir_read_property(&_2, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_isset_string(&_2, SL("certificate_path")))) {
		ZEPHIR_INIT_VAR(&_3$$3);
		ZVAL_STRING(&_3$$3, "certificate_path");
		ZEPHIR_INIT_VAR(&_4$$3);
		ZVAL_STRING(&_4$$3, ".certificates");
		zephir_update_property_array(this_ptr, SL("config"), &_3$$3, &_4$$3 TSRMLS_CC);
	}
	zephir_read_property(&_5, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	_6 = !(zephir_array_isset_string(&_5, SL("timeout")));
	if (!(_6)) {
		zephir_read_property(&_7, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_8, &_7, SL("timeout"), PH_NOISY | PH_READONLY, "lxd/client.zep", 50 TSRMLS_CC);
		_6 = !(zephir_is_numeric(&_8));
	}
	if (_6) {
		ZEPHIR_INIT_VAR(&_9$$4);
		ZVAL_STRING(&_9$$4, "timeout");
		ZEPHIR_INIT_VAR(&_10$$4);
		ZVAL_LONG(&_10$$4, 10);
		zephir_update_property_array(this_ptr, SL("config"), &_9$$4, &_10$$4 TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

/**
 *
 */
PHP_METHOD(Lxd_Client, __get) {

	zend_class_entry *_4$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *endpoint_param = NULL, _0, _1, _2, _3$$3, _5$$3, _6$$3;
	zval endpoint, ns, _7$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&endpoint);
	ZVAL_UNDEF(&ns);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &endpoint_param);

	if (UNEXPECTED(Z_TYPE_P(endpoint_param) != IS_STRING && Z_TYPE_P(endpoint_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'endpoint' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(endpoint_param) == IS_STRING)) {
		zephir_get_strval(&endpoint, endpoint_param);
	} else {
		ZEPHIR_INIT_VAR(&endpoint);
		ZVAL_EMPTY_STRING(&endpoint);
	}


	ZEPHIR_INIT_VAR(&_0);
	zephir_ucfirst(&_0, &endpoint);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_SSV(&_1, "Lxd", "\\Endpoints\\", &_0);
	zephir_get_strval(&ns, &_1);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "endpoint");
	zephir_update_property_array(this_ptr, SL("config"), &_2, &endpoint TSRMLS_CC);
	if (zephir_class_exists(&ns, 1 TSRMLS_CC)) {
		zephir_fetch_safe_class(&_3$$3, &ns);
		_4$$3 = zephir_fetch_class_str_ex(Z_STRVAL_P(&_3$$3), Z_STRLEN_P(&_3$$3), ZEND_FETCH_CLASS_AUTO);
		object_init_ex(return_value, _4$$3);
		if (zephir_has_constructor(return_value TSRMLS_CC)) {
			zephir_read_property(&_5$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
			zephir_read_property(&_6$$3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 0, &_5$$3, &_6$$3);
			zephir_check_call_status();
		}
		RETURN_MM();
	} else {
		ZEPHIR_INIT_VAR(&_7$$4);
		ZEPHIR_CONCAT_SVS(&_7$$4, "Endpoint ", &ns, ", not implemented.");
		zephir_throw_exception_debug(&_7$$4, "lxd/client.zep", 68 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}

}

/**
 *
 */
PHP_METHOD(Lxd_Client, info) {

	zval _0, _3, _4, _5, _6, _7, _8, _1$$3, _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC);
	if (!(zephir_is_true(&_0))) {
		ZEPHIR_INIT_VAR(&_1$$3);
		object_init_ex(&_1$$3, lxd_lib_curl_ce);
		zephir_read_property(&_2$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(NULL, &_1$$3, "__construct", NULL, 4, &_2$$3);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("curl"), &_1$$3);
	}
	zephir_read_property(&_3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_5, &_4, SL("url"), PH_NOISY | PH_READONLY, "lxd/client.zep", 81 TSRMLS_CC);
	zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_7, &_6, SL("version"), PH_NOISY | PH_READONLY, "lxd/client.zep", 81 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_8);
	ZEPHIR_CONCAT_VSV(&_8, &_5, "/", &_7);
	ZEPHIR_RETURN_CALL_METHOD(&_3, "get", NULL, 0, &_8);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Client, resources) {

	zval _0, _3, _4, _5, _6, _7, _8, _1$$3, _2$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(&_0);
	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC);
	if (!(zephir_is_true(&_0))) {
		ZEPHIR_INIT_VAR(&_1$$3);
		object_init_ex(&_1$$3, lxd_lib_curl_ce);
		zephir_read_property(&_2$$3, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(NULL, &_1$$3, "__construct", NULL, 4, &_2$$3);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("curl"), &_1$$3);
	}
	zephir_read_property(&_3, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_4, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_5, &_4, SL("url"), PH_NOISY | PH_READONLY, "lxd/client.zep", 93 TSRMLS_CC);
	zephir_read_property(&_6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_7, &_6, SL("version"), PH_NOISY | PH_READONLY, "lxd/client.zep", 93 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_8);
	ZEPHIR_CONCAT_VSVS(&_8, &_5, "/", &_7, "/resources");
	ZEPHIR_RETURN_CALL_METHOD(&_3, "get", NULL, 0, &_8);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 *
 */
PHP_METHOD(Lxd_Client, connect) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *url_param = NULL, *secret_param = NULL, ip, port, ping, _0, _2, _3, _4, _5, _6, _7, _12, _8$$5, _9$$5, _10$$5, _11$$5, _13$$6, _14$$6;
	zval url, secret;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&secret);
	ZVAL_UNDEF(&ip);
	ZVAL_UNDEF(&port);
	ZVAL_UNDEF(&ping);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&_13$$6);
	ZVAL_UNDEF(&_14$$6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &url_param, &secret_param);

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


	ZVAL_LONG(&_0, 1);
	ZEPHIR_CALL_FUNCTION(&ip, "parse_url", &_1, 5, &url, &_0);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 2);
	ZEPHIR_CALL_FUNCTION(&port, "parse_url", &_1, 5, &url, &_0);
	zephir_check_call_status();
	if (ZEPHIR_IS_EMPTY(&port)) {
		ZEPHIR_INIT_NVAR(&port);
		ZVAL_LONG(&port, 8443);
	}
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "url");
	zephir_update_property_array(this_ptr, SL("config"), &_2, &url TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "ip");
	zephir_update_property_array(this_ptr, SL("config"), &_3, &ip TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_4);
	ZVAL_STRING(&_4, "port");
	zephir_update_property_array(this_ptr, SL("config"), &_4, &port TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_5);
	ZVAL_STRING(&_5, "secret");
	zephir_update_property_array(this_ptr, SL("config"), &_5, &secret TSRMLS_CC);
	ZVAL_LONG(&_0, 3);
	ZEPHIR_CALL_METHOD(&ping, this_ptr, "connectable", NULL, 6, &ip, &port, &_0);
	zephir_check_call_status();
	if (ZEPHIR_IS_LONG_IDENTICAL(&ping, -1)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Could not connect.", "lxd/client.zep", 117);
		return;
	}
	zephir_read_property(&_0, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch_string(&_6, &_0, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/client.zep", 121 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_7);
	ZEPHIR_CONCAT_VSVS(&_7, &_6, "/", &ip, "/client.pem");
	if (!((zephir_file_exists(&_7 TSRMLS_CC) == SUCCESS))) {
		ZEPHIR_INIT_VAR(&_8$$5);
		object_init_ex(&_8$$5, lxd_lib_certificate_ce);
		zephir_read_property(&_9$$5, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch_string(&_10$$5, &_9$$5, SL("certificate_path"), PH_NOISY | PH_READONLY, "lxd/client.zep", 123 TSRMLS_CC);
		ZEPHIR_CALL_METHOD(NULL, &_8$$5, "__construct", NULL, 7, &_10$$5);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("certificate"), &_8$$5);
		zephir_read_property(&_11$$5, this_ptr, SL("certificate"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(NULL, &_11$$5, "generate", NULL, 0, &ip);
		zephir_check_call_status();
	}
	ZEPHIR_OBS_VAR(&_12);
	zephir_read_property(&_12, this_ptr, SL("curl"), PH_NOISY_CC);
	if (!(zephir_is_true(&_12))) {
		ZEPHIR_INIT_VAR(&_13$$6);
		object_init_ex(&_13$$6, lxd_lib_curl_ce);
		zephir_read_property(&_14$$6, this_ptr, SL("config"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_METHOD(NULL, &_13$$6, "__construct", NULL, 4, &_14$$6);
		zephir_check_call_status();
		zephir_update_property_zval(this_ptr, SL("curl"), &_13$$6);
	}
	RETURN_THIS();

}

/**
 * Check connection to server
 *
 * @param string ip
 * @param int port
 * @param int timeout
 *
 * @return int - response time -1 for error
 */
PHP_METHOD(Lxd_Client, connectable) {

	unsigned long start = 0, stop = 0;
	zend_long port, timeout, ZEPHIR_LAST_CALL_STATUS;
	zval *ip_param = NULL, *port_param = NULL, *timeout_param = NULL, __$true, time, sock, _0, _1, _2, _3, _4, _5, _6$$5, _7$$5, _8$$5;
	zval ip;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ip);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&time);
	ZVAL_UNDEF(&sock);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 2, &ip_param, &port_param, &timeout_param);

	if (UNEXPECTED(Z_TYPE_P(ip_param) != IS_STRING && Z_TYPE_P(ip_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'ip' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(ip_param) == IS_STRING)) {
		zephir_get_strval(&ip, ip_param);
	} else {
		ZEPHIR_INIT_VAR(&ip);
		ZVAL_EMPTY_STRING(&ip);
	}
	if (!port_param) {
		port = 8443;
	} else {
	if (UNEXPECTED(Z_TYPE_P(port_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'port' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	port = Z_LVAL_P(port_param);
	}
	if (!timeout_param) {
		timeout = 10;
	} else {
	if (UNEXPECTED(Z_TYPE_P(timeout_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'timeout' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	timeout = Z_LVAL_P(timeout_param);
	}


	if (ZEPHIR_IS_STRING_IDENTICAL(&ip, "")) {
		RETURN_MM_LONG(-1);
	}
	ZEPHIR_INIT_VAR(&_0);
	zephir_microtime(&_0, &__$true TSRMLS_CC);
	start = (long) (zephir_get_doubleval(&_0));
	ZVAL_LONG(&_1, port);
	ZVAL_NULL(&_2);
	ZVAL_NULL(&_3);
	ZVAL_LONG(&_4, timeout);
	ZEPHIR_MAKE_REF(&_2);
	ZEPHIR_MAKE_REF(&_3);
	ZEPHIR_CALL_FUNCTION(&sock, "fsockopen", NULL, 8, &ip, &_1, &_2, &_3, &_4);
	ZEPHIR_UNREF(&_2);
	ZEPHIR_UNREF(&_3);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_5);
	zephir_microtime(&_5, &__$true TSRMLS_CC);
	stop = (long) (zephir_get_doubleval(&_5));
	ZEPHIR_INIT_VAR(&time);
	ZVAL_LONG(&time, 0);
	ZEPHIR_INIT_NVAR(&time);
	if (!zephir_is_true(&sock)) {
		ZVAL_LONG(&time, -1);
	} else {
		zephir_fclose(&sock TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_6$$5);
		ZVAL_LONG(&_7$$5, ((((stop - start)) * 1000)));
		ZVAL_LONG(&_8$$5, 2);
		zephir_round(&_6$$5, &_7$$5, &_8$$5, NULL TSRMLS_CC);
		ZVAL_DOUBLE(&time, zephir_get_doubleval(&_6$$5));
	}
	RETURN_MM_DOUBLE(zephir_get_doubleval(&time));

}

