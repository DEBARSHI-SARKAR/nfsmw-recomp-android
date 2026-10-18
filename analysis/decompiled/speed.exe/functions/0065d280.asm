0065d280  MOV EAX,dword ptr [ESP + 0x4]
0065d284  PUSH ESI
0065d285  MOV ESI,dword ptr [ESP + 0xc]
0065d289  CMP EAX,ESI
0065d28b  JZ 0x0065d2cc
0065d28d  MOV ECX,dword ptr [ESP + 0x10]
0065d291  MOV EDX,dword ptr [ECX]
0065d293  MOV dword ptr [EAX],EDX
0065d295  MOV EDX,dword ptr [ECX + 0x4]
0065d298  MOV dword ptr [EAX + 0x4],EDX
0065d29b  MOV EDX,dword ptr [ECX + 0x8]
0065d29e  MOV dword ptr [EAX + 0x8],EDX
0065d2a1  MOV EDX,dword ptr [ECX + 0xc]
0065d2a4  MOV dword ptr [EAX + 0xc],EDX
0065d2a7  MOV EDX,dword ptr [ECX + 0x10]
0065d2aa  MOV dword ptr [EAX + 0x10],EDX
0065d2ad  MOV EDX,dword ptr [ECX + 0x14]
0065d2b0  MOV dword ptr [EAX + 0x14],EDX
0065d2b3  MOV EDX,dword ptr [ECX + 0x18]
0065d2b6  MOV dword ptr [EAX + 0x18],EDX
0065d2b9  MOV EDX,dword ptr [ECX + 0x1c]
0065d2bc  MOV dword ptr [EAX + 0x1c],EDX
0065d2bf  MOV DL,byte ptr [ECX + 0x20]
0065d2c2  MOV byte ptr [EAX + 0x20],DL
0065d2c5  ADD EAX,0x24
0065d2c8  CMP EAX,ESI
0065d2ca  JNZ 0x0065d291
0065d2cc  POP ESI
0065d2cd  RET
