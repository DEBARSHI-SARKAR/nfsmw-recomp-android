0045f2e0  MOV EAX,dword ptr [ECX + 0x18]
0045f2e3  MOV EDX,dword ptr [ESP + 0x4]
0045f2e7  PUSH ESI
0045f2e8  MOV ESI,dword ptr [ECX + 0x10]
0045f2eb  MOV dword ptr [EDX],ESI
0045f2ed  DEC EAX
0045f2ee  MOV dword ptr [ECX + 0x18],EAX
0045f2f1  MOV dword ptr [ECX + 0x10],EDX
0045f2f4  POP ESI
0045f2f5  RET 0x4
