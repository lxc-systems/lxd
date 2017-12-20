
extern zend_class_entry *lxd_endpoints_networks_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Networks);

PHP_METHOD(Lxd_Endpoints_Networks, __construct);
PHP_METHOD(Lxd_Endpoints_Networks, all);
PHP_METHOD(Lxd_Endpoints_Networks, info);
PHP_METHOD(Lxd_Endpoints_Networks, create);
PHP_METHOD(Lxd_Endpoints_Networks, rename);
PHP_METHOD(Lxd_Endpoints_Networks, replace);
PHP_METHOD(Lxd_Endpoints_Networks, update);
PHP_METHOD(Lxd_Endpoints_Networks, remove);
PHP_METHOD(Lxd_Endpoints_Networks, delete);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks_info, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks_create, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(0, managed)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks_rename, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, newName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks_replace, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(0, managed)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks_update, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(0, managed)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks_remove, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_networks_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_networks_method_entry) {
	PHP_ME(Lxd_Endpoints_Networks, __construct, arginfo_lxd_endpoints_networks___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Networks, all, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Networks, info, arginfo_lxd_endpoints_networks_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Networks, create, arginfo_lxd_endpoints_networks_create, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Networks, rename, arginfo_lxd_endpoints_networks_rename, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Networks, replace, arginfo_lxd_endpoints_networks_replace, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Networks, update, arginfo_lxd_endpoints_networks_update, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Networks, remove, arginfo_lxd_endpoints_networks_remove, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Networks, delete, arginfo_lxd_endpoints_networks_delete, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
