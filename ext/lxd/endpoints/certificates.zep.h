
extern zend_class_entry *lxd_endpoints_certificates_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Certificates);

PHP_METHOD(Lxd_Endpoints_Certificates, __construct);
PHP_METHOD(Lxd_Endpoints_Certificates, all);
PHP_METHOD(Lxd_Endpoints_Certificates, add);
PHP_METHOD(Lxd_Endpoints_Certificates, info);
PHP_METHOD(Lxd_Endpoints_Certificates, delete);
PHP_METHOD(Lxd_Endpoints_Certificates, remove);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_certificates___construct, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, config, 0)
	ZEND_ARG_OBJ_INFO(0, curl, Lxd\\Endpoints\\Lxd\\Lib\\Curl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_certificates_add, 0, 0, 1)
	ZEND_ARG_INFO(0, certificate)
	ZEND_ARG_INFO(0, password)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_certificates_info, 0, 0, 1)
	ZEND_ARG_INFO(0, fingerprint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_certificates_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, fingerprint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_endpoints_certificates_remove, 0, 0, 1)
	ZEND_ARG_INFO(0, fingerprint)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_endpoints_certificates_method_entry) {
	PHP_ME(Lxd_Endpoints_Certificates, __construct, arginfo_lxd_endpoints_certificates___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Certificates, all, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Certificates, add, arginfo_lxd_endpoints_certificates_add, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Certificates, info, arginfo_lxd_endpoints_certificates_info, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Certificates, delete, arginfo_lxd_endpoints_certificates_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Lxd_Endpoints_Certificates, remove, arginfo_lxd_endpoints_certificates_remove, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
