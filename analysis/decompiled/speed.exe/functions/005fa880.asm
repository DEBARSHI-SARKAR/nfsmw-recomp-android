005fa880  PUSH ESI
005fa881  MOV ESI,ECX
005fa883  CALL 0x005e6e80
005fa888  MOV dword ptr [ESI + 0x4],EAX
005fa88b  MOV byte ptr [EAX + 0x1d],0x1
005fa88f  MOV EAX,dword ptr [ESI + 0x4]
005fa892  MOV dword ptr [EAX + 0x4],EAX
005fa895  MOV EAX,dword ptr [ESI + 0x4]
005fa898  MOV dword ptr [EAX],EAX
005fa89a  MOV EAX,dword ptr [ESI + 0x4]
005fa89d  MOV dword ptr [EAX + 0x8],EAX
005fa8a0  MOV dword ptr [ESI + 0x8],0x0
005fa8a7  MOV EAX,ESI
005fa8a9  POP ESI
005fa8aa  RET
