0043db80  PUSH -0x1
0043db82  PUSH 0x8694f2
0043db87  MOV EAX,FS:[0x0]
0043db8d  PUSH EAX
0043db8e  MOV dword ptr FS:[0x0],ESP
0043db95  SUB ESP,0x8
0043db98  PUSH 0x0
0043db9a  PUSH 0xa8
0043db9f  MOV ECX,0x925b30
0043dba4  CALL 0x005d29d0
0043dba9  MOV dword ptr [ESP],EAX
0043dbac  TEST EAX,EAX
0043dbae  MOV dword ptr [ESP + 0x10],0x0
0043dbb6  JZ 0x0043dbf2
0043dbb8  MOV ECX,dword ptr [ESP + 0x18]
0043dbbc  SUB ESP,0x10
0043dbbf  MOV EDX,ESP
0043dbc1  MOV dword ptr [EDX],ECX
0043dbc3  MOV ECX,dword ptr [ESP + 0x2c]
0043dbc7  MOV dword ptr [EDX + 0x4],ECX
0043dbca  MOV ECX,dword ptr [ESP + 0x30]
0043dbce  MOV dword ptr [EDX + 0x8],ECX
0043dbd1  MOV ECX,EAX
0043dbd3  MOV dword ptr [ESP + 0x14],ESP
0043dbd7  CALL 0x0043dab0
0043dbdc  TEST EAX,EAX
0043dbde  JZ 0x0043dbf2
0043dbe0  ADD EAX,0x2c
0043dbe3  MOV ECX,dword ptr [ESP + 0x8]
0043dbe7  MOV dword ptr FS:[0x0],ECX
0043dbee  ADD ESP,0x14
0043dbf1  RET
0043dbf2  MOV ECX,dword ptr [ESP + 0x8]
0043dbf6  XOR EAX,EAX
0043dbf8  MOV dword ptr FS:[0x0],ECX
0043dbff  ADD ESP,0x14
0043dc02  RET
