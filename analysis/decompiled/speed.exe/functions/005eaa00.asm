005eaa00  PUSH ESI
005eaa01  MOV ESI,ECX
005eaa03  CALL 0x005e6e80
005eaa08  MOV dword ptr [ESI + 0x4],EAX
005eaa0b  MOV byte ptr [EAX + 0x1d],0x1
005eaa0f  MOV EAX,dword ptr [ESI + 0x4]
005eaa12  MOV dword ptr [EAX + 0x4],EAX
005eaa15  MOV EAX,dword ptr [ESI + 0x4]
005eaa18  MOV dword ptr [EAX],EAX
005eaa1a  MOV EAX,dword ptr [ESI + 0x4]
005eaa1d  MOV dword ptr [EAX + 0x8],EAX
005eaa20  MOV dword ptr [ESI + 0x8],0x0
005eaa27  POP ESI
005eaa28  RET
