0083e410  MOV EAX,dword ptr [ESP + 0x4]
0083e414  MOV ECX,dword ptr [EAX + 0x18]
0083e417  TEST ECX,ECX
0083e419  JLE 0x0083e422
0083e41b  MOV dword ptr [EAX + 0x8],0x1
0083e422  MOV ECX,dword ptr [ESP + 0x8]
0083e426  MOV EDX,dword ptr [ESP + 0xc]
0083e42a  MOV dword ptr [EAX + 0x20],ECX
0083e42d  MOV ECX,dword ptr [ESP + 0x10]
0083e431  MOV dword ptr [EAX + 0x1c],EDX
0083e434  MOV dword ptr [EAX + 0x24],ECX
0083e437  RET
