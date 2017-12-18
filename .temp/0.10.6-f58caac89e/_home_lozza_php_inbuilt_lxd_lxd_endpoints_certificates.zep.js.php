<?php return array (
  0 => 
  array (
    'type' => 'namespace',
    'name' => 'Lxd\\Endpoints',
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
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
        'name' => 'Lxd\\Endpoint',
        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
        'line' => 3,
        'char' => 17,
      ),
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
    'line' => 5,
    'char' => 5,
  ),
  2 => 
  array (
    'type' => 'class',
    'name' => 'Certificates',
    'abstract' => 0,
    'final' => 0,
    'extends' => 'Endpoint',
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
          'name' => 'curl',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 8,
          'char' => 11,
        ),
        1 => 
        array (
          'visibility' => 
          array (
            0 => 'private',
          ),
          'type' => 'property',
          'name' => 'endpoint',
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 10,
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
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 10,
              'char' => 39,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'curl',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 10,
              'char' => 45,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'scall',
              'expr' => 
              array (
                'type' => 'scall',
                'dynamic-class' => 0,
                'class' => 'parent',
                'dynamic' => 0,
                'name' => '__construct',
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'config',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 12,
                      'char' => 35,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 12,
                    'char' => 35,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 12,
                      'char' => 41,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 12,
                    'char' => 41,
                  ),
                  2 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'constant',
                      'value' => '__CLASS__',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 12,
                      'char' => 52,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 12,
                    'char' => 52,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 12,
                'char' => 53,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 14,
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
                  'property' => 'endpoint',
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
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 14,
                                'char' => 35,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'config',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 14,
                                'char' => 42,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 14,
                              'char' => 42,
                            ),
                            'right' => 
                            array (
                              'type' => 'string',
                              'value' => 'url',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 14,
                              'char' => 46,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 14,
                            'char' => 47,
                          ),
                          'right' => 
                          array (
                            'type' => 'string',
                            'value' => '/',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 14,
                            'char' => 49,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 14,
                          'char' => 49,
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
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 14,
                              'char' => 55,
                            ),
                            'right' => 
                            array (
                              'type' => 'variable',
                              'value' => 'config',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 14,
                              'char' => 62,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 14,
                            'char' => 62,
                          ),
                          'right' => 
                          array (
                            'type' => 'string',
                            'value' => 'version',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 14,
                            'char' => 70,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 14,
                          'char' => 71,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 14,
                        'char' => 71,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '/',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 14,
                        'char' => 73,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 14,
                      'char' => 73,
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
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 14,
                          'char' => 79,
                        ),
                        'right' => 
                        array (
                          'type' => 'variable',
                          'value' => 'config',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 14,
                          'char' => 86,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 14,
                        'char' => 86,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => 'endpoint',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 14,
                        'char' => 95,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 14,
                      'char' => 96,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 14,
                    'char' => 96,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 14,
                  'char' => 96,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 15,
              'char' => 5,
            ),
          ),
          'return-type' => 
          array (
            'type' => 'return-type',
            'void' => 1,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
            'line' => 11,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 10,
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
          'name' => 'all',
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
                  'variable' => 'response',
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
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 19,
                        'char' => 29,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'curl',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 19,
                        'char' => 35,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 19,
                      'char' => 35,
                    ),
                    'name' => 'get',
                    'call-type' => 1,
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
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 19,
                            'char' => 45,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'endpoint',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 19,
                            'char' => 54,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 19,
                          'char' => 54,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 19,
                        'char' => 54,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 19,
                    'char' => 55,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 19,
                  'char' => 55,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 21,
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
                  'variable' => 'certificate',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 21,
                  'char' => 24,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 22,
              'char' => 11,
            ),
            2 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'certificates',
                  'expr' => 
                  array (
                    'type' => 'empty-array',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 22,
                    'char' => 30,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 22,
                  'char' => 30,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 23,
              'char' => 11,
            ),
            3 => 
            array (
              'type' => 'for',
              'expr' => 
              array (
                'type' => 'cast',
                'left' => 'array',
                'right' => 
                array (
                  'type' => 'array-access',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'response',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 23,
                    'char' => 44,
                  ),
                  'right' => 
                  array (
                    'type' => 'string',
                    'value' => 'metadata',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 23,
                    'char' => 53,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 23,
                  'char' => 55,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 23,
                'char' => 55,
              ),
              'value' => 'certificate',
              'reverse' => 0,
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'let',
                  'assignments' => 
                  array (
                    0 => 
                    array (
                      'assign-type' => 'variable-append',
                      'operator' => 'assign',
                      'variable' => 'certificates',
                      'expr' => 
                      array (
                        'type' => 'fcall',
                        'name' => 'str_replace',
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
                                    'type' => 'concat',
                                    'left' => 
                                    array (
                                      'type' => 'string',
                                      'value' => '/',
                                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                      'line' => 24,
                                      'char' => 47,
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
                                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                          'line' => 24,
                                          'char' => 53,
                                        ),
                                        'right' => 
                                        array (
                                          'type' => 'variable',
                                          'value' => 'config',
                                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                          'line' => 24,
                                          'char' => 60,
                                        ),
                                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                        'line' => 24,
                                        'char' => 60,
                                      ),
                                      'right' => 
                                      array (
                                        'type' => 'string',
                                        'value' => 'version',
                                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                        'line' => 24,
                                        'char' => 68,
                                      ),
                                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                      'line' => 24,
                                      'char' => 69,
                                    ),
                                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                    'line' => 24,
                                    'char' => 69,
                                  ),
                                  'right' => 
                                  array (
                                    'type' => 'string',
                                    'value' => '/',
                                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                    'line' => 24,
                                    'char' => 71,
                                  ),
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                  'line' => 24,
                                  'char' => 71,
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
                                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                      'line' => 24,
                                      'char' => 77,
                                    ),
                                    'right' => 
                                    array (
                                      'type' => 'variable',
                                      'value' => 'config',
                                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                      'line' => 24,
                                      'char' => 84,
                                    ),
                                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                    'line' => 24,
                                    'char' => 84,
                                  ),
                                  'right' => 
                                  array (
                                    'type' => 'string',
                                    'value' => 'endpoint',
                                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                    'line' => 24,
                                    'char' => 93,
                                  ),
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                  'line' => 24,
                                  'char' => 94,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 24,
                                'char' => 94,
                              ),
                              'right' => 
                              array (
                                'type' => 'string',
                                'value' => '/',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 24,
                                'char' => 96,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 24,
                              'char' => 96,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 24,
                            'char' => 96,
                          ),
                          1 => 
                          array (
                            'parameter' => 
                            array (
                              'type' => 'null',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 24,
                              'char' => 102,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 24,
                            'char' => 102,
                          ),
                          2 => 
                          array (
                            'parameter' => 
                            array (
                              'type' => 'variable',
                              'value' => 'certificate',
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 24,
                              'char' => 115,
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 24,
                            'char' => 115,
                          ),
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 24,
                        'char' => 116,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 24,
                      'char' => 116,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 25,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 26,
              'char' => 14,
            ),
            4 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'variable',
                'value' => 'certificates',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 26,
                'char' => 28,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 27,
              'char' => 5,
            ),
          ),
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 18,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
            'line' => 18,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 17,
          'last-line' => 29,
          'char' => 19,
        ),
        2 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'add',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'certificate',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 29,
              'char' => 36,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'password',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'null',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 29,
                'char' => 60,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 29,
              'char' => 60,
            ),
            2 => 
            array (
              'type' => 'parameter',
              'name' => 'name',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'default' => 
              array (
                'type' => 'null',
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 29,
                'char' => 80,
              ),
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 29,
              'char' => 80,
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
                  'variable' => 'begin',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 31,
                  'char' => 18,
                ),
                1 => 
                array (
                  'variable' => 'end',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 31,
                  'char' => 23,
                ),
                2 => 
                array (
                  'variable' => 'pem_data',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 31,
                  'char' => 33,
                ),
                3 => 
                array (
                  'variable' => 'der',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 31,
                  'char' => 38,
                ),
                4 => 
                array (
                  'variable' => 'fingerprint',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 31,
                  'char' => 51,
                ),
                5 => 
                array (
                  'variable' => 'options',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 31,
                  'char' => 60,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 33,
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
                  'variable' => 'begin',
                  'expr' => 
                  array (
                    'type' => 'string',
                    'value' => 'CERTIFICATE-----',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 33,
                    'char' => 37,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 33,
                  'char' => 37,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 34,
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
                  'variable' => 'end',
                  'expr' => 
                  array (
                    'type' => 'string',
                    'value' => '-----END',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 34,
                    'char' => 29,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 34,
                  'char' => 29,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 35,
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
                  'variable' => 'pem_data',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'substr',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'certificate',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 35,
                          'char' => 42,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 35,
                        'char' => 42,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'add',
                          'left' => 
                          array (
                            'type' => 'fcall',
                            'name' => 'strpos',
                            'call-type' => 1,
                            'parameters' => 
                            array (
                              0 => 
                              array (
                                'parameter' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'certificate',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                  'line' => 35,
                                  'char' => 62,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 35,
                                'char' => 62,
                              ),
                              1 => 
                              array (
                                'parameter' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'begin',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                  'line' => 35,
                                  'char' => 69,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 35,
                                'char' => 69,
                              ),
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 35,
                            'char' => 70,
                          ),
                          'right' => 
                          array (
                            'type' => 'fcall',
                            'name' => 'strlen',
                            'call-type' => 1,
                            'parameters' => 
                            array (
                              0 => 
                              array (
                                'parameter' => 
                                array (
                                  'type' => 'variable',
                                  'value' => 'begin',
                                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                  'line' => 35,
                                  'char' => 83,
                                ),
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 35,
                                'char' => 83,
                              ),
                            ),
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 35,
                            'char' => 84,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 35,
                          'char' => 84,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 35,
                        'char' => 84,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 35,
                    'char' => 85,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 35,
                  'char' => 85,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 36,
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
                  'variable' => 'pem_data',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'substr',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'pem_data',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 36,
                          'char' => 39,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 36,
                        'char' => 39,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'int',
                          'value' => '0',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 36,
                          'char' => 42,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 36,
                        'char' => 42,
                      ),
                      2 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'fcall',
                          'name' => 'strpos',
                          'call-type' => 1,
                          'parameters' => 
                          array (
                            0 => 
                            array (
                              'parameter' => 
                              array (
                                'type' => 'variable',
                                'value' => 'pem_data',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 36,
                                'char' => 59,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 36,
                              'char' => 59,
                            ),
                            1 => 
                            array (
                              'parameter' => 
                              array (
                                'type' => 'variable',
                                'value' => 'end',
                                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                                'line' => 36,
                                'char' => 64,
                              ),
                              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                              'line' => 36,
                              'char' => 64,
                            ),
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 36,
                          'char' => 65,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 36,
                        'char' => 65,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 36,
                    'char' => 66,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 36,
                  'char' => 66,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 37,
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
                  'variable' => 'der',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'base64_decode',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'pem_data',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 37,
                          'char' => 41,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 37,
                        'char' => 41,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 37,
                    'char' => 42,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 37,
                  'char' => 42,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 38,
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
                  'variable' => 'fingerprint',
                  'expr' => 
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
                          'value' => 'sha256',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 38,
                          'char' => 38,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 38,
                        'char' => 38,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'der',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 38,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 38,
                        'char' => 43,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 38,
                    'char' => 44,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 38,
                  'char' => 44,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 40,
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
                  'variable' => 'options',
                  'expr' => 
                  array (
                    'type' => 'empty-array',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 40,
                    'char' => 25,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 40,
                  'char' => 25,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 41,
              'char' => 11,
            ),
            8 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'array-index',
                  'operator' => 'assign',
                  'variable' => 'options',
                  'index-expr' => 
                  array (
                    0 => 
                    array (
                      'type' => 'string',
                      'value' => 'type',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 41,
                      'char' => 25,
                    ),
                  ),
                  'expr' => 
                  array (
                    'type' => 'string',
                    'value' => 'client',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 41,
                    'char' => 35,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 41,
                  'char' => 35,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 42,
              'char' => 11,
            ),
            9 => 
            array (
              'type' => 'let',
              'assignments' => 
              array (
                0 => 
                array (
                  'assign-type' => 'array-index',
                  'operator' => 'assign',
                  'variable' => 'options',
                  'index-expr' => 
                  array (
                    0 => 
                    array (
                      'type' => 'string',
                      'value' => 'certificate',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 42,
                      'char' => 32,
                    ),
                  ),
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'base64_encode',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'der',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 42,
                          'char' => 53,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 42,
                        'char' => 53,
                      ),
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 42,
                    'char' => 54,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 42,
                  'char' => 54,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 43,
              'char' => 10,
            ),
            10 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'list',
                'left' => 
                array (
                  'type' => 'not-identical',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'password',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 43,
                    'char' => 24,
                  ),
                  'right' => 
                  array (
                    'type' => 'null',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 43,
                    'char' => 30,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 43,
                  'char' => 30,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 43,
                'char' => 32,
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
                      'variable' => 'options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'string',
                          'value' => 'password',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 44,
                          'char' => 33,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'variable',
                        'value' => 'password',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 44,
                        'char' => 45,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 44,
                      'char' => 45,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 45,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 46,
              'char' => 10,
            ),
            11 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'list',
                'left' => 
                array (
                  'type' => 'not-identical',
                  'left' => 
                  array (
                    'type' => 'variable',
                    'value' => 'name',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 46,
                    'char' => 20,
                  ),
                  'right' => 
                  array (
                    'type' => 'null',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 46,
                    'char' => 26,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 46,
                  'char' => 26,
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 46,
                'char' => 28,
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
                      'variable' => 'options',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'string',
                          'value' => 'name',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 47,
                          'char' => 29,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'variable',
                        'value' => 'name',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 47,
                        'char' => 37,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 47,
                      'char' => 37,
                    ),
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 48,
                  'char' => 9,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 50,
              'char' => 14,
            ),
            12 => 
            array (
              'type' => 'return',
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
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 50,
                    'char' => 21,
                  ),
                  'right' => 
                  array (
                    'type' => 'variable',
                    'value' => 'curl',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 50,
                    'char' => 27,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 50,
                  'char' => 27,
                ),
                'name' => 'post',
                'call-type' => 1,
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
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 50,
                        'char' => 38,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'endpoint',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 50,
                        'char' => 47,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 50,
                      'char' => 47,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 50,
                    'char' => 47,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'options',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 50,
                      'char' => 56,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 50,
                    'char' => 56,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 50,
                'char' => 57,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 51,
              'char' => 5,
            ),
          ),
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 30,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
            'line' => 30,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 29,
          'last-line' => 53,
          'char' => 19,
        ),
        3 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'info',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'fingerprint',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 53,
              'char' => 37,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'return',
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
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 55,
                    'char' => 21,
                  ),
                  'right' => 
                  array (
                    'type' => 'variable',
                    'value' => 'curl',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 55,
                    'char' => 27,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 55,
                  'char' => 27,
                ),
                'name' => 'get',
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
                          'type' => 'property-access',
                          'left' => 
                          array (
                            'type' => 'variable',
                            'value' => 'this',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 55,
                            'char' => 37,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'endpoint',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 55,
                            'char' => 46,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 55,
                          'char' => 46,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 55,
                          'char' => 48,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 55,
                        'char' => 48,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'fingerprint',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 55,
                        'char' => 60,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 55,
                      'char' => 60,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 55,
                    'char' => 60,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 55,
                'char' => 61,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 56,
              'char' => 5,
            ),
          ),
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 54,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
            'line' => 54,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 53,
          'last-line' => 58,
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
              'name' => 'fingerprint',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 58,
              'char' => 39,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'mcall',
                'variable' => 
                array (
                  'type' => 'variable',
                  'value' => 'this',
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 60,
                  'char' => 21,
                ),
                'name' => 'remove',
                'call-type' => 1,
                'parameters' => 
                array (
                  0 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'fingerprint',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 60,
                      'char' => 40,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 60,
                    'char' => 40,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 60,
                'char' => 41,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 61,
              'char' => 5,
            ),
          ),
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 59,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
            'line' => 59,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 58,
          'last-line' => 63,
          'char' => 19,
        ),
        5 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
          ),
          'type' => 'method',
          'name' => 'remove',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'fingerprint',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 63,
              'char' => 39,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'return',
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
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 65,
                    'char' => 21,
                  ),
                  'right' => 
                  array (
                    'type' => 'variable',
                    'value' => 'curl',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 65,
                    'char' => 27,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                  'line' => 65,
                  'char' => 27,
                ),
                'name' => 'delete',
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
                          'type' => 'property-access',
                          'left' => 
                          array (
                            'type' => 'variable',
                            'value' => 'this',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 65,
                            'char' => 40,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'endpoint',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                            'line' => 65,
                            'char' => 49,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 65,
                          'char' => 49,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => '/',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                          'line' => 65,
                          'char' => 51,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 65,
                        'char' => 51,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'fingerprint',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                        'line' => 65,
                        'char' => 63,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                      'line' => 65,
                      'char' => 63,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                    'line' => 65,
                    'char' => 63,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 65,
                'char' => 64,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
              'line' => 66,
              'char' => 5,
            ),
          ),
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
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
                'line' => 64,
                'char' => 5,
              ),
            ),
            'void' => 0,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
            'line' => 64,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
          'line' => 63,
          'last-line' => 68,
          'char' => 19,
        ),
      ),
      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
      'line' => 5,
      'char' => 5,
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/certificates.zep',
    'line' => 5,
    'char' => 5,
  ),
);