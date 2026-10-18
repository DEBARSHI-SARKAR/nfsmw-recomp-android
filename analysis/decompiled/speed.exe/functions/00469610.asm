00469610  MOV EAX,dword ptr [ESP + 0x8]
00469614  FLD float ptr [EAX + 0x4]
00469617  MOV ECX,dword ptr [ESP + 0xc]
0046961b  FLD float ptr [EAX + 0x8]
0046961e  MOV EDX,dword ptr [ECX + 0x8]
00469621  FLD float ptr [ECX + 0x4]
00469624  MOV dword ptr [ESP + 0x8],EDX
00469628  FLD float ptr [EAX]
0046962a  MOV EAX,dword ptr [ESP + 0x4]
0046962e  FSUB float ptr [ECX]
00469630  FSTP float ptr [EAX]
00469632  FXCH ST2
00469634  FSUB ST0,ST2
00469636  FSTP float ptr [EAX + 0x4]
00469639  FSTP ST1
0046963b  FSUB float ptr [ESP + 0x8]
0046963f  FSTP float ptr [EAX + 0x8]
00469642  RET
