0066bc40  MOV EAX,dword ptr [ESP + 0x4]
0066bc44  MOV ECX,dword ptr [EAX + 0x8]
0066bc47  MOV EAX,dword ptr [ESP + 0x8]
0066bc4b  FLD float ptr [ECX + 0x10]
0066bc4e  TEST EAX,EAX
0066bc50  JZ 0x0066bc5f
0066bc52  FLD ST0
0066bc54  FMUL float ptr [EAX + 0x14]
0066bc57  FMUL float ptr [0x008910f0]
0066bc5d  FSUBP
0066bc5f  RET
