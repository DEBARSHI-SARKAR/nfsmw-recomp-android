0066a4b0  PUSH ESI
0066a4b1  MOV ESI,ECX
0066a4b3  FLD float ptr [ESI + 0xb0]
0066a4b9  FCOMP float ptr [0x00890968]
0066a4bf  FNSTSW AX
0066a4c1  TEST AH,0x41
0066a4c4  JP 0x0066a4ee
0066a4c6  PUSH EDI
0066a4c7  MOV EDI,dword ptr [ESP + 0xc]
0066a4cb  MOV EAX,dword ptr [EDI + 0x4]
0066a4ce  PUSH EAX
0066a4cf  LEA ECX,[ESI + 0x9c]
0066a4d5  CALL 0x0045a760
0066a4da  MOV ECX,dword ptr [EDI + 0x8]
0066a4dd  MOV EDX,dword ptr [ECX + 0xf4]
0066a4e3  POP EDI
0066a4e4  MOV dword ptr [ESI + 0xb0],EDX
0066a4ea  POP ESI
0066a4eb  RET 0x4
0066a4ee  MOV EAX,dword ptr [ESP + 0x8]
0066a4f2  MOV ECX,dword ptr [EAX + 0x4]
0066a4f5  CMP ECX,dword ptr [ESI + 0xa0]
0066a4fb  JNZ 0x0066a50c
0066a4fd  MOV EDX,dword ptr [EAX + 0x8]
0066a500  MOV EAX,dword ptr [EDX + 0xf4]
0066a506  MOV dword ptr [ESI + 0xb0],EAX
0066a50c  POP ESI
0066a50d  RET 0x4
