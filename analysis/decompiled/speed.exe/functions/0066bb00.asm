0066bb00  MOV AL,byte ptr [ESP + 0x8]
0066bb04  TEST AL,AL
0066bb06  JZ 0x0066bb10
0066bb08  FLD float ptr [0x0089096c]
0066bb0e  JMP 0x0066bb16
0066bb10  FLD float ptr [0x008a9348]
0066bb16  MOV EAX,dword ptr [ESP + 0x4]
0066bb1a  MOV ECX,dword ptr [EAX + 0x8]
0066bb1d  FLD float ptr [ECX + 0x50]
0066bb20  FMUL float ptr [0x008916cc]
0066bb26  FADD float ptr [0x008910f0]
0066bb2c  FMULP
0066bb2e  RET
