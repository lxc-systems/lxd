
extern zend_class_entry *lxd_endpoints_operations_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Operations);

PHP_METHOD(Lxd_Endpoints_Operations, __construct);
PHP_METHOD(Lxd_Endpoints_Operations, all);
PHP_METHOD(Lxd_Endpoints_Operations, info);
PHP_METHOD(Lxd_Endpoints_Operations, cancel);
PHP_METHOD(Lxd_Endpoints_Operations, wait);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_operations___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_operations_info, 0, 0, 1)
	ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_operations_cancel, 0, 0, 1)
	ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_operations_wait, 0, 0, 1)
	ZEND_ARG_INFO(0, uuid)
	ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_operations_method_entry) {
	PHP_ME(Lxd_Endpoints_Operations, __construct, arginfo_lxd_endpoints_operations___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Operations, all, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Operations, info, arginfo_lxd_endpoints_operations_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Operations, cancel, arginfo_lxd_endpoints_operations_cancel, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Operations, wait, arginfo_lxd_endpoints_operations_wait, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
