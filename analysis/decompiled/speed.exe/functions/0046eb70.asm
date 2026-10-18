0046eb70  MOV EAX,dword ptr [ESP + 0x4]
0046eb74  FLD float ptr [0x00890968]
0046eb7a  MOV CL,byte ptr [EAX + 0x89]
0046eb80  TEST CL,CL
0046eb82  JZ 0x0046eb98
0046eb84  FSTP ST0
0046eb86  FLD float ptr [EAX + 0x8c]
0046eb8c  FMUL float ptr [0x008910f0]
0046eb92  FADD float ptr [0x00894594]
0046eb98  RET
