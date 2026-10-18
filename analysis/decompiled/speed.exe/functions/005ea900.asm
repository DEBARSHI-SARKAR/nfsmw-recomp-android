005ea900  PUSH ESI
005ea901  MOV ESI,ECX
005ea903  CALL 0x005e6b90
005ea908  MOV dword ptr [ESI + 0x4],EAX
005ea90b  MOV byte ptr [EAX + 0x21],0x1
005ea90f  MOV EAX,dword ptr [ESI + 0x4]
005ea912  MOV dword ptr [EAX + 0x4],EAX
005ea915  MOV EAX,dword ptr [ESI + 0x4]
005ea918  MOV dword ptr [EAX],EAX
005ea91a  MOV EAX,dword ptr [ESI + 0x4]
005ea91d  MOV dword ptr [EAX + 0x8],EAX
005ea920  MOV dword ptr [ESI + 0x8],0x0
005ea927  POP ESI
005ea928  RET
