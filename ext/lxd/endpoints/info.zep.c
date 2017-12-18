
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Lxd_Endpoints_Info) {

	ZEPHIR_REGISTER_CLASS(Lxd\\Endpoints, Info, lxd, endpoints_info, lxd_endpoints_info_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Lxd_Endpoints_Info, __construct) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Lxd_Endpoints_Info, myip) {

	zval *this_ptr = getThis();


	RETURN_STRING("xyz");

}

