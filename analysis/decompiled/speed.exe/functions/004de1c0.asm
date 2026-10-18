004de1c0  PUSH ESI
004de1c1  MOV ESI,ECX
004de1c3  MOV ECX,dword ptr [ESI + 0x28]
004de1c6  TEST ECX,ECX
004de1c8  JZ 0x004de1d0
004de1ca  MOV EAX,dword ptr [ECX]
004de1cc  PUSH 0x1
004de1ce  CALL dword ptr [EAX]
004de1d0  MOV dword ptr [ESI + 0x28],0x0
004de1d7  POP ESI
004de1d8  RET
