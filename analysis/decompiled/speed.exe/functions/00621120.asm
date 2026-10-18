00621120  MOV EDX,dword ptr [ESP + 0x8]
00621124  MOV EAX,ECX
00621126  MOV ECX,dword ptr [ESP + 0x4]
0062112a  MOV dword ptr [EAX + 0x8],ECX
0062112d  MOV ECX,dword ptr [ESP + 0xc]
00621131  MOV dword ptr [EAX + 0x4],0x20
00621138  MOV dword ptr [EAX],0x8a6958
0062113e  MOV dword ptr [EAX + 0xc],EDX
00621141  MOV dword ptr [EAX + 0x10],ECX
00621144  RET 0xc
