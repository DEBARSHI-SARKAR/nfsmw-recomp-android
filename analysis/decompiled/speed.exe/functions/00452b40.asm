00452b40  MOV EAX,ECX
00452b42  MOV ECX,dword ptr [ESP + 0x4]
00452b46  MOV EDX,dword ptr [ECX]
00452b48  MOV dword ptr [EAX],EDX
00452b4a  MOV EDX,dword ptr [ECX + 0x4]
00452b4d  MOV dword ptr [EAX + 0x4],EDX
00452b50  MOV EDX,dword ptr [ECX + 0x8]
00452b53  MOV dword ptr [EAX + 0x8],EDX
00452b56  MOV ECX,dword ptr [ECX + 0xc]
00452b59  MOV dword ptr [EAX + 0xc],ECX
00452b5c  MOV ECX,dword ptr [EAX]
00452b5e  TEST ECX,ECX
00452b60  JZ 0x00452b66
00452b62  INC word ptr [ECX + 0x12]
00452b66  RET 0x4
