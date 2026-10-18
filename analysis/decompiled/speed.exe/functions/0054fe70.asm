0054fe70  PUSH -0x1
0054fe72  PUSH 0x870818
0054fe77  MOV EAX,FS:[0x0]
0054fe7d  PUSH EAX
0054fe7e  MOV dword ptr FS:[0x0],ESP
0054fe85  PUSH ECX
0054fe86  PUSH ESI
0054fe87  PUSH EDI
0054fe88  MOV EDI,dword ptr [ESP + 0x1c]
0054fe8c  MOV ESI,ECX
0054fe8e  PUSH EDI
0054fe8f  MOV dword ptr [ESP + 0xc],ESI
0054fe93  CALL 0x0059bc40
0054fe98  MOV dword ptr [ESI],0x89e5a0
0054fe9e  MOV ECX,dword ptr [EDI + 0x8]
0054fea1  XOR EAX,EAX
0054fea3  CMP ECX,EAX
0054fea5  SETNZ CL
0054fea8  MOV byte ptr [ESI + 0x148],CL
0054feae  MOV dword ptr [ESI + 0x120],0xffffae40
0054feb8  MOV dword ptr [ESI + 0x124],0xffae40
0054fec2  MOV EDX,dword ptr [0x0091cf90]
0054fec8  MOV ECX,dword ptr [EDX + 0x10]
0054fecb  MOV dword ptr [ECX + 0x24],EAX
0054fece  MOV ECX,ESI
0054fed0  MOV dword ptr [ESP + 0x14],EAX
0054fed4  CALL 0x00546360
0054fed9  MOV ECX,dword ptr [ESP + 0xc]
0054fedd  POP EDI
0054fede  MOV EAX,ESI
0054fee0  POP ESI
0054fee1  MOV dword ptr FS:[0x0],ECX
0054fee8  ADD ESP,0x10
0054feeb  RET 0x4
