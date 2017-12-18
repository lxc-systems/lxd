<?php return array (
  0 => 
  array (
    'type' => 'namespace',
    'name' => 'Lxd\\Endpoints',
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
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
        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
        'line' => 3,
        'char' => 17,
      ),
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
    'line' => 5,
    'char' => 5,
  ),
  2 => 
  array (
    'type' => 'class',
    'name' => 'Host',
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
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
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
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
              'line' => 9,
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
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
              'line' => 9,
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
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                      'line' => 11,
                      'char' => 35,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                    'line' => 11,
                    'char' => 35,
                  ),
                  1 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'variable',
                      'value' => 'curl',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                      'line' => 11,
                      'char' => 41,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                    'line' => 11,
                    'char' => 41,
                  ),
                  2 => 
                  array (
                    'parameter' => 
                    array (
                      'type' => 'constant',
                      'value' => '__CLASS__',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                      'line' => 11,
                      'char' => 52,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                    'line' => 11,
                    'char' => 52,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                'line' => 11,
                'char' => 53,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
              'line' => 12,
              'char' => 5,
            ),
          ),
          'return-type' => 
          array (
            'type' => 'return-type',
            'void' => 1,
            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
            'line' => 10,
            'char' => 5,
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
          'line' => 9,
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
          'name' => 'info',
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
                  'variable' => 'endpoint',
                  'expr' => 
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
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                            'line' => 16,
                            'char' => 32,
                          ),
                          'right' => 
                          array (
                            'type' => 'variable',
                            'value' => 'config',
                            'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                            'line' => 16,
                            'char' => 39,
                          ),
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                          'line' => 16,
                          'char' => 39,
                        ),
                        'right' => 
                        array (
                          'type' => 'string',
                          'value' => 'url',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                          'line' => 16,
                          'char' => 43,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                        'line' => 16,
                        'char' => 44,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => '/',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                        'line' => 16,
                        'char' => 46,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                      'line' => 16,
                      'char' => 46,
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
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                          'line' => 16,
                          'char' => 52,
                        ),
                        'right' => 
                        array (
                          'type' => 'variable',
                          'value' => 'config',
                          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                          'line' => 16,
                          'char' => 59,
                        ),
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                        'line' => 16,
                        'char' => 59,
                      ),
                      'right' => 
                      array (
                        'type' => 'string',
                        'value' => 'version',
                        'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                        'line' => 16,
                        'char' => 67,
                      ),
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                      'line' => 16,
                      'char' => 68,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                    'line' => 16,
                    'char' => 68,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                  'line' => 16,
                  'char' => 68,
                ),
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
              'line' => 18,
              'char' => 14,
            ),
            1 => 
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
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                    'line' => 18,
                    'char' => 21,
                  ),
                  'right' => 
                  array (
                    'type' => 'variable',
                    'value' => 'curl',
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                    'line' => 18,
                    'char' => 27,
                  ),
                  'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                  'line' => 18,
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
                      'type' => 'variable',
                      'value' => 'endpoint',
                      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                      'line' => 20,
                      'char' => 9,
                    ),
                    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                    'line' => 20,
                    'char' => 9,
                  ),
                ),
                'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
                'line' => 20,
                'char' => 10,
              ),
              'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
              'line' => 21,
              'char' => 5,
            ),
          ),
          'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
          'line' => 14,
          'last-line' => 23,
          'char' => 19,
        ),
      ),
      'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
      'line' => 5,
      'char' => 5,
    ),
    'file' => '/home/lozza/php_inbuilt/lxd/lxd/endpoints/host.zep',
    'line' => 5,
    'char' => 5,
  ),
);