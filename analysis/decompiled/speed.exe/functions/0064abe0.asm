0064abe0  MOV EAX,dword ptr [ESP + 0x4]
0064abe4  PUSH ESI
0064abe5  MOV ESI,ECX
0064abe7  MOV ECX,dword ptr [ESP + 0xc]
0064abeb  PUSH ECX
0064abec  MOV dword ptr [ESI + 0x28],EAX
0064abef  CALL 0x00461970
0064abf4  ADD ESP,0x4
0064abf7  MOV dword ptr [ESI + 0x24],EAX
0064abfa  POP ESI
0064abfb  RET 0x8
