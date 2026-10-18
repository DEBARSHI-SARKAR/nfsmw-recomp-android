004dd330  SUB ESP,0x20
004dd333  PUSH ESI
004dd334  MOV ESI,ECX
004dd336  MOV EAX,dword ptr [ESI + 0xc]
004dd339  MOV dword ptr [EAX],0x0
004dd33f  MOV ECX,dword ptr [ESI + 0xc]
004dd342  MOV dword ptr [ECX + 0x4],0x0
004dd349  MOV EDX,dword ptr [ESI + 0xc]
004dd34c  MOV dword ptr [EDX + 0x8],0x0
004dd353  MOV EAX,dword ptr [ESI + 0x28]
004dd356  MOV CL,byte ptr [EAX + 0x38]
004dd359  TEST CL,CL
004dd35b  JZ 0x004dd47e
004dd361  MOV EAX,dword ptr [ESI + 0x30]
004dd364  TEST EAX,EAX
004dd366  JZ 0x004dd37e
004dd368  MOV CL,byte ptr [EAX + 0x20]
004dd36b  TEST CL,CL
004dd36d  JNZ 0x004dd37e
004dd36f  MOV ECX,dword ptr [ESI + 0x28]
004dd372  MOV EDX,dword ptr [ECX]
004dd374  CALL dword ptr [EDX + 0x1c]
004dd377  POP ESI
004dd378  ADD ESP,0x20
004dd37b  RET 0x4
004dd37e  MOV AL,byte ptr [ESI + 0x54]
004dd381  TEST AL,AL
004dd383  PUSH EDI
004dd384  JZ 0x004dd40f
004dd38a  MOV EAX,dword ptr [ESI + 0x38]
004dd38d  TEST EAX,EAX
004dd38f  JNZ 0x004dd40f
004dd391  MOV EAX,dword ptr [ESI + 0x2c]
004dd394  MOV EAX,dword ptr [EAX + 0xec]
004dd39a  TEST AL,0x8
004dd39c  JZ 0x004dd3a9
004dd39e  MOV ECX,dword ptr [ESI + 0xc]
004dd3a1  MOV dword ptr [ECX],0x7fff
004dd3a7  JMP 0x004dd3fa
004dd3a9  TEST AL,0x2
004dd3ab  JZ 0x004dd3b9
004dd3ad  MOV EDX,dword ptr [ESI + 0xc]
004dd3b0  MOV dword ptr [EDX + 0x8],0x7fff
004dd3b7  JMP 0x004dd3fa
004dd3b9  TEST AL,0x10
004dd3bb  JZ 0x004dd3fa
004dd3bd  MOV EAX,dword ptr [ESI + 0xc]
004dd3c0  MOV dword ptr [EAX + 0x4],0x7fff
004dd3c7  MOV EDI,dword ptr [ESI + 0x2c]
004dd3ca  PUSH 0x8987b0
004dd3cf  LEA ECX,[ESP + 0xc]
004dd3d3  ADD EDI,0x10
004dd3d6  CALL 0x004023c0
004dd3db  MOV ECX,dword ptr [EDI + 0x40]
004dd3de  PUSH 0x0
004dd3e0  PUSH 0x0
004dd3e2  PUSH ECX
004dd3e3  LEA ECX,[ESP + 0x18]
004dd3e7  CALL 0x004d2830
004dd3ec  MOV EDX,dword ptr [ESP + 0x8]
004dd3f0  MOV ECX,EAX
004dd3f2  MOV dword ptr [EAX + 0x4],EDX
004dd3f5  CALL 0x0065faf0
004dd3fa  MOV EAX,dword ptr [ESI + 0x2c]
004dd3fd  MOV ECX,dword ptr [EAX + 0xd4]
004dd403  MOV EDX,dword ptr [ESI + 0xc]
004dd406  IMUL ECX,ECX,0xff
004dd40c  MOV dword ptr [EDX + 0x10],ECX
004dd40f  MOV EDI,dword ptr [ESI + 0x2c]
004dd412  MOV EAX,dword ptr [EDI + 0xec]
004dd418  TEST AL,0x1
004dd41a  JZ 0x004dd458
004dd41c  TEST AL,0x10
004dd41e  JZ 0x004dd458
004dd420  TEST AL,0x4
004dd422  JZ 0x004dd458
004dd424  MOV EAX,dword ptr [ESI + 0x38]
004dd427  TEST EAX,EAX
004dd429  JZ 0x004dd458
004dd42b  PUSH 0x8987b0
004dd430  LEA ECX,[ESP + 0xc]
004dd434  CALL 0x004023c0
004dd439  MOV EAX,dword ptr [EDI + 0x50]
004dd43c  PUSH 0x0
004dd43e  PUSH 0x0
004dd440  PUSH EAX
004dd441  LEA ECX,[ESP + 0x18]
004dd445  CALL 0x004d2830
004dd44a  MOV ECX,dword ptr [ESP + 0x8]
004dd44e  MOV dword ptr [EAX + 0x4],ECX
004dd451  MOV ECX,EAX
004dd453  CALL 0x0065faf0
004dd458  MOV EAX,dword ptr [ESI + 0x2c]
004dd45b  FLD float ptr [EAX + 0xa4]
004dd461  MOV EDX,dword ptr [EAX + 0xa0]
004dd467  FLD float ptr [EAX + 0xa8]
004dd46d  ADD EAX,0xa0
004dd472  FXCH
004dd474  MOV dword ptr [ESI + 0x70],EDX
004dd477  FSTP float ptr [ESI + 0x74]
004dd47a  POP EDI
004dd47b  FSTP float ptr [ESI + 0x78]
004dd47e  POP ESI
004dd47f  ADD ESP,0x20
004dd482  RET 0x4
