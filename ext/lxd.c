
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "lxd.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *lxd_endpoint_ce;
zend_class_entry *lxd_client_ce;
zend_class_entry *lxd_endpoints_certificates_ce;
zend_class_entry *lxd_endpoints_containers_ce;
zend_class_entry *lxd_endpoints_containers_files_ce;
zend_class_entry *lxd_endpoints_containers_logs_ce;
zend_class_entry *lxd_endpoints_containers_snapshots_ce;
zend_class_entry *lxd_endpoints_networks_ce;
zend_class_entry *lxd_endpoints_operations_ce;
zend_class_entry *lxd_endpoints_profiles_ce;
zend_class_entry *lxd_lib_certificate_ce;
zend_class_entry *lxd_lib_curl_ce;

ZEND_DECLARE_MODULE_GLOBALS(lxd)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(lxd)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Lxd_Endpoint);
	ZEPHIR_INIT(Lxd_Client);
	ZEPHIR_INIT(Lxd_Endpoints_Certificates);
	ZEPHIR_INIT(Lxd_Endpoints_Containers);
	ZEPHIR_INIT(Lxd_Endpoints_Containers_Files);
	ZEPHIR_INIT(Lxd_Endpoints_Containers_Logs);
	ZEPHIR_INIT(Lxd_Endpoints_Containers_Snapshots);
	ZEPHIR_INIT(Lxd_Endpoints_Networks);
	ZEPHIR_INIT(Lxd_Endpoints_Operations);
	ZEPHIR_INIT(Lxd_Endpoints_Profiles);
	ZEPHIR_INIT(Lxd_Lib_Certificate);
	ZEPHIR_INIT(Lxd_Lib_Curl);
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(lxd)
{
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_lxd_globals *lxd_globals TSRMLS_DC)
{
	lxd_globals->initialized = 0;

	/* Memory options */
	lxd_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	lxd_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	lxd_globals->cache_enabled = 1;

	/* Recursive Lock */
	lxd_globals->recursive_lock = 0;

	/* Static cache */
	memset(lxd_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_lxd_globals *lxd_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(lxd)
{

	zend_lxd_globals *lxd_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	lxd_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(lxd_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(lxd_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(lxd)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(lxd)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_LXD_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_LXD_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_LXD_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_LXD_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_LXD_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(lxd)
{
	php_zephir_init_globals(lxd_globals TSRMLS_CC);
	php_zephir_init_module_globals(lxd_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(lxd)
{

}

PHP_FUNCTION(g_lxd_lxd_connect);
ZEND_BEGIN_ARG_INFO_EX(arginfo_g_lxd_lxd_connect, 0, 0, 2)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, secret)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
ZEND_END_ARG_INFO()


zend_function_entry php_lxd_functions[] = {
ZEND_NAMED_FE(lxd_connect, ZEND_FN(g_lxd_lxd_connect), arginfo_g_lxd_lxd_connect)
ZEND_FE_END

};

zend_module_entry lxd_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_LXD_EXTNAME,
	php_lxd_functions,
	PHP_MINIT(lxd),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(lxd),
#else
	NULL,
#endif
	PHP_RINIT(lxd),
	PHP_RSHUTDOWN(lxd),
	PHP_MINFO(lxd),
	PHP_LXD_VERSION,
	ZEND_MODULE_GLOBALS(lxd),
	PHP_GINIT(lxd),
	PHP_GSHUTDOWN(lxd),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_LXD
ZEND_GET_MODULE(lxd)
#endif
