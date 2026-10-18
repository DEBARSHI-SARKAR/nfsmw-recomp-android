005fa8b0  PUSH ESI
005fa8b1  MOV ESI,ECX
005fa8b3  CALL 0x005e6e80
005fa8b8  MOV dword ptr [ESI + 0x4],EAX
005fa8bb  MOV byte ptr [EAX + 0x1d],0x1
005fa8bf  MOV EAX,dword ptr [ESI + 0x4]
005fa8c2  MOV dword ptr [EAX + 0x4],EAX
005fa8c5  MOV EAX,dword ptr [ESI + 0x4]
005fa8c8  MOV dword ptr [EAX],EAX
005fa8ca  MOV EAX,dword ptr [ESI + 0x4]
005fa8cd  MOV dword ptr [EAX + 0x8],EAX
005fa8d0  MOV dword ptr [ESI + 0x8],0x0
005fa8d7  MOV EAX,ESI
005fa8d9  POP ESI
005fa8da  RET
