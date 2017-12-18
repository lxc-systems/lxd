[
    {
        "type": "namespace",
        "name": "Lxd",
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
        "line": 3,
        "char": 5
    },
    {
        "type": "class",
        "name": "Endpoint",
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
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                    "line": 6,
                    "char": 13
                },
                {
                    "visibility": [
                        "protected"
                    ],
                    "type": "property",
                    "name": "curl",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                    "line": 7,
                    "char": 13
                },
                {
                    "visibility": [
                        "protected"
                    ],
                    "type": "property",
                    "name": "endpoint",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                    "line": 9,
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
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 9,
                            "char": 45
                        },
                        {
                            "type": "parameter",
                            "name": "curl",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 9,
                            "char": 51
                        },
                        {
                            "type": "parameter",
                            "name": "endpoint",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "default": {
                                "type": "string",
                                "value": "",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                "line": 9,
                                "char": 71
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 9,
                            "char": 71
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
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 11,
                                        "char": 36
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 11,
                                    "char": 36
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 12,
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
                                        "type": "variable",
                                        "value": "curl",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 12,
                                        "char": 34
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 12,
                                    "char": 34
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 13,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "object-property",
                                    "operator": "assign",
                                    "variable": "this",
                                    "property": "endpoint",
                                    "expr": {
                                        "type": "variable",
                                        "value": "endpoint",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 13,
                                        "char": 38
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 13,
                                    "char": 38
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 14,
                            "char": 5
                        }
                    ],
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                    "line": 9,
                    "last-line": 16,
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
                            "name": "method",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 16,
                            "char": 40
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "ns",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 18,
                                    "char": 18
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 18,
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
                                                "type": "property-access",
                                                "left": {
                                                    "type": "variable",
                                                    "value": "this",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 18,
                                                    "char": 34
                                                },
                                                "right": {
                                                    "type": "variable",
                                                    "value": "endpoint",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 18,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 18,
                                                "char": 43
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\\\\",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 18,
                                                "char": 46
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                            "line": 18,
                                            "char": 46
                                        },
                                        "right": {
                                            "type": "variable",
                                            "value": "method",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                            "line": 18,
                                            "char": 53
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 18,
                                        "char": 53
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 18,
                                    "char": 53
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 20,
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
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                            "line": 20,
                                            "char": 27
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 20,
                                        "char": 27
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                "line": 20,
                                "char": 29
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
                                                    "value": "endpoint",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 21,
                                                    "char": 38
                                                }
                                            ],
                                            "expr": {
                                                "type": "property-access",
                                                "left": {
                                                    "type": "variable",
                                                    "value": "this",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 21,
                                                    "char": 47
                                                },
                                                "right": {
                                                    "type": "variable",
                                                    "value": "endpoint",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 21,
                                                    "char": 56
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 21,
                                                "char": 56
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                            "line": 21,
                                            "char": 56
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 22,
                                    "char": 15
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
                                                    "value": "method",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 22,
                                                    "char": 36
                                                }
                                            ],
                                            "expr": {
                                                "type": "variable",
                                                "value": "method",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 22,
                                                "char": 46
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                            "line": 22,
                                            "char": 46
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 23,
                                    "char": 18
                                },
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
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                        "line": 23,
                                                        "char": 34
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "config",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                        "line": 23,
                                                        "char": 41
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 23,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 23,
                                                "char": 41
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 23,
                                        "char": 42
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 24,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 26,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "fcall",
                                    "name": "method_exists",
                                    "call-type": 1,
                                    "parameters": [
                                        {
                                            "parameter": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 26,
                                                "char": 31
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                            "line": 26,
                                            "char": 31
                                        },
                                        {
                                            "parameter": {
                                                "type": "variable",
                                                "value": "method",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 26,
                                                "char": 39
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                            "line": 26,
                                            "char": 39
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 26,
                                    "char": 40
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                "line": 26,
                                "char": 42
                            },
                            "statements": [
                                {
                                    "type": "return",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "call_user_func",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "value": {
                                                                "type": "variable",
                                                                "value": "this",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                "line": 28,
                                                                "char": 22
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                            "line": 28,
                                                            "char": 22
                                                        },
                                                        {
                                                            "value": {
                                                                "type": "variable",
                                                                "value": "method",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                "line": 28,
                                                                "char": 30
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                            "line": 28,
                                                            "char": 30
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 28,
                                                    "char": 31
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 28,
                                                "char": 31
                                            },
                                            {
                                                "parameter": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "value": {
                                                                "type": "property-access",
                                                                "left": {
                                                                    "type": "variable",
                                                                    "value": "this",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                    "line": 29,
                                                                    "char": 23
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "config",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                    "line": 29,
                                                                    "char": 30
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                "line": 29,
                                                                "char": 30
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                            "line": 29,
                                                            "char": 30
                                                        },
                                                        {
                                                            "value": {
                                                                "type": "property-access",
                                                                "left": {
                                                                    "type": "variable",
                                                                    "value": "this",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                    "line": 29,
                                                                    "char": 37
                                                                },
                                                                "right": {
                                                                    "type": "variable",
                                                                    "value": "curl",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                    "line": 29,
                                                                    "char": 42
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                                "line": 29,
                                                                "char": 42
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                            "line": 29,
                                                            "char": 42
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 30,
                                                    "char": 13
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 30,
                                                "char": 13
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 30,
                                        "char": 14
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 31,
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
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                            "line": 32,
                                                            "char": 43
                                                        },
                                                        "right": {
                                                            "type": "variable",
                                                            "value": "ns",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                            "line": 32,
                                                            "char": 46
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                        "line": 32,
                                                        "char": 46
                                                    },
                                                    "right": {
                                                        "type": "string",
                                                        "value": ", not implemented.",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                        "line": 32,
                                                        "char": 65
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                    "line": 32,
                                                    "char": 65
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                                "line": 32,
                                                "char": 65
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                        "line": 32,
                                        "char": 66
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                                    "line": 33,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                            "line": 34,
                            "char": 5
                        }
                    ],
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
                    "line": 16,
                    "last-line": 36,
                    "char": 19
                }
            ],
            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
            "line": 3,
            "char": 5
        },
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoint.zep",
        "line": 3,
        "char": 5
    }
]