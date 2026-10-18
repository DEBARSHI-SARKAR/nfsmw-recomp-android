006a3bd0  PUSH ESI
006a3bd1  PUSH EDI
006a3bd2  MOV EDI,dword ptr [ESP + 0xc]
006a3bd6  MOV AL,byte ptr [EDI + 0x4]
006a3bd9  MOV ESI,ECX
006a3bdb  MOV byte ptr [ESI + 0xf8],AL
006a3be1  MOV EAX,dword ptr [ESI + 0x104]
006a3be7  TEST EAX,EAX
006a3be9  MOV ECX,dword ptr [EDI + 0x8]
006a3bec  MOV dword ptr [ESI + 0xfc],ECX
006a3bf2  JZ 0x006a3c23
006a3bf4  MOV ECX,dword ptr [EAX + 0x4]
006a3bf7  PUSH 0x404060
006a3bfc  CALL 0x005d59f0
006a3c01  TEST EAX,EAX
006a3c03  MOV dword ptr [ESI + 0x100],EAX
006a3c09  JZ 0x006a3c23
006a3c0b  MOV ECX,EAX
006a3c0d  MOV EDX,dword ptr [ECX]
006a3c0f  CALL dword ptr [EDX + 0x3c]
006a3c12  FSTP float ptr [EDI + 0xc]
006a3c15  MOV ECX,dword ptr [ESI + 0x100]
006a3c1b  MOV EAX,dword ptr [ECX]
006a3c1d  CALL dword ptr [EAX + 0x44]
006a3c20  FSTP float ptr [EDI + 0x10]
006a3c23  POP EDI
006a3c24  POP ESI
006a3c25  RET 0x4
