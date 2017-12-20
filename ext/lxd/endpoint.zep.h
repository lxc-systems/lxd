
extern zend_class_entry *lxd_endpoint_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoint);

PHP_METHOD(Lxd_Endpoint, __construct);
PHP_METHOD(Lxd_Endpoint, __get);
PHP_METHOD(Lxd_Endpoint, getVersion);
PHP_METHOD(Lxd_Endpoint, getUrl);
PHP_METHOD(Lxd_Endpoint, getBase);
PHP_METHOD(Lxd_Endpoint, stripEndpoint);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoint___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Lxd\\Lib\\Curl, 0)
	ZEND_ARG_INFO(0, endpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoint___get, 0, 0, 1)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoint_getbase, 0, 0, 0)
	ZEND_ARG_INFO(0, endpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoint_stripendpoint, 0, 0, 0)
	ZEND_ARG_INFO(0, endpoint)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoint_method_entry) {
	PHP_ME(Lxd_Endpoint, __construct, arginfo_lxd_endpoint___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoint, __get, arginfo_lxd_endpoint___get, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoint, getVersion, NULL, ZEND_ACC_FINAL|ZEND_ACC_PROTECTED)
	PHP_ME(Lxd_Endpoint, getUrl, NULL, ZEND_ACC_FINAL|ZEND_ACC_PROTECTED)
	PHP_ME(Lxd_Endpoint, getBase, arginfo_lxd_endpoint_getbase, ZEND_ACC_FINAL|ZEND_ACC_PROTECTED)
	PHP_ME(Lxd_Endpoint, stripEndpoint, arginfo_lxd_endpoint_stripendpoint, ZEND_ACC_FINAL|ZEND_ACC_PROTECTED)
	PHP_FE_END
};
