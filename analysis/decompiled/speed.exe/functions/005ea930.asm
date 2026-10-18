005ea930  PUSH ESI
005ea931  MOV ESI,ECX
005ea933  CALL 0x005e6c40
005ea938  MOV dword ptr [ESI + 0x4],EAX
005ea93b  MOV byte ptr [EAX + 0x15],0x1
005ea93f  MOV EAX,dword ptr [ESI + 0x4]
005ea942  MOV dword ptr [EAX + 0x4],EAX
005ea945  MOV EAX,dword ptr [ESI + 0x4]
005ea948  MOV dword ptr [EAX],EAX
005ea94a  MOV EAX,dword ptr [ESI + 0x4]
005ea94d  MOV dword ptr [EAX + 0x8],EAX
005ea950  MOV dword ptr [ESI + 0x8],0x0
005ea957  POP ESI
005ea958  RET
