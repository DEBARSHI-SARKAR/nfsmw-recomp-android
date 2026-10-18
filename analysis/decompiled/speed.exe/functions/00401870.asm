00401870  SUB ESP,0xc
00401873  MOV ECX,dword ptr [ESP + 0x14]
00401877  MOV EAX,dword ptr [ESP + 0x10]
0040187b  FLD float ptr [ECX + 0x8]
0040187e  FMUL float ptr [EAX + 0x4]
00401881  FLD float ptr [ECX + 0x4]
00401884  FMUL float ptr [EAX + 0x8]
00401887  FSUBP
00401889  FSTP float ptr [ESP]
0040188c  FLD float ptr [ECX]
0040188e  FMUL float ptr [EAX + 0x8]
00401891  FLD float ptr [EAX]
00401893  FMUL float ptr [ECX + 0x8]
00401896  FSUBP
00401898  FSTP float ptr [ESP + 0x4]
0040189c  MOV EDX,dword ptr [ESP + 0x4]
004018a0  FLD float ptr [EAX]
004018a2  FMUL float ptr [ECX + 0x4]
004018a5  FLD float ptr [ECX]
004018a7  MOV ECX,dword ptr [ESP]
004018aa  FMUL float ptr [EAX + 0x4]
004018ad  MOV EAX,dword ptr [ESP + 0x18]
004018b1  MOV dword ptr [EAX],ECX
004018b3  FSUBP
004018b5  MOV dword ptr [EAX + 0x4],EDX
004018b8  FSTP float ptr [ESP + 0x8]
004018bc  MOV ECX,dword ptr [ESP + 0x8]
004018c0  MOV dword ptr [EAX + 0x8],ECX
004018c3  ADD ESP,0xc
004018c6  RET
