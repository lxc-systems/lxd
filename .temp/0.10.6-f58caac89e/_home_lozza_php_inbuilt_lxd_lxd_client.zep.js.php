<?php return array (
  0 => 
  array (
    'type' => 'namespace',
    'name' => 'Lxd',
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
    'line' => 3,
    'char' => 3,
  ),
  1 => 
  array (
    'type' => 'use',
    'aliases' => 
    array (
      0 => 
      array (
        'name' => 'Lxd\\Lib\\Curl',
        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
        'line' => 3,
        'char' => 17,
      ),
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
    'line' => 4,
    'char' => 3,
  ),
  2 => 
  array (
    'type' => 'use',
    'aliases' => 
    array (
      0 => 
      array (
        'name' => 'Lxd\\Lib\\Certificate',
        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
        'line' => 4,
        'char' => 24,
      ),
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
    'line' => 6,
    'char' => 5,
  ),
  3 => 
  array (
    'type' => 'class',
    'name' => 'Client',
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
            0 => 'protected',
          ),
          'type' => 'property',
          'name' => 'config',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
          'line' => 9,
          'char' => 13,
        ),
        1 => 
        array (
          'visibility' => 
          array (
            0 => 'protected',
          ),
          'type' => 'property',
          'name' => 'curl',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
          'line' => 10,
          'char' => 13,
        ),
        2 => 
        array (
          'visibility' => 
          array (
            0 => 'protected',
          ),
          'type' => 'property',
          'name' => 'certificate',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
          'line' => 12,
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
              'data-type' => 'array',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'empty-array',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 12,
                'char' => 50,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 12,
              'char' => 50,
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
                    'type' => 'fcall',
                    'name' => 'array_merge',
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
                                'value' => 'url',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 15,
                                'char' => 22,
                              ),
                              'value' => 
                              array (
                                'type' => 'null',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 15,
                                'char' => 28,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 15,
                              'char' => 28,
                            ),
                            1 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'ip',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 16,
                                'char' => 22,
                              ),
                              'value' => 
                              array (
                                'type' => 'null',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 16,
                                'char' => 28,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 16,
                              'char' => 28,
                            ),
                            2 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'port',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 17,
                                'char' => 22,
                              ),
                              'value' => 
                              array (
                                'type' => 'null',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 17,
                                'char' => 28,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 17,
                              'char' => 28,
                            ),
                            3 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'secret',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 18,
                                'char' => 22,
                              ),
                              'value' => 
                              array (
                                'type' => 'null',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 18,
                                'char' => 28,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 18,
                              'char' => 28,
                            ),
                            4 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'endpoint',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 19,
                                'char' => 22,
                              ),
                              'value' => 
                              array (
                                'type' => 'null',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 19,
                                'char' => 28,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 19,
                              'char' => 28,
                            ),
                            5 => 
                            array (
                              'key' => 
                              array (
                                'type' => 'string',
                                'value' => 'version',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 20,
                                'char' => 22,
                              ),
                              'value' => 
                              array (
                                'type' => 'string',
                                'value' => '1.0',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 21,
                                'char' => 9,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 21,
                              'char' => 9,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 21,
                          'char' => 10,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 21,
                        'char' => 10,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'config',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 21,
                          'char' => 18,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 21,
                        'char' => 18,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 21,
                    'char' => 19,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 21,
                  'char' => 19,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 24,
              'char' => 10,
            ),
            1 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'not',
                'left' => 
                array (
                  'type' => 'isset',
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
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 24,
                        'char' => 24,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 24,
                        'char' => 31,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 24,
                      'char' => 31,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'certificate_path',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 24,
                      'char' => 48,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 24,
                    'char' => 50,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 24,
                  'char' => 50,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 24,
                'char' => 50,
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
                      'assign-type' => 'object-property-array-index',
                      'operator' => 'assign',
                      'variable' => 'this',
                      'property' => 'config',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'string',
                          'value' => 'certificate_path',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 25,
                          'char' => 46,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'string',
                        'value' => '.certificates',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 25,
                        'char' => 63,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 25,
                      'char' => 63,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 26,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 29,
              'char' => 10,
            ),
            2 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'not',
                'left' => 
                array (
                  'type' => 'isset',
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
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 29,
                        'char' => 24,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'config',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 29,
                        'char' => 31,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 29,
                      'char' => 31,
                    ),
                    'right' => 
                    array (
                      'type' => 'string',
                      'value' => 'timeout',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 29,
                      'char' => 39,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 29,
                    'char' => 41,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 29,
                  'char' => 41,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 29,
                'char' => 41,
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
                      'assign-type' => 'object-property-array-index',
                      'operator' => 'assign',
                      'variable' => 'this',
                      'property' => 'config',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'string',
                          'value' => 'timeout',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 30,
                          'char' => 37,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'int',
                        'value' => '10',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 30,
                        'char' => 43,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 30,
                      'char' => 43,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 31,
                  'char' => 9,
                ),
              ),
              'else_statements' => 
              array (
                0 => 
                array (
                  'type' => 'if',
                  'expr' => 
                  array (
                    'type' => 'not',
                    'left' => 
                    array (
                      'type' => 'fcall',
                      'name' => 'is_numeric',
                      'call-type' => 1,
                      'parameters' => 
                      array (
                        0 => 
                        array (
                          'parameter' => 
                          array (
                            'type' => 'array-access',
                            'left' => 
                            array (
                              'type' => 'property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 32,
                                'char' => 33,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 32,
                                'char' => 40,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 32,
                              'char' => 40,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'timeout',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 32,
                              'char' => 48,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 32,
                            'char' => 49,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 32,
                          'char' => 49,
                        ),
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 32,
                      'char' => 51,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 32,
                    'char' => 51,
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
                          'assign-type' => 'object-property-array-index',
                          'operator' => 'assign',
                          'variable' => 'this',
                          'property' => 'config',
                          'index-expr' => 
                          array (
                            0 => 
                            array (
                              'type' => 'string',
                              'value' => 'timeout',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 33,
                              'char' => 41,
                            ),
                          ),
                          'expr' => 
                          array (
                            'type' => 'int',
                            'value' => '10',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 33,
                            'char' => 47,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 33,
                          'char' => 47,
                        ),
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 34,
                      'char' => 13,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 35,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 36,
              'char' => 5,
            ),
          ),
          'return-type' => 
          array (
            'type' => 'return-type',
            'void' => 1,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
            'line' => 13,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
          'line' => 12,
          'last-line' => 38,
          'char' => 19,
        ),
        1 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'connect',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'url',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'null',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 38,
                'char' => 46,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 38,
              'char' => 46,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'secret',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'null',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 38,
                'char' => 68,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 38,
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
                  'variable' => 'ip',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 40,
                  'char' => 15,
                ),
                1 => 
                array (
                  'variable' => 'port',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 40,
                  'char' => 21,
                ),
                2 => 
                array (
                  'variable' => 'ping',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 40,
                  'char' => 27,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 42,
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
                  'variable' => 'ip',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'parse_url',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'url',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 42,
                          'char' => 33,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 42,
                        'char' => 33,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'constant',
                          'value' => 'PHP_URL_HOST',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 42,
                          'char' => 47,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 42,
                        'char' => 47,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 42,
                    'char' => 48,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 42,
                  'char' => 48,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 43,
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
                  'variable' => 'port',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'parse_url',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'url',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 43,
                          'char' => 33,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 43,
                        'char' => 33,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'constant',
                          'value' => 'PHP_URL_PORT',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 43,
                          'char' => 47,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 43,
                        'char' => 47,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 43,
                    'char' => 48,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 43,
                  'char' => 48,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 44,
              'char' => 10,
            ),
            3 => 
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
                    'value' => 'port',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 44,
                    'char' => 22,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 44,
                  'char' => 24,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 44,
                'char' => 24,
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
                      'assign-type' => 'variable',
                      'operator' => 'assign',
                      'variable' => 'port',
                      'expr' => 
                      array (
                        'type' => 'int',
                        'value' => '8443',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 45,
                        'char' => 28,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 45,
                      'char' => 28,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 46,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 48,
              'char' => 11,
            ),
            4 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property-array-index',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'config',
                  'index-expr' => 
                  array (
                    0 => 
                    array (
                      'type' => 'string',
                      'value' => 'url',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 48,
                      'char' => 29,
                    ),
                  ),
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'url',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 48,
                    'char' => 39,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 48,
                  'char' => 39,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 49,
              'char' => 11,
            ),
            5 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property-array-index',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'config',
                  'index-expr' => 
                  array (
                    0 => 
                    array (
                      'type' => 'string',
                      'value' => 'ip',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 49,
                      'char' => 28,
                    ),
                  ),
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'ip',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 49,
                    'char' => 38,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 49,
                  'char' => 38,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 50,
              'char' => 11,
            ),
            6 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property-array-index',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'config',
                  'index-expr' => 
                  array (
                    0 => 
                    array (
                      'type' => 'string',
                      'value' => 'port',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 50,
                      'char' => 30,
                    ),
                  ),
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'port',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 50,
                    'char' => 40,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 50,
                  'char' => 40,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 51,
              'char' => 11,
            ),
            7 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property-array-index',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'config',
                  'index-expr' => 
                  array (
                    0 => 
                    array (
                      'type' => 'string',
                      'value' => 'secret',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 51,
                      'char' => 32,
                    ),
                  ),
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'secret',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 51,
                    'char' => 42,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 51,
                  'char' => 42,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 53,
              'char' => 11,
            ),
            8 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'variable',
                  'operator' => 'assign',
                  'variable' => 'ping',
                  'expr' => 
                  array (
                    'type' => 'mcall',
                    'variable' => 
                    array (
                      'type' => 'variable',
                      'value' => 'this',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 53,
                      'char' => 25,
                    ),
                    'name' => 'connectable',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'ip',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 53,
                          'char' => 40,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 53,
                        'char' => 40,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'port',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 53,
                          'char' => 46,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 53,
                        'char' => 46,
                      ),
                      2 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'array-access',
                          'left' => 
                          array (
                            'type' => 'property-access',
                            'left' => 
                            array (
                              'type' => 'variable',
                              'value' => 'this',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 53,
                              'char' => 53,
                            ),
                            'right' => 
                            array (
                              'type' => 'variable',
                              'value' => 'config',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 53,
                              'char' => 60,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 53,
                            'char' => 60,
                          ),
                          'right' => 
                          array (
                            'type' => 'string',
                            'value' => 'timeout',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 53,
                            'char' => 68,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 53,
                          'char' => 69,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 53,
                        'char' => 69,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 53,
                    'char' => 70,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 53,
                  'char' => 70,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 55,
              'char' => 10,
            ),
            9 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'identical',
                'left' => 
                array (
                  'type' => 'variable',
                  'value' => 'ping',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 55,
                  'char' => 19,
                ),
                'right' => 
                array (
                  'type' => 'int',
                  'value' => '-1',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 55,
                  'char' => 24,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 55,
                'char' => 24,
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
                          'value' => 'Could not connect.',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 56,
                          'char' => 52,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 56,
                        'char' => 52,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 56,
                    'char' => 53,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 57,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 60,
              'char' => 10,
            ),
            10 => 
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
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                  'line' => 60,
                                  'char' => 30,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                  'line' => 60,
                                  'char' => 37,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 60,
                                'char' => 37,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 60,
                                'char' => 54,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 60,
                              'char' => 55,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => '/',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 60,
                              'char' => 57,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 60,
                            'char' => 57,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'ip',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 60,
                            'char' => 60,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 60,
                          'char' => 60,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/client.pem',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 60,
                          'char' => 72,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 60,
                        'char' => 72,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 60,
                      'char' => 72,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 60,
                  'char' => 74,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 60,
                'char' => 74,
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
                      'property' => 'certificate',
                      'expr' => 
                      array (
                        'type' => 'new',
                        'class' => 'Certificate',
                        'dynamic' => 0,
                        'parameters' => 
                        array (
                          0 => 
                          array (
                            'parameter' => 
                            array (
                              'type' => 'array-access',
                              'left' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                  'line' => 62,
                                  'char' => 58,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                  'line' => 62,
                                  'char' => 65,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 62,
                                'char' => 65,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => 'certificate_path',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 62,
                                'char' => 82,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 62,
                              'char' => 83,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 62,
                            'char' => 83,
                          ),
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 62,
                        'char' => 84,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 62,
                      'char' => 84,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 64,
                  'char' => 16,
                ),
                1 => 
                array (
                  'type' => 'mcall',
                  'expr' => 
                  array (
                    'type' => 'mcall',
                    'variable' => 
                    array (
                      'type' => 'property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 64,
                        'char' => 18,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'certificate',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 64,
                        'char' => 31,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 64,
                      'char' => 31,
                    ),
                    'name' => 'generate',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'ip',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 64,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 64,
                        'char' => 43,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 64,
                    'char' => 44,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 65,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 67,
              'char' => 11,
            ),
            11 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'curl',
                  'expr' => 
                  array (
                    'type' => 'new',
                    'class' => 'Curl',
                    'dynamic' => 0,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'property-access',
                          'left' => 
                          array (
                            'type' => 'variable',
                            'value' => 'this',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 67,
                            'char' => 40,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'config',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 67,
                            'char' => 47,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 67,
                          'char' => 47,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 67,
                        'char' => 47,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 67,
                    'char' => 48,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 67,
                  'char' => 48,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 69,
              'char' => 14,
            ),
            12 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'variable',
                'value' => 'this',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 69,
                'char' => 20,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 70,
              'char' => 5,
            ),
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
          'line' => 38,
          'last-line' => 80,
          'char' => 19,
        ),
        2 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'connectable',
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
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 81,
              'char' => 42,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'port',
              'const' => 0,
              'data-type' => 'int',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'int',
                'value' => '8443',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 81,
                'char' => 59,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 81,
              'char' => 59,
            ),
            2 => 
            array (
              'type' => 'parameter',
              'name' => 'timeout',
              'const' => 0,
              'data-type' => 'int',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'int',
                'value' => '10',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 81,
                'char' => 77,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 81,
              'char' => 77,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'declare',
              'data-type' => 'ulong',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'start',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 83,
                  'char' => 20,
                ),
                1 => 
                array (
                  'variable' => 'stop',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 83,
                  'char' => 26,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 83,
              'char' => 30,
            ),
            1 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'time',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 83,
                  'char' => 36,
                ),
                1 => 
                array (
                  'variable' => 'sock',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 83,
                  'char' => 42,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 85,
              'char' => 10,
            ),
            2 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'identical',
                'left' => 
                array (
                  'type' => 'variable',
                  'value' => 'ip',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 85,
                  'char' => 17,
                ),
                'right' => 
                array (
                  'type' => 'null',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 85,
                  'char' => 24,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 85,
                'char' => 24,
              ),
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'return',
                  'expr' => 
                  array (
                    'type' => 'int',
                    'value' => '-1',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 86,
                    'char' => 22,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 87,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 89,
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
                  'variable' => 'start',
                  'expr' => 
                  array (
                    'type' => 'cast',
                    'left' => 'int',
                    'right' => 
                    array (
                      'type' => 'fcall',
                      'name' => 'microtime',
                      'call-type' => 1,
                      'parameters' => 
                      array (
                        0 => 
                        array (
                          'parameter' => 
                          array (
                            'type' => 'bool',
                            'value' => 'true',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 89,
                            'char' => 41,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 89,
                          'char' => 41,
                        ),
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 89,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 89,
                    'char' => 42,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 89,
                  'char' => 42,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 90,
              'char' => 11,
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
                  'variable' => 'sock',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'fsockopen',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'ip',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 90,
                          'char' => 33,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 90,
                        'char' => 33,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'port',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 90,
                          'char' => 39,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 90,
                        'char' => 39,
                      ),
                      2 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'null',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 90,
                          'char' => 45,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 90,
                        'char' => 45,
                      ),
                      3 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'null',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 90,
                          'char' => 51,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 90,
                        'char' => 51,
                      ),
                      4 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'timeout',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 90,
                          'char' => 60,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 90,
                        'char' => 60,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 90,
                    'char' => 61,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 90,
                  'char' => 61,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 91,
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
                  'variable' => 'stop',
                  'expr' => 
                  array (
                    'type' => 'cast',
                    'left' => 'int',
                    'right' => 
                    array (
                      'type' => 'fcall',
                      'name' => 'microtime',
                      'call-type' => 1,
                      'parameters' => 
                      array (
                        0 => 
                        array (
                          'parameter' => 
                          array (
                            'type' => 'bool',
                            'value' => 'true',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 91,
                            'char' => 41,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 91,
                          'char' => 41,
                        ),
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 91,
                      'char' => 42,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 91,
                    'char' => 42,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 91,
                  'char' => 42,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 92,
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
                  'variable' => 'time',
                  'expr' => 
                  array (
                    'type' => 'int',
                    'value' => '0',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 92,
                    'char' => 21,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 92,
                  'char' => 21,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 94,
              'char' => 10,
            ),
            7 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'list',
                'left' => 
                array (
                  'type' => 'not',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'sock',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 94,
                    'char' => 18,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 94,
                  'char' => 18,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 94,
                'char' => 20,
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
                      'assign-type' => 'variable',
                      'operator' => 'assign',
                      'variable' => 'time',
                      'expr' => 
                      array (
                        'type' => 'int',
                        'value' => '-1',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 95,
                        'char' => 26,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 95,
                      'char' => 26,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 96,
                  'char' => 9,
                ),
              ),
              'else_statements' => 
              array (
                0 => 
                array (
                  'type' => 'fcall',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'fclose',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'sock',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 97,
                          'char' => 24,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 97,
                        'char' => 24,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 97,
                    'char' => 25,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 98,
                  'char' => 15,
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
                      'variable' => 'time',
                      'expr' => 
                      array (
                        'type' => 'cast',
                        'left' => 'double',
                        'right' => 
                        array (
                          'type' => 'fcall',
                          'name' => 'round',
                          'call-type' => 1,
                          'parameters' => 
                          array (
                            0 => 
                            array (
                              'parameter' => 
                              array (
                                'type' => 'list',
                                'left' => 
                                array (
                                  'type' => 'mul',
                                  'left' => 
                                  array (
                                    'type' => 'list',
                                    'left' => 
                                    array (
                                      'type' => 'sub',
                                      'left' => 
                                      array (
                                        'type' => 'variable',
                                        'value' => 'stop',
                                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                        'line' => 98,
                                        'char' => 45,
                                      ),
                                      'right' => 
                                      array (
                                        'type' => 'variable',
                                        'value' => 'start',
                                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                        'line' => 98,
                                        'char' => 52,
                                      ),
                                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                      'line' => 98,
                                      'char' => 52,
                                    ),
                                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                    'line' => 98,
                                    'char' => 54,
                                  ),
                                  'right' => 
                                  array (
                                    'type' => 'int',
                                    'value' => '1000',
                                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                    'line' => 98,
                                    'char' => 60,
                                  ),
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                  'line' => 98,
                                  'char' => 60,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 98,
                                'char' => 61,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 98,
                              'char' => 61,
                            ),
                            1 => 
                            array (
                              'parameter' => 
                              array (
                                'type' => 'int',
                                'value' => '2',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                                'line' => 98,
                                'char' => 64,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 98,
                              'char' => 64,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 98,
                          'char' => 65,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 98,
                        'char' => 65,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 98,
                      'char' => 65,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 99,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 101,
              'char' => 14,
            ),
            8 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'variable',
                'value' => 'time',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 101,
                'char' => 20,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 102,
              'char' => 5,
            ),
          ),
          'docblock' => '**
     * Check connection to server
     *
     * @param string ip
     * @param int port
     * @param int timeout
     *
     * @return int - response time -1 for error
     *',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
          'line' => 81,
          'last-line' => 106,
          'char' => 19,
        ),
        3 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => '__get',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'endpoint',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 107,
              'char' => 42,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'declare',
              'data-type' => 'string',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'ns',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 109,
                  'char' => 18,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 109,
              'char' => 22,
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
                  'variable' => 'ns',
                  'expr' => 
                  array (
                    'type' => 'concat',
                    'left' => 
                    array (
                      'type' => 'concat',
                      'left' => 
                      array (
                        'type' => 'constant',
                        'value' => '__NAMESPACE__',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 109,
                        'char' => 42,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '\\\\Endpoints\\\\',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 109,
                        'char' => 56,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 109,
                      'char' => 56,
                    ),
                    'right' => 
                    array (
                      'type' => 'variable',
                      'value' => 'endpoint',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 109,
                      'char' => 65,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 109,
                    'char' => 65,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 109,
                  'char' => 65,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 111,
              'char' => 11,
            ),
            2 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property-array-index',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'config',
                  'index-expr' => 
                  array (
                    0 => 
                    array (
                      'type' => 'string',
                      'value' => 'endpoint',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 111,
                      'char' => 34,
                    ),
                  ),
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'endpoint',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 111,
                    'char' => 47,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 111,
                  'char' => 47,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 113,
              'char' => 10,
            ),
            3 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'fcall',
                'name' => 'class_exists',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'ns',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                      'line' => 113,
                      'char' => 27,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 113,
                    'char' => 27,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                'line' => 113,
                'char' => 29,
              ),
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'return',
                  'expr' => 
                  array (
                    'type' => 'new',
                    'class' => 'ns',
                    'dynamic' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'property-access',
                          'left' => 
                          array (
                            'type' => 'variable',
                            'value' => 'this',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 114,
                            'char' => 34,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'config',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 114,
                            'char' => 41,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 114,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 114,
                        'char' => 41,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'property-access',
                          'left' => 
                          array (
                            'type' => 'variable',
                            'value' => 'this',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 114,
                            'char' => 48,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'curl',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 114,
                            'char' => 53,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 114,
                          'char' => 53,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 114,
                        'char' => 53,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 114,
                    'char' => 54,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 115,
                  'char' => 9,
                ),
              ),
              'else_statements' => 
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
                          'type' => 'concat',
                          'left' => 
                          array (
                            'type' => 'concat',
                            'left' => 
                            array (
                              'type' => 'string',
                              'value' => 'Endpoint ',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 117,
                              'char' => 26,
                            ),
                            'right' => 
                            array (
                              'type' => 'variable',
                              'value' => 'ns',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                              'line' => 117,
                              'char' => 29,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 117,
                            'char' => 29,
                          ),
                          'right' => 
                          array (
                            'type' => 'string',
                            'value' => ', not implemented.',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                            'line' => 118,
                            'char' => 13,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                          'line' => 118,
                          'char' => 13,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                        'line' => 118,
                        'char' => 13,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                    'line' => 118,
                    'char' => 14,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
                  'line' => 119,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
              'line' => 120,
              'char' => 5,
            ),
          ),
          'docblock' => '**
     *
     *',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
          'line' => 107,
          'last-line' => 122,
          'char' => 19,
        ),
      ),
      'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
      'line' => 6,
      'char' => 5,
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/client.zep',
    'line' => 6,
    'char' => 5,
  ),
);