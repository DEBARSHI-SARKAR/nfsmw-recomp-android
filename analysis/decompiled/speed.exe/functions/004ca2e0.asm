004ca2e0  SUB ESP,0xb0
004ca2e6  PUSH EBX
004ca2e7  MOV EBX,dword ptr [ESP + 0xb8]
004ca2ee  PUSH ESI
004ca2ef  PUSH EDI
004ca2f0  MOV dword ptr [ESP + 0x10],ECX
004ca2f4  MOV ECX,0x20
004ca2f9  XOR EAX,EAX
004ca2fb  LEA EDI,[ESP + 0x3c]
004ca2ff  MOV dword ptr [ESP + 0xc],0x0
004ca307  STOSD.REP ES:EDI
004ca309  PUSH EBP
004ca30a  LEA EBX,[EBX]
004ca310  MOV EAX,dword ptr [ESP + 0x14]
004ca314  MOV EBP,dword ptr [EAX + 0x4]
004ca317  MOV EAX,dword ptr [EBP]
004ca31a  LEA EBX,[EBX]
004ca320  CMP EAX,EBP
004ca322  JZ 0x004ca394
004ca324  MOV EDX,dword ptr [EAX + 0x18]
004ca327  MOV ECX,dword ptr [EAX + 0x8]
004ca32a  MOV ESI,dword ptr [EAX + 0x14]
004ca32d  MOV EDI,dword ptr [EAX + 0x28]
004ca330  MOV dword ptr [ESP + 0x28],EDX
004ca334  MOV EDX,dword ptr [EAX + 0x1c]
004ca337  MOV dword ptr [ESP + 0x2c],EDX
004ca33b  MOV EDX,dword ptr [EAX + 0x20]
004ca33e  MOV dword ptr [ESP + 0x30],EDX
004ca342  MOV DL,byte ptr [EAX + 0x24]
004ca345  MOV dword ptr [ESP + 0x18],ECX
004ca349  MOV ECX,dword ptr [EAX + 0x10]
004ca34c  CMP ECX,EBX
004ca34e  MOV byte ptr [ESP + 0x34],DL
004ca352  MOV EDX,dword ptr [EAX + 0x2c]
004ca355  MOV dword ptr [ESP + 0x20],ECX
004ca359  MOV dword ptr [ESP + 0x24],ESI
004ca35d  MOV dword ptr [ESP + 0x38],EDI
004ca361  MOV dword ptr [ESP + 0x3c],EDX
004ca365  JNZ 0x004ca370
004ca367  CMP ESI,dword ptr [ESP + 0xc8]
004ca36e  JZ 0x004ca374
004ca370  MOV EAX,dword ptr [EAX]
004ca372  JMP 0x004ca320
004ca374  MOV ECX,dword ptr [ESP + 0x14]
004ca378  LEA EAX,[ESP + 0x18]
004ca37c  PUSH EAX
004ca37d  CALL 0x004c91d0
004ca382  MOV EAX,dword ptr [ESP + 0x10]
004ca386  MOV dword ptr [ESP + EAX*0x4 + 0x40],EDI
004ca38a  INC EAX
004ca38b  MOV dword ptr [ESP + 0x10],EAX
004ca38f  JMP 0x004ca310
004ca394  MOV EDI,dword ptr [ESP + 0x10]
004ca398  LEA EDI,[ESP + EDI*0x4 + 0x3c]
004ca39c  POP EBP
004ca39d  LEA ECX,[ECX]
004ca3a0  MOV ECX,dword ptr [ESP + 0x10]
004ca3a4  MOV EDX,dword ptr [ECX + 0x4]
004ca3a7  MOV EAX,dword ptr [EDX]
004ca3a9  CMP EAX,EDX
004ca3ab  JZ 0x004ca3f9
004ca3ad  MOV ESI,dword ptr [EDI]
004ca3af  NOP
004ca3b0  MOV ECX,dword ptr [EAX + 0x8]
004ca3b3  MOV EBX,dword ptr [EAX + 0x2c]
004ca3b6  MOV dword ptr [ESP + 0x14],ECX
004ca3ba  MOV ECX,dword ptr [EAX + 0x10]
004ca3bd  MOV dword ptr [ESP + 0x1c],ECX
004ca3c1  MOV ECX,dword ptr [EAX + 0x14]
004ca3c4  MOV dword ptr [ESP + 0x20],ECX
004ca3c8  MOV ECX,dword ptr [EAX + 0x18]
004ca3cb  MOV dword ptr [ESP + 0x24],ECX
004ca3cf  MOV ECX,dword ptr [EAX + 0x1c]
004ca3d2  MOV dword ptr [ESP + 0x28],ECX
004ca3d6  MOV ECX,dword ptr [EAX + 0x20]
004ca3d9  MOV dword ptr [ESP + 0x2c],ECX
004ca3dd  MOV CL,byte ptr [EAX + 0x24]
004ca3e0  MOV byte ptr [ESP + 0x30],CL
004ca3e4  MOV ECX,dword ptr [EAX + 0x28]
004ca3e7  CMP ESI,ECX
004ca3e9  MOV dword ptr [ESP + 0x34],ECX
004ca3ed  MOV dword ptr [ESP + 0x38],EBX
004ca3f1  JZ 0x004ca415
004ca3f3  MOV EAX,dword ptr [EAX]
004ca3f5  CMP EAX,EDX
004ca3f7  JNZ 0x004ca3b0
004ca3f9  MOV EAX,dword ptr [ESP + 0xc]
004ca3fd  DEC EAX
004ca3fe  SUB EDI,0x4
004ca401  TEST EAX,EAX
004ca403  MOV dword ptr [ESP + 0xc],EAX
004ca407  JG 0x004ca3a0
004ca409  POP EDI
004ca40a  POP ESI
004ca40b  POP EBX
004ca40c  ADD ESP,0xb0
004ca412  RET 0x10
004ca415  MOV ECX,dword ptr [ESP + 0x10]
004ca419  LEA EDX,[ESP + 0x14]
004ca41d  PUSH EDX
004ca41e  CALL 0x004c91d0
004ca423  JMP 0x004ca3a0
