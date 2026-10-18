005ee5a0  PUSH ESI
005ee5a1  MOV ESI,ECX
005ee5a3  CALL 0x005e6c40
005ee5a8  MOV dword ptr [ESI + 0x4],EAX
005ee5ab  MOV byte ptr [EAX + 0x15],0x1
005ee5af  MOV EAX,dword ptr [ESI + 0x4]
005ee5b2  MOV dword ptr [EAX + 0x4],EAX
005ee5b5  MOV EAX,dword ptr [ESI + 0x4]
005ee5b8  MOV dword ptr [EAX],EAX
005ee5ba  MOV EAX,dword ptr [ESI + 0x4]
005ee5bd  MOV dword ptr [EAX + 0x8],EAX
005ee5c0  MOV dword ptr [ESI + 0x8],0x0
005ee5c7  MOV EAX,ESI
005ee5c9  POP ESI
005ee5ca  RET 0x8
