0076de40  SUB ESP,0x8
0076de43  MOV EAX,dword ptr [ESP + 0xc]
0076de47  MOV ECX,dword ptr [0x009b38c0]
0076de4d  IMUL EAX,EAX,0x16
0076de50  MOV EDX,dword ptr [0x009b38bc]
0076de56  ADD EAX,ECX
0076de58  MOVZX ECX,word ptr [EAX]
0076de5b  MOVZX EAX,word ptr [EAX + 0x2]
0076de5f  SHL ECX,0x5
0076de62  ADD ECX,EDX
0076de64  SHL EAX,0x5
0076de67  ADD EAX,EDX
0076de69  MOV EDX,dword ptr [ESP + 0x10]
0076de6d  MOV dword ptr [ESP + 0x4],EAX
0076de71  MOV EAX,dword ptr [ECX]
0076de73  MOV dword ptr [EDX],EAX
0076de75  MOV EAX,dword ptr [ECX + 0x4]
0076de78  MOV dword ptr [EDX + 0x4],EAX
0076de7b  MOV ECX,dword ptr [ECX + 0x8]
0076de7e  MOV EAX,dword ptr [ESP + 0x14]
0076de82  MOV dword ptr [EDX + 0x8],ECX
0076de85  MOV EDX,dword ptr [ESP + 0x4]
0076de89  MOV ECX,dword ptr [EDX]
0076de8b  MOV dword ptr [EAX],ECX
0076de8d  MOV ECX,dword ptr [EDX + 0x4]
0076de90  MOV dword ptr [EAX + 0x4],ECX
0076de93  MOV EDX,dword ptr [EDX + 0x8]
0076de96  MOV dword ptr [EAX + 0x8],EDX
0076de99  ADD ESP,0x8
0076de9c  RET 0xc
