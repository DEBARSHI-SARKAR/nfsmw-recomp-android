007dac10  PUSH EBP
007dac11  MOV EBP,ESP
007dac13  SUB ESP,0x8
007dac16  FSTCW word ptr [EBP + -0x4]
007dac1a  MOV EAX,dword ptr [EBP + 0x8]
007dac1d  AND EAX,dword ptr [EBP + 0xc]
007dac20  MOVSX ECX,word ptr [EBP + -0x4]
007dac24  MOV EDX,dword ptr [EBP + 0xc]
007dac27  NOT EDX
007dac29  AND ECX,EDX
007dac2b  OR EAX,ECX
007dac2d  MOV word ptr [EBP + -0x8],AX
007dac31  FLDCW word ptr [EBP + -0x8]
007dac34  MOVSX EAX,word ptr [EBP + -0x4]
007dac38  MOV ESP,EBP
007dac3a  POP EBP
007dac3b  RET
