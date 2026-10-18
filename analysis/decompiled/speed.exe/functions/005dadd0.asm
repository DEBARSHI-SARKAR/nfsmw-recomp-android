005dadd0  PUSH ESI
005dadd1  MOV ESI,ECX
005dadd3  MOV ECX,dword ptr [ESP + 0x8]
005dadd7  PUSH ESI
005dadd8  PUSH 0x5dadb0
005daddd  MOV dword ptr [ESI],0x890970
005dade3  MOV dword ptr [ESI + 0x4],ECX
005dade6  CALL 0x005d7930
005dadeb  MOV dword ptr [ESI],0x8a381c
005dadf1  MOV EAX,ESI
005dadf3  POP ESI
005dadf4  RET 0x4
