
extern zend_class_entry *lxd_endpoints_profiles_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Profiles);

PHP_METHOD(Lxd_Endpoints_Profiles, __construct);
PHP_METHOD(Lxd_Endpoints_Profiles, all);
PHP_METHOD(Lxd_Endpoints_Profiles, info);
PHP_METHOD(Lxd_Endpoints_Profiles, create);
PHP_METHOD(Lxd_Endpoints_Profiles, update);
PHP_METHOD(Lxd_Endpoints_Profiles, replace);
PHP_METHOD(Lxd_Endpoints_Profiles, rename);
PHP_METHOD(Lxd_Endpoints_Profiles, remove);
PHP_METHOD(Lxd_Endpoints_Profiles, delete);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles_info, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles_create, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
	ZEND_ARG_ARRAY_INFO(0, devices, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles_update, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
	ZEND_ARG_ARRAY_INFO(0, devices, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles_replace, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
	ZEND_ARG_ARRAY_INFO(0, devices, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles_rename, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, newName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles_remove, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_profiles_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_profiles_method_entry) {
	PHP_ME(Lxd_Endpoints_Profiles, __construct, arginfo_lxd_endpoints_profiles___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Profiles, all, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Profiles, info, arginfo_lxd_endpoints_profiles_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Profiles, create, arginfo_lxd_endpoints_profiles_create, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Profiles, update, arginfo_lxd_endpoints_profiles_update, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Profiles, replace, arginfo_lxd_endpoints_profiles_replace, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Profiles, rename, arginfo_lxd_endpoints_profiles_rename, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Profiles, remove, arginfo_lxd_endpoints_profiles_remove, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Profiles, delete, arginfo_lxd_endpoints_profiles_delete, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
