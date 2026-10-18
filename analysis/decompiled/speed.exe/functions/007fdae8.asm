007fdae8  PUSH EBP
007fdae9  MOV EBP,ESP
007fdaeb  MOV EAX,dword ptr [EBP + 0xc]
007fdaee  MOV ECX,dword ptr [EBP + 0x8]
007fdaf1  SUB EAX,ECX
007fdaf3  JNS 0x007fdafc
007fdaf5  MOV EAX,ECX
007fdaf7  MOV ECX,dword ptr [EBP + 0xc]
007fdafa  SUB EAX,ECX
007fdafc  CMP EAX,0x1
007fdaff  JNZ 0x007fdb31
007fdb01  CMP dword ptr [EBP + 0x20],0x0
007fdb05  MOV EAX,dword ptr [EBP + 0x18]
007fdb08  JZ 0x007fdb1e
007fdb0a  SHL EAX,0x4
007fdb0d  ADD EAX,0x90a2f8
007fdb12  PUSH EAX
007fdb13  PUSH 0x8
007fdb15  PUSH 0x8
007fdb17  PUSH 0x1
007fdb19  PUSH dword ptr [EBP + 0x14]
007fdb1c  JMP 0x007fdb50
007fdb1e  LEA EAX,[EAX*0x8 + 0x90a378]
007fdb25  PUSH EAX
007fdb26  PUSH 0x8
007fdb28  PUSH 0x8
007fdb2a  PUSH 0x1
007fdb2c  PUSH dword ptr [EBP + 0x14]
007fdb2f  JMP 0x007fdb6c
007fdb31  MOV EDX,dword ptr [EBP + 0x14]
007fdb34  CMP EAX,EDX
007fdb36  JNZ 0x007fdb77
007fdb38  CMP dword ptr [EBP + 0x20],0x0
007fdb3c  MOV EAX,dword ptr [EBP + 0x1c]
007fdb3f  JZ 0x007fdb5e
007fdb41  SHL EAX,0x4
007fdb44  ADD EAX,0x90a2f8
007fdb49  PUSH EAX
007fdb4a  PUSH 0x8
007fdb4c  PUSH 0x8
007fdb4e  PUSH EDX
007fdb4f  PUSH EDX
007fdb50  PUSH dword ptr [EBP + 0x10]
007fdb53  PUSH ECX
007fdb54  CALL 0x007fd78e
007fdb59  ADD ESP,0x1c
007fdb5c  POP EBP
007fdb5d  RET
007fdb5e  LEA EAX,[EAX*0x8 + 0x90a378]
007fdb65  PUSH EAX
007fdb66  PUSH 0x8
007fdb68  PUSH 0x8
007fdb6a  PUSH EDX
007fdb6b  PUSH EDX
007fdb6c  PUSH dword ptr [EBP + 0x10]
007fdb6f  PUSH ECX
007fdb70  CALL 0x007fd98f
007fdb75  JMP 0x007fdb59
007fdb77  PUSH ESI
007fdb78  LEA ESI,[EDX + -0x1]
007fdb7b  CMP EAX,ESI
007fdb7d  JNZ 0x007fdbc5
007fdb7f  CMP dword ptr [EBP + 0x20],0x0
007fdb83  JZ 0x007fdb9e
007fdb85  MOV ESI,dword ptr [EBP + 0x1c]
007fdb88  SHL ESI,0x4
007fdb8b  MOV EAX,0x90a2f8
007fdb90  ADD ESI,EAX
007fdb92  PUSH ESI
007fdb93  MOV ESI,dword ptr [EBP + 0x18]
007fdb96  SHL ESI,0x4
007fdb99  ADD ESI,EAX
007fdb9b  DEC ECX
007fdb9c  JMP 0x007fdbe8
007fdb9e  DEC ECX
007fdb9f  MOV EAX,dword ptr [EBP + 0x1c]
007fdba2  LEA EAX,[EAX*0x8 + 0x90a378]
007fdba9  PUSH EAX
007fdbaa  MOV EAX,dword ptr [EBP + 0x18]
007fdbad  LEA EAX,[EAX*0x8 + 0x90a378]
007fdbb4  PUSH EAX
007fdbb5  PUSH EDX
007fdbb6  PUSH dword ptr [EBP + 0x10]
007fdbb9  PUSH ECX
007fdbba  CALL 0x007fdab0
007fdbbf  ADD ESP,0x14
007fdbc2  POP ESI
007fdbc3  POP EBP
007fdbc4  RET
007fdbc5  LEA ESI,[EDX + 0x1]
007fdbc8  CMP EAX,ESI
007fdbca  JNZ 0x007fdbc2
007fdbcc  CMP dword ptr [EBP + 0x20],0x0
007fdbd0  JZ 0x007fdb9f
007fdbd2  MOV ESI,dword ptr [EBP + 0x1c]
007fdbd5  SHL ESI,0x4
007fdbd8  MOV EAX,0x90a2f8
007fdbdd  ADD ESI,EAX
007fdbdf  PUSH ESI
007fdbe0  MOV ESI,dword ptr [EBP + 0x18]
007fdbe3  SHL ESI,0x4
007fdbe6  ADD ESI,EAX
007fdbe8  PUSH ESI
007fdbe9  PUSH EDX
007fdbea  PUSH dword ptr [EBP + 0x10]
007fdbed  PUSH ECX
007fdbee  CALL 0x007fd952
007fdbf3  JMP 0x007fdbbf
