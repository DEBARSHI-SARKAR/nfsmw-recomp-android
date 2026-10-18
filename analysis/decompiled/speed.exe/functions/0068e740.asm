0068e740  SUB ESP,0xc
0068e743  MOV EAX,dword ptr [ESP + 0x14]
0068e747  PUSH EBX
0068e748  PUSH ESI
0068e749  MOV ESI,ECX
0068e74b  MOV ECX,dword ptr [ESI + EAX*0x4 + 0x168]
0068e752  MOV EBX,dword ptr [ESI + 0xa0]
0068e758  PUSH EDI
0068e759  ADD ECX,0x4c
0068e75c  TEST EBX,EBX
0068e75e  MOV EDI,ECX
0068e760  MOV ECX,dword ptr [EDI]
0068e762  MOV EDX,dword ptr [EDI + 0x4]
0068e765  MOV EDI,dword ptr [EDI + 0x8]
0068e768  MOV dword ptr [ESP + 0xc],ECX
0068e76c  MOV dword ptr [ESP + 0x10],EDX
0068e770  MOV dword ptr [ESP + 0x14],EDI
0068e774  JNZ 0x0068e78d
0068e776  MOV EAX,dword ptr [ESP + 0x1c]
0068e77a  MOV ESI,EAX
0068e77c  MOV dword ptr [ESI],ECX
0068e77e  MOV dword ptr [ESI + 0x4],EDX
0068e781  MOV dword ptr [ESI + 0x8],EDI
0068e784  POP EDI
0068e785  POP ESI
0068e786  POP EBX
0068e787  ADD ESP,0xc
0068e78a  RET 0x8
0068e78d  MOV EDX,dword ptr [ESI]
0068e78f  PUSH EAX
0068e790  MOV ECX,ESI
0068e792  CALL dword ptr [EDX + 0x68]
0068e795  FSTP float ptr [ESP + 0x20]
0068e799  MOV ECX,dword ptr [ESI + 0xa0]
0068e79f  MOV EAX,dword ptr [ECX]
0068e7a1  CALL dword ptr [EAX + 0xa0]
0068e7a7  FLD float ptr [ESP + 0x20]
0068e7ab  FMUL float ptr [EAX]
0068e7ad  POP EDI
0068e7ae  POP ESI
0068e7af  POP EBX
0068e7b0  FADD float ptr [ESP]
0068e7b3  FSTP float ptr [ESP]
0068e7b6  MOV EDX,dword ptr [ESP]
0068e7b9  FLD float ptr [ESP + 0x14]
0068e7bd  FMUL float ptr [EAX + 0x4]
0068e7c0  FADD float ptr [ESP + 0x4]
0068e7c4  FSTP float ptr [ESP + 0x4]
0068e7c8  FLD float ptr [ESP + 0x14]
0068e7cc  FMUL float ptr [EAX + 0x8]
0068e7cf  MOV EAX,dword ptr [ESP + 0x10]
0068e7d3  MOV ECX,EAX
0068e7d5  MOV dword ptr [ECX],EDX
0068e7d7  MOV EDX,dword ptr [ESP + 0x4]
0068e7db  FADD float ptr [ESP + 0x8]
0068e7df  MOV dword ptr [ECX + 0x4],EDX
0068e7e2  FSTP float ptr [ESP + 0x8]
0068e7e6  MOV EDX,dword ptr [ESP + 0x8]
0068e7ea  MOV dword ptr [ECX + 0x8],EDX
0068e7ed  ADD ESP,0xc
0068e7f0  RET 0x8
