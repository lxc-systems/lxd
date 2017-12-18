[
    {
        "type": "namespace",
        "name": "Lxd\\Endpoints",
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
        "line": 3,
        "char": 3
    },
    {
        "type": "use",
        "aliases": [
            {
                "name": "Lxd\\Endpoint",
                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                "line": 3,
                "char": 17
            }
        ],
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
        "line": 5,
        "char": 5
    },
    {
        "type": "class",
        "name": "Certificates",
        "abstract": 0,
        "final": 0,
        "extends": "Endpoint",
        "definition": {
            "properties": [
                {
                    "visibility": [
                        "protected"
                    ],
                    "type": "property",
                    "name": "curl",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 8,
                    "char": 11
                },
                {
                    "visibility": [
                        "private"
                    ],
                    "type": "property",
                    "name": "endpoint",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 10,
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
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 10,
                            "char": 39
                        },
                        {
                            "type": "parameter",
                            "name": "curl",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 10,
                            "char": 45
                        }
                    ],
                    "statements": [
                        {
                            "type": "scall",
                            "expr": {
                                "type": "scall",
                                "dynamic-class": 0,
                                "class": "parent",
                                "dynamic": 0,
                                "name": "__construct",
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "config",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 12,
                                            "char": 35
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 12,
                                        "char": 35
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 12,
                                            "char": 41
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 12,
                                        "char": 41
                                    },
                                    {
                                        "parameter": {
                                            "type": "constant",
                                            "value": "__CLASS__",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 12,
                                            "char": 52
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 12,
                                        "char": 52
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 12,
                                "char": 53
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 14,
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
                                        "type": "concat",
                                        "left": {
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
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 14,
                                                                "char": 35
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "config",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 14,
                                                                "char": 42
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 14,
                                                            "char": 42
                                                        },
                                                        "right": {
                                                            "type": "string",
                                                            "value": "url",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 14,
                                                            "char": 46
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 14,
                                                        "char": 47
                                                    },
                                                    "right": {
                                                        "type": "string",
                                                        "value": "\/",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 14,
                                                        "char": 49
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 14,
                                                    "char": 49
                                                },
                                                "right": {
                                                    "type": "array-access",
                                                    "left": {
                                                        "type": "property-access",
                                                        "left": {
                                                            "type": "variable",
                                                            "value": "this",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 14,
                                                            "char": 55
                                                        },
                                                        "right": {
                                                            "type": "variable",
                                                            "value": "config",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 14,
                                                            "char": 62
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 14,
                                                        "char": 62
                                                    },
                                                    "right": {
                                                        "type": "string",
                                                        "value": "version",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 14,
                                                        "char": 70
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 14,
                                                    "char": 71
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 14,
                                                "char": 71
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\/",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 14,
                                                "char": 73
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 14,
                                            "char": 73
                                        },
                                        "right": {
                                            "type": "array-access",
                                            "left": {
                                                "type": "property-access",
                                                "left": {
                                                    "type": "variable",
                                                    "value": "this",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 14,
                                                    "char": 79
                                                },
                                                "right": {
                                                    "type": "variable",
                                                    "value": "config",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 14,
                                                    "char": 86
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 14,
                                                "char": 86
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "endpoint",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 14,
                                                "char": 95
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 14,
                                            "char": 96
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 14,
                                        "char": 96
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 14,
                                    "char": 96
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 15,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "void": 1,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                        "line": 11,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 10,
                    "last-line": 17,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "all",
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "response",
                                    "expr": {
                                        "type": "mcall",
                                        "variable": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 19,
                                                "char": 29
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "curl",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 19,
                                                "char": 35
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 19,
                                            "char": 35
                                        },
                                        "name": "get",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "property-access",
                                                    "left": {
                                                        "type": "variable",
                                                        "value": "this",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 19,
                                                        "char": 45
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "endpoint",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 19,
                                                        "char": 54
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 19,
                                                    "char": 54
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 19,
                                                "char": 54
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 19,
                                        "char": 55
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 19,
                                    "char": 55
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 21,
                            "char": 11
                        },
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "certificate",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 21,
                                    "char": 24
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 22,
                            "char": 11
                        },
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "certificates",
                                    "expr": {
                                        "type": "empty-array",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 22,
                                        "char": 30
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 22,
                                    "char": 30
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 23,
                            "char": 11
                        },
                        {
                            "type": "for",
                            "expr": {
                                "type": "cast",
                                "left": "array",
                                "right": {
                                    "type": "array-access",
                                    "left": {
                                        "type": "variable",
                                        "value": "response",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 23,
                                        "char": 44
                                    },
                                    "right": {
                                        "type": "string",
                                        "value": "metadata",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 23,
                                        "char": 53
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 23,
                                    "char": 55
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 23,
                                "char": 55
                            },
                            "value": "certificate",
                            "reverse": 0,
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "variable-append",
                                            "operator": "assign",
                                            "variable": "certificates",
                                            "expr": {
                                                "type": "fcall",
                                                "name": "str_replace",
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
                                                                        "type": "concat",
                                                                        "left": {
                                                                            "type": "string",
                                                                            "value": "\/",
                                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                            "line": 24,
                                                                            "char": 47
                                                                        },
                                                                        "right": {
                                                                            "type": "array-access",
                                                                            "left": {
                                                                                "type": "property-access",
                                                                                "left": {
                                                                                    "type": "variable",
                                                                                    "value": "this",
                                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                                    "line": 24,
                                                                                    "char": 53
                                                                                },
                                                                                "right": {
                                                                                    "type": "variable",
                                                                                    "value": "config",
                                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                                    "line": 24,
                                                                                    "char": 60
                                                                                },
                                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                                "line": 24,
                                                                                "char": 60
                                                                            },
                                                                            "right": {
                                                                                "type": "string",
                                                                                "value": "version",
                                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                                "line": 24,
                                                                                "char": 68
                                                                            },
                                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                            "line": 24,
                                                                            "char": 69
                                                                        },
                                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                        "line": 24,
                                                                        "char": 69
                                                                    },
                                                                    "right": {
                                                                        "type": "string",
                                                                        "value": "\/",
                                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                        "line": 24,
                                                                        "char": 71
                                                                    },
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                    "line": 24,
                                                                    "char": 71
                                                                },
                                                                "right": {
                                                                    "type": "array-access",
                                                                    "left": {
                                                                        "type": "property-access",
                                                                        "left": {
                                                                            "type": "variable",
                                                                            "value": "this",
                                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                            "line": 24,
                                                                            "char": 77
                                                                        },
                                                                        "right": {
                                                                            "type": "variable",
                                                                            "value": "config",
                                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                            "line": 24,
                                                                            "char": 84
                                                                        },
                                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                        "line": 24,
                                                                        "char": 84
                                                                    },
                                                                    "right": {
                                                                        "type": "string",
                                                                        "value": "endpoint",
                                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                        "line": 24,
                                                                        "char": 93
                                                                    },
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                    "line": 24,
                                                                    "char": 94
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 24,
                                                                "char": 94
                                                            },
                                                            "right": {
                                                                "type": "string",
                                                                "value": "\/",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 24,
                                                                "char": 96
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 24,
                                                            "char": 96
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 24,
                                                        "char": 96
                                                    },
                                                    {
                                                        "parameter": {
                                                            "type": "null",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 24,
                                                            "char": 102
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 24,
                                                        "char": 102
                                                    },
                                                    {
                                                        "parameter": {
                                                            "type": "variable",
                                                            "value": "certificate",
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 24,
                                                            "char": 115
                                                        },
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 24,
                                                        "char": 115
                                                    }
                                                ],
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 24,
                                                "char": 116
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 24,
                                            "char": 116
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 25,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 26,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "variable",
                                "value": "certificates",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 26,
                                "char": 28
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 27,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "array",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 18,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                        "line": 18,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 17,
                    "last-line": 29,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "add",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "certificate",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 29,
                            "char": 36
                        },
                        {
                            "type": "parameter",
                            "name": "password",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "default": {
                                "type": "null",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 29,
                                "char": 60
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 29,
                            "char": 60
                        },
                        {
                            "type": "parameter",
                            "name": "name",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "default": {
                                "type": "null",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 29,
                                "char": 80
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 29,
                            "char": 80
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "begin",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 31,
                                    "char": 18
                                },
                                {
                                    "variable": "end",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 31,
                                    "char": 23
                                },
                                {
                                    "variable": "pem_data",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 31,
                                    "char": 33
                                },
                                {
                                    "variable": "der",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 31,
                                    "char": 38
                                },
                                {
                                    "variable": "fingerprint",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 31,
                                    "char": 51
                                },
                                {
                                    "variable": "options",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 31,
                                    "char": 60
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 33,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "begin",
                                    "expr": {
                                        "type": "string",
                                        "value": "CERTIFICATE-----",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 33,
                                        "char": 37
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 33,
                                    "char": 37
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 34,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "end",
                                    "expr": {
                                        "type": "string",
                                        "value": "-----END",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 34,
                                        "char": 29
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 34,
                                    "char": 29
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 35,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "pem_data",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "substr",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "certificate",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 35,
                                                    "char": 42
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 35,
                                                "char": 42
                                            },
                                            {
                                                "parameter": {
                                                    "type": "add",
                                                    "left": {
                                                        "type": "fcall",
                                                        "name": "strpos",
                                                        "call-type": 1,
                                                        "parameters": [
                                                            {
                                                                "parameter": {
                                                                    "type": "variable",
                                                                    "value": "certificate",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                    "line": 35,
                                                                    "char": 62
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 35,
                                                                "char": 62
                                                            },
                                                            {
                                                                "parameter": {
                                                                    "type": "variable",
                                                                    "value": "begin",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                    "line": 35,
                                                                    "char": 69
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 35,
                                                                "char": 69
                                                            }
                                                        ],
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 35,
                                                        "char": 70
                                                    },
                                                    "right": {
                                                        "type": "fcall",
                                                        "name": "strlen",
                                                        "call-type": 1,
                                                        "parameters": [
                                                            {
                                                                "parameter": {
                                                                    "type": "variable",
                                                                    "value": "begin",
                                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                    "line": 35,
                                                                    "char": 83
                                                                },
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 35,
                                                                "char": 83
                                                            }
                                                        ],
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 35,
                                                        "char": 84
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 35,
                                                    "char": 84
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 35,
                                                "char": 84
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 35,
                                        "char": 85
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 35,
                                    "char": 85
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 36,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "pem_data",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "substr",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "pem_data",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 36,
                                                    "char": 39
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 36,
                                                "char": 39
                                            },
                                            {
                                                "parameter": {
                                                    "type": "int",
                                                    "value": "0",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 36,
                                                    "char": 42
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 36,
                                                "char": 42
                                            },
                                            {
                                                "parameter": {
                                                    "type": "fcall",
                                                    "name": "strpos",
                                                    "call-type": 1,
                                                    "parameters": [
                                                        {
                                                            "parameter": {
                                                                "type": "variable",
                                                                "value": "pem_data",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 36,
                                                                "char": 59
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 36,
                                                            "char": 59
                                                        },
                                                        {
                                                            "parameter": {
                                                                "type": "variable",
                                                                "value": "end",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                                "line": 36,
                                                                "char": 64
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                            "line": 36,
                                                            "char": 64
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 36,
                                                    "char": 65
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 36,
                                                "char": 65
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 36,
                                        "char": 66
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 36,
                                    "char": 66
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 37,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "der",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "base64_decode",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "pem_data",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 37,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 37,
                                                "char": 41
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 37,
                                        "char": 42
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 37,
                                    "char": 42
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 38,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "fingerprint",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "hash",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "string",
                                                    "value": "sha256",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 38,
                                                    "char": 38
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 38,
                                                "char": 38
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "der",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 38,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 38,
                                                "char": 43
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 38,
                                        "char": 44
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 38,
                                    "char": 44
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 40,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "options",
                                    "expr": {
                                        "type": "empty-array",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 40,
                                        "char": 25
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 40,
                                    "char": 25
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 41,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "array-index",
                                    "operator": "assign",
                                    "variable": "options",
                                    "index-expr": [
                                        {
                                            "type": "string",
                                            "value": "type",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 41,
                                            "char": 25
                                        }
                                    ],
                                    "expr": {
                                        "type": "string",
                                        "value": "client",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 41,
                                        "char": 35
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 41,
                                    "char": 35
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 42,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "array-index",
                                    "operator": "assign",
                                    "variable": "options",
                                    "index-expr": [
                                        {
                                            "type": "string",
                                            "value": "certificate",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 42,
                                            "char": 32
                                        }
                                    ],
                                    "expr": {
                                        "type": "fcall",
                                        "name": "base64_encode",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "der",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 42,
                                                    "char": 53
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 42,
                                                "char": 53
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 42,
                                        "char": 54
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 42,
                                    "char": 54
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 43,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "not-identical",
                                    "left": {
                                        "type": "variable",
                                        "value": "password",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 43,
                                        "char": 24
                                    },
                                    "right": {
                                        "type": "null",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 43,
                                        "char": 30
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 43,
                                    "char": 30
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 43,
                                "char": 32
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "options",
                                            "index-expr": [
                                                {
                                                    "type": "string",
                                                    "value": "password",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 44,
                                                    "char": 33
                                                }
                                            ],
                                            "expr": {
                                                "type": "variable",
                                                "value": "password",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 44,
                                                "char": 45
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 44,
                                            "char": 45
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 45,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 46,
                            "char": 10
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "list",
                                "left": {
                                    "type": "not-identical",
                                    "left": {
                                        "type": "variable",
                                        "value": "name",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 46,
                                        "char": 20
                                    },
                                    "right": {
                                        "type": "null",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 46,
                                        "char": 26
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 46,
                                    "char": 26
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 46,
                                "char": 28
                            },
                            "statements": [
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "array-index",
                                            "operator": "assign",
                                            "variable": "options",
                                            "index-expr": [
                                                {
                                                    "type": "string",
                                                    "value": "name",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 47,
                                                    "char": 29
                                                }
                                            ],
                                            "expr": {
                                                "type": "variable",
                                                "value": "name",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 47,
                                                "char": 37
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 47,
                                            "char": 37
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 48,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 50,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "mcall",
                                "variable": {
                                    "type": "property-access",
                                    "left": {
                                        "type": "variable",
                                        "value": "this",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 50,
                                        "char": 21
                                    },
                                    "right": {
                                        "type": "variable",
                                        "value": "curl",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 50,
                                        "char": 27
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 50,
                                    "char": 27
                                },
                                "name": "post",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "this",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 50,
                                                "char": 38
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "endpoint",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 50,
                                                "char": 47
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 50,
                                            "char": 47
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 50,
                                        "char": 47
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "options",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 50,
                                            "char": 56
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 50,
                                        "char": 56
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 50,
                                "char": 57
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 51,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "array",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 30,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                        "line": 30,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 29,
                    "last-line": 53,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "info",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "fingerprint",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 53,
                            "char": 37
                        }
                    ],
                    "statements": [
                        {
                            "type": "return",
                            "expr": {
                                "type": "mcall",
                                "variable": {
                                    "type": "property-access",
                                    "left": {
                                        "type": "variable",
                                        "value": "this",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 55,
                                        "char": 21
                                    },
                                    "right": {
                                        "type": "variable",
                                        "value": "curl",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 55,
                                        "char": 27
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 55,
                                    "char": 27
                                },
                                "name": "get",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "concat",
                                            "left": {
                                                "type": "concat",
                                                "left": {
                                                    "type": "property-access",
                                                    "left": {
                                                        "type": "variable",
                                                        "value": "this",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 55,
                                                        "char": 37
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "endpoint",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 55,
                                                        "char": 46
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 55,
                                                    "char": 46
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 55,
                                                    "char": 48
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 55,
                                                "char": 48
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "fingerprint",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 55,
                                                "char": 60
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 55,
                                            "char": 60
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 55,
                                        "char": 60
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 55,
                                "char": 61
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 56,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "array",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 54,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                        "line": 54,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 53,
                    "last-line": 58,
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
                            "name": "fingerprint",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 58,
                            "char": 39
                        }
                    ],
                    "statements": [
                        {
                            "type": "return",
                            "expr": {
                                "type": "mcall",
                                "variable": {
                                    "type": "variable",
                                    "value": "this",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 60,
                                    "char": 21
                                },
                                "name": "remove",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "fingerprint",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 60,
                                            "char": 40
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 60,
                                        "char": 40
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 60,
                                "char": 41
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 61,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "bool",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 59,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                        "line": 59,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 58,
                    "last-line": 63,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "remove",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "fingerprint",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 63,
                            "char": 39
                        }
                    ],
                    "statements": [
                        {
                            "type": "return",
                            "expr": {
                                "type": "mcall",
                                "variable": {
                                    "type": "property-access",
                                    "left": {
                                        "type": "variable",
                                        "value": "this",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 65,
                                        "char": 21
                                    },
                                    "right": {
                                        "type": "variable",
                                        "value": "curl",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 65,
                                        "char": 27
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                    "line": 65,
                                    "char": 27
                                },
                                "name": "delete",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "concat",
                                            "left": {
                                                "type": "concat",
                                                "left": {
                                                    "type": "property-access",
                                                    "left": {
                                                        "type": "variable",
                                                        "value": "this",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 65,
                                                        "char": 40
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "endpoint",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                        "line": 65,
                                                        "char": 49
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 65,
                                                    "char": 49
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "\/",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                    "line": 65,
                                                    "char": 51
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 65,
                                                "char": 51
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "fingerprint",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                                "line": 65,
                                                "char": 63
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                            "line": 65,
                                            "char": 63
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                        "line": 65,
                                        "char": 63
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 65,
                                "char": 64
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                            "line": 66,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "bool",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                                "line": 64,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                        "line": 64,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
                    "line": 63,
                    "last-line": 68,
                    "char": 19
                }
            ],
            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
            "line": 5,
            "char": 5
        },
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/certificates.zep",
        "line": 5,
        "char": 5
    }
]