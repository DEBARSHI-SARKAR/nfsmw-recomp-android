006da160  MOV EAX,dword ptr [ESP + 0x8]
006da164  MOV ECX,dword ptr [ESP + 0x4]
006da168  MOV EDX,dword ptr [EAX + 0x4]
006da16b  PUSH EBX
006da16c  MOV EBX,dword ptr [ECX]
006da16e  PUSH ESI
006da16f  MOV ESI,dword ptr [ECX + 0x4]
006da172  CMP EDX,ESI
006da174  PUSH EDI
006da175  MOV EDI,dword ptr [EAX]
006da177  JA 0x006da189
006da179  JC 0x006da17f
006da17b  CMP EDI,EBX
006da17d  JNC 0x006da189
006da17f  MOV dword ptr [EAX],EBX
006da181  MOV dword ptr [EAX + 0x4],ESI
006da184  MOV dword ptr [ECX],EDI
006da186  MOV dword ptr [ECX + 0x4],EDX
006da189  MOV EDX,dword ptr [ESP + 0x18]
006da18d  MOV ESI,dword ptr [EDX + 0x4]
006da190  MOV EDI,dword ptr [EAX + 0x4]
006da193  CMP ESI,EDI
006da195  MOV EBX,dword ptr [EDX]
006da197  PUSH EBP
006da198  MOV EBP,dword ptr [EAX]
006da19a  JA 0x006da1ac
006da19c  JC 0x006da1a2
006da19e  CMP EBX,EBP
006da1a0  JNC 0x006da1ac
006da1a2  MOV dword ptr [EDX],EBP
006da1a4  MOV dword ptr [EDX + 0x4],EDI
006da1a7  MOV dword ptr [EAX],EBX
006da1a9  MOV dword ptr [EAX + 0x4],ESI
006da1ac  MOV EDX,dword ptr [EAX + 0x4]
006da1af  MOV ESI,dword ptr [ECX + 0x4]
006da1b2  CMP EDX,ESI
006da1b4  MOV EDI,dword ptr [EAX]
006da1b6  MOV EBX,dword ptr [ECX]
006da1b8  POP EBP
006da1b9  JA 0x006da1cb
006da1bb  JC 0x006da1c1
006da1bd  CMP EDI,EBX
006da1bf  JNC 0x006da1cb
006da1c1  MOV dword ptr [EAX],EBX
006da1c3  MOV dword ptr [EAX + 0x4],ESI
006da1c6  MOV dword ptr [ECX],EDI
006da1c8  MOV dword ptr [ECX + 0x4],EDX
006da1cb  POP EDI
006da1cc  POP ESI
006da1cd  POP EBX
006da1ce  RET
