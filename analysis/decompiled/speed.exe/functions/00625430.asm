00625430  MOV EDX,dword ptr [ESP + 0x8]
00625434  MOV EAX,ECX
00625436  MOV ECX,dword ptr [ESP + 0x4]
0062543a  MOV dword ptr [EAX + 0x4],0x30
00625441  MOV dword ptr [EAX],0x8a75a8
00625447  MOV dword ptr [EAX + 0x8],ECX
0062544a  MOV ECX,dword ptr [ESP + 0xc]
0062544e  MOV dword ptr [EAX + 0xc],EDX
00625451  MOV EDX,dword ptr [ESP + 0x10]
00625455  MOV dword ptr [EAX + 0x10],ECX
00625458  MOV ECX,dword ptr [ESP + 0x14]
0062545c  MOV dword ptr [EAX + 0x14],EDX
0062545f  MOV EDX,dword ptr [ESP + 0x18]
00625463  MOV dword ptr [EAX + 0x18],ECX
00625466  MOV ECX,dword ptr [ESP + 0x1c]
0062546a  MOV dword ptr [EAX + 0x1c],EDX
0062546d  MOV EDX,dword ptr [ESP + 0x20]
00625471  MOV dword ptr [EAX + 0x20],ECX
00625474  MOV ECX,dword ptr [ESP + 0x24]
00625478  MOV dword ptr [EAX + 0x24],EDX
0062547b  MOV EDX,dword ptr [ESP + 0x28]
0062547f  MOV dword ptr [EAX + 0x28],ECX
00625482  MOV dword ptr [EAX + 0x2c],EDX
00625485  RET 0x28
