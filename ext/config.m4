PHP_ARG_ENABLE(lxd, whether to enable lxd, [ --enable-lxd   Enable Lxd])

if test "$PHP_LXD" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, LXD_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_LXD, 1, [Whether you have Lxd])
	lxd_sources="lxd.c kernel/main.c kernel/memory.c kernel/exception.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c lxd/endpoint.zep.c
	lxd/client.zep.c
	lxd/endpoints/certificates.zep.c
	lxd/endpoints/containers.zep.c
	lxd/endpoints/host.zep.c
	lxd/endpoints/operations.zep.c
	lxd/lib/certificate.zep.c
	lxd/lib/curl.zep.c "
	PHP_NEW_EXTENSION(lxd, $lxd_sources, $ext_shared,, )
	PHP_SUBST(LXD_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([lxd], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([lxd], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/lxd], [php_LXD.h])

fi
