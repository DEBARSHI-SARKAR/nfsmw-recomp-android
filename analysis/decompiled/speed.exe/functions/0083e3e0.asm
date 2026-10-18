0083e3e0  MOV EAX,dword ptr [ESP + 0x4]
0083e3e4  MOV ECX,dword ptr [EAX + 0x18]
0083e3e7  TEST ECX,ECX
0083e3e9  JLE 0x0083e3f2
0083e3eb  MOV dword ptr [EAX + 0x8],0x1
0083e3f2  MOV ECX,dword ptr [ESP + 0x8]
0083e3f6  MOV EDX,dword ptr [ESP + 0xc]
0083e3fa  MOV dword ptr [EAX + 0x2c],ECX
0083e3fd  MOV ECX,dword ptr [ESP + 0x10]
0083e401  MOV dword ptr [EAX + 0x28],EDX
0083e404  MOV dword ptr [EAX + 0x30],ECX
0083e407  RET
