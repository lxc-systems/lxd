<?php return array (
  0 => 
  array (
    'type' => 'namespace',
    'name' => 'Lxd\\Lib',
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
    'line' => 3,
    'char' => 5,
  ),
  1 => 
  array (
    'type' => 'class',
    'name' => 'Certificate',
    'abstract' => 0,
    'final' => 0,
    'definition' => 
    array (
      'properties' => 
      array (
        0 => 
        array (
          'visibility' => 
          array (
            0 => 'private',
          ),
          'type' => 'property',
          'name' => 'cert_path',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
          'line' => 7,
          'char' => 10,
        ),
      ),
      'methods' => 
      array (
        0 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => '__construct',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'cert_path',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'string',
                'value' => 'tmp/certificates',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 7,
                'char' => 68,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 7,
              'char' => 68,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'cert_path',
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'cert_path',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 9,
                    'char' => 40,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 9,
                  'char' => 40,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 10,
              'char' => 5,
            ),
          ),
          'return-type' => 
          array (
            'type' => 'return-type',
            'void' => 1,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
            'line' => 8,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
          'line' => 7,
          'last-line' => 14,
          'char' => 19,
        ),
        1 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'generate',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'ip',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 15,
              'char' => 39,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'empty',
                'left' => 
                array (
                  'type' => 'list',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'ip',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 17,
                    'char' => 20,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 17,
                  'char' => 22,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 17,
                'char' => 22,
              ),
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'throw',
                  'expr' => 
                  array (
                    'type' => 'new',
                    'class' => '\\Exception',
                    'dynamic' => 0,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'string',
                          'value' => 'Server IP',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 18,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 18,
                        'char' => 43,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 18,
                    'char' => 44,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 19,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 22,
              'char' => 11,
            ),
            1 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'privkey',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 22,
                  'char' => 20,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 22,
              'char' => 24,
            ),
            2 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'privkey',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'openssl_pkey_new',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'array',
                          'left' => 
                          array (
                            0 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'digest_alg',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 23,
                                'char' => 30,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'rsa',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 23,
                                'char' => 35,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 23,
                              'char' => 35,
                            ),
                            1 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'private_key_bits',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 24,
                                'char' => 30,
                              ),
                              'value' => 
                              array (
                                'type' => 'int',
                                'value' => '2048',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 24,
                                'char' => 36,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 24,
                              'char' => 36,
                            ),
                            2 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'private_key_type',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 25,
                                'char' => 30,
                              ),
                              'value' => 
                              array (
                                'type' => 'constant',
                                'value' => 'OPENSSL_KEYTYPE_RSA',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 26,
                                'char' => 9,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 26,
                              'char' => 9,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 26,
                          'char' => 10,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 26,
                        'char' => 10,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 26,
                    'char' => 11,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 26,
                  'char' => 11,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 29,
              'char' => 11,
            ),
            3 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'cert',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 29,
                  'char' => 17,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 29,
              'char' => 21,
            ),
            4 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'cert',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'openssl_csr_new',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'array',
                          'left' => 
                          array (
                            0 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'countryName',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 30,
                                'char' => 36,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'NA',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 30,
                                'char' => 40,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 30,
                              'char' => 40,
                            ),
                            1 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'stateOrProvinceName',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 31,
                                'char' => 36,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'NA',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 31,
                                'char' => 40,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 31,
                              'char' => 40,
                            ),
                            2 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'localityName',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 32,
                                'char' => 36,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'NA',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 32,
                                'char' => 40,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 32,
                              'char' => 40,
                            ),
                            3 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'organizationName',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 33,
                                'char' => 36,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'NA',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 33,
                                'char' => 40,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 33,
                              'char' => 40,
                            ),
                            4 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'organizationalUnitName',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 34,
                                'char' => 36,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'NA',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 34,
                                'char' => 40,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 34,
                              'char' => 40,
                            ),
                            5 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'commonName',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 35,
                                'char' => 36,
                              ),
                              'value' => 
                              array (
                                'type' => 'variable',
                                'value' => 'ip',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 35,
                                'char' => 40,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 35,
                              'char' => 40,
                            ),
                            6 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'emailAddress',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 36,
                                'char' => 36,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'NA',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                                'line' => 37,
                                'char' => 9,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                              'line' => 37,
                              'char' => 9,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 37,
                          'char' => 10,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 37,
                        'char' => 10,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'privkey',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 37,
                          'char' => 19,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 37,
                        'char' => 19,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 37,
                    'char' => 20,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 37,
                  'char' => 20,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 40,
              'char' => 11,
            ),
            5 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'cert',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'openssl_csr_sign',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'cert',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 40,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 40,
                        'char' => 41,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'null',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 40,
                          'char' => 47,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 40,
                        'char' => 47,
                      ),
                      2 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'privkey',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 40,
                          'char' => 56,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 40,
                        'char' => 56,
                      ),
                      3 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'mul',
                          'left' => 
                          array (
                            'type' => 'int',
                            'value' => '365',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                            'line' => 40,
                            'char' => 61,
                          ),
                          'right' => 
                          array (
                            'type' => 'int',
                            'value' => '5',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                            'line' => 40,
                            'char' => 63,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 40,
                          'char' => 63,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 40,
                        'char' => 63,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 40,
                    'char' => 64,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 40,
                  'char' => 64,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 43,
              'char' => 14,
            ),
            6 => 
            array (
              'type' => 'declare',
              'data-type' => 'string',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'certString',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 43,
                  'char' => 26,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 43,
              'char' => 49,
            ),
            7 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'openssl_x509_export',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'cert',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 43,
                      'char' => 55,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 43,
                    'char' => 55,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'certString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 43,
                      'char' => 67,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 43,
                    'char' => 67,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 43,
                'char' => 68,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 44,
              'char' => 14,
            ),
            8 => 
            array (
              'type' => 'declare',
              'data-type' => 'string',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'privkeyString',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 44,
                  'char' => 29,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 44,
              'char' => 49,
            ),
            9 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'openssl_pkey_export',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'privkey',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 44,
                      'char' => 58,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 44,
                    'char' => 58,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'privkeyString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 44,
                      'char' => 73,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 44,
                    'char' => 73,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 44,
                'char' => 74,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 45,
              'char' => 14,
            ),
            10 => 
            array (
              'type' => 'declare',
              'data-type' => 'string',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'p12String',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 45,
                  'char' => 25,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 45,
              'char' => 51,
            ),
            11 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'openssl_pkcs12_export',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'certString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 45,
                      'char' => 63,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 45,
                    'char' => 63,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'p12String',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 45,
                      'char' => 74,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 45,
                    'char' => 74,
                  ),
                  2 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'privkeyString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 45,
                      'char' => 89,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 45,
                    'char' => 89,
                  ),
                  3 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'string',
                      'value' => '',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 45,
                      'char' => 91,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 45,
                    'char' => 91,
                  ),
                  4 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'empty-array',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 45,
                      'char' => 95,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 45,
                    'char' => 95,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 45,
                'char' => 96,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 48,
              'char' => 14,
            ),
            12 => 
            array (
              'type' => 'declare',
              'data-type' => 'string',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'pemString',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 48,
                  'char' => 25,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 48,
              'char' => 29,
            ),
            13 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'pemString',
                  'expr' => 
                  array (
                    'type' => 'concat',
                    'left' => 
                    array (
                      'type' => 'variable',
                      'value' => 'certString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 48,
                      'char' => 53,
                    ),
                    'right' => 
                    array (
                      'type' => 'variable',
                      'value' => 'privkeyString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 48,
                      'char' => 67,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 48,
                    'char' => 67,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 48,
                  'char' => 67,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 51,
              'char' => 14,
            ),
            14 => 
            array (
              'type' => 'declare',
              'data-type' => 'string',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'pemHash',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 51,
                  'char' => 23,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 51,
              'char' => 27,
            ),
            15 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'pemHash',
                  'expr' => 
                  array (
                    'type' => 'cast',
                    'left' => 'string',
                    'right' => 
                    array (
                      'type' => 'fcall',
                      'name' => 'hash',
                      'call-type' => 1,
                      'parameters' => 
                      array (
                        0 => 
                        array (
                          'parameter' => 
                          array (
                            'type' => 'string',
                            'value' => 'sha1',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                            'line' => 51,
                            'char' => 57,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 51,
                          'char' => 57,
                        ),
                        1 => 
                        array (
                          'parameter' => 
                          array (
                            'type' => 'variable',
                            'value' => 'pemString',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                            'line' => 51,
                            'char' => 68,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 51,
                          'char' => 68,
                        ),
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 51,
                      'char' => 69,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 51,
                    'char' => 69,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 51,
                  'char' => 69,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 54,
              'char' => 14,
            ),
            16 => 
            array (
              'type' => 'declare',
              'data-type' => 'string',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'cert_path',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 54,
                  'char' => 25,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 54,
              'char' => 29,
            ),
            17 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'cert_path',
                  'expr' => 
                  array (
                    'type' => 'concat',
                    'left' => 
                    array (
                      'type' => 'concat',
                      'left' => 
                      array (
                        'type' => 'property-access',
                        'left' => 
                        array (
                          'type' => 'variable',
                          'value' => 'this',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 54,
                          'char' => 48,
                        ),
                        'right' => 
                        array (
                          'type' => 'variable',
                          'value' => 'cert_path',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 54,
                          'char' => 58,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 54,
                        'char' => 58,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '/',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 54,
                        'char' => 60,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 54,
                      'char' => 60,
                    ),
                    'right' => 
                    array (
                      'type' => 'variable',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 54,
                      'char' => 63,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 54,
                    'char' => 63,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 54,
                  'char' => 63,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 55,
              'char' => 10,
            ),
            18 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'not',
                'left' => 
                array (
                  'type' => 'fcall',
                  'name' => 'file_exists',
                  'call-type' => 1,
                  'parameters' => 
                  array (
                    0 => 
                    array (
                      'parameter' => 
                      array (
                        'type' => 'variable',
                        'value' => 'cert_path',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 55,
                        'char' => 34,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 55,
                      'char' => 34,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 55,
                  'char' => 36,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 55,
                'char' => 36,
              ),
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'fcall',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'mkdir',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'cert_path',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 56,
                          'char' => 28,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 56,
                        'char' => 28,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'int',
                          'value' => '0755',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 56,
                          'char' => 34,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 56,
                        'char' => 34,
                      ),
                      2 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'bool',
                          'value' => 'true',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                          'line' => 56,
                          'char' => 40,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 56,
                        'char' => 40,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 56,
                    'char' => 41,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                  'line' => 57,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 60,
              'char' => 25,
            ),
            19 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'file_put_contents',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'concat',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'cert_path',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 60,
                        'char' => 36,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '/cert.crt',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 60,
                        'char' => 46,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 60,
                      'char' => 46,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 60,
                    'char' => 46,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'certString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 60,
                      'char' => 58,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 60,
                    'char' => 58,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 60,
                'char' => 59,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 61,
              'char' => 25,
            ),
            20 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'file_put_contents',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'concat',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'cert_path',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 61,
                        'char' => 36,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '/private.key',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 61,
                        'char' => 49,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 61,
                      'char' => 49,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 61,
                    'char' => 49,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'privkeyString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 61,
                      'char' => 64,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 61,
                    'char' => 64,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 61,
                'char' => 65,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 62,
              'char' => 25,
            ),
            21 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'file_put_contents',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'concat',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'cert_path',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 62,
                        'char' => 36,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '/client.pem',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 62,
                        'char' => 48,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 62,
                      'char' => 48,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 62,
                    'char' => 48,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'pemString',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 62,
                      'char' => 59,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 62,
                    'char' => 59,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 62,
                'char' => 60,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 63,
              'char' => 25,
            ),
            22 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'file_put_contents',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'concat',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'cert_path',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 63,
                        'char' => 36,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '/cert.p12',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                        'line' => 63,
                        'char' => 46,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 63,
                      'char' => 46,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 63,
                    'char' => 46,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'p12String',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 63,
                      'char' => 57,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 63,
                    'char' => 57,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 63,
                'char' => 58,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 66,
              'char' => 14,
            ),
            23 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'array',
                'left' => 
                array (
                  0 => 
                  array (
                    'key' => 
                    array (
                      'type' => 'string',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 67,
                      'char' => 23,
                    ),
                    'value' => 
                    array (
                      'type' => 'variable',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 67,
                      'char' => 27,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 67,
                    'char' => 27,
                  ),
                  1 => 
                  array (
                    'key' => 
                    array (
                      'type' => 'string',
                      'value' => 'pem_hash',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 68,
                      'char' => 23,
                    ),
                    'value' => 
                    array (
                      'type' => 'variable',
                      'value' => 'pemHash',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 68,
                      'char' => 32,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 68,
                    'char' => 32,
                  ),
                  2 => 
                  array (
                    'key' => 
                    array (
                      'type' => 'string',
                      'value' => 'cert_path',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 69,
                      'char' => 23,
                    ),
                    'value' => 
                    array (
                      'type' => 'variable',
                      'value' => 'cert_path',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 69,
                      'char' => 34,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 69,
                    'char' => 34,
                  ),
                  3 => 
                  array (
                    'key' => 
                    array (
                      'type' => 'string',
                      'value' => 'created',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 70,
                      'char' => 23,
                    ),
                    'value' => 
                    array (
                      'type' => 'fcall',
                      'name' => 'date_create',
                      'call-type' => 1,
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                      'line' => 71,
                      'char' => 9,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                    'line' => 71,
                    'char' => 9,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 71,
                'char' => 10,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
              'line' => 72,
              'char' => 5,
            ),
          ),
          'docblock' => '**
     * Generate certificate
     *',
          'return-type' => 
          array (
            'type' => 'return-type',
            'list' => 
            array (
              0 => 
              array (
                'type' => 'return-type-parameter',
                'data-type' => 'array',
                'mandatory' => 0,
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
                'line' => 16,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
            'line' => 16,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
          'line' => 15,
          'last-line' => 73,
          'char' => 19,
        ),
      ),
      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
      'line' => 3,
      'char' => 5,
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/certificate.zep',
    'line' => 3,
    'char' => 5,
  ),
);