0048fdc0  PUSH ESI
0048fdc1  MOV ESI,ECX
0048fdc3  MOV EAX,dword ptr [ESI + 0x14]
0048fdc6  TEST EAX,EAX
0048fdc8  PUSH EDI
0048fdc9  MOV EDI,dword ptr [ESP + 0xc]
0048fdcd  JZ 0x0048fdf4
0048fdcf  MOV ECX,dword ptr [ESI + 0xc]
0048fdd2  MOV EDX,dword ptr [ECX + 0x4]
0048fdd5  MOV ECX,dword ptr [EDI + 0x4]
0048fdd8  MOV CX,word ptr [ECX]
0048fddb  CMP CX,word ptr [EDX]
0048fdde  JC 0x0048fe0f
0048fde0  MOV ECX,dword ptr [0x009117f4]
0048fde6  MOV EDX,dword ptr [ECX]
0048fde8  PUSH EAX
0048fde9  CALL dword ptr [EDX + 0x18]
0048fdec  MOV EAX,dword ptr [EDI + 0x4]
0048fdef  MOV AX,word ptr [EAX]
0048fdf2  JMP 0x0048fdfa
0048fdf4  MOV ECX,dword ptr [EDI + 0x4]
0048fdf7  MOV AX,word ptr [ECX]
0048fdfa  MOV ECX,dword ptr [0x009117f4]
0048fe00  MOV EDX,dword ptr [ECX]
0048fe02  MOVZX EAX,AX
0048fe05  SHL EAX,0x2
0048fe08  PUSH EAX
0048fe09  CALL dword ptr [EDX + 0x14]
0048fe0c  MOV dword ptr [ESI + 0x14],EAX
0048fe0f  MOV dword ptr [ESI + 0xc],EDI
0048fe12  POP EDI
0048fe13  MOV dword ptr [ESI + 0x10],0xffffffff
0048fe1a  POP ESI
0048fe1b  RET 0x4
