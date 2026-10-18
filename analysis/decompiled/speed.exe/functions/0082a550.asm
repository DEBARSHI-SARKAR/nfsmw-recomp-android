0082a550  PUSH EBP
0082a551  MOV EBP,ESP
0082a553  MOV EAX,dword ptr [EBP + 0x8]
0082a556  MOV EDX,dword ptr [EAX]
0082a558  ADD ECX,0x6c
0082a55b  MOV dword ptr [ECX],EDX
0082a55d  MOV EDX,dword ptr [EAX + 0x4]
0082a560  MOV dword ptr [ECX + 0x4],EDX
0082a563  MOV EDX,dword ptr [EAX + 0x8]
0082a566  MOV dword ptr [ECX + 0x8],EDX
0082a569  MOV EAX,dword ptr [EAX + 0xc]
0082a56c  MOV dword ptr [ECX + 0xc],EAX
0082a56f  POP EBP
0082a570  RET 0x4
