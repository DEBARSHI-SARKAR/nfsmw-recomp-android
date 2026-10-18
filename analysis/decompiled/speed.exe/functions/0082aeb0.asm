0082aeb0  PUSH EBP
0082aeb1  MOV EBP,ESP
0082aeb3  MOV EAX,dword ptr [ECX + 0x4]
0082aeb6  TEST EAX,EAX
0082aeb8  JL 0x0082aec3
0082aeba  MOV EAX,0xffffff44
0082aebf  POP EBP
0082aec0  RET 0x8
0082aec3  MOV EAX,dword ptr [EBP + 0x8]
0082aec6  MOV EDX,dword ptr [EBP + 0xc]
0082aec9  MOV dword ptr [ECX + 0x4],EAX
0082aecc  MOV dword ptr [ECX + 0x20],0x1
0082aed3  MOV dword ptr [ECX + 0x104],EDX
0082aed9  XOR EAX,EAX
0082aedb  POP EBP
0082aedc  RET 0x8
