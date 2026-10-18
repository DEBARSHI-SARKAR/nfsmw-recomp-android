005ea970  PUSH ESI
005ea971  MOV ESI,ECX
005ea973  CALL 0x005e6dc0
005ea978  MOV dword ptr [ESI + 0x4],EAX
005ea97b  MOV byte ptr [EAX + 0x21],0x1
005ea97f  MOV EAX,dword ptr [ESI + 0x4]
005ea982  MOV dword ptr [EAX + 0x4],EAX
005ea985  MOV EAX,dword ptr [ESI + 0x4]
005ea988  MOV dword ptr [EAX],EAX
005ea98a  MOV EAX,dword ptr [ESI + 0x4]
005ea98d  MOV dword ptr [EAX + 0x8],EAX
005ea990  MOV dword ptr [ESI + 0x8],0x0
005ea997  POP ESI
005ea998  RET
