0041bbb0  PUSH ESI
0041bbb1  MOV ESI,ECX
0041bbb3  MOV EAX,dword ptr [ESI + 0xc]
0041bbb6  CMP EAX,dword ptr [ESI + 0x8]
0041bbb9  JC 0x0041bbcc
0041bbbb  MOV EDX,dword ptr [ESI]
0041bbbd  INC EAX
0041bbbe  PUSH EAX
0041bbbf  MOV ECX,ESI
0041bbc1  CALL dword ptr [EDX + 0xc]
0041bbc4  PUSH EAX
0041bbc5  MOV ECX,ESI
0041bbc7  CALL 0x0041b250
0041bbcc  MOV EAX,dword ptr [ESI + 0xc]
0041bbcf  MOV ECX,dword ptr [ESI + 0x4]
0041bbd2  LEA EAX,[ECX + EAX*0x4]
0041bbd5  TEST EAX,EAX
0041bbd7  JZ 0x0041bbe1
0041bbd9  MOV EDX,dword ptr [ESP + 0x8]
0041bbdd  MOV ECX,dword ptr [EDX]
0041bbdf  MOV dword ptr [EAX],ECX
0041bbe1  INC dword ptr [ESI + 0xc]
0041bbe4  POP ESI
0041bbe5  RET 0x4
