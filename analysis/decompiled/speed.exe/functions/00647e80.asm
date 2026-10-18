00647e80  PUSH ESI
00647e81  MOV ESI,ECX
00647e83  CALL 0x0063fe90
00647e88  MOV dword ptr [ESI + 0x4],EAX
00647e8b  MOV byte ptr [EAX + 0x15],0x1
00647e8f  MOV EAX,dword ptr [ESI + 0x4]
00647e92  MOV dword ptr [EAX + 0x4],EAX
00647e95  MOV EAX,dword ptr [ESI + 0x4]
00647e98  MOV dword ptr [EAX],EAX
00647e9a  MOV EAX,dword ptr [ESI + 0x4]
00647e9d  MOV dword ptr [EAX + 0x8],EAX
00647ea0  MOV dword ptr [ESI + 0x8],0x0
00647ea7  MOV EAX,ESI
00647ea9  POP ESI
00647eaa  RET
