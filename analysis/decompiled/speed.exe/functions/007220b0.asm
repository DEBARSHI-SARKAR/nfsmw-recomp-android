007220b0  SUB ESP,0xc
007220b3  MOVSX EDX,byte ptr [ECX + 0xc]
007220b7  FLD float ptr [ECX]
007220b9  MOV EAX,dword ptr [ECX + 0x8]
007220bc  FLD float ptr [ECX + 0x4]
007220bf  MOV dword ptr [ESP + 0x4],EAX
007220c3  MOVSX EAX,byte ptr [ECX + 0xd]
007220c7  MOVSX ECX,byte ptr [ECX + 0xe]
007220cb  MOV dword ptr [ESP + 0x8],EDX
007220cf  FILD dword ptr [ESP + 0x8]
007220d3  MOV dword ptr [ESP + 0x8],EAX
007220d7  MOV EAX,dword ptr [ESP + 0x10]
007220db  FMUL float ptr [0x008b2a08]
007220e1  FILD dword ptr [ESP + 0x8]
007220e5  MOV dword ptr [ESP + 0x8],ECX
007220e9  FMUL float ptr [0x008b2a08]
007220ef  FSTP float ptr [ESP]
007220f2  FILD dword ptr [ESP + 0x8]
007220f6  FMUL float ptr [0x008b2a08]
007220fc  FSTP float ptr [ESP + 0x8]
00722100  FLD ST0
00722102  FADD ST0,ST3
00722104  FSTP float ptr [EAX]
00722106  FLD float ptr [ESP]
00722109  FADD ST0,ST2
0072210b  FSTP float ptr [EAX + 0x4]
0072210e  FLD float ptr [ESP + 0x8]
00722112  FADD float ptr [ESP + 0x4]
00722116  FSTP float ptr [EAX + 0x8]
00722119  MOV EAX,dword ptr [ESP + 0x14]
0072211d  FXCH ST2
0072211f  FSUB ST0,ST2
00722121  FSTP float ptr [EAX]
00722123  FSTP ST1
00722125  FSUB float ptr [ESP]
00722128  FSTP float ptr [EAX + 0x4]
0072212b  FLD float ptr [ESP + 0x4]
0072212f  FSUB float ptr [ESP + 0x8]
00722133  FSTP float ptr [EAX + 0x8]
00722136  ADD ESP,0xc
00722139  RET 0x8
