0073cfa0  MOV EAX,dword ptr [ESP + 0x4]
0073cfa4  MOV EDX,dword ptr [ESP + 0x8]
0073cfa8  IMUL EAX,EAX,0x1c
0073cfab  ADD EAX,ECX
0073cfad  MOV ECX,dword ptr [EAX + 0x4]
0073cfb0  MOV dword ptr [EDX],ECX
0073cfb2  MOV ECX,dword ptr [EAX + 0x8]
0073cfb5  MOV EDX,dword ptr [ESP + 0xc]
0073cfb9  MOV dword ptr [EDX],ECX
0073cfbb  MOV ECX,dword ptr [ESP + 0x10]
0073cfbf  FLD float ptr [EAX + 0xc]
0073cfc2  FDIV float ptr [EAX + 0x10]
0073cfc5  FSTP float ptr [ECX]
0073cfc7  MOV ECX,dword ptr [ESP + 0x14]
0073cfcb  MOV EDX,dword ptr [EAX + 0x14]
0073cfce  MOV dword ptr [ECX],EDX
0073cfd0  MOV ECX,dword ptr [ESP + 0x18]
0073cfd4  TEST ECX,ECX
0073cfd6  JZ 0x0073cfdd
0073cfd8  MOV EDX,dword ptr [EAX + 0x1c]
0073cfdb  MOV dword ptr [ECX],EDX
0073cfdd  RET 0x18
