0041b6c0  PUSH ESI
0041b6c1  MOV ESI,ECX
0041b6c3  MOV EAX,dword ptr [ESI + 0xc]
0041b6c6  CMP EAX,dword ptr [ESI + 0x8]
0041b6c9  JC 0x0041b6dc
0041b6cb  MOV EDX,dword ptr [ESI]
0041b6cd  INC EAX
0041b6ce  PUSH EAX
0041b6cf  MOV ECX,ESI
0041b6d1  CALL dword ptr [EDX + 0xc]
0041b6d4  PUSH EAX
0041b6d5  MOV ECX,ESI
0041b6d7  CALL 0x0041c080
0041b6dc  MOV EAX,dword ptr [ESI + 0xc]
0041b6df  MOV ECX,dword ptr [ESI + 0x4]
0041b6e2  LEA EAX,[ECX + EAX*0x8]
0041b6e5  TEST EAX,EAX
0041b6e7  JZ 0x0041b6f7
0041b6e9  MOV ECX,dword ptr [ESP + 0x8]
0041b6ed  MOV EDX,dword ptr [ECX]
0041b6ef  MOV dword ptr [EAX],EDX
0041b6f1  MOV ECX,dword ptr [ECX + 0x4]
0041b6f4  MOV dword ptr [EAX + 0x4],ECX
0041b6f7  INC dword ptr [ESI + 0xc]
0041b6fa  POP ESI
0041b6fb  RET 0x4
