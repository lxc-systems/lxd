[
    {
        "type": "namespace",
        "name": "Lxd",
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
        "line": 3,
        "char": 3
    },
    {
        "type": "use",
        "aliases": [
            {
                "name": "Lxd\\Lib\\Curl",
                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                "line": 3,
                "char": 17
            }
        ],
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
        "line": 4,
        "char": 3
    },
    {
        "type": "use",
        "aliases": [
            {
                "name": "Lxd\\Lib\\Certificate",
                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                "line": 4,
                "char": 24
            }
        ],
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
        "line": 6,
        "char": 5
    },
    {
        "type": "class",
        "name": "Client",
        "abstract": 0,
        "final": 0,
        "definition": {
            "properties": [
                {
                    "visibility": [
                        "protected"
                    ],
                    "type": "property",
                    "name": "config",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                    "line": 9,
                    "char": 13
                },
                {
                    "visibility": [
                        "protected"
                    ],
                    "type": "property",
                    "name": "curl",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                    "line": 10,
                    "char": 13
                },
                {
                    "visibility": [
                        "protected"
                    ],
                    "type": "property",
                    "name": "certificate",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                    "line": 12,
                    "char": 10
                }
            ],
            "methods": [
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "__construct",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "config",
                            "const": 0,
                            "data-type": "array",
                            "mandatory": 0,
                            "default": {
                                "type": "empty-array",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 12,
                                "char": 50
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 12,
                            "char": 50
                        }
                    ],
                    "statements": [
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "config",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "array_merge",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "url",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 15,
                                                                "char": 22
                                                            },
                                                            "value": {
                                                                "type": "null",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 15,
                                                                "char": 28
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 15,
                                                            "char": 28
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "ip",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 16,
                                                                "char": 22
                                                            },
                                                            "value": {
                                                                "type": "null",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 16,
                                                                "char": 28
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 16,
                                                            "char": 28
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "port",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 17,
                                                                "char": 22
                                                            },
                                                            "value": {
                                                                "type": "null",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 17,
                                                                "char": 28
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 17,
                                                            "char": 28
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "secret",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 18,
                                                                "char": 22
                                                            },
                                                            "value": {
                                                                "type": "null",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 18,
                                                                "char": 28
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 18,
                                                            "char": 28
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "endpoint",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 19,
                                                                "char": 22
                                                            },
                                                            "value": {
                                                                "type": "null",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 19,
                                                                "char": 28
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 19,
                                                            "char": 28
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "version",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 20,
                                                                "char": 22
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "1.0",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 21,
                                                                "char": 9
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 21,
                                                            "char": 9
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 21,
                                                    "char": 10
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 21,
                                                "char": 10
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "config",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 21,
                                                    "char": 18
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 21,
                                                "char": 18
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 21,
                                        "char": 19
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 21,
                                    "char": 19
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 24,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "not",
                                "left": {
                                    "type": "isset",
                                    "left": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 24,
                                                "char": 24
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 24,
                                                "char": 31
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 24,
                                            "char": 31
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "certificate_path",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 24,
                                            "char": 48
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 24,
                                        "char": 50
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 24,
                                    "char": 50
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 24,
                                "char": 50
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "object-property-array-index",
                                            "operator": "assign",
                                            "variable": "this",
                                            "property": "config",
                                            "index-expr": [
                                                {
                                                    "type": "string",
                                                    "value": "certificate_path",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 25,
                                                    "char": 46
                                                }
                                            ],
                                            "expr": {
                                                "type": "string",
                                                "value": ".certificates",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 25,
                                                "char": 63
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 25,
                                            "char": 63
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 26,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 29,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "not",
                                "left": {
                                    "type": "isset",
                                    "left": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 29,
                                                "char": 24
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 29,
                                                "char": 31
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 29,
                                            "char": 31
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "timeout",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 29,
                                            "char": 39
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 29,
                                        "char": 41
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 29,
                                    "char": 41
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 29,
                                "char": 41
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "object-property-array-index",
                                            "operator": "assign",
                                            "variable": "this",
                                            "property": "config",
                                            "index-expr": [
                                                {
                                                    "type": "string",
                                                    "value": "timeout",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 30,
                                                    "char": 37
                                                }
                                            ],
                                            "expr": {
                                                "type": "int",
                                                "value": "10",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 30,
                                                "char": 43
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 30,
                                            "char": 43
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 31,
                                    "char": 9
                                }
                            ],
                            "else_statements": [
                                {
                                    "type": "if",
                                    "expr": {
                                        "type": "not",
                                        "left": {
                                            "type": "fcall",
                                            "name": "is_numeric",
                                            "call-type": 1,
                                            "parameters": [
                                                {
                                                    "parameter": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 32,
                                                                "char": 33
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 32,
                                                                "char": 40
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 32,
                                                            "char": 40
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "timeout",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 32,
                                                            "char": 48
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 32,
                                                        "char": 49
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 32,
                                                    "char": 49
                                                }
                                            ],
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 32,
                                            "char": 51
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 32,
                                        "char": 51
                                    },
                                    "statements": [
                                        {
                                            "type": "let",
                                            "assignments": [
                                                {
                                                    "assign-type": "object-property-array-index",
                                                    "operator": "assign",
                                                    "variable": "this",
                                                    "property": "config",
                                                    "index-expr": [
                                                        {
                                                            "type": "string",
                                                            "value": "timeout",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 33,
                                                            "char": 41
                                                        }
                                                    ],
                                                    "expr": {
                                                        "type": "int",
                                                        "value": "10",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 33,
                                                        "char": 47
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 33,
                                                    "char": 47
                                                }
                                            ],
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 34,
                                            "char": 13
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 35,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 36,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "void": 1,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                        "line": 13,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                    "line": 12,
                    "last-line": 38,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "connect",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "url",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "default": {
                                "type": "null",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 38,
                                "char": 46
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 38,
                            "char": 46
                        },
                        {
                            "type": "parameter",
                            "name": "secret",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "default": {
                                "type": "null",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 38,
                                "char": 68
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 38,
                            "char": 68
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "ip",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 40,
                                    "char": 15
                                },
                                {
                                    "variable": "port",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 40,
                                    "char": 21
                                },
                                {
                                    "variable": "ping",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 40,
                                    "char": 27
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 42,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "ip",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "parse_url",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "url",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 42,
                                                    "char": 33
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 42,
                                                "char": 33
                                            },
                                            {
                                                "parameter": {
                                                    "type": "constant",
                                                    "value": "PHP_URL_HOST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 42,
                                                    "char": 47
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 42,
                                                "char": 47
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 42,
                                        "char": 48
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 42,
                                    "char": 48
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 43,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "port",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "parse_url",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "url",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 43,
                                                    "char": 33
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 43,
                                                "char": 33
                                            },
                                            {
                                                "parameter": {
                                                    "type": "constant",
                                                    "value": "PHP_URL_PORT",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 43,
                                                    "char": 47
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 43,
                                                "char": 47
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 43,
                                        "char": 48
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 43,
                                    "char": 48
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 44,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "empty",
                                "left": {
                                    "type": "list",
                                    "left": {
                                        "type": "variable",
                                        "value": "port",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 44,
                                        "char": 22
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 44,
                                    "char": 24
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 44,
                                "char": 24
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "variable",
                                            "operator": "assign",
                                            "variable": "port",
                                            "expr": {
                                                "type": "int",
                                                "value": "8443",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 45,
                                                "char": 28
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 45,
                                            "char": 28
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 46,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 48,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property-array-index",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "config",
                                    "index-expr": [
                                        {
                                            "type": "string",
                                            "value": "url",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 48,
                                            "char": 29
                                        }
                                    ],
                                    "expr": {
                                        "type": "variable",
                                        "value": "url",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 48,
                                        "char": 39
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 48,
                                    "char": 39
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 49,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property-array-index",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "config",
                                    "index-expr": [
                                        {
                                            "type": "string",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 49,
                                            "char": 28
                                        }
                                    ],
                                    "expr": {
                                        "type": "variable",
                                        "value": "ip",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 49,
                                        "char": 38
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 49,
                                    "char": 38
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 50,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property-array-index",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "config",
                                    "index-expr": [
                                        {
                                            "type": "string",
                                            "value": "port",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 50,
                                            "char": 30
                                        }
                                    ],
                                    "expr": {
                                        "type": "variable",
                                        "value": "port",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 50,
                                        "char": 40
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 50,
                                    "char": 40
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 51,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property-array-index",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "config",
                                    "index-expr": [
                                        {
                                            "type": "string",
                                            "value": "secret",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 51,
                                            "char": 32
                                        }
                                    ],
                                    "expr": {
                                        "type": "variable",
                                        "value": "secret",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 51,
                                        "char": 42
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 51,
                                    "char": 42
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 53,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "ping",
                                    "expr": {
                                        "type": "mcall",
                                        "variable": {
                                            "type": "variable",
                                            "value": "this",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 53,
                                            "char": 25
                                        },
                                        "name": "connectable",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "ip",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 53,
                                                    "char": 40
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 53,
                                                "char": 40
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "port",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 53,
                                                    "char": 46
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 53,
                                                "char": 46
                                            },
                                            {
                                                "parameter": {
                                                    "type": "array-access",
                                                    "left": {
                                                        "type": "property-access",
                                                        "left": {
                                                            "type": "variable",
                                                            "value": "this",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 53,
                                                            "char": 53
                                                        },
                                                        "right": {
                                                            "type": "variable",
                                                            "value": "config",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 53,
                                                            "char": 60
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 53,
                                                        "char": 60
                                                    },
                                                    "right": {
                                                        "type": "string",
                                                        "value": "timeout",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 53,
                                                        "char": 68
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 53,
                                                    "char": 69
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 53,
                                                "char": 69
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 53,
                                        "char": 70
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 53,
                                    "char": 70
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 55,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "identical",
                                "left": {
                                    "type": "variable",
                                    "value": "ping",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 55,
                                    "char": 19
                                },
                                "right": {
                                    "type": "int",
                                    "value": "-1",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 55,
                                    "char": 24
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 55,
                                "char": 24
                            },
                            "statements": [
                                {
                                    "type": "throw",
                                    "expr": {
                                        "type": "new",
                                        "class": "\\Exception",
                                        "dynamic": 0,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "string",
                                                    "value": "Could not connect.",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 56,
                                                    "char": 52
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 56,
                                                "char": 52
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 56,
                                        "char": 53
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 57,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 60,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "not",
                                "left": {
                                    "type": "fcall",
                                    "name": "file_exists",
                                    "call-type": 1,
                                    "parameters": [
                                        {
                                            "parameter": {
                                                "type": "concat",
                                                "left": {
                                                    "type": "concat",
                                                    "left": {
                                                        "type": "concat",
                                                        "left": {
                                                            "type": "array-access",
                                                            "left": {
                                                                "type": "property-access",
                                                                "left": {
                                                                    "type": "variable",
                                                                    "value": "this",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                    "line": 60,
                                                                    "char": 30
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                    "line": 60,
                                                                    "char": 37
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 60,
                                                                "char": 37
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 60,
                                                                "char": 54
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 60,
                                                            "char": 55
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 60,
                                                            "char": 57
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 60,
                                                        "char": 57
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "ip",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 60,
                                                        "char": 60
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 60,
                                                    "char": 60
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/client.pem",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 60,
                                                    "char": 72
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 60,
                                                "char": 72
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 60,
                                            "char": 72
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 60,
                                    "char": 74
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 60,
                                "char": 74
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "object-property",
                                            "operator": "assign",
                                            "variable": "this",
                                            "property": "certificate",
                                            "expr": {
                                                "type": "new",
                                                "class": "Certificate",
                                                "dynamic": 0,
                                                "parameters": [
                                                    {
                                                        "parameter": {
                                                            "type": "array-access",
                                                            "left": {
                                                                "type": "property-access",
                                                                "left": {
                                                                    "type": "variable",
                                                                    "value": "this",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                    "line": 62,
                                                                    "char": 58
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                    "line": 62,
                                                                    "char": 65
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 62,
                                                                "char": 65
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 62,
                                                                "char": 82
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 62,
                                                            "char": 83
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 62,
                                                        "char": 83
                                                    }
                                                ],
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 62,
                                                "char": 84
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 62,
                                            "char": 84
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 64,
                                    "char": 16
                                },
                                {
                                    "type": "mcall",
                                    "expr": {
                                        "type": "mcall",
                                        "variable": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 64,
                                                "char": 18
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "certificate",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 64,
                                                "char": 31
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 64,
                                            "char": 31
                                        },
                                        "name": "generate",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "ip",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 64,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 64,
                                                "char": 43
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 64,
                                        "char": 44
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 65,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 67,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "curl",
                                    "expr": {
                                        "type": "new",
                                        "class": "Curl",
                                        "dynamic": 0,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "property-access",
                                                    "left": {
                                                        "type": "variable",
                                                        "value": "this",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 67,
                                                        "char": 40
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "config",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 67,
                                                        "char": 47
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 67,
                                                    "char": 47
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 67,
                                                "char": 47
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 67,
                                        "char": 48
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 67,
                                    "char": 48
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 69,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "variable",
                                "value": "this",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 69,
                                "char": 20
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 70,
                            "char": 5
                        }
                    ],
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                    "line": 38,
                    "last-line": 80,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "connectable",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "ip",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 81,
                            "char": 42
                        },
                        {
                            "type": "parameter",
                            "name": "port",
                            "const": 0,
                            "data-type": "int",
                            "mandatory": 0,
                            "default": {
                                "type": "int",
                                "value": "8443",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 81,
                                "char": 59
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 81,
                            "char": 59
                        },
                        {
                            "type": "parameter",
                            "name": "timeout",
                            "const": 0,
                            "data-type": "int",
                            "mandatory": 0,
                            "default": {
                                "type": "int",
                                "value": "10",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 81,
                                "char": 77
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 81,
                            "char": 77
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "ulong",
                            "variables": [
                                {
                                    "variable": "start",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 83,
                                    "char": 20
                                },
                                {
                                    "variable": "stop",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 83,
                                    "char": 26
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 83,
                            "char": 30
                        },
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "time",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 83,
                                    "char": 36
                                },
                                {
                                    "variable": "sock",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 83,
                                    "char": 42
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 85,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "identical",
                                "left": {
                                    "type": "variable",
                                    "value": "ip",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 85,
                                    "char": 17
                                },
                                "right": {
                                    "type": "null",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 85,
                                    "char": 24
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 85,
                                "char": 24
                            },
                            "statements": [
                                {
                                    "type": "return",
                                    "expr": {
                                        "type": "int",
                                        "value": "-1",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 86,
                                        "char": 22
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 87,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 89,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "start",
                                    "expr": {
                                        "type": "cast",
                                        "left": "int",
                                        "right": {
                                            "type": "fcall",
                                            "name": "microtime",
                                            "call-type": 1,
                                            "parameters": [
                                                {
                                                    "parameter": {
                                                        "type": "bool",
                                                        "value": "true",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 89,
                                                        "char": 41
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 89,
                                                    "char": 41
                                                }
                                            ],
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 89,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 89,
                                        "char": 42
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 89,
                                    "char": 42
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 90,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "sock",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "fsockopen",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "ip",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 90,
                                                    "char": 33
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 90,
                                                "char": 33
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "port",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 90,
                                                    "char": 39
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 90,
                                                "char": 39
                                            },
                                            {
                                                "parameter": {
                                                    "type": "null",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 90,
                                                    "char": 45
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 90,
                                                "char": 45
                                            },
                                            {
                                                "parameter": {
                                                    "type": "null",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 90,
                                                    "char": 51
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 90,
                                                "char": 51
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "timeout",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 90,
                                                    "char": 60
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 90,
                                                "char": 60
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 90,
                                        "char": 61
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 90,
                                    "char": 61
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 91,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "stop",
                                    "expr": {
                                        "type": "cast",
                                        "left": "int",
                                        "right": {
                                            "type": "fcall",
                                            "name": "microtime",
                                            "call-type": 1,
                                            "parameters": [
                                                {
                                                    "parameter": {
                                                        "type": "bool",
                                                        "value": "true",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 91,
                                                        "char": 41
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 91,
                                                    "char": 41
                                                }
                                            ],
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 91,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 91,
                                        "char": 42
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 91,
                                    "char": 42
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 92,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "time",
                                    "expr": {
                                        "type": "int",
                                        "value": "0",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 92,
                                        "char": 21
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 92,
                                    "char": 21
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 94,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "not",
                                    "left": {
                                        "type": "variable",
                                        "value": "sock",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 94,
                                        "char": 18
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 94,
                                    "char": 18
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 94,
                                "char": 20
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "variable",
                                            "operator": "assign",
                                            "variable": "time",
                                            "expr": {
                                                "type": "int",
                                                "value": "-1",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 95,
                                                "char": 26
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 95,
                                            "char": 26
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 96,
                                    "char": 9
                                }
                            ],
                            "else_statements": [
                                {
                                    "type": "fcall",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "fclose",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "sock",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 97,
                                                    "char": 24
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 97,
                                                "char": 24
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 97,
                                        "char": 25
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 98,
                                    "char": 15
                                },
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "variable",
                                            "operator": "assign",
                                            "variable": "time",
                                            "expr": {
                                                "type": "cast",
                                                "left": "double",
                                                "right": {
                                                    "type": "fcall",
                                                    "name": "round",
                                                    "call-type": 1,
                                                    "parameters": [
                                                        {
                                                            "parameter": {
                                                                "type": "list",
                                                                "left": {
                                                                    "type": "mul",
                                                                    "left": {
                                                                        "type": "list",
                                                                        "left": {
                                                                            "type": "sub",
                                                                            "left": {
                                                                                "type": "variable",
                                                                                "value": "stop",
                                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                                "line": 98,
                                                                                "char": 45
                                                                            },
                                                                            "right": {
                                                                                "type": "variable",
                                                                                "value": "start",
                                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                                "line": 98,
                                                                                "char": 52
                                                                            },
                                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                            "line": 98,
                                                                            "char": 52
                                                                        },
                                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                        "line": 98,
                                                                        "char": 54
                                                                    },
                                                                    "right": {
                                                                        "type": "int",
                                                                        "value": "1000",
                                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                        "line": 98,
                                                                        "char": 60
                                                                    },
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                    "line": 98,
                                                                    "char": 60
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 98,
                                                                "char": 61
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 98,
                                                            "char": 61
                                                        },
                                                        {
                                                            "parameter": {
                                                                "type": "int",
                                                                "value": "2",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                                "line": 98,
                                                                "char": 64
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 98,
                                                            "char": 64
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 98,
                                                    "char": 65
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 98,
                                                "char": 65
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 98,
                                            "char": 65
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 99,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 101,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "variable",
                                "value": "time",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 101,
                                "char": 20
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 102,
                            "char": 5
                        }
                    ],
                    "docblock": "**\n     * Check connection to server\n     *\n     * @param string ip\n     * @param int port\n     * @param int timeout\n     *\n     * @return int - response time -1 for error\n     *",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                    "line": 81,
                    "last-line": 106,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "__get",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "endpoint",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 107,
                            "char": 42
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "ns",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 109,
                                    "char": 18
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 109,
                            "char": 22
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "ns",
                                    "expr": {
                                        "type": "concat",
                                        "left": {
                                            "type": "concat",
                                            "left": {
                                                "type": "constant",
                                                "value": "__NAMESPACE__",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 109,
                                                "char": 42
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\\\\Endpoints\\\\",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 109,
                                                "char": 56
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 109,
                                            "char": 56
                                        },
                                        "right": {
                                            "type": "variable",
                                            "value": "endpoint",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 109,
                                            "char": 65
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 109,
                                        "char": 65
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 109,
                                    "char": 65
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 111,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property-array-index",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "config",
                                    "index-expr": [
                                        {
                                            "type": "string",
                                            "value": "endpoint",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 111,
                                            "char": 34
                                        }
                                    ],
                                    "expr": {
                                        "type": "variable",
                                        "value": "endpoint",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 111,
                                        "char": 47
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 111,
                                    "char": 47
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 113,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "fcall",
                                "name": "class_exists",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "ns",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                            "line": 113,
                                            "char": 27
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 113,
                                        "char": 27
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                "line": 113,
                                "char": 29
                            },
                            "statements": [
                                {
                                    "type": "return",
                                    "expr": {
                                        "type": "new",
                                        "class": "ns",
                                        "dynamic": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "property-access",
                                                    "left": {
                                                        "type": "variable",
                                                        "value": "this",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 114,
                                                        "char": 34
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "config",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 114,
                                                        "char": 41
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 114,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 114,
                                                "char": 41
                                            },
                                            {
                                                "parameter": {
                                                    "type": "property-access",
                                                    "left": {
                                                        "type": "variable",
                                                        "value": "this",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 114,
                                                        "char": 48
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "curl",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 114,
                                                        "char": 53
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 114,
                                                    "char": 53
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 114,
                                                "char": 53
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 114,
                                        "char": 54
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 115,
                                    "char": 9
                                }
                            ],
                            "else_statements": [
                                {
                                    "type": "throw",
                                    "expr": {
                                        "type": "new",
                                        "class": "\\Exception",
                                        "dynamic": 0,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "concat",
                                                    "left": {
                                                        "type": "concat",
                                                        "left": {
                                                            "type": "string",
                                                            "value": "Endpoint ",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 117,
                                                            "char": 26
                                                        },
                                                        "right": {
                                                            "type": "variable",
                                                            "value": "ns",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                            "line": 117,
                                                            "char": 29
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 117,
                                                        "char": 29
                                                    },
                                                    "right": {
                                                        "type": "string",
                                                        "value": ", not implemented.",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                        "line": 118,
                                                        "char": 13
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                    "line": 118,
                                                    "char": 13
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                                "line": 118,
                                                "char": 13
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                        "line": 118,
                                        "char": 14
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                                    "line": 119,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                            "line": 120,
                            "char": 5
                        }
                    ],
                    "docblock": "**\n     *\n     *",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
                    "line": 107,
                    "last-line": 122,
                    "char": 19
                }
            ],
            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
            "line": 6,
            "char": 5
        },
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/client.zep",
        "line": 6,
        "char": 5
    }
]