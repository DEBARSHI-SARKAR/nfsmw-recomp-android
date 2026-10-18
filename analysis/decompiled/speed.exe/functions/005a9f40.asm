005a9f40  MOV EAX,FS:[0x0]
005a9f46  PUSH -0x1
005a9f48  PUSH 0x873ca8
005a9f4d  PUSH EAX
005a9f4e  MOV EAX,dword ptr [ESP + 0x14]
005a9f52  MOV dword ptr FS:[0x0],ESP
005a9f59  SUB ESP,0x48
005a9f5c  PUSH EBP
005a9f5d  MOV EBP,ECX
005a9f5f  MOV CL,byte ptr [EAX + 0x15]
005a9f62  TEST CL,CL
005a9f64  PUSH ESI
005a9f65  JZ 0x005a9fb3
005a9f67  PUSH 0x1b
005a9f69  XOR ESI,ESI
005a9f6b  PUSH 0x892920
005a9f70  LEA ECX,[ESP + 0x14]
005a9f74  MOV dword ptr [ESP + 0x2c],0xf
005a9f7c  MOV dword ptr [ESP + 0x28],ESI
005a9f80  MOV byte ptr [ESP + 0x18],0x0
005a9f85  CALL 0x004303b0
005a9f8a  LEA EAX,[ESP + 0xc]
005a9f8e  PUSH EAX
005a9f8f  LEA ECX,[ESP + 0x2c]
005a9f93  MOV dword ptr [ESP + 0x5c],ESI
005a9f97  CALL 0x00432d50
005a9f9c  PUSH 0x8c9f78
005a9fa1  LEA ECX,[ESP + 0x2c]
005a9fa5  PUSH ECX
005a9fa6  MOV dword ptr [ESP + 0x30],0x8bf2c0
005a9fae  CALL 0x007c56b0
005a9fb3  PUSH EBX
005a9fb4  MOV EBX,EAX
005a9fb6  PUSH EDI
005a9fb7  LEA ECX,[ESP + 0x6c]
005a9fbb  MOV dword ptr [ESP + 0x10],EBX
005a9fbf  CALL 0x00578bf0
005a9fc4  MOV EAX,dword ptr [EBX]
005a9fc6  MOV CL,byte ptr [EAX + 0x15]
005a9fc9  TEST CL,CL
005a9fcb  JZ 0x005a9fd2
005a9fcd  MOV EDI,dword ptr [EBX + 0x8]
005a9fd0  JMP 0x005a9feb
005a9fd2  MOV EDX,dword ptr [EBX + 0x8]
005a9fd5  MOV CL,byte ptr [EDX + 0x15]
005a9fd8  TEST CL,CL
005a9fda  JZ 0x005a9fe0
005a9fdc  MOV EDI,EAX
005a9fde  JMP 0x005a9feb
005a9fe0  MOV ECX,dword ptr [ESP + 0x6c]
005a9fe4  CMP ECX,EBX
005a9fe6  MOV EDI,dword ptr [ECX + 0x8]
005a9fe9  JNZ 0x005aa059
005a9feb  MOV AL,byte ptr [EDI + 0x15]
005a9fee  TEST AL,AL
005a9ff0  MOV ESI,dword ptr [EBX + 0x4]
005a9ff3  JNZ 0x005a9ff8
005a9ff5  MOV dword ptr [EDI + 0x4],ESI
005a9ff8  MOV EAX,dword ptr [EBP + 0x4]
005a9ffb  CMP dword ptr [EAX + 0x4],EBX
005a9ffe  JNZ 0x005aa005
005aa000  MOV dword ptr [EAX + 0x4],EDI
005aa003  JMP 0x005aa010
005aa005  CMP dword ptr [ESI],EBX
005aa007  JNZ 0x005aa00d
005aa009  MOV dword ptr [ESI],EDI
005aa00b  JMP 0x005aa010
005aa00d  MOV dword ptr [ESI + 0x8],EDI
005aa010  MOV EBX,dword ptr [EBP + 0x4]
005aa013  MOV EAX,dword ptr [EBX]
005aa015  CMP EAX,dword ptr [ESP + 0x10]
005aa019  JNZ 0x005aa031
005aa01b  MOV AL,byte ptr [EDI + 0x15]
005aa01e  TEST AL,AL
005aa020  JZ 0x005aa026
005aa022  MOV EAX,ESI
005aa024  JMP 0x005aa02f
005aa026  PUSH EDI
005aa027  CALL 0x00578460
005aa02c  ADD ESP,0x4
005aa02f  MOV dword ptr [EBX],EAX
005aa031  MOV EBX,dword ptr [EBP + 0x4]
005aa034  MOV ECX,dword ptr [ESP + 0x10]
005aa038  CMP dword ptr [EBX + 0x8],ECX
005aa03b  JNZ 0x005aa0b1
005aa03d  MOV AL,byte ptr [EDI + 0x15]
005aa040  TEST AL,AL
005aa042  JZ 0x005aa04b
005aa044  MOV EAX,ESI
005aa046  MOV dword ptr [EBX + 0x8],EAX
005aa049  JMP 0x005aa0b1
005aa04b  PUSH EDI
005aa04c  CALL 0x00578440
005aa051  ADD ESP,0x4
005aa054  MOV dword ptr [EBX + 0x8],EAX
005aa057  JMP 0x005aa0b1
005aa059  MOV dword ptr [EAX + 0x4],ECX
005aa05c  MOV EDX,dword ptr [EBX]
005aa05e  MOV dword ptr [ECX],EDX
005aa060  CMP ECX,dword ptr [EBX + 0x8]
005aa063  JNZ 0x005aa069
005aa065  MOV ESI,ECX
005aa067  JMP 0x005aa084
005aa069  MOV AL,byte ptr [EDI + 0x15]
005aa06c  TEST AL,AL
005aa06e  MOV ESI,dword ptr [ECX + 0x4]
005aa071  JNZ 0x005aa076
005aa073  MOV dword ptr [EDI + 0x4],ESI
005aa076  MOV dword ptr [ESI],EDI
005aa078  MOV EAX,dword ptr [EBX + 0x8]
005aa07b  MOV dword ptr [ECX + 0x8],EAX
005aa07e  MOV EDX,dword ptr [EBX + 0x8]
005aa081  MOV dword ptr [EDX + 0x4],ECX
005aa084  MOV EAX,dword ptr [EBP + 0x4]
005aa087  CMP dword ptr [EAX + 0x4],EBX
005aa08a  JNZ 0x005aa091
005aa08c  MOV dword ptr [EAX + 0x4],ECX
005aa08f  JMP 0x005aa09f
005aa091  MOV EAX,dword ptr [EBX + 0x4]
005aa094  CMP dword ptr [EAX],EBX
005aa096  JNZ 0x005aa09c
005aa098  MOV dword ptr [EAX],ECX
005aa09a  JMP 0x005aa09f
005aa09c  MOV dword ptr [EAX + 0x8],ECX
005aa09f  MOV EAX,dword ptr [EBX + 0x4]
005aa0a2  MOV dword ptr [ECX + 0x4],EAX
005aa0a5  MOV DL,byte ptr [EBX + 0x14]
005aa0a8  MOV AL,byte ptr [ECX + 0x14]
005aa0ab  MOV byte ptr [ECX + 0x14],DL
005aa0ae  MOV byte ptr [EBX + 0x14],AL
005aa0b1  MOV EAX,dword ptr [ESP + 0x10]
005aa0b5  MOV CL,byte ptr [EAX + 0x14]
005aa0b8  MOV BL,0x1
005aa0ba  CMP CL,BL
005aa0bc  JNZ 0x005aa1c1
005aa0c2  MOV ECX,dword ptr [EBP + 0x4]
005aa0c5  CMP EDI,dword ptr [ECX + 0x4]
005aa0c8  JZ 0x005aa1be
005aa0ce  MOV EDI,EDI
005aa0d0  CMP byte ptr [EDI + 0x14],BL
005aa0d3  JNZ 0x005aa1be
005aa0d9  MOV EAX,dword ptr [ESI]
005aa0db  CMP EDI,EAX
005aa0dd  JNZ 0x005aa146
005aa0df  MOV EAX,dword ptr [ESI + 0x8]
005aa0e2  MOV CL,byte ptr [EAX + 0x14]
005aa0e5  TEST CL,CL
005aa0e7  JNZ 0x005aa0fb
005aa0e9  MOV byte ptr [EAX + 0x14],BL
005aa0ec  PUSH ESI
005aa0ed  MOV ECX,EBP
005aa0ef  MOV byte ptr [ESI + 0x14],0x0
005aa0f3  CALL 0x0058b390
005aa0f8  MOV EAX,dword ptr [ESI + 0x8]
005aa0fb  MOV CL,byte ptr [EAX + 0x15]
005aa0fe  TEST CL,CL
005aa100  JNZ 0x005aa178
005aa102  MOV EDX,dword ptr [EAX]
005aa104  CMP byte ptr [EDX + 0x14],BL
005aa107  JNZ 0x005aa111
005aa109  MOV ECX,dword ptr [EAX + 0x8]
005aa10c  CMP byte ptr [ECX + 0x14],BL
005aa10f  JZ 0x005aa174
005aa111  MOV ECX,dword ptr [EAX + 0x8]
005aa114  CMP byte ptr [ECX + 0x14],BL
005aa117  JNZ 0x005aa12d
005aa119  MOV EDX,dword ptr [EAX]
005aa11b  MOV byte ptr [EDX + 0x14],BL
005aa11e  PUSH EAX
005aa11f  MOV ECX,EBP
005aa121  MOV byte ptr [EAX + 0x14],0x0
005aa125  CALL 0x0058b3f0
005aa12a  MOV EAX,dword ptr [ESI + 0x8]
005aa12d  MOV CL,byte ptr [ESI + 0x14]
005aa130  MOV byte ptr [EAX + 0x14],CL
005aa133  MOV byte ptr [ESI + 0x14],BL
005aa136  MOV EDX,dword ptr [EAX + 0x8]
005aa139  PUSH ESI
005aa13a  MOV ECX,EBP
005aa13c  MOV byte ptr [EDX + 0x14],BL
005aa13f  CALL 0x0058b390
005aa144  JMP 0x005aa1be
005aa146  MOV CL,byte ptr [EAX + 0x14]
005aa149  TEST CL,CL
005aa14b  JNZ 0x005aa15e
005aa14d  MOV byte ptr [EAX + 0x14],BL
005aa150  PUSH ESI
005aa151  MOV ECX,EBP
005aa153  MOV byte ptr [ESI + 0x14],0x0
005aa157  CALL 0x0058b3f0
005aa15c  MOV EAX,dword ptr [ESI]
005aa15e  MOV CL,byte ptr [EAX + 0x15]
005aa161  TEST CL,CL
005aa163  JNZ 0x005aa178
005aa165  MOV EDX,dword ptr [EAX + 0x8]
005aa168  CMP byte ptr [EDX + 0x14],BL
005aa16b  JNZ 0x005aa18d
005aa16d  MOV ECX,dword ptr [EAX]
005aa16f  CMP byte ptr [ECX + 0x14],BL
005aa172  JNZ 0x005aa18d
005aa174  MOV byte ptr [EAX + 0x14],0x0
005aa178  MOV EDX,dword ptr [EBP + 0x4]
005aa17b  MOV EAX,dword ptr [EDX + 0x4]
005aa17e  MOV EDI,ESI
005aa180  CMP EDI,EAX
005aa182  MOV ESI,dword ptr [ESI + 0x4]
005aa185  JNZ 0x005aa0d0
005aa18b  JMP 0x005aa1be
005aa18d  MOV ECX,dword ptr [EAX]
005aa18f  CMP byte ptr [ECX + 0x14],BL
005aa192  JNZ 0x005aa1a8
005aa194  MOV EDX,dword ptr [EAX + 0x8]
005aa197  MOV byte ptr [EDX + 0x14],BL
005aa19a  PUSH EAX
005aa19b  MOV ECX,EBP
005aa19d  MOV byte ptr [EAX + 0x14],0x0
005aa1a1  CALL 0x0058b390
005aa1a6  MOV EAX,dword ptr [ESI]
005aa1a8  MOV CL,byte ptr [ESI + 0x14]
005aa1ab  MOV byte ptr [EAX + 0x14],CL
005aa1ae  MOV byte ptr [ESI + 0x14],BL
005aa1b1  MOV EDX,dword ptr [EAX]
005aa1b3  PUSH ESI
005aa1b4  MOV ECX,EBP
005aa1b6  MOV byte ptr [EDX + 0x14],BL
005aa1b9  CALL 0x0058b3f0
005aa1be  MOV byte ptr [EDI + 0x14],BL
005aa1c1  MOV EAX,dword ptr [ESP + 0x10]
005aa1c5  PUSH 0x890f10
005aa1ca  PUSH 0x18
005aa1cc  PUSH EAX
005aa1cd  MOV ECX,0x925b30
005aa1d2  CALL 0x005d0370
005aa1d7  MOV EAX,dword ptr [EBP + 0x8]
005aa1da  TEST EAX,EAX
005aa1dc  POP EDI
005aa1dd  POP EBX
005aa1de  JBE 0x005aa1e4
005aa1e0  DEC EAX
005aa1e1  MOV dword ptr [EBP + 0x8],EAX
005aa1e4  MOV ECX,dword ptr [ESP + 0x64]
005aa1e8  MOV EAX,dword ptr [ESP + 0x60]
005aa1ec  MOV dword ptr [EAX],ECX
005aa1ee  MOV ECX,dword ptr [ESP + 0x50]
005aa1f2  POP ESI
005aa1f3  POP EBP
005aa1f4  MOV dword ptr FS:[0x0],ECX
005aa1fb  ADD ESP,0x54
005aa1fe  RET 0x8
