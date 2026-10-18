00463ca0  MOV EAX,dword ptr [ESP + 0x4]
00463ca4  MOV ECX,dword ptr [EAX + 0x18]
00463ca7  MOV EDX,dword ptr [ESP + 0x8]
00463cab  PUSH ESI
00463cac  MOV ESI,dword ptr [EAX + 0x10]
00463caf  MOV dword ptr [EDX],ESI
00463cb1  DEC ECX
00463cb2  MOV dword ptr [EAX + 0x18],ECX
00463cb5  MOV dword ptr [EAX + 0x10],EDX
00463cb8  POP ESI
00463cb9  RET
