0041dda0  MOV EAX,dword ptr [ESP + 0x8]
0041dda4  TEST EAX,EAX
0041dda6  JBE 0x0041ddd6
0041dda8  MOV EDX,dword ptr [ESP + 0xc]
0041ddac  PUSH EBX
0041ddad  PUSH ESI
0041ddae  MOV ECX,EAX
0041ddb0  MOV EAX,dword ptr [ESP + 0xc]
0041ddb4  PUSH EDI
0041ddb5  TEST EAX,EAX
0041ddb7  JZ 0x0041ddcd
0041ddb9  MOV ESI,EDX
0041ddbb  MOV EBX,dword ptr [ESI]
0041ddbd  MOV EDI,EAX
0041ddbf  MOV dword ptr [EDI],EBX
0041ddc1  MOV EBX,dword ptr [ESI + 0x4]
0041ddc4  MOV dword ptr [EDI + 0x4],EBX
0041ddc7  MOV ESI,dword ptr [ESI + 0x8]
0041ddca  MOV dword ptr [EDI + 0x8],ESI
0041ddcd  ADD EAX,0xc
0041ddd0  DEC ECX
0041ddd1  JNZ 0x0041ddb5
0041ddd3  POP EDI
0041ddd4  POP ESI
0041ddd5  POP EBX
0041ddd6  RET
