005afda0  PUSH ESI
005afda1  MOV ESI,dword ptr [ESP + 0xc]
005afda5  TEST ESI,ESI
005afda7  JZ 0x005afdf0
005afda9  MOV CX,word ptr [ESI]
005afdac  TEST CX,CX
005afdaf  JZ 0x005afdf0
005afdb1  MOV EAX,dword ptr [ESP + 0x8]
005afdb5  CMP CX,0x1f
005afdb9  JL 0x005afdcb
005afdbb  CMP CX,0x7f
005afdbf  JG 0x005afdcb
005afdc1  MOV CL,byte ptr [ESI]
005afdc3  MOV byte ptr [EAX],CL
005afdc5  INC EAX
005afdc6  ADD ESI,0x2
005afdc9  JMP 0x005afde2
005afdcb  MOV byte ptr [EAX],0x5c
005afdce  MOVSX EDX,word ptr [ESI]
005afdd1  LEA ECX,[EAX + 0x1]
005afdd4  MOV EAX,EDX
005afdd6  CALL 0x005afb20
005afddb  ADD ESI,0x2
005afdde  MOV byte ptr [EAX],0x5c
005afde1  INC EAX
005afde2  MOV CX,word ptr [ESI]
005afde5  TEST CX,CX
005afde8  JNZ 0x005afdb5
005afdea  MOV byte ptr [EAX],CL
005afdec  POP ESI
005afded  RET 0x8
005afdf0  MOV EAX,dword ptr [ESP + 0x8]
005afdf4  MOV byte ptr [EAX],0x0
005afdf7  POP ESI
005afdf8  RET 0x8
