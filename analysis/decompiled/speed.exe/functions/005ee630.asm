005ee630  PUSH ESI
005ee631  MOV ESI,ECX
005ee633  CALL 0x005e6e80
005ee638  MOV dword ptr [ESI + 0x4],EAX
005ee63b  MOV byte ptr [EAX + 0x1d],0x1
005ee63f  MOV EAX,dword ptr [ESI + 0x4]
005ee642  MOV dword ptr [EAX + 0x4],EAX
005ee645  MOV EAX,dword ptr [ESI + 0x4]
005ee648  MOV dword ptr [EAX],EAX
005ee64a  MOV EAX,dword ptr [ESI + 0x4]
005ee64d  MOV dword ptr [EAX + 0x8],EAX
005ee650  MOV dword ptr [ESI + 0x8],0x0
005ee657  MOV EAX,ESI
005ee659  POP ESI
005ee65a  RET 0x8
