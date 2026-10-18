004eb4a0  MOV ECX,dword ptr [ESP + 0x4]
004eb4a4  MOV EDX,dword ptr [ESP + 0x8]
004eb4a8  CMP ECX,EDX
004eb4aa  MOV EAX,dword ptr [ESP + 0xc]
004eb4ae  JZ 0x004eb4c4
004eb4b0  PUSH ESI
004eb4b1  TEST EAX,EAX
004eb4b3  JZ 0x004eb4b9
004eb4b5  MOV ESI,dword ptr [ECX]
004eb4b7  MOV dword ptr [EAX],ESI
004eb4b9  ADD ECX,0x4
004eb4bc  ADD EAX,0x4
004eb4bf  CMP ECX,EDX
004eb4c1  JNZ 0x004eb4b1
004eb4c3  POP ESI
004eb4c4  RET
