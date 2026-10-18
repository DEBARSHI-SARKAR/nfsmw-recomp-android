005f79a0  PUSH ESI
005f79a1  MOV ESI,ECX
005f79a3  CALL 0x005e6dc0
005f79a8  MOV dword ptr [ESI + 0x4],EAX
005f79ab  MOV byte ptr [EAX + 0x21],0x1
005f79af  MOV EAX,dword ptr [ESI + 0x4]
005f79b2  MOV dword ptr [EAX + 0x4],EAX
005f79b5  MOV EAX,dword ptr [ESI + 0x4]
005f79b8  MOV dword ptr [EAX],EAX
005f79ba  MOV EAX,dword ptr [ESI + 0x4]
005f79bd  MOV dword ptr [EAX + 0x8],EAX
005f79c0  MOV dword ptr [ESI + 0x8],0x0
005f79c7  MOV EAX,ESI
005f79c9  POP ESI
005f79ca  RET
