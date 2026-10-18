00821801  MOV EAX,dword ptr [ESP + 0xc]
00821805  FLD float ptr [ESP + 0x8]
00821809  MOV ECX,dword ptr [ESP + 0x4]
0082180d  FSTP float ptr [EAX + ECX*0x4 + 0x68]
00821811  MOV dword ptr [EAX + 0x80],0x1
0082181b  RET
