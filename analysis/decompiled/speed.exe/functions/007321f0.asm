007321f0  PUSH ECX
007321f1  MOV EAX,dword ptr [ESP + 0xc]
007321f5  MOV ECX,dword ptr [EAX + 0xc]
007321f8  FLD float ptr [EAX + 0x4]
007321fb  FLD float ptr [EAX + 0x8]
007321fe  MOV dword ptr [ESP],ECX
00732201  MOV ECX,dword ptr [ESP + 0x10]
00732205  FLD float ptr [ECX + 0x4]
00732208  MOV EDX,dword ptr [ECX + 0x8]
0073220b  FLD float ptr [EAX]
0073220d  MOV EAX,dword ptr [ESP + 0x8]
00732211  FSUB float ptr [ECX]
00732213  MOV dword ptr [ESP + 0xc],EDX
00732217  MOV EDX,dword ptr [ECX + 0xc]
0073221a  MOV dword ptr [ESP + 0x10],EDX
0073221e  FSTP float ptr [EAX]
00732220  FXCH ST2
00732222  FSUB ST0,ST2
00732224  FSTP float ptr [EAX + 0x4]
00732227  FSTP ST1
00732229  FSUB float ptr [ESP + 0xc]
0073222d  FSTP float ptr [EAX + 0x8]
00732230  FLD float ptr [ESP]
00732233  FSUB float ptr [ESP + 0x10]
00732237  FSTP float ptr [EAX + 0xc]
0073223a  POP ECX
0073223b  RET
