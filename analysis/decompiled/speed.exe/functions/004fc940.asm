004fc940  MOV EAX,dword ptr [ESP + 0x8]
004fc944  MOV ECX,dword ptr [ESP + 0xc]
004fc948  IMUL EAX,EAX,0x1c
004fc94b  MOV EDX,dword ptr [ESP + 0x4]
004fc94f  PUSH ESI
004fc950  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x4]
004fc954  MOV dword ptr [EAX + EDX*0x1 + 0x4],ESI
004fc958  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x10]
004fc95c  MOV dword ptr [EAX + EDX*0x1 + 0x10],ESI
004fc960  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x14]
004fc964  MOV dword ptr [EAX + EDX*0x1 + 0x14],ESI
004fc968  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x18]
004fc96c  MOV dword ptr [EAX + EDX*0x1 + 0x18],ESI
004fc970  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x1c]
004fc974  MOV dword ptr [EAX + EDX*0x1 + 0x1c],ESI
004fc978  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x8]
004fc97c  MOV dword ptr [EAX + EDX*0x1 + 0x8],ESI
004fc980  MOV ECX,dword ptr [EAX + ECX*0x1 + 0xc]
004fc984  MOV dword ptr [EAX + EDX*0x1 + 0xc],ECX
004fc988  POP ESI
004fc989  RET
