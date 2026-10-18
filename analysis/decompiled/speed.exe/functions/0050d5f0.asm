0050d5f0  MOV EAX,ECX
0050d5f2  MOV ECX,dword ptr [ESP + 0x4]
0050d5f6  MOV EDX,dword ptr [ECX]
0050d5f8  MOV dword ptr [EAX],EDX
0050d5fa  MOV EDX,dword ptr [ECX + 0x4]
0050d5fd  MOV dword ptr [EAX + 0x4],EDX
0050d600  MOV EDX,dword ptr [ECX + 0x8]
0050d603  MOV dword ptr [EAX + 0x8],EDX
0050d606  MOV ECX,dword ptr [ECX + 0xc]
0050d609  MOV dword ptr [EAX + 0xc],ECX
0050d60c  RET 0x4
