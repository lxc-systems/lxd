<?php return array (
  0 => 
  array (
    'type' => 'namespace',
    'name' => 'Lxd',
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
    'line' => 3,
    'char' => 5,
  ),
  1 => 
  array (
    'type' => 'class',
    'name' => 'Endpoint',
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
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
          'line' => 6,
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
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
          'line' => 7,
          'char' => 13,
        ),
        2 => 
        array (
          'visibility' => 
          array (
            0 => 'protected',
          ),
          'type' => 'property',
          'name' => 'endpoint',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
          'line' => 9,
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
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 9,
              'char' => 45,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'curl',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 9,
              'char' => 51,
            ),
            2 => 
            array (
              'type' => 'parameter',
              'name' => 'endpoint',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'string',
                'value' => '',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                'line' => 9,
                'char' => 71,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 9,
              'char' => 71,
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
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 11,
                    'char' => 36,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 11,
                  'char' => 36,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 12,
              'char' => 11,
            ),
            1 => 
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
                    'type' => 'variable',
                    'value' => 'curl',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 12,
                    'char' => 34,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 12,
                  'char' => 34,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 13,
              'char' => 11,
            ),
            2 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'object-property',
                  'operator' => 'assign',
                  'variable' => 'this',
                  'property' => 'endpoint',
                  'expr' => 
                  array (
                    'type' => 'variable',
                    'value' => 'endpoint',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 13,
                    'char' => 38,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 13,
                  'char' => 38,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 14,
              'char' => 5,
            ),
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
          'line' => 9,
          'last-line' => 16,
          'char' => 19,
        ),
        1 => 
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
              'name' => 'method',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 16,
              'char' => 40,
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
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 18,
                  'char' => 18,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 18,
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
                        'type' => 'property-access',
                        'left' => 
                        array (
                          'type' => 'variable',
                          'value' => 'this',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 18,
                          'char' => 34,
                        ),
                        'right' => 
                        array (
                          'type' => 'variable',
                          'value' => 'endpoint',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 18,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 18,
                        'char' => 43,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '\\\\',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 18,
                        'char' => 46,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                      'line' => 18,
                      'char' => 46,
                    ),
                    'right' => 
                    array (
                      'type' => 'variable',
                      'value' => 'method',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                      'line' => 18,
                      'char' => 53,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 18,
                    'char' => 53,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 18,
                  'char' => 53,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 20,
              'char' => 10,
            ),
            2 => 
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
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                      'line' => 20,
                      'char' => 27,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 20,
                    'char' => 27,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                'line' => 20,
                'char' => 29,
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
                          'value' => 'endpoint',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 21,
                          'char' => 38,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'property-access',
                        'left' => 
                        array (
                          'type' => 'variable',
                          'value' => 'this',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 21,
                          'char' => 47,
                        ),
                        'right' => 
                        array (
                          'type' => 'variable',
                          'value' => 'endpoint',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 21,
                          'char' => 56,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 21,
                        'char' => 56,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                      'line' => 21,
                      'char' => 56,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 22,
                  'char' => 15,
                ),
                1 => 
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
                          'value' => 'method',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 22,
                          'char' => 36,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'variable',
                        'value' => 'method',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 22,
                        'char' => 46,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                      'line' => 22,
                      'char' => 46,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 23,
                  'char' => 18,
                ),
                2 => 
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
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                            'line' => 23,
                            'char' => 34,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'config',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                            'line' => 23,
                            'char' => 41,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 23,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 23,
                        'char' => 41,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 23,
                    'char' => 42,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 24,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 26,
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
                  'type' => 'fcall',
                  'name' => 'method_exists',
                  'call-type' => 1,
                  'parameters' => 
                  array (
                    0 => 
                    array (
                      'parameter' => 
                      array (
                        'type' => 'variable',
                        'value' => 'this',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 26,
                        'char' => 31,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                      'line' => 26,
                      'char' => 31,
                    ),
                    1 => 
                    array (
                      'parameter' => 
                      array (
                        'type' => 'variable',
                        'value' => 'method',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 26,
                        'char' => 39,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                      'line' => 26,
                      'char' => 39,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 26,
                  'char' => 40,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                'line' => 26,
                'char' => 42,
              ),
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'return',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'call_user_func',
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
                              'value' => 
                              array (
                                'type' => 'variable',
                                'value' => 'this',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                'line' => 28,
                                'char' => 22,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                              'line' => 28,
                              'char' => 22,
                            ),
                            1 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'variable',
                                'value' => 'method',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                'line' => 28,
                                'char' => 30,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                              'line' => 28,
                              'char' => 30,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 28,
                          'char' => 31,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 28,
                        'char' => 31,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'array',
                          'left' => 
                          array (
                            0 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                  'line' => 29,
                                  'char' => 23,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'config',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                  'line' => 29,
                                  'char' => 30,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                'line' => 29,
                                'char' => 30,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                              'line' => 29,
                              'char' => 30,
                            ),
                            1 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'property-access',
                                'left' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'this',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                  'line' => 29,
                                  'char' => 37,
                                ),
                                'right' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'curl',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                  'line' => 29,
                                  'char' => 42,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                                'line' => 29,
                                'char' => 42,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                              'line' => 29,
                              'char' => 42,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 30,
                          'char' => 13,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 30,
                        'char' => 13,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 30,
                    'char' => 14,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 31,
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
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                              'line' => 32,
                              'char' => 43,
                            ),
                            'right' => 
                            array (
                              'type' => 'variable',
                              'value' => 'ns',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                              'line' => 32,
                              'char' => 46,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                            'line' => 32,
                            'char' => 46,
                          ),
                          'right' => 
                          array (
                            'type' => 'string',
                            'value' => ', not implemented.',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                            'line' => 32,
                            'char' => 65,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                          'line' => 32,
                          'char' => 65,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                        'line' => 32,
                        'char' => 65,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                    'line' => 32,
                    'char' => 66,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
                  'line' => 33,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
              'line' => 34,
              'char' => 5,
            ),
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
          'line' => 16,
          'last-line' => 36,
          'char' => 19,
        ),
      ),
      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
      'line' => 3,
      'char' => 5,
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoint.zep',
    'line' => 3,
    'char' => 5,
  ),
);