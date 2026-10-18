0084b560  PUSH EBP
0084b561  MOV EBP,ESP
0084b563  MOV EAX,dword ptr [EBP + 0x8]
0084b566  MOV ECX,dword ptr [EBP + 0x10]
0084b569  MOV dword ptr [EAX + 0x44],ECX
0084b56c  MOV EDX,dword ptr [EBP + 0x8]
0084b56f  MOV EAX,dword ptr [EBP + 0xc]
0084b572  MOV dword ptr [EDX + 0x3c],EAX
0084b575  MOV ECX,dword ptr [EBP + 0x8]
0084b578  MOV EDX,dword ptr [EBP + 0x14]
0084b57b  MOV dword ptr [ECX + 0x48],EDX
0084b57e  MOV EAX,dword ptr [EBP + 0x8]
0084b581  MOV ECX,dword ptr [EBP + 0x18]
0084b584  MOV dword ptr [EAX + 0x4c],ECX
0084b587  XOR EAX,EAX
0084b589  POP EBP
0084b58a  RET
