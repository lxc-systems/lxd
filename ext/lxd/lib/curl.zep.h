
extern zend_class_entry *lxd_lib_curl_ce;

ZEPHIR_INIT_CLASS(Lxd_Lib_Curl);

PHP_METHOD(Lxd_Lib_Curl, __construct);
PHP_METHOD(Lxd_Lib_Curl, setOptions);
PHP_METHOD(Lxd_Lib_Curl, get);
PHP_METHOD(Lxd_Lib_Curl, post);
PHP_METHOD(Lxd_Lib_Curl, put);
PHP_METHOD(Lxd_Lib_Curl, delete);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_lib_curl___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_lib_curl_get, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_ARRAY_INFO(0, parameters, 1)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_lib_curl_post, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, parameters)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_lib_curl_put, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_ARRAY_INFO(0, parameters, 1)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_lib_curl_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_lib_curl_method_entry) {
	PHP_ME(Lxd_Lib_Curl, __construct, arginfo_lxd_lib_curl___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Lib_Curl, setOptions, NULL, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_ME(Lxd_Lib_Curl, get, arginfo_lxd_lib_curl_get, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Lib_Curl, post, arginfo_lxd_lib_curl_post, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Lib_Curl, put, arginfo_lxd_lib_curl_put, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Lib_Curl, delete, arginfo_lxd_lib_curl_delete, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
