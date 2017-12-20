
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/object.h"
#include "kernel/concat.h"
#include "kernel/array.h"
#include "kernel/operators.h"


/**
 * Lxd\Endpoints\Containers\Files
 *
 * Provides containers files facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/containers/files.zep
 */
ZEPHIR_INIT_CLASS(Lxd_Endpoints_Containers_Files) {

	ZEPHIR_REGISTER_CLASS_EX(Lxd\\Endpoints\\Containers, Files, lxd, endpoints_containers_files, lxd_endpoint_ce, lxd_endpoints_containers_files_method_entry, ZEND_ACC_FINAL_CLASS);

	/**
	 * @var
	 */
	zend_declare_property_null(lxd_endpoints_containers_files_ce, SL("curl"), ZEND_ACC_PROTECTED TSRMLS_CC);

	/**
	 * @var - Base API endpoint
	 */
	zephir_declare_class_constant_string(lxd_endpoints_containers_files_ce, SL("ENDPOINT"), "containers");

	return SUCCESS;

}

/**
 * Class construct
 *
 * @param  array          config Config array which holds object configuration
 * @param  <Lxd\Lib\Curl> curl
 * @return void
 */
PHP_METHOD(Lxd_Endpoints_Containers_Files, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *config_param = NULL, *curl, curl_sub, _1;
	zval config;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&config);
	ZVAL_UNDEF(&curl_sub);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &config_param, &curl);

	ZEPHIR_OBS_COPY_OR_DUP(&config, config_param);


	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, "Lxd\\Endpoints\\Containers\\Files");
	ZEPHIR_CALL_PARENT(NULL, lxd_endpoints_containers_files_ce, getThis(), "__construct", &_0, 0, &config, curl, &_1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 * Read the contents from a file in container
 *
 * <code>
 *  $lxd->containers->files->read('conainer-name', '/path/to/file');
 * </code>
 *
 * @param  string name     Name of container
 * @param  string filepath Full path to a file within the container
 * @return string
 */
PHP_METHOD(Lxd_Endpoints_Containers_Files, read) {

	zval _4;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *filepath_param = NULL, _0, _1, _2, _3;
	zval name, filepath;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&filepath);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &filepath_param);

	if (UNEXPECTED(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(&name, name_param);
	} else {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_EMPTY_STRING(&name);
	}
	if (UNEXPECTED(Z_TYPE_P(filepath_param) != IS_STRING && Z_TYPE_P(filepath_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'filepath' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(filepath_param) == IS_STRING)) {
		zephir_get_strval(&filepath, filepath_param);
	} else {
		ZEPHIR_INIT_VAR(&filepath);
		ZVAL_EMPTY_STRING(&filepath);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVS(&_3, &_1, "/", &name, "/files");
	ZEPHIR_INIT_VAR(&_4);
	zephir_create_array(&_4, 1, 0 TSRMLS_CC);
	zephir_array_update_string(&_4, SL("path"), &filepath, PH_COPY | PH_SEPARATE);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "get", NULL, 0, &_3, &_4);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Write to or Create a file in container
 *
 * <code> 
 *  $lxd->containers->files->write('container-name', '/path/to/file', 'File Contents', 0644, 0, 0);
 * </code>
 *
 * @param  string name     Name of container
 * @param  string filepath Path to the output file in the container
 * @param  string data     Data to write to the file
 * @param  octal mode      Permission bits in octal format e.g 0644
 * @param  int   uid       System user id, 0 = root
 * @param  int   gid       System group id, 0 = root
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Containers_Files, write) {

	zend_bool _8;
	zend_long uid, gid, ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *filepath_param = NULL, *data_param = NULL, *mode = NULL, mode_sub, *uid_param = NULL, *gid_param = NULL, __$null, headers, _0, _4, _13, _14, _15, _16, _1$$3, _2$$3, _5$$4, _6$$4, _9$$5, _10$$5, _11$$5, _12$$5;
	zval name, filepath, data, _3$$3, _7$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&filepath);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_9$$5);
	ZVAL_UNDEF(&_10$$5);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&_12$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 3, &name_param, &filepath_param, &data_param, &mode, &uid_param, &gid_param);

	if (UNEXPECTED(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(&name, name_param);
	} else {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_EMPTY_STRING(&name);
	}
	if (UNEXPECTED(Z_TYPE_P(filepath_param) != IS_STRING && Z_TYPE_P(filepath_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'filepath' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(filepath_param) == IS_STRING)) {
		zephir_get_strval(&filepath, filepath_param);
	} else {
		ZEPHIR_INIT_VAR(&filepath);
		ZVAL_EMPTY_STRING(&filepath);
	}
	if (UNEXPECTED(Z_TYPE_P(data_param) != IS_STRING && Z_TYPE_P(data_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'data' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(data_param) == IS_STRING)) {
		zephir_get_strval(&data, data_param);
	} else {
		ZEPHIR_INIT_VAR(&data);
		ZVAL_EMPTY_STRING(&data);
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!uid_param) {
		uid = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(uid_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'uid' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	uid = Z_LVAL_P(uid_param);
	}
	if (!gid_param) {
		gid = 0;
	} else {
	if (UNEXPECTED(Z_TYPE_P(gid_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'gid' must be a int") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	gid = Z_LVAL_P(gid_param);
	}


	ZEPHIR_INIT_VAR(&headers);
	array_init(&headers);
	ZVAL_LONG(&_0, uid);
	if (Z_TYPE_P(&_0) == IS_LONG) {
		ZVAL_LONG(&_1$$3, uid);
		ZEPHIR_SINIT_VAR(_2$$3);
		ZVAL_LONG(&_2$$3, zephir_get_intval(&_1$$3));
		ZEPHIR_INIT_VAR(&_3$$3);
		ZEPHIR_CONCAT_SV(&_3$$3, "X-LXD-uid: ", &_2$$3);
		zephir_array_append(&headers, &_3$$3, PH_SEPARATE, "lxd/endpoints/containers/files.zep", 100);
	}
	ZVAL_LONG(&_4, gid);
	if (Z_TYPE_P(&_4) == IS_LONG) {
		ZVAL_LONG(&_5$$4, gid);
		ZEPHIR_SINIT_VAR(_6$$4);
		ZVAL_LONG(&_6$$4, zephir_get_intval(&_5$$4));
		ZEPHIR_INIT_VAR(&_7$$4);
		ZEPHIR_CONCAT_SV(&_7$$4, "X-LXD-gid: ", &_6$$4);
		zephir_array_append(&headers, &_7$$4, PH_SEPARATE, "lxd/endpoints/containers/files.zep", 104);
	}
	_8 = Z_TYPE_P(mode) != IS_NULL;
	if (_8) {
		_8 = zephir_is_numeric(mode);
	}
	if (_8) {
		ZEPHIR_CALL_FUNCTION(&_9$$5, "decoct", NULL, 24, mode);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_10$$5);
		ZVAL_STRING(&_10$$5, "%04d");
		ZEPHIR_CALL_FUNCTION(&_11$$5, "sprintf", NULL, 25, &_10$$5, &_9$$5);
		zephir_check_call_status();
		ZEPHIR_INIT_VAR(&_12$$5);
		ZEPHIR_CONCAT_SV(&_12$$5, "X-LXD-mode: ", &_11$$5);
		zephir_array_append(&headers, &_12$$5, PH_SEPARATE, "lxd/endpoints/containers/files.zep", 108);
	}
	zephir_read_property(&_13, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_15);
	ZVAL_STRING(&_15, "containers");
	ZEPHIR_CALL_METHOD(&_14, this_ptr, "getbase", NULL, 11, &_15);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_16);
	ZEPHIR_CONCAT_VSVSV(&_16, &_14, "/", &name, "/files?path=", &filepath);
	ZEPHIR_RETURN_CALL_METHOD(&_13, "post", NULL, 0, &_16, &data, &headers);
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Delete a file in container
 *
 * <code>
 *  $lxd->containers->files->delete('container-name', '/path/to/file');
 * </code>
 *
 * @param  string name     Name of container
 * @param  string filepath Path of the file to delete
 * @return array
 */
PHP_METHOD(Lxd_Endpoints_Containers_Files, delete) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *name_param = NULL, *filepath_param = NULL, _0, _1, _2, _3;
	zval name, filepath;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&filepath);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &filepath_param);

	if (UNEXPECTED(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(&name, name_param);
	} else {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_EMPTY_STRING(&name);
	}
	if (UNEXPECTED(Z_TYPE_P(filepath_param) != IS_STRING && Z_TYPE_P(filepath_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'filepath' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(filepath_param) == IS_STRING)) {
		zephir_get_strval(&filepath, filepath_param);
	} else {
		ZEPHIR_INIT_VAR(&filepath);
		ZVAL_EMPTY_STRING(&filepath);
	}


	zephir_read_property(&_0, this_ptr, SL("curl"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "containers");
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "getbase", NULL, 11, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_3);
	ZEPHIR_CONCAT_VSVSV(&_3, &_1, "/", &name, "/files?path=", &filepath);
	ZEPHIR_RETURN_CALL_METHOD(&_0, "delete", NULL, 0, &_3);
	zephir_check_call_status();
	RETURN_MM();

}

