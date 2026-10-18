0045fba0  MOV EAX,dword ptr [ESP + 0xc]
0045fba4  FLD float ptr [EAX]
0045fba6  FLD float ptr [EAX + 0x4]
0045fba9  FLD float ptr [EAX + 0x8]
0045fbac  MOV EAX,dword ptr [ESP + 0x4]
0045fbb0  FLD ST2
0045fbb2  FSTP float ptr [EAX]
0045fbb4  FLD ST1
0045fbb6  FSTP float ptr [EAX + 0x4]
0045fbb9  FST float ptr [EAX + 0x8]
0045fbbc  MOV EAX,dword ptr [ESP + 0x8]
0045fbc0  FXCH ST2
0045fbc2  FSTP float ptr [EAX]
0045fbc4  FSTP float ptr [EAX + 0x4]
0045fbc7  FSTP float ptr [EAX + 0x8]
0045fbca  RET
