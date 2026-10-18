0046ffb0  PUSH EBP
0046ffb1  MOV EBP,ESP
0046ffb3  MOV EAX,dword ptr [EBP + 0xc]
0046ffb6  FLD float ptr [EAX]
0046ffb8  MOV ECX,dword ptr [EBP + 0x10]
0046ffbb  FMUL float ptr [ECX]
0046ffbd  AND ESP,0xfffffff0
0046ffc0  FLD float ptr [EAX + 0x4]
0046ffc3  FMUL float ptr [ECX + 0x4]
0046ffc6  FLD float ptr [EAX + 0x8]
0046ffc9  MOV EAX,dword ptr [EBP + 0x8]
0046ffcc  FMUL float ptr [ECX + 0x8]
0046ffcf  FXCH ST2
0046ffd1  FSTP float ptr [EAX]
0046ffd3  FSTP float ptr [EAX + 0x4]
0046ffd6  FSTP float ptr [EAX + 0x8]
0046ffd9  MOV ESP,EBP
0046ffdb  POP EBP
0046ffdc  RET
