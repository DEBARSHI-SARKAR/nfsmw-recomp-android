00722030  SUB ESP,0xc
00722033  MOVSX EAX,byte ptr [ECX + 0xc]
00722037  FLD float ptr [ECX + 0x4]
0072203a  FLD float ptr [ECX + 0x8]
0072203d  MOVSX EDX,byte ptr [ECX + 0xd]
00722041  MOV dword ptr [ESP],EAX
00722044  MOVSX EAX,byte ptr [ECX + 0xe]
00722048  FILD dword ptr [ESP]
0072204b  MOV ECX,dword ptr [ECX]
0072204d  MOV dword ptr [ESP],EDX
00722050  FMUL float ptr [0x008b2a08]
00722056  FSTP float ptr [ESP + 0x4]
0072205a  FILD dword ptr [ESP]
0072205d  MOV dword ptr [ESP],EAX
00722060  MOV EAX,dword ptr [ESP + 0x10]
00722064  MOV dword ptr [EAX],ECX
00722066  FMUL float ptr [0x008b2a08]
0072206c  FSTP float ptr [ESP + 0x8]
00722070  FILD dword ptr [ESP]
00722073  FMUL float ptr [0x008b2a08]
00722079  FSTP float ptr [ESP]
0072207c  FXCH
0072207e  FSTP float ptr [EAX + 0x4]
00722081  FSTP float ptr [EAX + 0x8]
00722084  MOV EAX,dword ptr [ESP + 0x14]
00722088  TEST EAX,EAX
0072208a  JZ 0x0072209f
0072208c  MOV EDX,dword ptr [ESP + 0x4]
00722090  MOV ECX,dword ptr [ESP + 0x8]
00722094  MOV dword ptr [EAX],EDX
00722096  MOV EDX,dword ptr [ESP]
00722099  MOV dword ptr [EAX + 0x4],ECX
0072209c  MOV dword ptr [EAX + 0x8],EDX
0072209f  ADD ESP,0xc
007220a2  RET 0x8
