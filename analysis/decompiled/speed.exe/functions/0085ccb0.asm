0085ccb0  PUSH ESI
0085ccb1  MOV ESI,dword ptr [ESP + 0x8]
0085ccb5  MOV EAX,dword ptr [ESI + 0x18c]
0085ccbb  TEST EAX,EAX
0085ccbd  JZ 0x0085ccfb
0085ccbf  MOV EAX,dword ptr [ESI + 0x190]
0085ccc5  CMP EAX,dword ptr [ESI + 0x194]
0085cccb  JZ 0x0085ccfb
0085cccd  MOV ECX,dword ptr [ESP + 0xc]
0085ccd1  IMUL EAX,EAX,0xb0
0085ccd7  PUSH ECX
0085ccd8  LEA EDX,[EAX + ESI*0x1 + 0x198]
0085ccdf  PUSH ESI
0085cce0  CALL 0x0085bbb0
0085cce5  MOV EDX,dword ptr [ESI + 0x190]
0085cceb  INC EDX
0085ccec  PUSH ESI
0085cced  MOV dword ptr [ESI + 0x190],EDX
0085ccf3  CALL 0x0085be30
0085ccf8  ADD ESP,0xc
0085ccfb  POP ESI
0085ccfc  RET
