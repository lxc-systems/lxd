[
    {
        "type": "namespace",
        "name": "Lxd\\Lib",
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
        "line": 3,
        "char": 5
    },
    {
        "type": "class",
        "name": "Curl",
        "abstract": 0,
        "final": 0,
        "definition": {
            "properties": [
                {
                    "visibility": [
                        "private"
                    ],
                    "type": "property",
                    "name": "config",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                    "line": 7,
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
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 7,
                            "char": 39
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
                                        "type": "variable",
                                        "value": "config",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 9,
                                        "char": 34
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 9,
                                    "char": 34
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 10,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "void": 1,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                        "line": 8,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                    "line": 7,
                    "last-line": 17,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "get",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "url",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 18,
                            "char": 28
                        },
                        {
                            "type": "parameter",
                            "name": "parameters",
                            "const": 0,
                            "data-type": "array",
                            "mandatory": 0,
                            "default": {
                                "type": "empty-array",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 18,
                                "char": 51
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 18,
                            "char": 51
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "query",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 20,
                                    "char": 18
                                },
                                {
                                    "variable": "curl",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 20,
                                    "char": 24
                                },
                                {
                                    "variable": "curl_options",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 20,
                                    "char": 38
                                },
                                {
                                    "variable": "response",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 20,
                                    "char": 48
                                },
                                {
                                    "variable": "httpCode",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 20,
                                    "char": 58
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 23,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "query",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "http_build_query",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "parameters",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 23,
                                                    "char": 48
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 23,
                                                "char": 48
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 23,
                                        "char": 49
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 23,
                                    "char": 49
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 26,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_init",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "concat",
                                                    "left": {
                                                        "type": "variable",
                                                        "value": "url",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 26,
                                                        "char": 34
                                                    },
                                                    "right": {
                                                        "type": "list",
                                                        "left": {
                                                            "type": "ternary",
                                                            "left": {
                                                                "type": "not",
                                                                "left": {
                                                                    "type": "empty",
                                                                    "left": {
                                                                        "type": "list",
                                                                        "left": {
                                                                            "type": "variable",
                                                                            "value": "query",
                                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                            "line": 26,
                                                                            "char": 48
                                                                        },
                                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                        "line": 26,
                                                                        "char": 50
                                                                    },
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 26,
                                                                    "char": 50
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 26,
                                                                "char": 50
                                                            },
                                                            "right": {
                                                                "type": "concat",
                                                                "left": {
                                                                    "type": "string",
                                                                    "value": "?",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 26,
                                                                    "char": 53
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "query",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 26,
                                                                    "char": 60
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 26,
                                                                "char": 60
                                                            },
                                                            "extra": {
                                                                "type": "null",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 26,
                                                                "char": 66
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 26,
                                                            "char": 66
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 26,
                                                        "char": 67
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 26,
                                                    "char": 67
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 26,
                                                "char": 67
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 26,
                                        "char": 68
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 26,
                                    "char": 68
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 29,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl_options",
                                    "expr": {
                                        "type": "array",
                                        "left": [
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_RETURNTRANSFER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 30,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "true",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 30,
                                                    "char": 42
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 30,
                                                "char": 42
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYPEER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 31,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 31,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 31,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYHOST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 32,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 33,
                                                    "char": 9
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 33,
                                                "char": 9
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 33,
                                        "char": 10
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 33,
                                    "char": 10
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 35,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "and",
                                    "left": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 35,
                                                "char": 18
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 35,
                                                "char": 25
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 35,
                                            "char": 25
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "certificate_path",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 35,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 35,
                                        "char": 45
                                    },
                                    "right": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 35,
                                                "char": 52
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 35,
                                                "char": 59
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 35,
                                            "char": 59
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 35,
                                            "char": 62
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 35,
                                        "char": 63
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 35,
                                    "char": 63
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 35,
                                "char": 65
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLKEY",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 36,
                                                    "char": 44
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 36,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 36,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 36,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 36,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 36,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 36,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 36,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 36,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 36,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 36,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 36,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 36,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 36,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/private.key",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 36,
                                                    "char": 111
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 36,
                                                "char": 111
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 36,
                                            "char": 111
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 37,
                                    "char": 15
                                },
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLCERT",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 37,
                                                    "char": 45
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 37,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 37,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 37,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 37,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 37,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 37,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 37,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 37,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 37,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 37,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 37,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 37,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 37,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/client.pem",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 37,
                                                    "char": 110
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 37,
                                                "char": 110
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 37,
                                            "char": 110
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 38,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 40,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_setopt_array",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 40,
                                            "char": 31
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 40,
                                        "char": 31
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl_options",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 40,
                                            "char": 45
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 40,
                                        "char": 45
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 40,
                                "char": 46
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 43,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "response",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_exec",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 43,
                                                    "char": 40
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 43,
                                                "char": 40
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 43,
                                        "char": 41
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 43,
                                    "char": 41
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 44,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "httpCode",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_getinfo",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 44,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 44,
                                                "char": 41
                                            },
                                            {
                                                "parameter": {
                                                    "type": "constant",
                                                    "value": "CURLINFO_HTTP_CODE",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 44,
                                                    "char": 61
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 44,
                                                "char": 61
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 44,
                                        "char": 62
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 44,
                                    "char": 62
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 47,
                            "char": 18
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_close",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 47,
                                            "char": 24
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 47,
                                        "char": 24
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 47,
                                "char": 25
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 50,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "response",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "json_decode",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "response",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 50,
                                                    "char": 44
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 50,
                                                "char": 44
                                            },
                                            {
                                                "parameter": {
                                                    "type": "bool",
                                                    "value": "true",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 50,
                                                    "char": 50
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 50,
                                                "char": 50
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 50,
                                        "char": 51
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 50,
                                    "char": 51
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 53,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "cast",
                                "left": "array",
                                "right": {
                                    "type": "variable",
                                    "value": "response",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 53,
                                    "char": 32
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 53,
                                "char": 32
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 54,
                            "char": 5
                        }
                    ],
                    "docblock": "**\n     *  GET request\n     *  @param  string      Resource to fetch\n     *  @param  array       Associative array with additional parameters\n     *  @return array       Associative array with the result\n     *",
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "array",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 19,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                        "line": 19,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                    "line": 18,
                    "last-line": 61,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "post",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "url",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 62,
                            "char": 29
                        },
                        {
                            "type": "parameter",
                            "name": "parameters",
                            "const": 0,
                            "data-type": "array",
                            "mandatory": 0,
                            "default": {
                                "type": "empty-array",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 62,
                                "char": 52
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 62,
                            "char": 52
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "curl",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 64,
                                    "char": 17
                                },
                                {
                                    "variable": "curl_options",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 64,
                                    "char": 31
                                },
                                {
                                    "variable": "response",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 64,
                                    "char": 41
                                },
                                {
                                    "variable": "httpCode",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 64,
                                    "char": 51
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 67,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_init",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "url",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 67,
                                                    "char": 34
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 67,
                                                "char": 34
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 67,
                                        "char": 35
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 67,
                                    "char": 35
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 70,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl_options",
                                    "expr": {
                                        "type": "array",
                                        "left": [
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_POST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 71,
                                                    "char": 26
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "true",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 71,
                                                    "char": 32
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 71,
                                                "char": 32
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_RETURNTRANSFER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 72,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "true",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 72,
                                                    "char": 42
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 72,
                                                "char": 42
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYPEER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 73,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 73,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 73,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYHOST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 74,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 74,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 74,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_HTTPHEADER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 75,
                                                    "char": 32
                                                },
                                                "value": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "value": {
                                                                "type": "string",
                                                                "value": "Content-Type: application\/json",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 77,
                                                                "char": 13
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 77,
                                                            "char": 13
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 77,
                                                    "char": 14
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 77,
                                                "char": 14
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_POSTFIELDS",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 78,
                                                    "char": 32
                                                },
                                                "value": {
                                                    "type": "fcall",
                                                    "name": "json_encode",
                                                    "call-type": 1,
                                                    "parameters": [
                                                        {
                                                            "parameter": {
                                                                "type": "variable",
                                                                "value": "parameters",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 78,
                                                                "char": 56
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 78,
                                                            "char": 56
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 79,
                                                    "char": 9
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 79,
                                                "char": 9
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 79,
                                        "char": 10
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 79,
                                    "char": 10
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 81,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "and",
                                    "left": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 81,
                                                "char": 18
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 81,
                                                "char": 25
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 81,
                                            "char": 25
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "certificate_path",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 81,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 81,
                                        "char": 45
                                    },
                                    "right": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 81,
                                                "char": 52
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 81,
                                                "char": 59
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 81,
                                            "char": 59
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 81,
                                            "char": 62
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 81,
                                        "char": 63
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 81,
                                    "char": 63
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 81,
                                "char": 65
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLKEY",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 82,
                                                    "char": 44
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 82,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 82,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 82,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 82,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 82,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 82,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 82,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 82,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 82,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 82,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 82,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 82,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 82,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/private.key",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 82,
                                                    "char": 111
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 82,
                                                "char": 111
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 82,
                                            "char": 111
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 83,
                                    "char": 15
                                },
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLCERT",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 83,
                                                    "char": 45
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 83,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 83,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 83,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 83,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 83,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 83,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 83,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 83,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 83,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 83,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 83,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 83,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 83,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/client.pem",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 83,
                                                    "char": 110
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 83,
                                                "char": 110
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 83,
                                            "char": 110
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 84,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 86,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_setopt_array",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 86,
                                            "char": 31
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 86,
                                        "char": 31
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl_options",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 86,
                                            "char": 45
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 86,
                                        "char": 45
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 86,
                                "char": 46
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 89,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "response",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_exec",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 89,
                                                    "char": 40
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 89,
                                                "char": 40
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 89,
                                        "char": 41
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 89,
                                    "char": 41
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 90,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "httpCode",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_getinfo",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 90,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 90,
                                                "char": 41
                                            },
                                            {
                                                "parameter": {
                                                    "type": "constant",
                                                    "value": "CURLINFO_HTTP_CODE",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 90,
                                                    "char": 61
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 90,
                                                "char": 61
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 90,
                                        "char": 62
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 90,
                                    "char": 62
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 93,
                            "char": 18
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_close",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 93,
                                            "char": 24
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 93,
                                        "char": 24
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 93,
                                "char": 25
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 96,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "or",
                                "left": {
                                    "type": "not",
                                    "left": {
                                        "type": "list",
                                        "left": {
                                            "type": "variable",
                                            "value": "httpCode",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 96,
                                            "char": 22
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 96,
                                        "char": 25
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 96,
                                    "char": 25
                                },
                                "right": {
                                    "type": "equals",
                                    "left": {
                                        "type": "variable",
                                        "value": "httpCode",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 96,
                                        "char": 37
                                    },
                                    "right": {
                                        "type": "int",
                                        "value": "400",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 96,
                                        "char": 43
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 96,
                                    "char": 43
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 96,
                                "char": 43
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 101,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "fcall",
                                "name": "json_decode",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "response",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 101,
                                            "char": 36
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 101,
                                        "char": 36
                                    },
                                    {
                                        "parameter": {
                                            "type": "bool",
                                            "value": "true",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 101,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 101,
                                        "char": 42
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 101,
                                "char": 43
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 102,
                            "char": 5
                        }
                    ],
                    "docblock": "**\n     *  Do a POST request\n     *  @param  string      Resource name\n     *  @param  array       Associative array with data to post\n     *  @return mixed       False on failure or the id of the created item           \n     *",
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "array",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 63,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                        "line": 63,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                    "line": 62,
                    "last-line": 110,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "put",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "url",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 111,
                            "char": 28
                        },
                        {
                            "type": "parameter",
                            "name": "data",
                            "const": 0,
                            "data-type": "array",
                            "mandatory": 0,
                            "default": {
                                "type": "empty-array",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 111,
                                "char": 45
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 111,
                            "char": 45
                        },
                        {
                            "type": "parameter",
                            "name": "parameters",
                            "const": 0,
                            "data-type": "array",
                            "mandatory": 0,
                            "default": {
                                "type": "empty-array",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 111,
                                "char": 68
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 111,
                            "char": 68
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "curl",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 113,
                                    "char": 17
                                },
                                {
                                    "variable": "curl_options",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 113,
                                    "char": 31
                                },
                                {
                                    "variable": "response",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 113,
                                    "char": 41
                                },
                                {
                                    "variable": "httpCode",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 113,
                                    "char": 51
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 116,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_init",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "url",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 116,
                                                    "char": 34
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 116,
                                                "char": 34
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 116,
                                        "char": 35
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 116,
                                    "char": 35
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 119,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl_options",
                                    "expr": {
                                        "type": "array",
                                        "left": [
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_CUSTOMREQUEST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 120,
                                                    "char": 35
                                                },
                                                "value": {
                                                    "type": "string",
                                                    "value": "PUT",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 120,
                                                    "char": 40
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 120,
                                                "char": 40
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYPEER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 121,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 121,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 121,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYHOST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 122,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 122,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 122,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_HTTPHEADER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 123,
                                                    "char": 32
                                                },
                                                "value": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "value": {
                                                                "type": "string",
                                                                "value": "Content-Type: application\/json",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 125,
                                                                "char": 13
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 125,
                                                            "char": 13
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 125,
                                                    "char": 14
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 125,
                                                "char": 14
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_POSTFIELDS",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 126,
                                                    "char": 32
                                                },
                                                "value": {
                                                    "type": "fcall",
                                                    "name": "json_encode",
                                                    "call-type": 1,
                                                    "parameters": [
                                                        {
                                                            "parameter": {
                                                                "type": "variable",
                                                                "value": "parameters",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 126,
                                                                "char": 56
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 126,
                                                            "char": 56
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 127,
                                                    "char": 9
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 127,
                                                "char": 9
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 127,
                                        "char": 10
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 127,
                                    "char": 10
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 129,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "and",
                                    "left": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 129,
                                                "char": 18
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 129,
                                                "char": 25
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 129,
                                            "char": 25
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "certificate_path",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 129,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 129,
                                        "char": 45
                                    },
                                    "right": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 129,
                                                "char": 52
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 129,
                                                "char": 59
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 129,
                                            "char": 59
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 129,
                                            "char": 62
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 129,
                                        "char": 63
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 129,
                                    "char": 63
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 129,
                                "char": 65
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLKEY",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 130,
                                                    "char": 44
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 130,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 130,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 130,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 130,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 130,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 130,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 130,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 130,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 130,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 130,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 130,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 130,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 130,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/private.key",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 130,
                                                    "char": 111
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 130,
                                                "char": 111
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 130,
                                            "char": 111
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 131,
                                    "char": 15
                                },
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLCERT",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 131,
                                                    "char": 45
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 131,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 131,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 131,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 131,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 131,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 131,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 131,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 131,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 131,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 131,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 131,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 131,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 131,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/client.pem",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 131,
                                                    "char": 110
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 131,
                                                "char": 110
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 131,
                                            "char": 110
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 132,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 134,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_setopt_array",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 134,
                                            "char": 31
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 134,
                                        "char": 31
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl_options",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 134,
                                            "char": 45
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 134,
                                        "char": 45
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 134,
                                "char": 46
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 137,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "response",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_exec",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 137,
                                                    "char": 39
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 137,
                                                "char": 39
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 137,
                                        "char": 40
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 137,
                                    "char": 40
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 138,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "httpCode",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_getinfo",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 138,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 138,
                                                "char": 41
                                            },
                                            {
                                                "parameter": {
                                                    "type": "constant",
                                                    "value": "CURLINFO_HTTP_CODE",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 138,
                                                    "char": 61
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 138,
                                                "char": 61
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 138,
                                        "char": 62
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 138,
                                    "char": 62
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 141,
                            "char": 18
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_close",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 141,
                                            "char": 24
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 141,
                                        "char": 24
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 141,
                                "char": 25
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 144,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "or",
                                "left": {
                                    "type": "not",
                                    "left": {
                                        "type": "list",
                                        "left": {
                                            "type": "variable",
                                            "value": "httpCode",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 144,
                                            "char": 22
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 144,
                                        "char": 25
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 144,
                                    "char": 25
                                },
                                "right": {
                                    "type": "equals",
                                    "left": {
                                        "type": "variable",
                                        "value": "httpCode",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 144,
                                        "char": 37
                                    },
                                    "right": {
                                        "type": "int",
                                        "value": "400",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 144,
                                        "char": 43
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 144,
                                    "char": 43
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 144,
                                "char": 43
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 149,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "fcall",
                                "name": "json_decode",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "response",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 149,
                                            "char": 36
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 149,
                                        "char": 36
                                    },
                                    {
                                        "parameter": {
                                            "type": "bool",
                                            "value": "true",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 149,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 149,
                                        "char": 42
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 149,
                                "char": 43
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 150,
                            "char": 5
                        }
                    ],
                    "docblock": "**\n     *  Do a PUT request\n     *  @param  string      Resource name\n     *  @param  array       Associative array with data to post\n     *  @param  array       Associative array with additional parameters\n     *  @return bool\n     *",
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "array",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 112,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                        "line": 112,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                    "line": 111,
                    "last-line": 156,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "delete",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "url",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 157,
                            "char": 31
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "curl",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 159,
                                    "char": 17
                                },
                                {
                                    "variable": "curl_options",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 159,
                                    "char": 31
                                },
                                {
                                    "variable": "response",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 159,
                                    "char": 41
                                },
                                {
                                    "variable": "httpCode",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 159,
                                    "char": 51
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 162,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_init",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "url",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 162,
                                                    "char": 34
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 162,
                                                "char": 34
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 162,
                                        "char": 35
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 162,
                                    "char": 35
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 165,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "curl_options",
                                    "expr": {
                                        "type": "array",
                                        "left": [
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_CUSTOMREQUEST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 166,
                                                    "char": 35
                                                },
                                                "value": {
                                                    "type": "string",
                                                    "value": "DELETE",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 166,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 166,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYPEER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 167,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 167,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 167,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSL_VERIFYHOST",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 168,
                                                    "char": 36
                                                },
                                                "value": {
                                                    "type": "bool",
                                                    "value": "false",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 168,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 168,
                                                "char": 43
                                            },
                                            {
                                                "key": {
                                                    "type": "constant",
                                                    "value": "CURLOPT_HTTPHEADER",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 169,
                                                    "char": 32
                                                },
                                                "value": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "value": {
                                                                "type": "string",
                                                                "value": "Content-Type: application\/json",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 171,
                                                                "char": 13
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 171,
                                                            "char": 13
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 172,
                                                    "char": 9
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 172,
                                                "char": 9
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 172,
                                        "char": 10
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 172,
                                    "char": 10
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 174,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "and",
                                    "left": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 174,
                                                "char": 18
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 174,
                                                "char": 25
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 174,
                                            "char": 25
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "certificate_path",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 174,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 174,
                                        "char": 45
                                    },
                                    "right": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 174,
                                                "char": 52
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "config",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 174,
                                                "char": 59
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 174,
                                            "char": 59
                                        },
                                        "right": {
                                            "type": "string",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 174,
                                            "char": 62
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 174,
                                        "char": 63
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 174,
                                    "char": 63
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 174,
                                "char": 65
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLKEY",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 175,
                                                    "char": 44
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 175,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 175,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 175,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 175,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 175,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 175,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 175,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 175,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 175,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 175,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 175,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 175,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 175,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/private.key",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 175,
                                                    "char": 111
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 175,
                                                "char": 111
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 175,
                                            "char": 111
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 176,
                                    "char": 15
                                },
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "curl_options",
                                            "index-expr": [
                                                {
                                                    "type": "constant",
                                                    "value": "CURLOPT_SSLCERT",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 176,
                                                    "char": 45
                                                }
                                            ],
                                            "expr": {
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
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 176,
                                                                    "char": 54
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                    "line": 176,
                                                                    "char": 61
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 176,
                                                                "char": 61
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "certificate_path",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 176,
                                                                "char": 78
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 176,
                                                            "char": 79
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "\/",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 176,
                                                            "char": 81
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 176,
                                                        "char": 81
                                                    },
                                                    "right": {
                                                        "type": "array-access",
                                                        "left": {
                                                            "type": "property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 176,
                                                                "char": 87
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                                "line": 176,
                                                                "char": 94
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 176,
                                                            "char": 94
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "ip",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                            "line": 176,
                                                            "char": 97
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                        "line": 176,
                                                        "char": 98
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 176,
                                                    "char": 98
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/client.pem",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 176,
                                                    "char": 110
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 176,
                                                "char": 110
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 176,
                                            "char": 110
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 177,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 179,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_setopt_array",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 179,
                                            "char": 31
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 179,
                                        "char": 31
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl_options",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 179,
                                            "char": 45
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 179,
                                        "char": 45
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 179,
                                "char": 46
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 182,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "response",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_exec",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 182,
                                                    "char": 38
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 182,
                                                "char": 38
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 182,
                                        "char": 39
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 182,
                                    "char": 39
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 183,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "httpCode",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "curl_getinfo",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "curl",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 183,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 183,
                                                "char": 41
                                            },
                                            {
                                                "parameter": {
                                                    "type": "constant",
                                                    "value": "CURLINFO_HTTP_CODE",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                    "line": 183,
                                                    "char": 61
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                                "line": 183,
                                                "char": 61
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 183,
                                        "char": 62
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 183,
                                    "char": 62
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 186,
                            "char": 18
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "curl_close",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 186,
                                            "char": 24
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 186,
                                        "char": 24
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 186,
                                "char": 25
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 189,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "or",
                                "left": {
                                    "type": "not",
                                    "left": {
                                        "type": "list",
                                        "left": {
                                            "type": "variable",
                                            "value": "httpCode",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 189,
                                            "char": 22
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 189,
                                        "char": 25
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 189,
                                    "char": 25
                                },
                                "right": {
                                    "type": "equals",
                                    "left": {
                                        "type": "variable",
                                        "value": "httpCode",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 189,
                                        "char": 37
                                    },
                                    "right": {
                                        "type": "int",
                                        "value": "400",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 189,
                                        "char": 43
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                    "line": 189,
                                    "char": 43
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 189,
                                "char": 43
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 194,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "fcall",
                                "name": "json_decode",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "response",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 194,
                                            "char": 36
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 194,
                                        "char": 36
                                    },
                                    {
                                        "parameter": {
                                            "type": "bool",
                                            "value": "true",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                            "line": 194,
                                            "char": 42
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                        "line": 194,
                                        "char": 42
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 194,
                                "char": 43
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                            "line": 195,
                            "char": 5
                        }
                    ],
                    "docblock": "**\n     *  Do a DELETE request\n     *  @param  string      Resource name\n     *  @return bool\n     *",
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "bool",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                                "line": 158,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                        "line": 158,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
                    "line": 157,
                    "last-line": 197,
                    "char": 19
                }
            ],
            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
            "line": 3,
            "char": 5
        },
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/curl.zep",
        "line": 3,
        "char": 5
    }
]