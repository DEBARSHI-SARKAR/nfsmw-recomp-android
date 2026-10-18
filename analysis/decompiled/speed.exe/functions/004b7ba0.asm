004b7ba0  MOV EAX,dword ptr [ESP + 0x4]
004b7ba4  MOV EDX,dword ptr [ESP + 0x8]
004b7ba8  CMP EAX,EDX
004b7baa  JZ 0x004b7bc3
004b7bac  MOV ECX,dword ptr [ESP + 0xc]
004b7bb0  PUSH ESI
004b7bb1  MOV ESI,dword ptr [ECX]
004b7bb3  MOV dword ptr [EAX],ESI
004b7bb5  MOV ESI,dword ptr [ECX + 0x4]
004b7bb8  MOV dword ptr [EAX + 0x4],ESI
004b7bbb  ADD EAX,0x8
004b7bbe  CMP EAX,EDX
004b7bc0  JNZ 0x004b7bb1
004b7bc2  POP ESI
004b7bc3  RET
