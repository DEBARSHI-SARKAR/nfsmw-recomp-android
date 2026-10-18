004018f0  MOV EAX,dword ptr [ESP + 0x4]
004018f4  MOV ECX,dword ptr [ESP + 0x8]
004018f8  FLD float ptr [EAX + 0x8]
004018fb  FMUL float ptr [ECX + 0x8]
004018fe  FLD float ptr [EAX + 0x4]
00401901  FMUL float ptr [ECX + 0x4]
00401904  FADDP
00401906  FLD float ptr [EAX]
00401908  FMUL float ptr [ECX]
0040190a  FADDP
0040190c  RET
