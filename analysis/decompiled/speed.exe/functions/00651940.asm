00651940  MOV EDX,dword ptr [ECX + 0x8]
00651943  MOV EAX,dword ptr [ESP + 0x4]
00651947  MOV dword ptr [EAX],EDX
00651949  MOV EDX,dword ptr [ECX + 0x34]
0065194c  MOV dword ptr [EAX + 0x4],EDX
0065194f  MOV ECX,dword ptr [ECX + 0x60]
00651952  MOV dword ptr [EAX + 0x8],ECX
00651955  RET 0x4
