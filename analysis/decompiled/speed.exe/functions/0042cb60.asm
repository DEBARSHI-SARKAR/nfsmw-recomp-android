0042cb60  MOV EAX,dword ptr [ESP + 0x8]
0042cb64  PUSH ESI
0042cb65  MOV ESI,ECX
0042cb67  CMP EAX,dword ptr [ESI + 0x4]
0042cb6a  PUSH EDI
0042cb6b  MOV EDI,dword ptr [EAX]
0042cb6d  JZ 0x0042cb90
0042cb6f  MOV ECX,dword ptr [EAX + 0x4]
0042cb72  MOV EDX,dword ptr [EAX]
0042cb74  MOV dword ptr [ECX],EDX
0042cb76  MOV ECX,dword ptr [EAX]
0042cb78  MOV EDX,dword ptr [EAX + 0x4]
0042cb7b  PUSH 0x0
0042cb7d  PUSH 0xc
0042cb7f  MOV dword ptr [ECX + 0x4],EDX
0042cb82  PUSH EAX
0042cb83  MOV ECX,0x925b30
0042cb88  CALL 0x005d0370
0042cb8d  DEC dword ptr [ESI + 0x8]
0042cb90  MOV EAX,dword ptr [ESP + 0xc]
0042cb94  MOV dword ptr [EAX],EDI
0042cb96  POP EDI
0042cb97  POP ESI
0042cb98  RET 0x8
