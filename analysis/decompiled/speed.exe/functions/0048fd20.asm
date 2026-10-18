0048fd20  PUSH ESI
0048fd21  MOV ESI,ECX
0048fd23  MOV EAX,dword ptr [ESI + 0x14]
0048fd26  TEST EAX,EAX
0048fd28  PUSH EDI
0048fd29  MOV EDI,dword ptr [ESP + 0xc]
0048fd2d  JZ 0x0048fd54
0048fd2f  MOV ECX,dword ptr [ESI + 0xc]
0048fd32  MOV EDX,dword ptr [ECX + 0x4]
0048fd35  MOV ECX,dword ptr [EDI + 0x4]
0048fd38  MOV CX,word ptr [ECX]
0048fd3b  CMP CX,word ptr [EDX]
0048fd3e  JC 0x0048fd6f
0048fd40  MOV ECX,dword ptr [0x009117f4]
0048fd46  MOV EDX,dword ptr [ECX]
0048fd48  PUSH EAX
0048fd49  CALL dword ptr [EDX + 0x18]
0048fd4c  MOV EAX,dword ptr [EDI + 0x4]
0048fd4f  MOV AX,word ptr [EAX]
0048fd52  JMP 0x0048fd5a
0048fd54  MOV ECX,dword ptr [EDI + 0x4]
0048fd57  MOV AX,word ptr [ECX]
0048fd5a  MOV ECX,dword ptr [0x009117f4]
0048fd60  MOV EDX,dword ptr [ECX]
0048fd62  MOVZX EAX,AX
0048fd65  SHL EAX,0x2
0048fd68  PUSH EAX
0048fd69  CALL dword ptr [EDX + 0x14]
0048fd6c  MOV dword ptr [ESI + 0x14],EAX
0048fd6f  MOV dword ptr [ESI + 0xc],EDI
0048fd72  POP EDI
0048fd73  MOV dword ptr [ESI + 0x10],0xffffffff
0048fd7a  POP ESI
0048fd7b  RET 0x4
