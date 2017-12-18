
extern zend_class_entry *lxd_lib_certificate_ce;

ZEPHIR_INIT_CLASS(Lxd_Lib_Certificate);

PHP_METHOD(Lxd_Lib_Certificate, __construct);
PHP_METHOD(Lxd_Lib_Certificate, generate);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_lib_certificate___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, cert_path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxd_lib_certificate_generate, 0, 0, 1)
	ZEND_ARG_INFO(0, ip)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lxd_lib_certificate_method_entry) {
	PHP_ME(Lxd_Lib_Certificate, __construct, arginfo_lxd_lib_certificate___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Lib_Certificate, generate, arginfo_lxd_lib_certificate_generate, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
