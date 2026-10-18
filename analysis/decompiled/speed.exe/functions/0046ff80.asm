0046ff80  PUSH EBP
0046ff81  MOV EBP,ESP
0046ff83  MOV EAX,dword ptr [EBP + 0xc]
0046ff86  FLD float ptr [EBP + 0x10]
0046ff89  FMUL float ptr [EAX]
0046ff8b  AND ESP,0xfffffff0
0046ff8e  FLD float ptr [EBP + 0x10]
0046ff91  FMUL float ptr [EAX + 0x4]
0046ff94  FLD float ptr [EBP + 0x10]
0046ff97  FMUL float ptr [EAX + 0x8]
0046ff9a  MOV EAX,dword ptr [EBP + 0x8]
0046ff9d  FXCH ST2
0046ff9f  FSTP float ptr [EAX]
0046ffa1  FSTP float ptr [EAX + 0x4]
0046ffa4  FSTP float ptr [EAX + 0x8]
0046ffa7  MOV ESP,EBP
0046ffa9  POP EBP
0046ffaa  RET
