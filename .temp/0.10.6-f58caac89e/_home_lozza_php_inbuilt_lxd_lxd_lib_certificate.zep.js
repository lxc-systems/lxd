[
    {
        "type": "namespace",
        "name": "Lxd\\Lib",
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
        "line": 3,
        "char": 5
    },
    {
        "type": "class",
        "name": "Certificate",
        "abstract": 0,
        "final": 0,
        "definition": {
            "properties": [
                {
                    "visibility": [
                        "private"
                    ],
                    "type": "property",
                    "name": "cert_path",
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
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
                            "name": "cert_path",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "default": {
                                "type": "string",
                                "value": "tmp\/certificates",
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 7,
                                "char": 68
                            },
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 7,
                            "char": 68
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
                                    "property": "cert_path",
                                    "expr": {
                                        "type": "variable",
                                        "value": "cert_path",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 9,
                                        "char": 40
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 9,
                                    "char": 40
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 10,
                            "char": 5
                        }
                    ],
                    "return-type": {
                        "type": "return-type",
                        "void": 1,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                        "line": 8,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                    "line": 7,
                    "last-line": 14,
                    "char": 19
                },
                {
                    "visibility": [
                        "public"
                    ],
                    "type": "method",
                    "name": "generate",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "ip",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 15,
                            "char": 39
                        }
                    ],
                    "statements": [
                        {
                            "type": "if",
                            "expr": {
                                "type": "empty",
                                "left": {
                                    "type": "list",
                                    "left": {
                                        "type": "variable",
                                        "value": "ip",
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 17,
                                        "char": 20
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 17,
                                    "char": 22
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 17,
                                "char": 22
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
                                                    "value": "Server IP",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 18,
                                                    "char": 43
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 18,
                                                "char": 43
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 18,
                                        "char": 44
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 19,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 22,
                            "char": 11
                        },
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "privkey",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 22,
                                    "char": 20
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 22,
                            "char": 24
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "privkey",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "openssl_pkey_new",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "digest_alg",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 23,
                                                                "char": 30
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "rsa",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 23,
                                                                "char": 35
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 23,
                                                            "char": 35
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "private_key_bits",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 24,
                                                                "char": 30
                                                            },
                                                            "value": {
                                                                "type": "int",
                                                                "value": "2048",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 24,
                                                                "char": 36
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 24,
                                                            "char": 36
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "private_key_type",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 25,
                                                                "char": 30
                                                            },
                                                            "value": {
                                                                "type": "constant",
                                                                "value": "OPENSSL_KEYTYPE_RSA",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 26,
                                                                "char": 9
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 26,
                                                            "char": 9
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 26,
                                                    "char": 10
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 26,
                                                "char": 10
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 26,
                                        "char": 11
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 26,
                                    "char": 11
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 29,
                            "char": 11
                        },
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "cert",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 29,
                                    "char": 17
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 29,
                            "char": 21
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "cert",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "openssl_csr_new",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "countryName",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 30,
                                                                "char": 36
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "NA",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 30,
                                                                "char": 40
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 30,
                                                            "char": 40
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "stateOrProvinceName",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 31,
                                                                "char": 36
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "NA",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 31,
                                                                "char": 40
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 31,
                                                            "char": 40
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "localityName",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 32,
                                                                "char": 36
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "NA",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 32,
                                                                "char": 40
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 32,
                                                            "char": 40
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "organizationName",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 33,
                                                                "char": 36
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "NA",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 33,
                                                                "char": 40
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 33,
                                                            "char": 40
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "organizationalUnitName",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 34,
                                                                "char": 36
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "NA",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 34,
                                                                "char": 40
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 34,
                                                            "char": 40
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "commonName",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 35,
                                                                "char": 36
                                                            },
                                                            "value": {
                                                                "type": "variable",
                                                                "value": "ip",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 35,
                                                                "char": 40
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 35,
                                                            "char": 40
                                                        },
                                                        {
                                                            "key": {
                                                                "type": "string",
                                                                "value": "emailAddress",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 36,
                                                                "char": 36
                                                            },
                                                            "value": {
                                                                "type": "string",
                                                                "value": "NA",
                                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                                "line": 37,
                                                                "char": 9
                                                            },
                                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                            "line": 37,
                                                            "char": 9
                                                        }
                                                    ],
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 37,
                                                    "char": 10
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 37,
                                                "char": 10
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "privkey",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 37,
                                                    "char": 19
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 37,
                                                "char": 19
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 37,
                                        "char": 20
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 37,
                                    "char": 20
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 40,
                            "char": 11
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "cert",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "openssl_csr_sign",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "cert",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 40,
                                                    "char": 41
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 40,
                                                "char": 41
                                            },
                                            {
                                                "parameter": {
                                                    "type": "null",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 40,
                                                    "char": 47
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 40,
                                                "char": 47
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "privkey",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 40,
                                                    "char": 56
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 40,
                                                "char": 56
                                            },
                                            {
                                                "parameter": {
                                                    "type": "mul",
                                                    "left": {
                                                        "type": "int",
                                                        "value": "365",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                        "line": 40,
                                                        "char": 61
                                                    },
                                                    "right": {
                                                        "type": "int",
                                                        "value": "5",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                        "line": 40,
                                                        "char": 63
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 40,
                                                    "char": 63
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 40,
                                                "char": 63
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 40,
                                        "char": 64
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 40,
                                    "char": 64
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 43,
                            "char": 14
                        },
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "certString",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 43,
                                    "char": 26
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 43,
                            "char": 49
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "openssl_x509_export",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "cert",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 43,
                                            "char": 55
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 43,
                                        "char": 55
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "certString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 43,
                                            "char": 67
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 43,
                                        "char": 67
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 43,
                                "char": 68
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 44,
                            "char": 14
                        },
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "privkeyString",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 44,
                                    "char": 29
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 44,
                            "char": 49
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "openssl_pkey_export",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "privkey",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 44,
                                            "char": 58
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 44,
                                        "char": 58
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "privkeyString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 44,
                                            "char": 73
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 44,
                                        "char": 73
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 44,
                                "char": 74
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 45,
                            "char": 14
                        },
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "p12String",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 45,
                                    "char": 25
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 45,
                            "char": 51
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "openssl_pkcs12_export",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "certString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 45,
                                            "char": 63
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 45,
                                        "char": 63
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "p12String",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 45,
                                            "char": 74
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 45,
                                        "char": 74
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "privkeyString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 45,
                                            "char": 89
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 45,
                                        "char": 89
                                    },
                                    {
                                        "parameter": {
                                            "type": "string",
                                            "value": "",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 45,
                                            "char": 91
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 45,
                                        "char": 91
                                    },
                                    {
                                        "parameter": {
                                            "type": "empty-array",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 45,
                                            "char": 95
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 45,
                                        "char": 95
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 45,
                                "char": 96
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 48,
                            "char": 14
                        },
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "pemString",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 48,
                                    "char": 25
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 48,
                            "char": 29
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "pemString",
                                    "expr": {
                                        "type": "concat",
                                        "left": {
                                            "type": "variable",
                                            "value": "certString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 48,
                                            "char": 53
                                        },
                                        "right": {
                                            "type": "variable",
                                            "value": "privkeyString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 48,
                                            "char": 67
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 48,
                                        "char": 67
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 48,
                                    "char": 67
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 51,
                            "char": 14
                        },
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "pemHash",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 51,
                                    "char": 23
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 51,
                            "char": 27
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "pemHash",
                                    "expr": {
                                        "type": "cast",
                                        "left": "string",
                                        "right": {
                                            "type": "fcall",
                                            "name": "hash",
                                            "call-type": 1,
                                            "parameters": [
                                                {
                                                    "parameter": {
                                                        "type": "string",
                                                        "value": "sha1",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                        "line": 51,
                                                        "char": 57
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 51,
                                                    "char": 57
                                                },
                                                {
                                                    "parameter": {
                                                        "type": "variable",
                                                        "value": "pemString",
                                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                        "line": 51,
                                                        "char": 68
                                                    },
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 51,
                                                    "char": 68
                                                }
                                            ],
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 51,
                                            "char": 69
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 51,
                                        "char": 69
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 51,
                                    "char": 69
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 54,
                            "char": 14
                        },
                        {
                            "type": "declare",
                            "data-type": "string",
                            "variables": [
                                {
                                    "variable": "cert_path",
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 54,
                                    "char": 25
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 54,
                            "char": 29
                        },
                        {
                            "type": "let",
                            "assignments": [
                                {
                                    "assign-type": "variable",
                                    "operator": "assign",
                                    "variable": "cert_path",
                                    "expr": {
                                        "type": "concat",
                                        "left": {
                                            "type": "concat",
                                            "left": {
                                                "type": "property-access",
                                                "left": {
                                                    "type": "variable",
                                                    "value": "this",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 54,
                                                    "char": 48
                                                },
                                                "right": {
                                                    "type": "variable",
                                                    "value": "cert_path",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 54,
                                                    "char": 58
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 54,
                                                "char": 58
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\/",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 54,
                                                "char": 60
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 54,
                                            "char": 60
                                        },
                                        "right": {
                                            "type": "variable",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 54,
                                            "char": 63
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 54,
                                        "char": 63
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 54,
                                    "char": 63
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 55,
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
                                                "type": "variable",
                                                "value": "cert_path",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 55,
                                                "char": 34
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 55,
                                            "char": 34
                                        }
                                    ],
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 55,
                                    "char": 36
                                },
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 55,
                                "char": 36
                            },
                            "statements": [
                                {
                                    "type": "fcall",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "mkdir",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "cert_path",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 56,
                                                    "char": 28
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 56,
                                                "char": 28
                                            },
                                            {
                                                "parameter": {
                                                    "type": "int",
                                                    "value": "0755",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 56,
                                                    "char": 34
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 56,
                                                "char": 34
                                            },
                                            {
                                                "parameter": {
                                                    "type": "bool",
                                                    "value": "true",
                                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                    "line": 56,
                                                    "char": 40
                                                },
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 56,
                                                "char": 40
                                            }
                                        ],
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 56,
                                        "char": 41
                                    },
                                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                    "line": 57,
                                    "char": 9
                                }
                            ],
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 60,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "file_put_contents",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "concat",
                                            "left": {
                                                "type": "variable",
                                                "value": "cert_path",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 60,
                                                "char": 36
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\/cert.crt",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 60,
                                                "char": 46
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 60,
                                            "char": 46
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 60,
                                        "char": 46
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "certString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 60,
                                            "char": 58
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 60,
                                        "char": 58
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 60,
                                "char": 59
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 61,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "file_put_contents",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "concat",
                                            "left": {
                                                "type": "variable",
                                                "value": "cert_path",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 61,
                                                "char": 36
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\/private.key",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 61,
                                                "char": 49
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 61,
                                            "char": 49
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 61,
                                        "char": 49
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "privkeyString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 61,
                                            "char": 64
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 61,
                                        "char": 64
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 61,
                                "char": 65
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 62,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "file_put_contents",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "concat",
                                            "left": {
                                                "type": "variable",
                                                "value": "cert_path",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 62,
                                                "char": 36
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\/client.pem",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 62,
                                                "char": 48
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 62,
                                            "char": 48
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 62,
                                        "char": 48
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "pemString",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 62,
                                            "char": 59
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 62,
                                        "char": 59
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 62,
                                "char": 60
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 63,
                            "char": 25
                        },
                        {
                            "type": "fcall",
                            "expr": {
                                "type": "fcall",
                                "name": "file_put_contents",
                                "call-type": 1,
                                "parameters": [
                                    {
                                        "parameter": {
                                            "type": "concat",
                                            "left": {
                                                "type": "variable",
                                                "value": "cert_path",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 63,
                                                "char": 36
                                            },
                                            "right": {
                                                "type": "string",
                                                "value": "\/cert.p12",
                                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                                "line": 63,
                                                "char": 46
                                            },
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 63,
                                            "char": 46
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 63,
                                        "char": 46
                                    },
                                    {
                                        "parameter": {
                                            "type": "variable",
                                            "value": "p12String",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 63,
                                            "char": 57
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 63,
                                        "char": 57
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 63,
                                "char": 58
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 66,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "array",
                                "left": [
                                    {
                                        "key": {
                                            "type": "string",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 67,
                                            "char": 23
                                        },
                                        "value": {
                                            "type": "variable",
                                            "value": "ip",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 67,
                                            "char": 27
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 67,
                                        "char": 27
                                    },
                                    {
                                        "key": {
                                            "type": "string",
                                            "value": "pem_hash",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 68,
                                            "char": 23
                                        },
                                        "value": {
                                            "type": "variable",
                                            "value": "pemHash",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 68,
                                            "char": 32
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 68,
                                        "char": 32
                                    },
                                    {
                                        "key": {
                                            "type": "string",
                                            "value": "cert_path",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 69,
                                            "char": 23
                                        },
                                        "value": {
                                            "type": "variable",
                                            "value": "cert_path",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 69,
                                            "char": 34
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 69,
                                        "char": 34
                                    },
                                    {
                                        "key": {
                                            "type": "string",
                                            "value": "created",
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 70,
                                            "char": 23
                                        },
                                        "value": {
                                            "type": "fcall",
                                            "name": "date_create",
                                            "call-type": 1,
                                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                            "line": 71,
                                            "char": 9
                                        },
                                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                        "line": 71,
                                        "char": 9
                                    }
                                ],
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 71,
                                "char": 10
                            },
                            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                            "line": 72,
                            "char": 5
                        }
                    ],
                    "docblock": "**\n     * Generate certificate\n     *",
                    "return-type": {
                        "type": "return-type",
                        "list": [
                            {
                                "type": "return-type-parameter",
                                "data-type": "array",
                                "mandatory": 0,
                                "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                                "line": 16,
                                "char": 5
                            }
                        ],
                        "void": 0,
                        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                        "line": 16,
                        "char": 5
                    },
                    "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
                    "line": 15,
                    "last-line": 73,
                    "char": 19
                }
            ],
            "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
            "line": 3,
            "char": 5
        },
        "file": "\/home\/lozza\/php_inbuilt\/lxd\/lxd\/lib\/certificate.zep",
        "line": 3,
        "char": 5
    }
]