
extern zend_class_entry *lxd_client_ce;

ZEPHIR_INIT_CLASS(Lxd_Client);

PHP_METHOD(Lxd_Client, __construct);
PHP_METHOD(Lxd_Client, connect);
PHP_METHOD(Lxd_Client, connectable);
PHP_METHOD(Lxd_Client, __get);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_client___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_client_connect, 0, 0, 0)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, secret)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_client_connectable, 0, 0, 1)
	ZEND_ARG_INFO(0, ip)
	ZEND_ARG_INFO(0, port)
	ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_client___get, 0, 0, 1)
	ZEND_ARG_INFO(0, endpoint)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_client_method_entry) {
	PHP_ME(Lxd_Client, __construct, arginfo_lxd_client___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Client, connect, arginfo_lxd_client_connect, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Client, connectable, arginfo_lxd_client_connectable, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Client, __get, arginfo_lxd_client___get, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
