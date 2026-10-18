004021e0  MOV EAX,dword ptr [ESP + 0x8]
004021e4  FLD float ptr [EAX + 0x4]
004021e7  MOV ECX,dword ptr [ESP + 0xc]
004021eb  FLD float ptr [EAX + 0x8]
004021ee  MOV EDX,dword ptr [ECX + 0x8]
004021f1  FLD float ptr [ECX + 0x4]
004021f4  MOV dword ptr [ESP + 0x8],EDX
004021f8  FLD float ptr [EAX]
004021fa  MOV EAX,dword ptr [ESP + 0x4]
004021fe  FSUB float ptr [ECX]
00402200  FSTP float ptr [EAX]
00402202  FXCH ST2
00402204  FSUB ST0,ST2
00402206  FSTP float ptr [EAX + 0x4]
00402209  FSTP ST1
0040220b  FSUB float ptr [ESP + 0x8]
0040220f  FSTP float ptr [EAX + 0x8]
00402212  RET
