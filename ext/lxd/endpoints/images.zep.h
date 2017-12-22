
extern zend_class_entry *lxd_endpoints_images_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Images);

PHP_METHOD(Lxd_Endpoints_Images, __construct);
PHP_METHOD(Lxd_Endpoints_Images, all);
PHP_METHOD(Lxd_Endpoints_Images, info);
PHP_METHOD(Lxd_Endpoints_Images, create);
PHP_METHOD(Lxd_Endpoints_Images, createFromRemote);
PHP_METHOD(Lxd_Endpoints_Images, createFromContainer);
PHP_METHOD(Lxd_Endpoints_Images, createFromSnapshot);
PHP_METHOD(Lxd_Endpoints_Images, replace);
PHP_METHOD(Lxd_Endpoints_Images, remove);
PHP_METHOD(Lxd_Endpoints_Images, getSource);
PHP_METHOD(Lxd_Endpoints_Images, getOptions);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_all, 0, 0, 0)
	ZEND_ARG_INFO(0, url)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_info, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, fingerprint)
	ZEND_ARG_INFO(0, secret)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_create, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
	ZEND_ARG_ARRAY_INFO(0, headers, 1)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_createfromremote, 0, 0, 2)
	ZEND_ARG_INFO(0, server)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
	ZEND_ARG_INFO(0, autoUpdate)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_createfromcontainer, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_createfromsnapshot, 0, 0, 3)
	ZEND_ARG_INFO(0, container)
	ZEND_ARG_INFO(0, snapshot)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_replace, 0, 0, 2)
	ZEND_ARG_INFO(0, fingerprint)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_remove, 0, 0, 1)
	ZEND_ARG_INFO(0, fingerprint)
	ZEND_ARG_INFO(0, wait)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_getsource, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_images_getoptions, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, options, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_images_method_entry) {
	PHP_ME(Lxd_Endpoints_Images, __construct, arginfo_lxd_endpoints_images___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Images, all, arginfo_lxd_endpoints_images_all, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, info, arginfo_lxd_endpoints_images_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, create, arginfo_lxd_endpoints_images_create, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, createFromRemote, arginfo_lxd_endpoints_images_createfromremote, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, createFromContainer, arginfo_lxd_endpoints_images_createfromcontainer, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, createFromSnapshot, arginfo_lxd_endpoints_images_createfromsnapshot, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, replace, arginfo_lxd_endpoints_images_replace, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, remove, arginfo_lxd_endpoints_images_remove, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Images, getSource, arginfo_lxd_endpoints_images_getsource, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_ME(Lxd_Endpoints_Images, getOptions, arginfo_lxd_endpoints_images_getoptions, ZEND_ACC_FINAL|ZEND_ACC_PRIVATE)
	PHP_FE_END
};
