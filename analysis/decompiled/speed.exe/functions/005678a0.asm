005678a0  MOV AL,byte ptr [ESP + 0x4]
005678a4  TEST AL,AL
005678a6  JZ 0x005678c4
005678a8  FLD float ptr [0x008a04f0]
005678ae  MOV dword ptr [0x0091cf04],0xc2f00000
005678b8  MOV dword ptr [0x0091cf0c],0xbf700000
005678c2  JMP 0x005678de
005678c4  FLD float ptr [0x008970c0]
005678ca  MOV dword ptr [0x0091cf04],0x0
005678d4  MOV dword ptr [0x0091cf0c],0x3f700000
005678de  FLD ST0
005678e0  FADD float ptr [ECX + 0xb8]
005678e6  FSTP float ptr [ECX + 0xb8]
005678ec  MOV EAX,dword ptr [ECX + 0x3c]
005678ef  MOV EAX,dword ptr [EAX + 0x2c]
005678f2  FLD ST0
005678f4  FADD float ptr [EAX + 0x1c]
005678f7  FSTP float ptr [EAX + 0x1c]
005678fa  MOV EDX,dword ptr [ECX + 0x40]
005678fd  MOV EAX,dword ptr [EDX + 0x2c]
00567900  FLD ST0
00567902  FADD float ptr [EAX + 0x1c]
00567905  FSTP float ptr [EAX + 0x1c]
00567908  MOV EAX,dword ptr [ECX + 0x44]
0056790b  MOV EAX,dword ptr [EAX + 0x2c]
0056790e  FLD ST0
00567910  FADD float ptr [EAX + 0x1c]
00567913  FSTP float ptr [EAX + 0x1c]
00567916  MOV EDX,dword ptr [ECX + 0x48]
00567919  MOV EAX,dword ptr [EDX + 0x2c]
0056791c  FLD ST0
0056791e  FADD float ptr [EAX + 0x1c]
00567921  FSTP float ptr [EAX + 0x1c]
00567924  MOV EAX,dword ptr [ECX + 0x90]
0056792a  MOV EAX,dword ptr [EAX + 0x2c]
0056792d  FADD float ptr [EAX + 0x1c]
00567930  FSTP float ptr [EAX + 0x1c]
00567933  MOV EDX,dword ptr [ECX + 0x90]
00567939  MOV EAX,dword ptr [EDX + 0x2c]
0056793c  MOV ECX,dword ptr [ECX + 0xbc]
00567942  MOV dword ptr [EAX + 0x20],ECX
00567945  RET 0x4
