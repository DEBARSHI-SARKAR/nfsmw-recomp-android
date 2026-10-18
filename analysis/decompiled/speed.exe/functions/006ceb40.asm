006ceb40  MOV EDX,dword ptr [ESP + 0x4]
006ceb44  MOV ECX,dword ptr [ESP + 0x8]
006ceb48  CMP EDX,ECX
006ceb4a  MOV EAX,dword ptr [ESP + 0xc]
006ceb4e  JZ 0x006ceb74
006ceb50  PUSH EBX
006ceb51  PUSH ESI
006ceb52  PUSH EDI
006ceb53  SUB ECX,0xc
006ceb56  SUB EAX,0xc
006ceb59  CMP ECX,EDX
006ceb5b  MOV ESI,ECX
006ceb5d  MOV EBX,dword ptr [ESI]
006ceb5f  MOV EDI,EAX
006ceb61  MOV dword ptr [EDI],EBX
006ceb63  MOV EBX,dword ptr [ESI + 0x4]
006ceb66  MOV dword ptr [EDI + 0x4],EBX
006ceb69  MOV ESI,dword ptr [ESI + 0x8]
006ceb6c  MOV dword ptr [EDI + 0x8],ESI
006ceb6f  JNZ 0x006ceb53
006ceb71  POP EDI
006ceb72  POP ESI
006ceb73  POP EBX
006ceb74  RET
