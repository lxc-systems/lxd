
extern zend_class_entry *lxd_endpoints_info_ce;

ZEPHIR_INIT_CLASS(Lxd_Endpoints_Info);

PHP_METHOD(Lxd_Endpoints_Info, __construct);
PHP_METHOD(Lxd_Endpoints_Info, myip);

ZEPHIR_INIT_FUNCS(lxd_endpoints_info_method_entry) {
	PHP_ME(Lxd_Endpoints_Info, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lxd_Endpoints_Info, myip, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
