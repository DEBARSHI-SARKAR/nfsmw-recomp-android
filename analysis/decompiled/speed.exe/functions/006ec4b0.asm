006ec4b0  MOV ECX,dword ptr [ESP + 0x4]
006ec4b4  MOV EDX,dword ptr [ESP + 0x8]
006ec4b8  CMP ECX,EDX
006ec4ba  MOV EAX,dword ptr [ESP + 0xc]
006ec4be  JZ 0x006ec4d4
006ec4c0  PUSH ESI
006ec4c1  TEST EAX,EAX
006ec4c3  JZ 0x006ec4c9
006ec4c5  MOV ESI,dword ptr [ECX]
006ec4c7  MOV dword ptr [EAX],ESI
006ec4c9  ADD ECX,0x4
006ec4cc  ADD EAX,0x4
006ec4cf  CMP ECX,EDX
006ec4d1  JNZ 0x006ec4c1
006ec4d3  POP ESI
006ec4d4  RET
