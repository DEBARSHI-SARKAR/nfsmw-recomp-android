0048da30  MOV ECX,dword ptr [ESP + 0x8]
0048da34  MOV EAX,dword ptr [ESP + 0x4]
0048da38  FLD float ptr [ECX + 0x8]
0048da3b  FMUL float ptr [EAX + 0x4]
0048da3e  FLD float ptr [EAX + 0x8]
0048da41  FMUL float ptr [ECX + 0x4]
0048da44  FSUBP
0048da46  FLD float ptr [EAX + 0x8]
0048da49  FMUL float ptr [ECX]
0048da4b  FLD float ptr [ECX + 0x8]
0048da4e  FMUL float ptr [EAX]
0048da50  FSUBP
0048da52  FLD float ptr [EAX]
0048da54  FMUL float ptr [ECX + 0x4]
0048da57  FLD float ptr [ECX]
0048da59  FMUL float ptr [EAX + 0x4]
0048da5c  FSUBP
0048da5e  FLD ST0
0048da60  FMUL ST1
0048da62  FLD ST2
0048da64  FMUL ST3
0048da66  FADDP
0048da68  FLD ST3
0048da6a  FMUL ST4
0048da6c  FADDP
0048da6e  FSQRT
0048da70  FSTP ST3
0048da72  FSTP ST0
0048da74  FSTP ST0
0048da76  FLD float ptr [EAX]
0048da78  FMUL float ptr [ECX]
0048da7a  FLD float ptr [EAX + 0x8]
0048da7d  FMUL float ptr [ECX + 0x8]
0048da80  FADDP
0048da82  FLD float ptr [EAX + 0x4]
0048da85  FMUL float ptr [ECX + 0x4]
0048da88  FADDP
0048da8a  FPATAN
0048da8c  RET
