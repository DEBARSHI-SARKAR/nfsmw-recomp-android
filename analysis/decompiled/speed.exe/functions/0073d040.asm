0073d040  MOV EAX,dword ptr [ESP + 0x4]
0073d044  FLD float ptr [EAX + 0x4]
0073d047  FLD float ptr [EAX + 0x8]
0073d04a  MOV EAX,dword ptr [EAX]
0073d04c  FXCH
0073d04e  MOV [0x009b3540],EAX
0073d053  FSTP float ptr [0x009b3544]
0073d059  FSTP float ptr [0x009b3548]
0073d05f  RET
