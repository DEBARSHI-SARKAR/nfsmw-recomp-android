00653740  FLD float ptr [0x0089096c]
00653746  MOV EAX,dword ptr [ESP + 0xc]
0065374a  FSUB float ptr [ESP + 0x10]
0065374e  MOV ECX,dword ptr [ESP + 0x8]
00653752  MOV EDX,dword ptr [ESP + 0x4]
00653756  FMUL float ptr [EAX]
00653758  FLD float ptr [ESP + 0x10]
0065375c  FMUL float ptr [ECX]
0065375e  FADDP
00653760  FSTP float ptr [EDX]
00653762  RET 0x10
