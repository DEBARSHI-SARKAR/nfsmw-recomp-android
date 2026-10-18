00767790  MOV ECX,dword ptr [ESP + 0x4]
00767794  FLD float ptr [0x00890968]
0076779a  FLD float ptr [ECX + 0x4]
0076779d  FUCOMPP
0076779f  FNSTSW AX
007677a1  TEST AH,0x44
007677a4  MOV EAX,dword ptr [ESP + 0x8]
007677a8  JP 0x007677ae
007677aa  FLD float ptr [EAX + 0x4]
007677ad  RET
007677ae  MOV EDX,dword ptr [ESP + 0xc]
007677b2  FLD float ptr [EDX + 0x8]
007677b5  FSUB float ptr [EAX + 0x8]
007677b8  FMUL float ptr [ECX + 0x8]
007677bb  FLD float ptr [EDX]
007677bd  FSUB float ptr [EAX]
007677bf  FMUL float ptr [ECX]
007677c1  FADDP
007677c3  FDIV float ptr [ECX + 0x4]
007677c6  FSUBR float ptr [EAX + 0x4]
007677c9  RET
