005b3670  MOV EAX,dword ptr [ESP + 0x4]
005b3674  CMP EAX,0x3
005b3677  JNC 0x005b36a9
005b3679  MOV EDX,dword ptr [ECX + 0x2c]
005b367c  PUSH ESI
005b367d  MOV ESI,dword ptr [EDX + EAX*0x8 + 0x54]
005b3681  MOV EDX,dword ptr [ESP + 0xc]
005b3685  MOV dword ptr [EDX],ESI
005b3687  MOV ESI,dword ptr [ECX + 0x2c]
005b368a  MOV ESI,dword ptr [ESI + EAX*0x8 + 0x58]
005b368e  MOV dword ptr [EDX + 0x4],ESI
005b3691  MOV EDX,dword ptr [ECX + 0x2c]
005b3694  MOV ESI,dword ptr [EDX + EAX*0x8 + 0x6c]
005b3698  MOV EDX,dword ptr [ESP + 0x10]
005b369c  MOV dword ptr [EDX],ESI
005b369e  MOV ECX,dword ptr [ECX + 0x2c]
005b36a1  MOV EAX,dword ptr [ECX + EAX*0x8 + 0x70]
005b36a5  MOV dword ptr [EDX + 0x4],EAX
005b36a8  POP ESI
005b36a9  RET 0xc
