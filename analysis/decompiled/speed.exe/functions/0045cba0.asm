0045cba0  MOV EAX,dword ptr [ESP + 0x4]
0045cba4  MOV byte ptr [ECX + 0x2],0x2
0045cba8  MOV DL,byte ptr [EAX + 0x3]
0045cbab  MOV byte ptr [ECX + 0x3],DL
0045cbae  MOV EDX,dword ptr [EAX + 0x8]
0045cbb1  MOV dword ptr [ECX + 0x4],EDX
0045cbb4  MOV EDX,dword ptr [EAX + 0x4]
0045cbb7  MOV dword ptr [ECX + 0x8],EDX
0045cbba  MOV EDX,dword ptr [EAX + 0x10]
0045cbbd  MOV dword ptr [ECX + 0x10],EDX
0045cbc0  MOV EDX,dword ptr [EAX + 0x14]
0045cbc3  MOV dword ptr [ECX + 0x14],EDX
0045cbc6  MOV EDX,dword ptr [ESP + 0x8]
0045cbca  TEST EDX,EDX
0045cbcc  MOV word ptr [ECX + 0x18],DX
0045cbd0  MOV AX,word ptr [EAX + 0x1a]
0045cbd4  MOV word ptr [ECX + 0x1a],AX
0045cbd8  JGE 0x0045cbe2
0045cbda  MOV word ptr [ECX],0x1c
0045cbdf  RET 0x8
0045cbe2  ADD EDX,0x1c
0045cbe5  MOV word ptr [ECX],DX
0045cbe8  RET 0x8
