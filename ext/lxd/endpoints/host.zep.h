
extern zend_class_entry *lxd_endpoints_host_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Host);

PHP_METHOD(Lxd_Endpoints_Host, __construct);
PHP_METHOD(Lxd_Endpoints_Host, info);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_host___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, config)
	ZEND_ARG_INFO(0, curl)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_host_method_entry) {
	PHP_ME(Lxd_Endpoints_Host, __construct, arginfo_lxd_endpoints_host___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Host, info, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
