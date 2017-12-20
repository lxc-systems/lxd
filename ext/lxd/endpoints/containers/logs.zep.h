
extern zend_class_entry *lxd_endpoints_containers_logs_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers_Logs);

PHP_METHOD(Lxd_Endpoints_Containers_Logs, __construct);
PHP_METHOD(Lxd_Endpoints_Containers_Logs, all);
PHP_METHOD(Lxd_Endpoints_Containers_Logs, read);
PHP_METHOD(Lxd_Endpoints_Containers_Logs, remove);
PHP_METHOD(Lxd_Endpoints_Containers_Logs, delete);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_logs___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Containers\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_logs_all, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_logs_read, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, log)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_logs_remove, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, log)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_logs_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, log)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_containers_logs_method_entry) {
	PHP_ME(Lxd_Endpoints_Containers_Logs, __construct, arginfo_lxd_endpoints_containers_logs___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Containers_Logs, all, arginfo_lxd_endpoints_containers_logs_all, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Logs, read, arginfo_lxd_endpoints_containers_logs_read, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Logs, remove, arginfo_lxd_endpoints_containers_logs_remove, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers_Logs, delete, arginfo_lxd_endpoints_containers_logs_delete, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
