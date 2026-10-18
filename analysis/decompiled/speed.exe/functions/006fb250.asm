006fb250  MOV EAX,FS:[0x0]
006fb256  PUSH -0x1
006fb258  PUSH 0x87f528
006fb25d  PUSH EAX
006fb25e  MOV EAX,dword ptr [ESP + 0x14]
006fb262  MOV dword ptr FS:[0x0],ESP
006fb269  SUB ESP,0x48
006fb26c  PUSH EBP
006fb26d  MOV EBP,ECX
006fb26f  MOV CL,byte ptr [EAX + 0x15]
006fb272  TEST CL,CL
006fb274  PUSH ESI
006fb275  JZ 0x006fb2c3
006fb277  PUSH 0x1b
006fb279  XOR ESI,ESI
006fb27b  PUSH 0x892920
006fb280  LEA ECX,[ESP + 0x14]
006fb284  MOV dword ptr [ESP + 0x2c],0xf
006fb28c  MOV dword ptr [ESP + 0x28],ESI
006fb290  MOV byte ptr [ESP + 0x18],0x0
006fb295  CALL 0x004303b0
006fb29a  LEA EAX,[ESP + 0xc]
006fb29e  PUSH EAX
006fb29f  LEA ECX,[ESP + 0x2c]
006fb2a3  MOV dword ptr [ESP + 0x5c],ESI
006fb2a7  CALL 0x00432d50
006fb2ac  PUSH 0x8c9f78
006fb2b1  LEA ECX,[ESP + 0x2c]
006fb2b5  PUSH ECX
006fb2b6  MOV dword ptr [ESP + 0x30],0x8bf2c0
006fb2be  CALL 0x007c56b0
006fb2c3  PUSH EBX
006fb2c4  MOV EBX,EAX
006fb2c6  PUSH EDI
006fb2c7  LEA ECX,[ESP + 0x6c]
006fb2cb  MOV dword ptr [ESP + 0x10],EBX
006fb2cf  CALL 0x006eb5f0
006fb2d4  MOV EAX,dword ptr [EBX]
006fb2d6  MOV CL,byte ptr [EAX + 0x15]
006fb2d9  TEST CL,CL
006fb2db  JZ 0x006fb2e2
006fb2dd  MOV EDI,dword ptr [EBX + 0x8]
006fb2e0  JMP 0x006fb2fb
006fb2e2  MOV EDX,dword ptr [EBX + 0x8]
006fb2e5  MOV CL,byte ptr [EDX + 0x15]
006fb2e8  TEST CL,CL
006fb2ea  JZ 0x006fb2f0
006fb2ec  MOV EDI,EAX
006fb2ee  JMP 0x006fb2fb
006fb2f0  MOV ECX,dword ptr [ESP + 0x6c]
006fb2f4  CMP ECX,EBX
006fb2f6  MOV EDI,dword ptr [ECX + 0x8]
006fb2f9  JNZ 0x006fb369
006fb2fb  MOV AL,byte ptr [EDI + 0x15]
006fb2fe  TEST AL,AL
006fb300  MOV ESI,dword ptr [EBX + 0x4]
006fb303  JNZ 0x006fb308
006fb305  MOV dword ptr [EDI + 0x4],ESI
006fb308  MOV EAX,dword ptr [EBP + 0x4]
006fb30b  CMP dword ptr [EAX + 0x4],EBX
006fb30e  JNZ 0x006fb315
006fb310  MOV dword ptr [EAX + 0x4],EDI
006fb313  JMP 0x006fb320
006fb315  CMP dword ptr [ESI],EBX
006fb317  JNZ 0x006fb31d
006fb319  MOV dword ptr [ESI],EDI
006fb31b  JMP 0x006fb320
006fb31d  MOV dword ptr [ESI + 0x8],EDI
006fb320  MOV EBX,dword ptr [EBP + 0x4]
006fb323  MOV EAX,dword ptr [EBX]
006fb325  CMP EAX,dword ptr [ESP + 0x10]
006fb329  JNZ 0x006fb341
006fb32b  MOV AL,byte ptr [EDI + 0x15]
006fb32e  TEST AL,AL
006fb330  JZ 0x006fb336
006fb332  MOV EAX,ESI
006fb334  JMP 0x006fb33f
006fb336  PUSH EDI
006fb337  CALL 0x006eb2e0
006fb33c  ADD ESP,0x4
006fb33f  MOV dword ptr [EBX],EAX
006fb341  MOV EBX,dword ptr [EBP + 0x4]
006fb344  MOV ECX,dword ptr [ESP + 0x10]
006fb348  CMP dword ptr [EBX + 0x8],ECX
006fb34b  JNZ 0x006fb3c1
006fb34d  MOV AL,byte ptr [EDI + 0x15]
006fb350  TEST AL,AL
006fb352  JZ 0x006fb35b
006fb354  MOV EAX,ESI
006fb356  MOV dword ptr [EBX + 0x8],EAX
006fb359  JMP 0x006fb3c1
006fb35b  PUSH EDI
006fb35c  CALL 0x006eb2c0
006fb361  ADD ESP,0x4
006fb364  MOV dword ptr [EBX + 0x8],EAX
006fb367  JMP 0x006fb3c1
006fb369  MOV dword ptr [EAX + 0x4],ECX
006fb36c  MOV EDX,dword ptr [EBX]
006fb36e  MOV dword ptr [ECX],EDX
006fb370  CMP ECX,dword ptr [EBX + 0x8]
006fb373  JNZ 0x006fb379
006fb375  MOV ESI,ECX
006fb377  JMP 0x006fb394
006fb379  MOV AL,byte ptr [EDI + 0x15]
006fb37c  TEST AL,AL
006fb37e  MOV ESI,dword ptr [ECX + 0x4]
006fb381  JNZ 0x006fb386
006fb383  MOV dword ptr [EDI + 0x4],ESI
006fb386  MOV dword ptr [ESI],EDI
006fb388  MOV EAX,dword ptr [EBX + 0x8]
006fb38b  MOV dword ptr [ECX + 0x8],EAX
006fb38e  MOV EDX,dword ptr [EBX + 0x8]
006fb391  MOV dword ptr [EDX + 0x4],ECX
006fb394  MOV EAX,dword ptr [EBP + 0x4]
006fb397  CMP dword ptr [EAX + 0x4],EBX
006fb39a  JNZ 0x006fb3a1
006fb39c  MOV dword ptr [EAX + 0x4],ECX
006fb39f  JMP 0x006fb3af
006fb3a1  MOV EAX,dword ptr [EBX + 0x4]
006fb3a4  CMP dword ptr [EAX],EBX
006fb3a6  JNZ 0x006fb3ac
006fb3a8  MOV dword ptr [EAX],ECX
006fb3aa  JMP 0x006fb3af
006fb3ac  MOV dword ptr [EAX + 0x8],ECX
006fb3af  MOV EAX,dword ptr [EBX + 0x4]
006fb3b2  MOV dword ptr [ECX + 0x4],EAX
006fb3b5  MOV DL,byte ptr [EBX + 0x14]
006fb3b8  MOV AL,byte ptr [ECX + 0x14]
006fb3bb  MOV byte ptr [ECX + 0x14],DL
006fb3be  MOV byte ptr [EBX + 0x14],AL
006fb3c1  MOV EAX,dword ptr [ESP + 0x10]
006fb3c5  MOV CL,byte ptr [EAX + 0x14]
006fb3c8  MOV BL,0x1
006fb3ca  CMP CL,BL
006fb3cc  JNZ 0x006fb4d1
006fb3d2  MOV ECX,dword ptr [EBP + 0x4]
006fb3d5  CMP EDI,dword ptr [ECX + 0x4]
006fb3d8  JZ 0x006fb4ce
006fb3de  MOV EDI,EDI
006fb3e0  CMP byte ptr [EDI + 0x14],BL
006fb3e3  JNZ 0x006fb4ce
006fb3e9  MOV EAX,dword ptr [ESI]
006fb3eb  CMP EDI,EAX
006fb3ed  JNZ 0x006fb456
006fb3ef  MOV EAX,dword ptr [ESI + 0x8]
006fb3f2  MOV CL,byte ptr [EAX + 0x14]
006fb3f5  TEST CL,CL
006fb3f7  JNZ 0x006fb40b
006fb3f9  MOV byte ptr [EAX + 0x14],BL
006fb3fc  PUSH ESI
006fb3fd  MOV ECX,EBP
006fb3ff  MOV byte ptr [ESI + 0x14],0x0
006fb403  CALL 0x006efc90
006fb408  MOV EAX,dword ptr [ESI + 0x8]
006fb40b  MOV CL,byte ptr [EAX + 0x15]
006fb40e  TEST CL,CL
006fb410  JNZ 0x006fb488
006fb412  MOV EDX,dword ptr [EAX]
006fb414  CMP byte ptr [EDX + 0x14],BL
006fb417  JNZ 0x006fb421
006fb419  MOV ECX,dword ptr [EAX + 0x8]
006fb41c  CMP byte ptr [ECX + 0x14],BL
006fb41f  JZ 0x006fb484
006fb421  MOV ECX,dword ptr [EAX + 0x8]
006fb424  CMP byte ptr [ECX + 0x14],BL
006fb427  JNZ 0x006fb43d
006fb429  MOV EDX,dword ptr [EAX]
006fb42b  MOV byte ptr [EDX + 0x14],BL
006fb42e  PUSH EAX
006fb42f  MOV ECX,EBP
006fb431  MOV byte ptr [EAX + 0x14],0x0
006fb435  CALL 0x006eb320
006fb43a  MOV EAX,dword ptr [ESI + 0x8]
006fb43d  MOV CL,byte ptr [ESI + 0x14]
006fb440  MOV byte ptr [EAX + 0x14],CL
006fb443  MOV byte ptr [ESI + 0x14],BL
006fb446  MOV EDX,dword ptr [EAX + 0x8]
006fb449  PUSH ESI
006fb44a  MOV ECX,EBP
006fb44c  MOV byte ptr [EDX + 0x14],BL
006fb44f  CALL 0x006efc90
006fb454  JMP 0x006fb4ce
006fb456  MOV CL,byte ptr [EAX + 0x14]
006fb459  TEST CL,CL
006fb45b  JNZ 0x006fb46e
006fb45d  MOV byte ptr [EAX + 0x14],BL
006fb460  PUSH ESI
006fb461  MOV ECX,EBP
006fb463  MOV byte ptr [ESI + 0x14],0x0
006fb467  CALL 0x006eb320
006fb46c  MOV EAX,dword ptr [ESI]
006fb46e  MOV CL,byte ptr [EAX + 0x15]
006fb471  TEST CL,CL
006fb473  JNZ 0x006fb488
006fb475  MOV EDX,dword ptr [EAX + 0x8]
006fb478  CMP byte ptr [EDX + 0x14],BL
006fb47b  JNZ 0x006fb49d
006fb47d  MOV ECX,dword ptr [EAX]
006fb47f  CMP byte ptr [ECX + 0x14],BL
006fb482  JNZ 0x006fb49d
006fb484  MOV byte ptr [EAX + 0x14],0x0
006fb488  MOV EDX,dword ptr [EBP + 0x4]
006fb48b  MOV EAX,dword ptr [EDX + 0x4]
006fb48e  MOV EDI,ESI
006fb490  CMP EDI,EAX
006fb492  MOV ESI,dword ptr [ESI + 0x4]
006fb495  JNZ 0x006fb3e0
006fb49b  JMP 0x006fb4ce
006fb49d  MOV ECX,dword ptr [EAX]
006fb49f  CMP byte ptr [ECX + 0x14],BL
006fb4a2  JNZ 0x006fb4b8
006fb4a4  MOV EDX,dword ptr [EAX + 0x8]
006fb4a7  MOV byte ptr [EDX + 0x14],BL
006fb4aa  PUSH EAX
006fb4ab  MOV ECX,EBP
006fb4ad  MOV byte ptr [EAX + 0x14],0x0
006fb4b1  CALL 0x006efc90
006fb4b6  MOV EAX,dword ptr [ESI]
006fb4b8  MOV CL,byte ptr [ESI + 0x14]
006fb4bb  MOV byte ptr [EAX + 0x14],CL
006fb4be  MOV byte ptr [ESI + 0x14],BL
006fb4c1  MOV EDX,dword ptr [EAX]
006fb4c3  PUSH ESI
006fb4c4  MOV ECX,EBP
006fb4c6  MOV byte ptr [EDX + 0x14],BL
006fb4c9  CALL 0x006eb320
006fb4ce  MOV byte ptr [EDI + 0x14],BL
006fb4d1  MOV EAX,dword ptr [ESP + 0x10]
006fb4d5  PUSH 0x0
006fb4d7  PUSH 0x18
006fb4d9  PUSH EAX
006fb4da  MOV ECX,0x925b30
006fb4df  CALL 0x005d0370
006fb4e4  MOV EAX,dword ptr [EBP + 0x8]
006fb4e7  TEST EAX,EAX
006fb4e9  POP EDI
006fb4ea  POP EBX
006fb4eb  JBE 0x006fb4f1
006fb4ed  DEC EAX
006fb4ee  MOV dword ptr [EBP + 0x8],EAX
006fb4f1  MOV ECX,dword ptr [ESP + 0x64]
006fb4f5  MOV EAX,dword ptr [ESP + 0x60]
006fb4f9  MOV dword ptr [EAX],ECX
006fb4fb  MOV ECX,dword ptr [ESP + 0x50]
006fb4ff  POP ESI
006fb500  POP EBP
006fb501  MOV dword ptr FS:[0x0],ECX
006fb508  ADD ESP,0x54
006fb50b  RET 0x8
