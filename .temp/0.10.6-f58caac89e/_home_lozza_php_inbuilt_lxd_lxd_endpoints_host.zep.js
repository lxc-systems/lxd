[
    {
        "type": "namespace",
        "name": "Lxd\\Endpoints",
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
        "line": 3,
        "char": 3
    },
    {
        "type": "use",
        "aliases": [
            {
                "name": "Lxd\\Endpoint",
                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                "line": 3,
                "char": 17
            }
        ],
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
        "line": 5,
        "char": 5
    },
    {
        "type": "class",
        "name": "Host",
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
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
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
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                            "line": 9,
                            "char": 39
                        },
                        {
                            "type": "parameter",
                            "name": "curl",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                            "line": 9,
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
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                            "line": 11,
                                            "char": 35
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                        "line": 11,
                                        "char": 35
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "curl",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                            "line": 11,
                                            "char": 41
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                        "line": 11,
                                        "char": 41
                                    },
                                    {
                                        "parameter": {
                                            "type": "constant",
                                            "value": "__CLASS__",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                            "line": 11,
                                            "char": 52
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                        "line": 11,
                                        "char": 52
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                "line": 11,
                                "char": 53
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                            "line": 12,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "void": 1,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                        "line": 10,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                    "line": 9,
                    "last-line": 14,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "info",
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "endpoint",
                                    "expr": {
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
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                        "line": 16,
                                                        "char": 32
                                                    },
                                                    "right": {
                                                        "type": "variable",
                                                        "value": "config",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                        "line": 16,
                                                        "char": 39
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                    "line": 16,
                                                    "char": 39
                                                },
                                                "right": {
                                                    "type": "string",
                                                    "value": "url",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                    "line": 16,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                "line": 16,
                                                "char": 44
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\/",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                "line": 16,
                                                "char": 46
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                            "line": 16,
                                            "char": 46
                                        },
                                        "right": {
                                            "type": "array-access",
                                            "left": {
                                                "type": "property-access",
                                                "left": {
                                                    "type": "variable",
                                                    "value": "this",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                    "line": 16,
                                                    "char": 52
                                                },
                                                "right": {
                                                    "type": "variable",
                                                    "value": "config",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                    "line": 16,
                                                    "char": 59
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                "line": 16,
                                                "char": 59
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "version",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                                "line": 16,
                                                "char": 67
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                            "line": 16,
                                            "char": 68
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                        "line": 16,
                                        "char": 68
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                    "line": 16,
                                    "char": 68
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                            "line": 18,
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
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                        "line": 18,
                                        "char": 21
                                    },
                                    "right": {
                                        "type": "variable",
                                        "value": "curl",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                        "line": 18,
                                        "char": 27
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                    "line": 18,
                                    "char": 27
                                },
                                "name": "get",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "endpoint",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                            "line": 20,
                                            "char": 9
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                        "line": 20,
                                        "char": 9
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                                "line": 20,
                                "char": 10
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                            "line": 21,
                            "char": 5
                        }
                    ],
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
                    "line": 14,
                    "last-line": 23,
                    "char": 19
                }
            ],
            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
            "line": 5,
            "char": 5
        },
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/endpoints\/host.zep",
        "line": 5,
        "char": 5
    }
]