0046ff50  PUSH EBP
0046ff51  MOV EBP,ESP
0046ff53  MOV EAX,dword ptr [EBP + 0xc]
0046ff56  FLD float ptr [EAX]
0046ff58  AND ESP,0xfffffff0
0046ff5b  FCHS
0046ff5d  FLD float ptr [EAX + 0x4]
0046ff60  FCHS
0046ff62  FLD float ptr [EAX + 0x8]
0046ff65  MOV EAX,dword ptr [EBP + 0x8]
0046ff68  FCHS
0046ff6a  FXCH ST2
0046ff6c  FSTP float ptr [EAX]
0046ff6e  FSTP float ptr [EAX + 0x4]
0046ff71  FSTP float ptr [EAX + 0x8]
0046ff74  MOV ESP,EBP
0046ff76  POP EBP
0046ff77  RET
