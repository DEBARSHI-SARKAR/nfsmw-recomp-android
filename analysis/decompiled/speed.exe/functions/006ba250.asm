006ba250  PUSH ESI
006ba251  MOV ESI,ECX
006ba253  CALL 0x006ba010
006ba258  MOV EAX,dword ptr [ESI + 0x54]
006ba25b  MOV ECX,dword ptr [EAX + 0x4]
006ba25e  ADD ESI,0x50
006ba261  PUSH ECX
006ba262  MOV ECX,ESI
006ba264  CALL 0x006a6070
006ba269  MOV EAX,dword ptr [ESI + 0x4]
006ba26c  MOV dword ptr [EAX + 0x4],EAX
006ba26f  MOV EAX,dword ptr [ESI + 0x4]
006ba272  MOV dword ptr [ESI + 0x8],0x0
006ba279  MOV dword ptr [EAX],EAX
006ba27b  MOV ESI,dword ptr [ESI + 0x4]
006ba27e  MOV dword ptr [ESI + 0x8],ESI
006ba281  POP ESI
006ba282  RET
