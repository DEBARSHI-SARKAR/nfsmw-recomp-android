0050e7f0  MOV DL,byte ptr [ECX + 0x129]
0050e7f6  XOR EAX,EAX
0050e7f8  CMP DL,AL
0050e7fa  JZ 0x0050e815
0050e7fc  MOV byte ptr [ECX + 0x11c],AL
0050e802  MOV byte ptr [ECX + 0x119],0x1
0050e809  MOV byte ptr [ECX + 0x11a],AL
0050e80f  MOV dword ptr [ECX + 0x110],EAX
0050e815  MOV EAX,dword ptr [ECX + 0x2c]
0050e818  ADD ECX,0x2c
0050e81b  JMP dword ptr [EAX + 0x40]
