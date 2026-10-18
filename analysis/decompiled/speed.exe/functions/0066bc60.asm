0066bc60  MOV EAX,dword ptr [ESP + 0x8]
0066bc64  MOV ECX,dword ptr [EAX + 0x8]
0066bc67  FLD float ptr [ECX + 0xc]
0066bc6a  MOV ECX,dword ptr [ESP + 0xc]
0066bc6e  TEST ECX,ECX
0066bc70  JZ 0x0066bca7
0066bc72  FCOM float ptr [0x00890968]
0066bc78  FNSTSW AX
0066bc7a  TEST AH,0x41
0066bc7d  JNZ 0x0066bca7
0066bc7f  FLD float ptr [ECX + 0x18]
0066bc82  FCOM float ptr [0x00890968]
0066bc88  FNSTSW AX
0066bc8a  TEST AH,0x5
0066bc8d  JP 0x0066bc93
0066bc8f  FLD ST1
0066bc91  JMP 0x0066bc9b
0066bc93  FLD float ptr [0x0089096c]
0066bc99  FSUB ST0,ST2
0066bc9b  FMUL float ptr [0x008910f0]
0066bca1  FMUL ST1
0066bca3  FADDP ST2,ST0
0066bca5  FSTP ST0
0066bca7  MOV EDX,dword ptr [ESP + 0x4]
0066bcab  MOV EAX,dword ptr [EDX + 0x8]
0066bcae  FLD float ptr [EAX + 0x58]
0066bcb1  FSUB float ptr [EAX + 0x5c]
0066bcb4  FMULP
0066bcb6  FADD float ptr [EAX + 0x5c]
0066bcb9  RET
