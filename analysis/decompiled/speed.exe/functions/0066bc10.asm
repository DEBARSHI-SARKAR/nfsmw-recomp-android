0066bc10  MOV EAX,dword ptr [ESP + 0x4]
0066bc14  MOV ECX,dword ptr [EAX + 0x8]
0066bc17  MOV EAX,dword ptr [ESP + 0x8]
0066bc1b  FLD float ptr [ECX + 0x4]
0066bc1e  TEST EAX,EAX
0066bc20  JZ 0x0066bc33
0066bc22  FLD float ptr [EAX + 0x14]
0066bc25  FMUL float ptr [0x008910f0]
0066bc2b  FADD float ptr [0x0089096c]
0066bc31  FMULP
0066bc33  FADD float ptr [0x0089096c]
0066bc39  RET
