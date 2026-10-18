004b7bd0  MOV EAX,dword ptr [ESP + 0x4]
004b7bd4  MOV ECX,dword ptr [ESP + 0x8]
004b7bd8  CMP EAX,ECX
004b7bda  JZ 0x004b7bed
004b7bdc  MOV EDX,dword ptr [ESP + 0xc]
004b7be0  PUSH ESI
004b7be1  MOV ESI,dword ptr [EDX]
004b7be3  MOV dword ptr [EAX],ESI
004b7be5  ADD EAX,0x4
004b7be8  CMP EAX,ECX
004b7bea  JNZ 0x004b7be1
004b7bec  POP ESI
004b7bed  RET
