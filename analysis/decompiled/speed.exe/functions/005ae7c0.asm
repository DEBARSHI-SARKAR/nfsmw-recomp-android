005ae7c0  SUB ESP,0x18
005ae7c3  MOV EAX,dword ptr [ECX]
005ae7c5  PUSH ESI
005ae7c6  MOV ESI,0x1
005ae7cb  CMP EAX,ESI
005ae7cd  MOV dword ptr [ESP + 0x8],ESI
005ae7d1  JLE 0x005ae85c
005ae7d7  PUSH EBX
005ae7d8  MOV EAX,0xc
005ae7dd  PUSH EBP
005ae7de  MOV dword ptr [ESP + 0x14],EAX
005ae7e2  PUSH EDI
005ae7e3  TEST EAX,EAX
005ae7e5  JLE 0x005ae847
005ae7e7  XOR EDX,EDX
005ae7e9  MOV dword ptr [ESP + 0x10],ESI
005ae7ed  LEA ECX,[ECX]
005ae7f0  MOV ESI,dword ptr [ECX + 0x4]
005ae7f3  MOV EDI,dword ptr [EAX + ESI*0x1 + 0x8]
005ae7f7  CMP EDI,dword ptr [EDX + ESI*0x1 + 0x8]
005ae7fb  JNC 0x005ae835
005ae7fd  ADD EAX,ESI
005ae7ff  MOV EBP,EAX
005ae801  MOV EDI,dword ptr [EBP]
005ae804  MOV EBX,dword ptr [EBP + 0x4]
005ae807  MOV EBP,dword ptr [EBP + 0x8]
005ae80a  ADD ESI,EDX
005ae80c  MOV dword ptr [ESP + 0x24],EBP
005ae810  MOV EBP,dword ptr [ESI]
005ae812  MOV dword ptr [EAX],EBP
005ae814  MOV EBP,dword ptr [ESI + 0x4]
005ae817  MOV dword ptr [EAX + 0x4],EBP
005ae81a  MOV ESI,dword ptr [ESI + 0x8]
005ae81d  MOV dword ptr [EAX + 0x8],ESI
005ae820  MOV EAX,dword ptr [ECX + 0x4]
005ae823  MOV ESI,dword ptr [ESP + 0x24]
005ae827  ADD EAX,EDX
005ae829  MOV dword ptr [EAX],EDI
005ae82b  MOV dword ptr [EAX + 0x4],EBX
005ae82e  MOV dword ptr [EAX + 0x8],ESI
005ae831  MOV EAX,dword ptr [ESP + 0x18]
005ae835  MOV ESI,dword ptr [ESP + 0x10]
005ae839  ADD EDX,0xc
005ae83c  DEC ESI
005ae83d  MOV dword ptr [ESP + 0x10],ESI
005ae841  JNZ 0x005ae7f0
005ae843  MOV ESI,dword ptr [ESP + 0x14]
005ae847  MOV EDX,dword ptr [ECX]
005ae849  INC ESI
005ae84a  ADD EAX,0xc
005ae84d  CMP ESI,EDX
005ae84f  MOV dword ptr [ESP + 0x14],ESI
005ae853  MOV dword ptr [ESP + 0x18],EAX
005ae857  JL 0x005ae7e3
005ae859  POP EDI
005ae85a  POP EBP
005ae85b  POP EBX
005ae85c  POP ESI
005ae85d  ADD ESP,0x18
005ae860  RET
