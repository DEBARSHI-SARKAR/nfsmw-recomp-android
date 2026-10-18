0078a670  MOV EAX,dword ptr [ESP + 0x4]
0078a674  PUSH ESI
0078a675  MOV ESI,ECX
0078a677  PUSH EAX
0078a678  PUSH ESI
0078a679  CALL 0x00460c70
0078a67e  FLD float ptr [ESP + 0x18]
0078a682  MOV ECX,dword ptr [ESP + 0x14]
0078a686  FSUB float ptr [ESP + 0x14]
0078a68a  MOV EDX,dword ptr [ESP + 0x18]
0078a68e  MOV dword ptr [ESI + 0x130],ECX
0078a694  MOV ECX,dword ptr [ESP + 0x1c]
0078a698  MOV EAX,0x1
0078a69d  SHL EAX,CL
0078a69f  ADD ESP,0x8
0078a6a2  MOV dword ptr [ESI + 0x134],EDX
0078a6a8  MOV dword ptr [ESI + 0x12c],ECX
0078a6ae  DEC EAX
0078a6af  TEST EAX,EAX
0078a6b1  MOV dword ptr [ESP + 0x10],EAX
0078a6b5  FILD dword ptr [ESP + 0x10]
0078a6b9  JGE 0x0078a6c1
0078a6bb  FADD float ptr [0x00891214]
0078a6c1  FDIVP
0078a6c3  MOV dword ptr [ESI + 0x140],0x7f7fffff
0078a6cd  MOV dword ptr [ESI + 0x144],0xff7fffff
0078a6d7  MOV byte ptr [ESI + 0x148],0x1
0078a6de  FST float ptr [ESI + 0x13c]
0078a6e4  FMUL float ptr [0x008933d4]
0078a6ea  FSTP float ptr [ESI + 0x138]
0078a6f0  POP ESI
0078a6f1  RET 0x10
