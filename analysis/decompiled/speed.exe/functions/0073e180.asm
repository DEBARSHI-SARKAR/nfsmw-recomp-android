0073e180  FLD float ptr [0x00890968]
0073e186  PUSH EBX
0073e187  FLD float ptr [ESP + 0xc]
0073e18b  MOV EBX,dword ptr [ESP + 0x14]
0073e18f  PUSH ESI
0073e190  FUCOMPP
0073e192  MOV ESI,dword ptr [ESP + 0xc]
0073e196  XOR EAX,EAX
0073e198  PUSH EDI
0073e199  MOV EDI,ECX
0073e19b  MOV ECX,ESI
0073e19d  MOV dword ptr [ECX],EAX
0073e19f  MOV dword ptr [ECX + 0x4],EAX
0073e1a2  MOV dword ptr [ECX + 0x8],EAX
0073e1a5  MOV dword ptr [ECX + 0xc],EAX
0073e1a8  FNSTSW AX
0073e1aa  TEST AH,0x44
0073e1ad  JNP 0x0073e1e8
0073e1af  LEA ECX,[EDI + 0x184]
0073e1b5  CALL EBX
0073e1b7  FLD float ptr [ESP + 0x14]
0073e1bb  FMUL float ptr [EAX]
0073e1bd  FADD float ptr [ESI]
0073e1bf  FSTP float ptr [ESI]
0073e1c1  FLD float ptr [ESP + 0x14]
0073e1c5  FMUL float ptr [EAX + 0x4]
0073e1c8  FADD float ptr [ESI + 0x4]
0073e1cb  FSTP float ptr [ESI + 0x4]
0073e1ce  FLD float ptr [ESP + 0x14]
0073e1d2  FMUL float ptr [EAX + 0x8]
0073e1d5  FADD float ptr [ESI + 0x8]
0073e1d8  FSTP float ptr [ESI + 0x8]
0073e1db  FLD float ptr [ESP + 0x14]
0073e1df  FMUL float ptr [EAX + 0xc]
0073e1e2  FADD float ptr [ESI + 0xc]
0073e1e5  FSTP float ptr [ESI + 0xc]
0073e1e8  FLD float ptr [0x00890968]
0073e1ee  FLD float ptr [ESP + 0x18]
0073e1f2  FUCOMPP
0073e1f4  FNSTSW AX
0073e1f6  TEST AH,0x44
0073e1f9  JNP 0x0073e234
0073e1fb  LEA ECX,[EDI + 0x198]
0073e201  CALL EBX
0073e203  FLD float ptr [ESP + 0x18]
0073e207  FMUL float ptr [EAX]
0073e209  FADD float ptr [ESI]
0073e20b  FSTP float ptr [ESI]
0073e20d  FLD float ptr [ESP + 0x18]
0073e211  FMUL float ptr [EAX + 0x4]
0073e214  FADD float ptr [ESI + 0x4]
0073e217  FSTP float ptr [ESI + 0x4]
0073e21a  FLD float ptr [ESP + 0x18]
0073e21e  FMUL float ptr [EAX + 0x8]
0073e221  FADD float ptr [ESI + 0x8]
0073e224  FSTP float ptr [ESI + 0x8]
0073e227  FLD float ptr [ESP + 0x18]
0073e22b  FMUL float ptr [EAX + 0xc]
0073e22e  FADD float ptr [ESI + 0xc]
0073e231  FSTP float ptr [ESI + 0xc]
0073e234  POP EDI
0073e235  POP ESI
0073e236  POP EBX
0073e237  RET 0x10
