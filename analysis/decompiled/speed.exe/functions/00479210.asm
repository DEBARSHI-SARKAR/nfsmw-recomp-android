00479210  SUB ESP,0xc
00479213  MOV EAX,dword ptr [ESP + 0x10]
00479217  FLD float ptr [EAX + 0x4]
0047921a  MOV ECX,dword ptr [EAX + 0x8]
0047921d  MOV EDX,dword ptr [EAX]
0047921f  FCHS
00479221  MOV EAX,dword ptr [ESP + 0x14]
00479225  FSTP float ptr [ESP]
00479228  MOV dword ptr [ESP + 0x4],ECX
0047922c  MOV ECX,dword ptr [ESP]
0047922f  MOV dword ptr [ESP + 0x8],EDX
00479233  MOV EDX,dword ptr [ESP + 0x4]
00479237  MOV dword ptr [EAX],ECX
00479239  MOV ECX,dword ptr [ESP + 0x8]
0047923d  MOV dword ptr [EAX + 0x4],EDX
00479240  MOV dword ptr [EAX + 0x8],ECX
00479243  ADD ESP,0xc
00479246  RET
