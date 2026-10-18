0069ee20  SUB ESP,0xc
0069ee23  MOV EAX,dword ptr [ECX + 0xc0]
0069ee29  FLD float ptr [EAX + 0x70]
0069ee2c  MOV EAX,dword ptr [ESP + 0x10]
0069ee30  FMUL float ptr [EAX + 0xbc]
0069ee36  MOV EDX,dword ptr [EAX + 0x54]
0069ee39  FLD float ptr [EAX + 0x50]
0069ee3c  MOV EAX,dword ptr [EAX + 0x58]
0069ee3f  MOV ECX,dword ptr [ECX + 0xe0]
0069ee45  FXCH
0069ee47  FCHS
0069ee49  MOV dword ptr [ESP + 0x4],EDX
0069ee4d  FST float ptr [ESP + 0x10]
0069ee51  MOV dword ptr [ESP + 0x8],EAX
0069ee55  FMUL ST1
0069ee57  LEA EAX,[ESP]
0069ee5a  PUSH EAX
0069ee5b  FSTP float ptr [ESP + 0x4]
0069ee5f  FSTP ST0
0069ee61  FLD float ptr [ESP + 0x8]
0069ee65  FMUL float ptr [ESP + 0x14]
0069ee69  FSTP float ptr [ESP + 0x8]
0069ee6d  FLD float ptr [ESP + 0xc]
0069ee71  FMUL float ptr [ESP + 0x14]
0069ee75  FSTP float ptr [ESP + 0xc]
0069ee79  MOV EDX,dword ptr [ECX]
0069ee7b  CALL dword ptr [EDX + 0x8c]
0069ee81  ADD ESP,0xc
0069ee84  RET 0x4
