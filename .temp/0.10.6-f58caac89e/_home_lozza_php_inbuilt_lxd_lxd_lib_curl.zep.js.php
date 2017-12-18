<?php return array (
  0 => 
  array (
    'type' => 'namespace',
    'name' => 'Lxd\\Lib',
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
    'line' => 3,
    'char' => 5,
  ),
  1 => 
  array (
    'type' => 'class',
    'name' => 'Curl',
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
          'name' => 'config',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
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
              'name' => 'config',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 7,
              'char' => 39,
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
                  'property' => 'config',
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'config',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 9,
                    'char' => 34,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 9,
                  'char' => 34,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 10,
              'char' => 5,
            ),
          ),
          'return-type' => 
          array (
            'type' => 'return-type',
            'void' => 1,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
            'line' => 8,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
          'line' => 7,
          'last-line' => 17,
          'char' => 19,
        ),
        1 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'get',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'url',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 18,
              'char' => 28,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'parameters',
              'const' => 0,
              'data-type' => 'array',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'empty-array',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 18,
                'char' => 51,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 18,
              'char' => 51,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'query',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 20,
                  'char' => 18,
                ),
                1 => 
                array (
                  'variable' => 'curl',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 20,
                  'char' => 24,
                ),
                2 => 
                array (
                  'variable' => 'curl_options',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 20,
                  'char' => 38,
                ),
                3 => 
                array (
                  'variable' => 'response',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 20,
                  'char' => 48,
                ),
                4 => 
                array (
                  'variable' => 'httpCode',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 20,
                  'char' => 58,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 23,
              'char' => 11,
            ),
            1 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'query',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'http_build_query',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'parameters',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 23,
                          'char' => 48,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 23,
                        'char' => 48,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 23,
                    'char' => 49,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 23,
                  'char' => 49,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 26,
              'char' => 11,
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
                  'variable' => 'curl',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_init',
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
                            'value' => 'url',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 26,
                            'char' => 34,
                          ),
                          'right' => 
                          array (
                            'type' => 'list',
                            'left' => 
                            array (
                              'type' => 'ternary',
                              'left' => 
                              array (
                                'type' => 'not',
                                'left' => 
                                array (
                                  'type' => 'empty',
                                  'left' => 
                                  array (
                                    'type' => 'list',
                                    'left' => 
                                    array (
                                      'type' => 'variable',
                                      'value' => 'query',
                                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                      'line' => 26,
                                      'char' => 48,
                                    ),
                                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                    'line' => 26,
                                    'char' => 50,
                                  ),
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 26,
                                  'char' => 50,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 26,
                                'char' => 50,
                              ),
                              'right' => 
                              array (
                                'type' => 'concat',
                                'left' => 
                                array (
                                  'type' => 'string',
                                  'value' => '?',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 26,
                                  'char' => 53,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'query',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 26,
                                  'char' => 60,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 26,
                                'char' => 60,
                              ),
                              'extra' => 
                              array (
                                'type' => 'null',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 26,
                                'char' => 66,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 26,
                              'char' => 66,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 26,
                            'char' => 67,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 26,
                          'char' => 67,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 26,
                        'char' => 67,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 26,
                    'char' => 68,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 26,
                  'char' => 68,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 29,
              'char' => 11,
            ),
            3 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'curl_options',
                  'expr' => 
                  array (
                    'type' => 'array',
                    'left' => 
                    array (
                      0 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_RETURNTRANSFER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 30,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'true',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 30,
                          'char' => 42,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 30,
                        'char' => 42,
                      ),
                      1 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYPEER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 31,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 31,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 31,
                        'char' => 43,
                      ),
                      2 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYHOST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 32,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 33,
                          'char' => 9,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 33,
                        'char' => 9,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 33,
                    'char' => 10,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 33,
                  'char' => 10,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 35,
              'char' => 10,
            ),
            4 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'list',
                'left' => 
                array (
                  'type' => 'and',
                  'left' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 35,
                        'char' => 18,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 35,
                        'char' => 25,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 35,
                      'char' => 25,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'certificate_path',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 35,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 35,
                    'char' => 45,
                  ),
                  'right' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 35,
                        'char' => 52,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 35,
                        'char' => 59,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 35,
                      'char' => 59,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 35,
                      'char' => 62,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 35,
                    'char' => 63,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 35,
                  'char' => 63,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 35,
                'char' => 65,
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
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLKEY',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 36,
                          'char' => 44,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 36,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 36,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 36,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 36,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 36,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 36,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 36,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 36,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 36,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 36,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 36,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 36,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 36,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/private.key',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 36,
                          'char' => 111,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 36,
                        'char' => 111,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 36,
                      'char' => 111,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 37,
                  'char' => 15,
                ),
                1 => 
                array (
                  'type' => 'let',
                  'assignments' => 
                  array (
                    0 => 
                    array (
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLCERT',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 37,
                          'char' => 45,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 37,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 37,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 37,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 37,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 37,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 37,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 37,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 37,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 37,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 37,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 37,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 37,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 37,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/client.pem',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 37,
                          'char' => 110,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 37,
                        'char' => 110,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 37,
                      'char' => 110,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 38,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 40,
              'char' => 25,
            ),
            5 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_setopt_array',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 40,
                      'char' => 31,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 40,
                    'char' => 31,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl_options',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 40,
                      'char' => 45,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 40,
                    'char' => 45,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 40,
                'char' => 46,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 43,
              'char' => 11,
            ),
            6 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'response',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_exec',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 43,
                          'char' => 40,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 43,
                        'char' => 40,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 43,
                    'char' => 41,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 43,
                  'char' => 41,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 44,
              'char' => 11,
            ),
            7 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'httpCode',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_getinfo',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 44,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 44,
                        'char' => 41,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLINFO_HTTP_CODE',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 44,
                          'char' => 61,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 44,
                        'char' => 61,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 44,
                    'char' => 62,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 44,
                  'char' => 62,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 47,
              'char' => 18,
            ),
            8 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_close',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 47,
                      'char' => 24,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 47,
                    'char' => 24,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 47,
                'char' => 25,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 50,
              'char' => 11,
            ),
            9 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'response',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'json_decode',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'response',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 50,
                          'char' => 44,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 50,
                        'char' => 44,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'bool',
                          'value' => 'true',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 50,
                          'char' => 50,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 50,
                        'char' => 50,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 50,
                    'char' => 51,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 50,
                  'char' => 51,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 53,
              'char' => 14,
            ),
            10 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'cast',
                'left' => 'array',
                'right' => 
                array (
                  'type' => 'variable',
                  'value' => 'response',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 53,
                  'char' => 32,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 53,
                'char' => 32,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 54,
              'char' => 5,
            ),
          ),
          'docblock' => '**
     *  GET request
     *  @param  string      Resource to fetch
     *  @param  array       Associative array with additional parameters
     *  @return array       Associative array with the result
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 19,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
            'line' => 19,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
          'line' => 18,
          'last-line' => 61,
          'char' => 19,
        ),
        2 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'post',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'url',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 62,
              'char' => 29,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'parameters',
              'const' => 0,
              'data-type' => 'array',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'empty-array',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 62,
                'char' => 52,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 62,
              'char' => 52,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'curl',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 64,
                  'char' => 17,
                ),
                1 => 
                array (
                  'variable' => 'curl_options',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 64,
                  'char' => 31,
                ),
                2 => 
                array (
                  'variable' => 'response',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 64,
                  'char' => 41,
                ),
                3 => 
                array (
                  'variable' => 'httpCode',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 64,
                  'char' => 51,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 67,
              'char' => 11,
            ),
            1 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'curl',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_init',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'url',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 67,
                          'char' => 34,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 67,
                        'char' => 34,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 67,
                    'char' => 35,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 67,
                  'char' => 35,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 70,
              'char' => 11,
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
                  'variable' => 'curl_options',
                  'expr' => 
                  array (
                    'type' => 'array',
                    'left' => 
                    array (
                      0 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_POST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 71,
                          'char' => 26,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'true',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 71,
                          'char' => 32,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 71,
                        'char' => 32,
                      ),
                      1 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_RETURNTRANSFER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 72,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'true',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 72,
                          'char' => 42,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 72,
                        'char' => 42,
                      ),
                      2 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYPEER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 73,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 73,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 73,
                        'char' => 43,
                      ),
                      3 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYHOST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 74,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 74,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 74,
                        'char' => 43,
                      ),
                      4 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_HTTPHEADER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 75,
                          'char' => 32,
                        ),
                        'value' => 
                        array (
                          'type' => 'array',
                          'left' => 
                          array (
                            0 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'Content-Type: application/json',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 77,
                                'char' => 13,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 77,
                              'char' => 13,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 77,
                          'char' => 14,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 77,
                        'char' => 14,
                      ),
                      5 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_POSTFIELDS',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 78,
                          'char' => 32,
                        ),
                        'value' => 
                        array (
                          'type' => 'fcall',
                          'name' => 'json_encode',
                          'call-type' => 1,
                          'parameters' => 
                          array (
                            0 => 
                            array (
                              'parameter' => 
                              array (
                                'type' => 'variable',
                                'value' => 'parameters',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 78,
                                'char' => 56,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 78,
                              'char' => 56,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 79,
                          'char' => 9,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 79,
                        'char' => 9,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 79,
                    'char' => 10,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 79,
                  'char' => 10,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 81,
              'char' => 10,
            ),
            3 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'list',
                'left' => 
                array (
                  'type' => 'and',
                  'left' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 81,
                        'char' => 18,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 81,
                        'char' => 25,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 81,
                      'char' => 25,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'certificate_path',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 81,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 81,
                    'char' => 45,
                  ),
                  'right' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 81,
                        'char' => 52,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 81,
                        'char' => 59,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 81,
                      'char' => 59,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 81,
                      'char' => 62,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 81,
                    'char' => 63,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 81,
                  'char' => 63,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 81,
                'char' => 65,
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
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLKEY',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 82,
                          'char' => 44,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 82,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 82,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 82,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 82,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 82,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 82,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 82,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 82,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 82,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 82,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 82,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 82,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 82,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/private.key',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 82,
                          'char' => 111,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 82,
                        'char' => 111,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 82,
                      'char' => 111,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 83,
                  'char' => 15,
                ),
                1 => 
                array (
                  'type' => 'let',
                  'assignments' => 
                  array (
                    0 => 
                    array (
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLCERT',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 83,
                          'char' => 45,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 83,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 83,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 83,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 83,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 83,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 83,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 83,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 83,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 83,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 83,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 83,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 83,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 83,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/client.pem',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 83,
                          'char' => 110,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 83,
                        'char' => 110,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 83,
                      'char' => 110,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 84,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 86,
              'char' => 25,
            ),
            4 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_setopt_array',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 86,
                      'char' => 31,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 86,
                    'char' => 31,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl_options',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 86,
                      'char' => 45,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 86,
                    'char' => 45,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 86,
                'char' => 46,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 89,
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
                  'variable' => 'response',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_exec',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 89,
                          'char' => 40,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 89,
                        'char' => 40,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 89,
                    'char' => 41,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 89,
                  'char' => 41,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 90,
              'char' => 11,
            ),
            6 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'httpCode',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_getinfo',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 90,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 90,
                        'char' => 41,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLINFO_HTTP_CODE',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 90,
                          'char' => 61,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 90,
                        'char' => 61,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 90,
                    'char' => 62,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 90,
                  'char' => 62,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 93,
              'char' => 18,
            ),
            7 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_close',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 93,
                      'char' => 24,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 93,
                    'char' => 24,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 93,
                'char' => 25,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 96,
              'char' => 10,
            ),
            8 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'or',
                'left' => 
                array (
                  'type' => 'not',
                  'left' => 
                  array (
                    'type' => 'list',
                    'left' => 
                    array (
                      'type' => 'variable',
                      'value' => 'httpCode',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 96,
                      'char' => 22,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 96,
                    'char' => 25,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 96,
                  'char' => 25,
                ),
                'right' => 
                array (
                  'type' => 'equals',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'httpCode',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 96,
                    'char' => 37,
                  ),
                  'right' => 
                  array (
                    'type' => 'int',
                    'value' => '400',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 96,
                    'char' => 43,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 96,
                  'char' => 43,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 96,
                'char' => 43,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 101,
              'char' => 14,
            ),
            9 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'json_decode',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'response',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 101,
                      'char' => 36,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 101,
                    'char' => 36,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'bool',
                      'value' => 'true',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 101,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 101,
                    'char' => 42,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 101,
                'char' => 43,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 102,
              'char' => 5,
            ),
          ),
          'docblock' => '**
     *  Do a POST request
     *  @param  string      Resource name
     *  @param  array       Associative array with data to post
     *  @return mixed       False on failure or the id of the created item           
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 63,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
            'line' => 63,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
          'line' => 62,
          'last-line' => 110,
          'char' => 19,
        ),
        3 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'put',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'url',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 111,
              'char' => 28,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'data',
              'const' => 0,
              'data-type' => 'array',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'empty-array',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 111,
                'char' => 45,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 111,
              'char' => 45,
            ),
            2 => 
            array (
              'type' => 'parameter',
              'name' => 'parameters',
              'const' => 0,
              'data-type' => 'array',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'empty-array',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 111,
                'char' => 68,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 111,
              'char' => 68,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'curl',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 113,
                  'char' => 17,
                ),
                1 => 
                array (
                  'variable' => 'curl_options',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 113,
                  'char' => 31,
                ),
                2 => 
                array (
                  'variable' => 'response',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 113,
                  'char' => 41,
                ),
                3 => 
                array (
                  'variable' => 'httpCode',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 113,
                  'char' => 51,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 116,
              'char' => 11,
            ),
            1 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'curl',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_init',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'url',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 116,
                          'char' => 34,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 116,
                        'char' => 34,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 116,
                    'char' => 35,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 116,
                  'char' => 35,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 119,
              'char' => 11,
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
                  'variable' => 'curl_options',
                  'expr' => 
                  array (
                    'type' => 'array',
                    'left' => 
                    array (
                      0 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_CUSTOMREQUEST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 120,
                          'char' => 35,
                        ),
                        'value' => 
                        array (
                          'type' => 'string',
                          'value' => 'PUT',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 120,
                          'char' => 40,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 120,
                        'char' => 40,
                      ),
                      1 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYPEER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 121,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 121,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 121,
                        'char' => 43,
                      ),
                      2 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYHOST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 122,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 122,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 122,
                        'char' => 43,
                      ),
                      3 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_HTTPHEADER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 123,
                          'char' => 32,
                        ),
                        'value' => 
                        array (
                          'type' => 'array',
                          'left' => 
                          array (
                            0 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'Content-Type: application/json',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 125,
                                'char' => 13,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 125,
                              'char' => 13,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 125,
                          'char' => 14,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 125,
                        'char' => 14,
                      ),
                      4 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_POSTFIELDS',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 126,
                          'char' => 32,
                        ),
                        'value' => 
                        array (
                          'type' => 'fcall',
                          'name' => 'json_encode',
                          'call-type' => 1,
                          'parameters' => 
                          array (
                            0 => 
                            array (
                              'parameter' => 
                              array (
                                'type' => 'variable',
                                'value' => 'parameters',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 126,
                                'char' => 56,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 126,
                              'char' => 56,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 127,
                          'char' => 9,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 127,
                        'char' => 9,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 127,
                    'char' => 10,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 127,
                  'char' => 10,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 129,
              'char' => 10,
            ),
            3 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'list',
                'left' => 
                array (
                  'type' => 'and',
                  'left' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 129,
                        'char' => 18,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 129,
                        'char' => 25,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 129,
                      'char' => 25,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'certificate_path',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 129,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 129,
                    'char' => 45,
                  ),
                  'right' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 129,
                        'char' => 52,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 129,
                        'char' => 59,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 129,
                      'char' => 59,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 129,
                      'char' => 62,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 129,
                    'char' => 63,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 129,
                  'char' => 63,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 129,
                'char' => 65,
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
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLKEY',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 130,
                          'char' => 44,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 130,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 130,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 130,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 130,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 130,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 130,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 130,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 130,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 130,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 130,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 130,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 130,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 130,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/private.key',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 130,
                          'char' => 111,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 130,
                        'char' => 111,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 130,
                      'char' => 111,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 131,
                  'char' => 15,
                ),
                1 => 
                array (
                  'type' => 'let',
                  'assignments' => 
                  array (
                    0 => 
                    array (
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLCERT',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 131,
                          'char' => 45,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 131,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 131,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 131,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 131,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 131,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 131,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 131,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 131,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 131,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 131,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 131,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 131,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 131,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/client.pem',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 131,
                          'char' => 110,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 131,
                        'char' => 110,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 131,
                      'char' => 110,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 132,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 134,
              'char' => 25,
            ),
            4 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_setopt_array',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 134,
                      'char' => 31,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 134,
                    'char' => 31,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl_options',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 134,
                      'char' => 45,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 134,
                    'char' => 45,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 134,
                'char' => 46,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 137,
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
                  'variable' => 'response',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_exec',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 137,
                          'char' => 39,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 137,
                        'char' => 39,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 137,
                    'char' => 40,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 137,
                  'char' => 40,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 138,
              'char' => 11,
            ),
            6 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'httpCode',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_getinfo',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 138,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 138,
                        'char' => 41,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLINFO_HTTP_CODE',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 138,
                          'char' => 61,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 138,
                        'char' => 61,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 138,
                    'char' => 62,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 138,
                  'char' => 62,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 141,
              'char' => 18,
            ),
            7 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_close',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 141,
                      'char' => 24,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 141,
                    'char' => 24,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 141,
                'char' => 25,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 144,
              'char' => 10,
            ),
            8 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'or',
                'left' => 
                array (
                  'type' => 'not',
                  'left' => 
                  array (
                    'type' => 'list',
                    'left' => 
                    array (
                      'type' => 'variable',
                      'value' => 'httpCode',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 144,
                      'char' => 22,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 144,
                    'char' => 25,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 144,
                  'char' => 25,
                ),
                'right' => 
                array (
                  'type' => 'equals',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'httpCode',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 144,
                    'char' => 37,
                  ),
                  'right' => 
                  array (
                    'type' => 'int',
                    'value' => '400',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 144,
                    'char' => 43,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 144,
                  'char' => 43,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 144,
                'char' => 43,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 149,
              'char' => 14,
            ),
            9 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'json_decode',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'response',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 149,
                      'char' => 36,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 149,
                    'char' => 36,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'bool',
                      'value' => 'true',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 149,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 149,
                    'char' => 42,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 149,
                'char' => 43,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 150,
              'char' => 5,
            ),
          ),
          'docblock' => '**
     *  Do a PUT request
     *  @param  string      Resource name
     *  @param  array       Associative array with data to post
     *  @param  array       Associative array with additional parameters
     *  @return bool
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 112,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
            'line' => 112,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
          'line' => 111,
          'last-line' => 156,
          'char' => 19,
        ),
        4 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'delete',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'url',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 157,
              'char' => 31,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'curl',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 159,
                  'char' => 17,
                ),
                1 => 
                array (
                  'variable' => 'curl_options',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 159,
                  'char' => 31,
                ),
                2 => 
                array (
                  'variable' => 'response',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 159,
                  'char' => 41,
                ),
                3 => 
                array (
                  'variable' => 'httpCode',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 159,
                  'char' => 51,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 162,
              'char' => 11,
            ),
            1 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'curl',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_init',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'url',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 162,
                          'char' => 34,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 162,
                        'char' => 34,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 162,
                    'char' => 35,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 162,
                  'char' => 35,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 165,
              'char' => 11,
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
                  'variable' => 'curl_options',
                  'expr' => 
                  array (
                    'type' => 'array',
                    'left' => 
                    array (
                      0 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_CUSTOMREQUEST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 166,
                          'char' => 35,
                        ),
                        'value' => 
                        array (
                          'type' => 'string',
                          'value' => 'DELETE',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 166,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 166,
                        'char' => 43,
                      ),
                      1 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYPEER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 167,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 167,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 167,
                        'char' => 43,
                      ),
                      2 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSL_VERIFYHOST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 168,
                          'char' => 36,
                        ),
                        'value' => 
                        array (
                          'type' => 'bool',
                          'value' => 'false',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 168,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 168,
                        'char' => 43,
                      ),
                      3 => 
                      array (
                        'key' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_HTTPHEADER',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 169,
                          'char' => 32,
                        ),
                        'value' => 
                        array (
                          'type' => 'array',
                          'left' => 
                          array (
                            0 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => 'Content-Type: application/json',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 171,
                                'char' => 13,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 171,
                              'char' => 13,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 172,
                          'char' => 9,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 172,
                        'char' => 9,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 172,
                    'char' => 10,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 172,
                  'char' => 10,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 174,
              'char' => 10,
            ),
            3 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'list',
                'left' => 
                array (
                  'type' => 'and',
                  'left' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 174,
                        'char' => 18,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 174,
                        'char' => 25,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 174,
                      'char' => 25,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'certificate_path',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 174,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 174,
                    'char' => 45,
                  ),
                  'right' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 174,
                        'char' => 52,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 174,
                        'char' => 59,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 174,
                      'char' => 59,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 174,
                      'char' => 62,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 174,
                    'char' => 63,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 174,
                  'char' => 63,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 174,
                'char' => 65,
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
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLKEY',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 175,
                          'char' => 44,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 175,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 175,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 175,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 175,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 175,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 175,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 175,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 175,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 175,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 175,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 175,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 175,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 175,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/private.key',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 175,
                          'char' => 111,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 175,
                        'char' => 111,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 175,
                      'char' => 111,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 176,
                  'char' => 15,
                ),
                1 => 
                array (
                  'type' => 'let',
                  'assignments' => 
                  array (
                    0 => 
                    array (
                      'assign-type' => 'array-index',
                      'operator' => 'assign',
                      'variable' => 'curl_options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLOPT_SSLCERT',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 176,
                          'char' => 45,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'concat',
                        'left' => 
                        array (
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 176,
                                  'char' => 54,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                  'line' => 176,
                                  'char' => 61,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 176,
                                'char' => 61,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 176,
                                'char' => 78,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 176,
                              'char' => 79,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 176,
                              'char' => 81,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 176,
                            'char' => 81,
                          ),
                          'right' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 176,
                                'char' => 87,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                                'line' => 176,
                                'char' => 94,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 176,
                              'char' => 94,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'ip',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                              'line' => 176,
                              'char' => 97,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                            'line' => 176,
                            'char' => 98,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 176,
                          'char' => 98,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/client.pem',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 176,
                          'char' => 110,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 176,
                        'char' => 110,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 176,
                      'char' => 110,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 177,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 179,
              'char' => 25,
            ),
            4 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_setopt_array',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 179,
                      'char' => 31,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 179,
                    'char' => 31,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl_options',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 179,
                      'char' => 45,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 179,
                    'char' => 45,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 179,
                'char' => 46,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 182,
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
                  'variable' => 'response',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_exec',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 182,
                          'char' => 38,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 182,
                        'char' => 38,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 182,
                    'char' => 39,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 182,
                  'char' => 39,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 183,
              'char' => 11,
            ),
            6 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'httpCode',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'curl_getinfo',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'curl',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 183,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 183,
                        'char' => 41,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'constant',
                          'value' => 'CURLINFO_HTTP_CODE',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                          'line' => 183,
                          'char' => 61,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                        'line' => 183,
                        'char' => 61,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 183,
                    'char' => 62,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 183,
                  'char' => 62,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 186,
              'char' => 18,
            ),
            7 => 
            array (
              'type' => 'fcall',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'curl_close',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 186,
                      'char' => 24,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 186,
                    'char' => 24,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 186,
                'char' => 25,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 189,
              'char' => 10,
            ),
            8 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'or',
                'left' => 
                array (
                  'type' => 'not',
                  'left' => 
                  array (
                    'type' => 'list',
                    'left' => 
                    array (
                      'type' => 'variable',
                      'value' => 'httpCode',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 189,
                      'char' => 22,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 189,
                    'char' => 25,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 189,
                  'char' => 25,
                ),
                'right' => 
                array (
                  'type' => 'equals',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'httpCode',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 189,
                    'char' => 37,
                  ),
                  'right' => 
                  array (
                    'type' => 'int',
                    'value' => '400',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 189,
                    'char' => 43,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                  'line' => 189,
                  'char' => 43,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 189,
                'char' => 43,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 194,
              'char' => 14,
            ),
            9 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'json_decode',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'response',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 194,
                      'char' => 36,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 194,
                    'char' => 36,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'bool',
                      'value' => 'true',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                      'line' => 194,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                    'line' => 194,
                    'char' => 42,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 194,
                'char' => 43,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
              'line' => 195,
              'char' => 5,
            ),
          ),
          'docblock' => '**
     *  Do a DELETE request
     *  @param  string      Resource name
     *  @return bool
     *',
          'return-type' => 
          array (
            'type' => 'return-type',
            'list' => 
            array (
              0 => 
              array (
                'type' => 'return-type-parameter',
                'data-type' => 'bool',
                'mandatory' => 0,
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
                'line' => 158,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
            'line' => 158,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
          'line' => 157,
          'last-line' => 197,
          'char' => 19,
        ),
      ),
      'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
      'line' => 3,
      'char' => 5,
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/lib/curl.zep',
    'line' => 3,
    'char' => 5,
  ),
);