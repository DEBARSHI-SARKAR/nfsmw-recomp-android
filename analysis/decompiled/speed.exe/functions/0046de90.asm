0046de90  MOV EAX,dword ptr [ECX + 0xc4]
0046de96  TEST EAX,EAX
0046de98  JZ 0x0046dec2
0046de9a  MOV DL,byte ptr [EAX + 0x2]
0046de9d  TEST DL,DL
0046de9f  JZ 0x0046dec2
0046dea1  MOV EAX,dword ptr [ECX + 0x8c]
0046dea7  FLD float ptr [ESP + 0x4]
0046deab  FMUL float ptr [EAX + 0x10]
0046deae  FADD float ptr [EAX + 0x14]
0046deb1  FMUL float ptr [ESP + 0x4]
0046deb5  FADD float ptr [EAX + 0x18]
0046deb8  FMUL float ptr [ESP + 0x4]
0046debc  FADD float ptr [EAX + 0x1c]
0046debf  RET 0x4
0046dec2  FLD float ptr [0x0089096c]
0046dec8  MOV ECX,dword ptr [ECX + 0x8c]
0046dece  FSUB float ptr [ESP + 0x4]
0046ded2  FMUL float ptr [ECX]
0046ded4  FLD float ptr [ESP + 0x4]
0046ded8  FMUL float ptr [ECX + 0x8]
0046dedb  FADDP
0046dedd  RET 0x4
