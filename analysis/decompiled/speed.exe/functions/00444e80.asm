00444e80  MOV EAX,dword ptr [ESP + 0x8]
00444e84  FLD float ptr [ESP + 0xc]
00444e88  FMUL float ptr [EAX]
00444e8a  FLD float ptr [ESP + 0xc]
00444e8e  FMUL float ptr [EAX + 0x4]
00444e91  FLD float ptr [ESP + 0xc]
00444e95  FMUL float ptr [EAX + 0x8]
00444e98  MOV EAX,dword ptr [ESP + 0x4]
00444e9c  FXCH ST2
00444e9e  FSTP float ptr [EAX]
00444ea0  FSTP float ptr [EAX + 0x4]
00444ea3  FSTP float ptr [EAX + 0x8]
00444ea6  RET
