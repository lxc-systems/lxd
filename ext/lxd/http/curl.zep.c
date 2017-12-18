
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
#include "kernel/string.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Lxd_Http_Curl) {

	ZEPHIR_REGISTER_CLASS(Lxd\\Http, Curl, lxd, http_curl, lxd_http_curl_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Lxd_Http_Curl, get) {

	zephir_fcall_cache_entry *_2 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, __$false, ch, _0, _1, _3, _4;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_BOOL(&__$false, 0);
	ZVAL_UNDEF(&ch);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &str_param);

	if (!str_param) {
		ZEPHIR_INIT_VAR(&str);
		ZVAL_STRING(&str, "");
	} else {
		zephir_get_strval(&str, str_param);
	}


	ZEPHIR_CALL_FUNCTION(&ch, "curl_init", NULL, 2);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 10002);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "https://212.159.117.235:8443/1.0");
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_2, 3, &ch, &_0, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 81);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_2, 3, &ch, &_0, &__$false);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 64);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_2, 3, &ch, &_0, &__$false);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 19913);
	ZVAL_LONG(&_3, 1);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_2, 3, &ch, &_0, &_3);
	zephir_check_call_status();
	ZVAL_LONG(&_0, 13);
	ZVAL_LONG(&_3, 3);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_2, 3, &ch, &_0, &_3);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_1);
	ZEPHIR_CALL_FUNCTION(&_4, "curl_exec", NULL, 4, &ch);
	zephir_check_call_status();
	zephir_fast_trim(&_1, &_4, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
	zend_print_zval(&_1, 0);
	ZEPHIR_CALL_FUNCTION(NULL, "curl_close", NULL, 5, &ch);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Lxd_Http_Curl, post) {

	zval *str_param = NULL;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &str_param);

	if (!str_param) {
		ZEPHIR_INIT_VAR(&str);
		ZVAL_STRING(&str, "");
	} else {
		zephir_get_strval(&str, str_param);
	}



}

PHP_METHOD(Lxd_Http_Curl, delete) {

	zval *str_param = NULL;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &str_param);

	if (!str_param) {
		ZEPHIR_INIT_VAR(&str);
		ZVAL_STRING(&str, "");
	} else {
		zephir_get_strval(&str, str_param);
	}



}

PHP_METHOD(Lxd_Http_Curl, put) {

	zval *str_param = NULL;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &str_param);

	if (!str_param) {
		ZEPHIR_INIT_VAR(&str);
		ZVAL_STRING(&str, "");
	} else {
		zephir_get_strval(&str, str_param);
	}



}

