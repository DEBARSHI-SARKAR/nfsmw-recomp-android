00605ed0  MOV EAX,dword ptr [ESP + 0x4]
00605ed4  MOV ECX,dword ptr [EAX + 0x8]
00605ed7  MOV EDX,dword ptr [ESP + 0x8]
00605edb  MOV dword ptr [ECX],0x3
00605ee1  MOV dword ptr [ECX + 0x4],EDX
00605ee4  ADD dword ptr [EAX + 0x8],0x8
00605ee8  RET
