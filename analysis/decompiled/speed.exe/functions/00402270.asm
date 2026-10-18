00402270  MOV EAX,dword ptr [ESP + 0x8]
00402274  FLD float ptr [EAX + 0x4]
00402277  FLD float ptr [EAX + 0x8]
0040227a  FLD float ptr [ESP + 0xc]
0040227e  FMUL float ptr [EAX]
00402280  MOV EAX,dword ptr [ESP + 0x4]
00402284  FSTP float ptr [EAX]
00402286  FXCH
00402288  FMUL float ptr [ESP + 0xc]
0040228c  FSTP float ptr [EAX + 0x4]
0040228f  FMUL float ptr [ESP + 0xc]
00402293  FSTP float ptr [EAX + 0x8]
00402296  RET
