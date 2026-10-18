00605f20  MOV EAX,dword ptr [ESP + 0x4]
00605f24  MOV ECX,dword ptr [EAX + 0x8]
00605f27  MOV EDX,dword ptr [ESP + 0x8]
00605f2b  MOV dword ptr [ECX],0x2
00605f31  MOV dword ptr [ECX + 0x4],EDX
00605f34  ADD dword ptr [EAX + 0x8],0x8
00605f38  RET
