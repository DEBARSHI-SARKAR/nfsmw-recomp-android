0048dc20  MOV EAX,dword ptr [ESP + 0x4]
0048dc24  FLD float ptr [EAX + 0x8]
0048dc27  MOV ECX,dword ptr [ESP + 0xc]
0048dc2b  FLD float ptr [EAX + 0x4]
0048dc2e  FLD float ptr [EAX]
0048dc30  FLD float ptr [ESP + 0x8]
0048dc34  FMUL float ptr [0x008933d4]
0048dc3a  FST float ptr [ESP + 0x4]
0048dc3e  FSIN
0048dc40  FLD ST1
0048dc42  FMUL ST2
0048dc44  FLD ST3
0048dc46  FMUL ST4
0048dc48  FADDP
0048dc4a  FLD ST4
0048dc4c  FMUL ST5
0048dc4e  FADDP
0048dc50  FSQRT
0048dc52  FSTP ST4
0048dc54  FXCH ST3
0048dc56  FDIVP ST3,ST0
0048dc58  FSTP ST0
0048dc5a  FSTP ST0
0048dc5c  FLD ST0
0048dc5e  FMUL float ptr [EAX]
0048dc60  FSTP float ptr [ECX]
0048dc62  FLD ST0
0048dc64  FMUL float ptr [EAX + 0x4]
0048dc67  FSTP float ptr [ECX + 0x4]
0048dc6a  FMUL float ptr [EAX + 0x8]
0048dc6d  FSTP float ptr [ECX + 0x8]
0048dc70  FLD float ptr [ESP + 0x4]
0048dc74  FCOS
0048dc76  FSTP float ptr [ECX + 0xc]
0048dc79  RET
