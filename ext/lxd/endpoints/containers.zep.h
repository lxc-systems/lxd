
extern zend_class_entry *lxd_endpoints_containers_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers);

PHP_METHOD(Lxd_Endpoints_Containers, __construct);
PHP_METHOD(Lxd_Endpoints_Containers, all);
PHP_METHOD(Lxd_Endpoints_Containers, info);
PHP_METHOD(Lxd_Endpoints_Containers, state);
PHP_METHOD(Lxd_Endpoints_Containers, setState);
PHP_METHOD(Lxd_Endpoints_Containers, start);
PHP_METHOD(Lxd_Endpoints_Containers, stop);
PHP_METHOD(Lxd_Endpoints_Containers, shutdown);
PHP_METHOD(Lxd_Endpoints_Containers, restart);
PHP_METHOD(Lxd_Endpoints_Containers, reboot);
PHP_METHOD(Lxd_Endpoints_Containers, freeze);
PHP_METHOD(Lxd_Endpoints_Containers, pause);
PHP_METHOD(Lxd_Endpoints_Containers, unfreeze);
PHP_METHOD(Lxd_Endpoints_Containers, thaw);
PHP_METHOD(Lxd_Endpoints_Containers, create);
PHP_METHOD(Lxd_Endpoints_Containers, copy);
PHP_METHOD(Lxd_Endpoints_Containers, replace);
PHP_METHOD(Lxd_Endpoints_Containers, getSource);
PHP_METHOD(Lxd_Endpoints_Containers, getOptions);
PHP_METHOD(Lxd_Endpoints_Containers, getEmptyOptions);
PHP_METHOD(Lxd_Endpoints_Containers, getRemoteImageOptions);
PHP_METHOD(Lxd_Endpoints_Containers, getLocalImageOptions);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Lxd\\Lib\\Curl, 0)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_start, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_stop, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_shutdown, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_restart, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_reboot, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_freeze, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_pause, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_unfreeze, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_thaw, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, timeout)
	ZEND_ARG_INFO(0, force)
	ZEND_ARG_INFO(0, stateful)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_create, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_copy, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, copyName)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_replace, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, opts, 0)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_getsource, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_getoptions, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_getemptyoptions, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_getremoteimageoptions, 0, 0, 3)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, source, 0)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_containers_getlocalimageoptions, 0, 0, 3)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, source, 0)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_containers_method_entry) {
	PHP_ME(Lxd_Endpoints_Containers, __construct, arginfo_lxd_endpoints_containers___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Containers, all, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, info, arginfo_lxd_endpoints_containers_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, state, arginfo_lxd_endpoints_containers_state, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, setState, arginfo_lxd_endpoints_containers_setstate, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, start, arginfo_lxd_endpoints_containers_start, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, stop, arginfo_lxd_endpoints_containers_stop, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, shutdown, arginfo_lxd_endpoints_containers_shutdown, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, restart, arginfo_lxd_endpoints_containers_restart, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, reboot, arginfo_lxd_endpoints_containers_reboot, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, freeze, arginfo_lxd_endpoints_containers_freeze, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, pause, arginfo_lxd_endpoints_containers_pause, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, unfreeze, arginfo_lxd_endpoints_containers_unfreeze, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, thaw, arginfo_lxd_endpoints_containers_thaw, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, create, arginfo_lxd_endpoints_containers_create, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, copy, arginfo_lxd_endpoints_containers_copy, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, replace, arginfo_lxd_endpoints_containers_replace, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Containers, getSource, arginfo_lxd_endpoints_containers_getsource, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_ME(Lxd_Endpoints_Containers, getOptions, arginfo_lxd_endpoints_containers_getoptions, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_ME(Lxd_Endpoints_Containers, getEmptyOptions, arginfo_lxd_endpoints_containers_getemptyoptions, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_ME(Lxd_Endpoints_Containers, getRemoteImageOptions, arginfo_lxd_endpoints_containers_getremoteimageoptions, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_ME(Lxd_Endpoints_Containers, getLocalImageOptions, arginfo_lxd_endpoints_containers_getlocalimageoptions, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_FE_END
};
