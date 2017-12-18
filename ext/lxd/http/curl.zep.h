
extern zend_class_entry *lxd_http_curl_ce;

ZEPHIR_INIT_CLASS(Lxd_Http_Curl);

PHP_METHOD(Lxd_Http_Curl, get);
PHP_METHOD(Lxd_Http_Curl, post);
PHP_METHOD(Lxd_Http_Curl, delete);
PHP_METHOD(Lxd_Http_Curl, put);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_http_curl_get, 0, 0, 0)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_http_curl_post, 0, 0, 0)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_http_curl_delete, 0, 0, 0)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_http_curl_put, 0, 0, 0)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_http_curl_method_entry) {
	PHP_ME(Lxd_Http_Curl, get, arginfo_lxd_http_curl_get, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Http_Curl, post, arginfo_lxd_http_curl_post, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Http_Curl, delete, arginfo_lxd_http_curl_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Http_Curl, put, arginfo_lxd_http_curl_put, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
