0073ccf0  PUSH ECX
0073ccf1  PUSH ESI
0073ccf2  MOV ESI,ECX
0073ccf4  MOV EAX,dword ptr [ESI + 0x294]
0073ccfa  FILD dword ptr [ESI + 0x294]
0073cd00  TEST EAX,EAX
0073cd02  JGE 0x0073cd0a
0073cd04  FADD float ptr [0x00891214]
0073cd0a  FMUL float ptr [ESP + 0x10]
0073cd0e  CALL 0x007c4b80
0073cd13  FLD float ptr [ESP + 0x10]
0073cd17  MOV ECX,dword ptr [ESP + 0xc]
0073cd1b  FSTP float ptr [ESI + ECX*0x4 + 0x33ec]
0073cd22  MOV dword ptr [ESI + ECX*0x4 + 0x33e4],EAX
0073cd29  POP ESI
0073cd2a  POP ECX
0073cd2b  RET 0x8
