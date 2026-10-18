005abb90  PUSH ESI
005abb91  MOV ESI,ECX
005abb93  CALL 0x005945c0
005abb98  MOV dword ptr [ESI + 0x4],EAX
005abb9b  MOV byte ptr [EAX + 0x11],0x1
005abb9f  MOV EAX,dword ptr [ESI + 0x4]
005abba2  MOV dword ptr [EAX + 0x4],EAX
005abba5  MOV EAX,dword ptr [ESI + 0x4]
005abba8  MOV dword ptr [EAX],EAX
005abbaa  MOV EAX,dword ptr [ESI + 0x4]
005abbad  MOV dword ptr [EAX + 0x8],EAX
005abbb0  MOV dword ptr [ESI + 0x8],0x0
005abbb7  MOV EAX,ESI
005abbb9  POP ESI
005abbba  RET
