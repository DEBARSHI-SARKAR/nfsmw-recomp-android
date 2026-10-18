005d4eb0  MOV EDX,dword ptr [ESP + 0x4]
005d4eb4  MOV EAX,dword ptr [ESP + 0xc]
005d4eb8  PUSH ESI
005d4eb9  MOV ESI,dword ptr [ESP + 0xc]
005d4ebd  CMP EDX,ESI
005d4ebf  JZ 0x005d4ed5
005d4ec1  TEST EAX,EAX
005d4ec3  JZ 0x005d4ecb
005d4ec5  MOV ECX,dword ptr [EDX]
005d4ec7  INC dword ptr [ECX]
005d4ec9  MOV dword ptr [EAX],ECX
005d4ecb  ADD EDX,0x4
005d4ece  ADD EAX,0x4
005d4ed1  CMP EDX,ESI
005d4ed3  JNZ 0x005d4ec1
005d4ed5  POP ESI
005d4ed6  RET
