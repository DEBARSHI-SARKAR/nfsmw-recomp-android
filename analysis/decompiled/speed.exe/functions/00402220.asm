00402220  MOV EAX,dword ptr [ESP + 0x4]
00402224  MOV ECX,dword ptr [ESP + 0x8]
00402228  FLD float ptr [EAX + 0x8]
0040222b  FMUL float ptr [ECX + 0x8]
0040222e  FLD float ptr [EAX + 0x4]
00402231  FMUL float ptr [ECX + 0x4]
00402234  FADDP
00402236  FLD float ptr [EAX]
00402238  FMUL float ptr [ECX]
0040223a  FADDP
0040223c  RET
