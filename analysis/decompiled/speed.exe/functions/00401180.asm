00401180  SUB ESP,0xc
00401183  MOV EAX,dword ptr [ESP + 0x14]
00401187  MOV ECX,dword ptr [ESP + 0x18]
0040118b  MOV EDX,dword ptr [ESP + 0x1c]
0040118f  MOV dword ptr [ESP],EAX
00401192  MOV EAX,dword ptr [ESP + 0x10]
00401196  MOV dword ptr [ESP + 0x4],ECX
0040119a  MOV dword ptr [ESP + 0x8],EDX
0040119e  MOV EDX,dword ptr [ESP]
004011a1  MOV ECX,EAX
004011a3  MOV dword ptr [ECX],EDX
004011a5  MOV EDX,dword ptr [ESP + 0x4]
004011a9  MOV dword ptr [ECX + 0x4],EDX
004011ac  MOV EDX,dword ptr [ESP + 0x8]
004011b0  MOV dword ptr [ECX + 0x8],EDX
004011b3  ADD ESP,0xc
004011b6  RET
