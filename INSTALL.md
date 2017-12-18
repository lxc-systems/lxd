Installation
============

PHP extensions require a slightly different installation method to a traditional
PHP-based library or framework. You can either download a binary package for the
system of your choice or build it from the sources.

Linux/Solaris
-------------

On a Linux/Solaris system you can easily compile and install the extension from the source code:

**Requirements**

Prerequisite packages are:

* PHP >= 5.4 development resources
* GCC compiler (Linux/Solaris)
* Git
* Zephir - https://github.com/phalcon/zephir

Specific packages for common platforms:



    # Ubuntu
    sudo apt-get install php5-dev gcc make autoconf

    # Suse
    sudo yast -i php5-devel gcc make autoconf

    # CentOS/RedHat/Fedora
    sudo yum install php-devel gcc make autoconf

    # Solaris
    pkg install php-56 gcc-48 make autoconf

Of course, you need to install PHP development headers and tools appropriate for your current PHP version.

**Compilation**

Creating the extension:


    git clone --depth=1 https://github.com/lxc-systems/lxd-php-extension.git ./lxd
    cd lxd
    zephir build
    # Or, for PHP 7 use
    zephir build --backend=ZendEngine3


   **Important:** After that, the compiled extension will be placed in the appropriate directory.
   If the automatic installer failed to do this try moving extension manually.


      # Use right path to the PHP extensions dir here
      sudo cp ext/modules/lxd.so $(php-config --extension-dir)

Add extension to your PHP configuration:


    # Suse: Add a file called lxd.ini in /etc/php5/conf.d/ with this content:
    extension=lxd.so

    # CentOS/RedHat/Fedora: Add a file called lxd.ini in /etc/php.d/ with this content:
    extension=lxd.so

    # Ubuntu/Debian with apache2: Add a file called 50-lxd.ini in /etc/php5/apache2/conf.d/ with this content:
    extension=lxd.so

    # Ubuntu/Debian with php5-fpm: Add a file called 50-lxd.ini in /etc/php5/fpm/conf.d/ with this content:
    extension=lxd.so

    # Ubuntu/Debian with php5-cli: Add a file called 50-lxd.ini in /etc/php5/cli/conf.d/ with this content:
    extension=lxd.so

Restart the webserver.
