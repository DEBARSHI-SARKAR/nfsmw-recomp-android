00653620  FLD float ptr [0x0089096c]
00653626  MOV EAX,dword ptr [ESP + 0xc]
0065362a  FSUB float ptr [ESP + 0x10]
0065362e  MOV ECX,dword ptr [ESP + 0x8]
00653632  MOV EDX,dword ptr [ESP + 0x4]
00653636  FMUL float ptr [EAX]
00653638  FLD float ptr [ESP + 0x10]
0065363c  FMUL float ptr [ECX]
0065363e  FADDP
00653640  FSTP float ptr [EDX]
00653642  RET 0x10
