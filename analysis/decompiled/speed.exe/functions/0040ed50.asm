0040ed50  SUB ESP,0x8
0040ed53  PUSH ESI
0040ed54  MOV ESI,dword ptr [ESP + 0x14]
0040ed58  PUSH EDI
0040ed59  MOV EDI,dword ptr [ESP + 0x1c]
0040ed5d  CMP ESI,EDI
0040ed5f  JZ 0x0040edae
0040ed61  MOV EAX,dword ptr [ESI]
0040ed63  PUSH EAX
0040ed64  LEA ECX,[ESP + 0xc]
0040ed68  CALL 0x004077d0
0040ed6d  FLD float ptr [ESP + 0x20]
0040ed71  FCOMP float ptr [ESP + 0x8]
0040ed75  FNSTSW AX
0040ed77  TEST AH,0x5
0040ed7a  JP 0x0040ed82
0040ed7c  FLD float ptr [ESP + 0x20]
0040ed80  JMP 0x0040ed86
0040ed82  FLD float ptr [ESP + 0x8]
0040ed86  FSTP float ptr [ESP + 0x20]
0040ed8a  FLD float ptr [ESP + 0x24]
0040ed8e  FCOMP float ptr [ESP + 0xc]
0040ed92  FNSTSW AX
0040ed94  TEST AH,0x5
0040ed97  JP 0x0040ed9f
0040ed99  FLD float ptr [ESP + 0x24]
0040ed9d  JMP 0x0040eda3
0040ed9f  FLD float ptr [ESP + 0xc]
0040eda3  ADD ESI,0x4
0040eda6  FSTP float ptr [ESP + 0x24]
0040edaa  CMP ESI,EDI
0040edac  JNZ 0x0040ed61
0040edae  MOV EAX,dword ptr [ESP + 0x14]
0040edb2  MOV ECX,dword ptr [ESP + 0x20]
0040edb6  MOV EDX,dword ptr [ESP + 0x24]
0040edba  POP EDI
0040edbb  MOV dword ptr [EAX],ECX
0040edbd  MOV dword ptr [EAX + 0x4],EDX
0040edc0  POP ESI
0040edc1  ADD ESP,0x8
0040edc4  RET
