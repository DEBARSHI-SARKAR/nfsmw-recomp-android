006cc7f0  MOV EAX,dword ptr [ESP + 0x4]
006cc7f4  MOV ECX,dword ptr [EAX + 0x8]
006cc7f7  MOV DL,byte ptr [ECX + 0x25]
006cc7fa  TEST DL,DL
006cc7fc  JNZ 0x006cc80c
006cc7fe  MOV EDI,EDI
006cc800  MOV EAX,ECX
006cc802  MOV ECX,dword ptr [EAX + 0x8]
006cc805  MOV DL,byte ptr [ECX + 0x25]
006cc808  TEST DL,DL
006cc80a  JZ 0x006cc800
006cc80c  RET
