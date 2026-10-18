00622c20  MOV EDX,dword ptr [ESP + 0x8]
00622c24  MOV EAX,ECX
00622c26  MOV ECX,dword ptr [ESP + 0x4]
00622c2a  MOV dword ptr [EAX + 0xc],EDX
00622c2d  MOV EDX,dword ptr [ESP + 0xc]
00622c31  MOV dword ptr [EAX + 0x10],EDX
00622c34  MOV EDX,dword ptr [ESP + 0x10]
00622c38  TEST ECX,ECX
00622c3a  MOV dword ptr [EAX + 0x8],ECX
00622c3d  MOV dword ptr [EAX + 0x14],EDX
00622c40  MOV EDX,dword ptr [ESP + 0x14]
00622c44  SETNZ CL
00622c47  MOV dword ptr [EAX + 0x4],0x20
00622c4e  MOV dword ptr [EAX],0x8a6f10
00622c54  MOV dword ptr [EAX + 0x18],EDX
00622c57  MOV byte ptr [0x009b0978],CL
00622c5d  MOV ECX,dword ptr [EAX + 0x8]
00622c60  TEST ECX,ECX
00622c62  JZ 0x00622c88
00622c64  MOV EDX,dword ptr [EAX + 0xc]
00622c67  MOV dword ptr [0x00903548],EDX
00622c6d  MOV ECX,dword ptr [EAX + 0x10]
00622c70  MOV dword ptr [0x009b097c],ECX
00622c76  MOV EDX,dword ptr [EAX + 0x14]
00622c79  MOV dword ptr [0x009b0980],EDX
00622c7f  MOV ECX,dword ptr [EAX + 0x18]
00622c82  MOV dword ptr [0x009b0984],ECX
00622c88  RET 0x14
