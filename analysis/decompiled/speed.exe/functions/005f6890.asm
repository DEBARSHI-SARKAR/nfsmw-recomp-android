005f6890  PUSH ESI
005f6891  MOV ESI,ECX
005f6893  CALL 0x005e6e40
005f6898  MOV dword ptr [ESI + 0x4],EAX
005f689b  MOV byte ptr [EAX + 0xf],0x1
005f689f  MOV EAX,dword ptr [ESI + 0x4]
005f68a2  MOV dword ptr [EAX + 0x4],EAX
005f68a5  MOV EAX,dword ptr [ESI + 0x4]
005f68a8  MOV dword ptr [EAX],EAX
005f68aa  MOV EAX,dword ptr [ESI + 0x4]
005f68ad  MOV dword ptr [EAX + 0x8],EAX
005f68b0  MOV dword ptr [ESI + 0x8],0x0
005f68b7  MOV EAX,ESI
005f68b9  POP ESI
005f68ba  RET
