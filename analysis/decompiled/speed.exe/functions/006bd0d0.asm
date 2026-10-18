006bd0d0  PUSH ECX
006bd0d1  MOV EAX,[0x009017b8]
006bd0d6  MOV EDX,dword ptr [0x008f8ff4]
006bd0dc  PUSH EBX
006bd0dd  MOV EBX,dword ptr [0x00982a28]
006bd0e3  PUSH EBP
006bd0e4  MOV EBP,dword ptr [0x00982be4]
006bd0ea  PUSH ESI
006bd0eb  XOR ECX,ECX
006bd0ed  PUSH EDI
006bd0ee  MOV dword ptr [ESP + 0x10],ECX
006bd0f2  MOV EDI,0x1
006bd0f7  JMP 0x006bd100
006bd100  MOV ESI,ECX
006bd102  IMUL ESI,ESI,0x1c
006bd105  ADD ESI,0x93dab8
006bd10b  CMP ECX,0xa
006bd10e  MOV dword ptr [ESI],ECX
006bd110  JA 0x006bd352
006bd116  JMP dword ptr [ECX*0x4 + 0x6bd36c]
006bd11d  MOV ECX,dword ptr [0x00982a2c]
006bd123  MOV dword ptr [ESI + 0xc],ECX
006bd126  MOV ECX,dword ptr [0x00982be8]
006bd12c  MOV dword ptr [ESI + 0x8],EBX
006bd12f  MOV dword ptr [ESI + 0x4],EDI
006bd132  MOV dword ptr [ESI + 0x10],EDI
006bd135  MOV dword ptr [ESI + 0x14],EBP
006bd138  MOV dword ptr [ESI + 0x18],ECX
006bd13b  JMP 0x006bd352
006bd140  MOV ECX,dword ptr [0x00982be8]
006bd146  MOV dword ptr [ESI + 0x8],EBX
006bd149  MOV dword ptr [ESI + 0x4],0x0
006bd150  MOV dword ptr [ESI + 0x10],EDI
006bd153  MOV dword ptr [ESI + 0x14],EBP
006bd156  MOV dword ptr [ESI + 0x18],ECX
006bd159  JMP 0x006bd352
006bd15e  MOV ECX,dword ptr [0x00982a68]
006bd164  MOV dword ptr [ESI + 0x8],ECX
006bd167  MOV ECX,dword ptr [0x00982a78]
006bd16d  MOV dword ptr [ESI + 0xc],ECX
006bd170  MOV dword ptr [ESI + 0x4],0x4
006bd177  MOV dword ptr [ESI + 0x10],EDI
006bd17a  MOV dword ptr [ESI + 0x14],0x140
006bd181  MOV dword ptr [ESI + 0x18],0xf0
006bd188  JMP 0x006bd352
006bd18d  MOV ECX,dword ptr [0x00982a80]
006bd193  MOV dword ptr [ESI + 0x8],ECX
006bd196  MOV ECX,dword ptr [0x00982a84]
006bd19c  MOV dword ptr [ESI + 0xc],ECX
006bd19f  MOV ECX,dword ptr [0x008f9008]
006bd1a5  MOV dword ptr [ESI + 0x14],ECX
006bd1a8  MOV ECX,dword ptr [0x008f900c]
006bd1ae  MOV dword ptr [ESI + 0x4],0x3
006bd1b5  MOV dword ptr [ESI + 0x10],EDI
006bd1b8  MOV dword ptr [ESI + 0x18],ECX
006bd1bb  JMP 0x006bd352
006bd1c0  TEST EAX,EAX
006bd1c2  MOV ECX,dword ptr [0x00982a34]
006bd1c8  MOV dword ptr [ESI + 0x8],ECX
006bd1cb  MOV ECX,dword ptr [0x00982a4c]
006bd1d1  MOV dword ptr [ESI + 0xc],ECX
006bd1d4  MOV dword ptr [ESI + 0x4],0x13
006bd1db  MOV dword ptr [ESI + 0x10],EDI
006bd1de  MOV ECX,EDI
006bd1e0  JZ 0x006bd1e4
006bd1e2  MOV ECX,EDX
006bd1e4  TEST EAX,EAX
006bd1e6  MOV dword ptr [ESI + 0x14],ECX
006bd1e9  MOV ECX,EDI
006bd1eb  JZ 0x006bd30b
006bd1f1  MOV ECX,EDX
006bd1f3  MOV dword ptr [ESI + 0x18],ECX
006bd1f6  JMP 0x006bd352
006bd1fb  TEST EAX,EAX
006bd1fd  MOV ECX,dword ptr [0x00982a38]
006bd203  MOV dword ptr [ESI + 0x8],ECX
006bd206  MOV ECX,dword ptr [0x00982a50]
006bd20c  MOV dword ptr [ESI + 0xc],ECX
006bd20f  MOV dword ptr [ESI + 0x4],0x15
006bd216  MOV dword ptr [ESI + 0x10],EDI
006bd219  MOV ECX,EDI
006bd21b  JZ 0x006bd21f
006bd21d  MOV ECX,EDX
006bd21f  TEST EAX,EAX
006bd221  MOV dword ptr [ESI + 0x14],ECX
006bd224  MOV ECX,EDI
006bd226  JZ 0x006bd30b
006bd22c  MOV ECX,EDX
006bd22e  MOV dword ptr [ESI + 0x18],ECX
006bd231  JMP 0x006bd352
006bd236  TEST EAX,EAX
006bd238  MOV ECX,dword ptr [0x00982a3c]
006bd23e  MOV dword ptr [ESI + 0x8],ECX
006bd241  MOV ECX,dword ptr [0x00982a54]
006bd247  MOV dword ptr [ESI + 0xc],ECX
006bd24a  MOV dword ptr [ESI + 0x4],0x16
006bd251  MOV dword ptr [ESI + 0x10],EDI
006bd254  MOV ECX,EDI
006bd256  JZ 0x006bd25a
006bd258  MOV ECX,EDX
006bd25a  TEST EAX,EAX
006bd25c  MOV dword ptr [ESI + 0x14],ECX
006bd25f  MOV ECX,EDI
006bd261  JZ 0x006bd30b
006bd267  MOV ECX,EDX
006bd269  MOV dword ptr [ESI + 0x18],ECX
006bd26c  JMP 0x006bd352
006bd271  TEST EAX,EAX
006bd273  MOV ECX,dword ptr [0x00982a40]
006bd279  MOV dword ptr [ESI + 0x8],ECX
006bd27c  MOV ECX,dword ptr [0x00982a58]
006bd282  MOV dword ptr [ESI + 0xc],ECX
006bd285  MOV dword ptr [ESI + 0x4],0x17
006bd28c  MOV dword ptr [ESI + 0x10],EDI
006bd28f  MOV ECX,EDI
006bd291  JZ 0x006bd295
006bd293  MOV ECX,EDX
006bd295  TEST EAX,EAX
006bd297  MOV dword ptr [ESI + 0x14],ECX
006bd29a  MOV ECX,EDI
006bd29c  JZ 0x006bd30b
006bd29e  MOV ECX,EDX
006bd2a0  MOV dword ptr [ESI + 0x18],ECX
006bd2a3  JMP 0x006bd352
006bd2a8  TEST EAX,EAX
006bd2aa  MOV ECX,dword ptr [0x00982a44]
006bd2b0  MOV dword ptr [ESI + 0x8],ECX
006bd2b3  MOV ECX,dword ptr [0x00982a5c]
006bd2b9  MOV dword ptr [ESI + 0xc],ECX
006bd2bc  MOV dword ptr [ESI + 0x4],0x12
006bd2c3  MOV dword ptr [ESI + 0x10],EDI
006bd2c6  MOV ECX,EDI
006bd2c8  JZ 0x006bd2cc
006bd2ca  MOV ECX,EDX
006bd2cc  TEST EAX,EAX
006bd2ce  MOV dword ptr [ESI + 0x14],ECX
006bd2d1  MOV ECX,EDI
006bd2d3  JZ 0x006bd30b
006bd2d5  MOV ECX,EDX
006bd2d7  MOV dword ptr [ESI + 0x18],ECX
006bd2da  JMP 0x006bd352
006bd2dc  TEST EAX,EAX
006bd2de  MOV ECX,dword ptr [0x00982a48]
006bd2e4  MOV dword ptr [ESI + 0x8],ECX
006bd2e7  MOV ECX,dword ptr [0x00982a60]
006bd2ed  MOV dword ptr [ESI + 0xc],ECX
006bd2f0  MOV dword ptr [ESI + 0x4],0x14
006bd2f7  MOV dword ptr [ESI + 0x10],EDI
006bd2fa  MOV ECX,EDI
006bd2fc  JZ 0x006bd300
006bd2fe  MOV ECX,EDX
006bd300  TEST EAX,EAX
006bd302  MOV dword ptr [ESI + 0x14],ECX
006bd305  MOV ECX,EDI
006bd307  JZ 0x006bd30b
006bd309  MOV ECX,EDX
006bd30b  MOV dword ptr [ESI + 0x18],ECX
006bd30e  JMP 0x006bd352
006bd310  MOV EDX,dword ptr [0x00982cec]
006bd316  MOV EAX,[0x00982cf4]
006bd31b  MOV dword ptr [ESI + 0x8],EDX
006bd31e  MOV dword ptr [ESI + 0xc],EAX
006bd321  MOV dword ptr [ESI + 0x4],0xf
006bd328  MOV dword ptr [ESI + 0x10],EDI
006bd32b  CALL 0x006c86b0
006bd330  MOV dword ptr [ESI + 0x14],EAX
006bd333  CALL 0x006c86c0
006bd338  MOV EBX,dword ptr [0x00982a28]
006bd33e  MOV EBP,dword ptr [0x00982be4]
006bd344  MOV EDX,dword ptr [0x008f8ff4]
006bd34a  MOV dword ptr [ESI + 0x18],EAX
006bd34d  MOV EAX,[0x009017b8]
006bd352  MOV ECX,dword ptr [ESP + 0x10]
006bd356  INC ECX
006bd357  CMP ECX,0xb
006bd35a  MOV dword ptr [ESP + 0x10],ECX
006bd35e  JL 0x006bd100
006bd364  POP EDI
006bd365  POP ESI
006bd366  POP EBP
006bd367  POP EBX
006bd368  POP ECX
006bd369  RET
