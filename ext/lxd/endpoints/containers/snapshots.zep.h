
extern zend_class_entry *lxd_endpoints_containers_snapshots_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers_Snapshots);

PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, __construct);
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, all);
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, info);
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, create);
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, restore);
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, rename);
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, remove);
PHP_METHOD(Lxd_Endpoints_Containers_Snapshots, delete);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Containers\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots_all, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots_info, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, snapshot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots_create, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, snapshot)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots_restore, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, snapshot)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots_rename, 0, 0, 3)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, snaphot)
	ZEND_ARG_INFO(0, newSnapshot)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots_remove, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, snaphot)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_snapshots_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, snaphot)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_containers_snapshots_method_entry) {
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, __construct, arginfo_lxd_endpoints_containers_snapshots___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, all, arginfo_lxd_endpoints_containers_snapshots_all, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, info, arginfo_lxd_endpoints_containers_snapshots_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, create, arginfo_lxd_endpoints_containers_snapshots_create, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, restore, arginfo_lxd_endpoints_containers_snapshots_restore, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, rename, arginfo_lxd_endpoints_containers_snapshots_rename, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, remove, arginfo_lxd_endpoints_containers_snapshots_remove, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Snapshots, delete, arginfo_lxd_endpoints_containers_snapshots_delete, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
