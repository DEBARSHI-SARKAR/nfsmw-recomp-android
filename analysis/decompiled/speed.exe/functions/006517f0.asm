006517f0  MOV EDX,dword ptr [ECX]
006517f2  MOV EAX,dword ptr [ESP + 0x4]
006517f6  MOV dword ptr [EAX],EDX
006517f8  MOV EDX,dword ptr [ECX + 0x2c]
006517fb  MOV dword ptr [EAX + 0x4],EDX
006517fe  MOV ECX,dword ptr [ECX + 0x58]
00651801  MOV dword ptr [EAX + 0x8],ECX
00651804  RET 0x4
