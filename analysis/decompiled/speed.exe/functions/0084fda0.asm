0084fda0  SUB ESP,0x22c
0084fda6  MOV EAX,[0x00906980]
0084fdab  PUSH ESI
0084fdac  MOV ESI,ECX
0084fdae  MOV dword ptr [ESP + 0x22c],EAX
0084fdb5  CMP dword ptr [ESI + 0x94],0x4
0084fdbc  JNZ 0x0084fde1
0084fdbe  MOV EAX,dword ptr [ESI + 0x98]
0084fdc4  MOV dword ptr [ESP + 0x10],EAX
0084fdc8  LEA EAX,[ESP + 0x4]
0084fdcc  MOV dword ptr [ESP + 0x4],0x0
0084fdd4  MOV dword ptr [ESP + 0xc],0x3
0084fddc  CALL 0x0084fd30
0084fde1  MOV ECX,dword ptr [ESP + 0x22c]
0084fde8  MOV dword ptr [ESI + 0x98],0x0
0084fdf2  MOV dword ptr [ESI + 0x94],0x5
0084fdfc  XOR EAX,EAX
0084fdfe  POP ESI
0084fdff  CALL 0x007d6cb0
0084fe04  ADD ESP,0x22c
0084fe0a  RET
