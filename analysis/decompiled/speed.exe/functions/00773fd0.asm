00773fd0  MOV EAX,dword ptr [ESP + 0xc]
00773fd4  TEST byte ptr [EAX + 0xb],0x1
00773fd8  JZ 0x00773fe3
00773fda  MOV dword ptr [ESP + 0xc],EAX
00773fde  JMP 0x0076e0d0
00773fe3  MOV EAX,dword ptr [ESP + 0x4]
00773fe7  MOV ECX,dword ptr [ESP + 0x8]
00773feb  FLD float ptr [ECX]
00773fed  MOV EDX,dword ptr [ESP + 0x14]
00773ff1  FSUB float ptr [EAX]
00773ff3  FMUL float ptr [ESP + 0x10]
00773ff7  FADD float ptr [EAX]
00773ff9  FSTP float ptr [EDX]
00773ffb  FLD float ptr [ECX + 0x4]
00773ffe  FSUB float ptr [EAX + 0x4]
00774001  FMUL float ptr [ESP + 0x10]
00774005  FADD float ptr [EAX + 0x4]
00774008  FSTP float ptr [EDX + 0x4]
0077400b  FLD float ptr [ECX + 0x8]
0077400e  FSUB float ptr [EAX + 0x8]
00774011  FMUL float ptr [ESP + 0x10]
00774015  FADD float ptr [EAX + 0x8]
00774018  FSTP float ptr [EDX + 0x8]
0077401b  RET 0x14
