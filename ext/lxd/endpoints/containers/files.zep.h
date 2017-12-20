
extern zend_class_entry *lxd_endpoints_containers_files_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers_Files);

PHP_METHOD(Lxd_Endpoints_Containers_Files, __construct);
PHP_METHOD(Lxd_Endpoints_Containers_Files, read);
PHP_METHOD(Lxd_Endpoints_Containers_Files, write);
PHP_METHOD(Lxd_Endpoints_Containers_Files, delete);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_files___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Containers\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_files_read, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, filepath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_files_write, 0, 0, 3)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, filepath)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, uid)
	ZEND_ARG_INFO(0, gid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_files_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, filepath)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_containers_files_method_entry) {
	PHP_ME(Lxd_Endpoints_Containers_Files, __construct, arginfo_lxd_endpoints_containers_files___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Containers_Files, read, arginfo_lxd_endpoints_containers_files_read, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Files, write, arginfo_lxd_endpoints_containers_files_write, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Files, delete, arginfo_lxd_endpoints_containers_files_delete, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
