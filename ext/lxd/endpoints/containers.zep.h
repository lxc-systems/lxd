
extern zend_class_entry *lxd_endpoints_containers_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers);

PHP_METHOD(Lxd_Endpoints_Containers, __construct);
PHP_METHOD(Lxd_Endpoints_Containers, all);
PHP_METHOD(Lxd_Endpoints_Containers, info);
PHP_METHOD(Lxd_Endpoints_Containers, state);
PHP_METHOD(Lxd_Endpoints_Containers, setState);
PHP_METHOD(Lxd_Endpoints_Containers, delete);
PHP_METHOD(Lxd_Endpoints_Containers, remove);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, config)
	ZEND_ARG_INFO(0, curl)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_info, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_state, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_setstate, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, action)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, fingerprint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_remove, 0, 0, 1)
	ZEND_ARG_INFO(0, fingerprint)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_containers_method_entry) {
	PHP_ME(Lxd_Endpoints_Containers, __construct, arginfo_lxd_endpoints_containers___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Containers, all, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, info, arginfo_lxd_endpoints_containers_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, state, arginfo_lxd_endpoints_containers_state, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, setState, arginfo_lxd_endpoints_containers_setstate, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, delete, arginfo_lxd_endpoints_containers_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, remove, arginfo_lxd_endpoints_containers_remove, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
