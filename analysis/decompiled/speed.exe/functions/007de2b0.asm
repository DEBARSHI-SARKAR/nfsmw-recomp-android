007de2b0  PUSH EBP
007de2b1  MOV EBP,ESP
007de2b3  SUB ESP,0xc
007de2b6  MOV EAX,dword ptr [EBP + 0xc]
007de2b9  CDQ
007de2ba  AND EDX,0x1f
007de2bd  ADD EAX,EDX
007de2bf  SAR EAX,0x5
007de2c2  MOV dword ptr [EBP + -0x8],EAX
007de2c5  MOV EAX,dword ptr [EBP + 0xc]
007de2c8  AND EAX,0x8000001f
007de2cd  JNS 0x007de2d4
007de2cf  DEC EAX
007de2d0  OR EAX,0xffffffe0
007de2d3  INC EAX
007de2d4  MOV ECX,0x1f
007de2d9  SUB ECX,EAX
007de2db  MOV dword ptr [EBP + -0xc],ECX
007de2de  OR EDX,0xffffffff
007de2e1  MOV ECX,dword ptr [EBP + -0xc]
007de2e4  SHL EDX,CL
007de2e6  NOT EDX
007de2e8  MOV dword ptr [EBP + -0x4],EDX
007de2eb  MOV EAX,dword ptr [EBP + -0x8]
007de2ee  MOV ECX,dword ptr [EBP + 0x8]
007de2f1  MOV EDX,dword ptr [ECX + EAX*0x4]
007de2f4  AND EDX,dword ptr [EBP + -0x4]
007de2f7  JZ 0x007de2fd
007de2f9  XOR EAX,EAX
007de2fb  JMP 0x007de32e
007de2fd  MOV EAX,dword ptr [EBP + -0x8]
007de300  ADD EAX,0x1
007de303  MOV dword ptr [EBP + -0x8],EAX
007de306  JMP 0x007de311
007de308  MOV ECX,dword ptr [EBP + -0x8]
007de30b  ADD ECX,0x1
007de30e  MOV dword ptr [EBP + -0x8],ECX
007de311  CMP dword ptr [EBP + -0x8],0x3
007de315  JGE 0x007de329
007de317  MOV EDX,dword ptr [EBP + -0x8]
007de31a  MOV EAX,dword ptr [EBP + 0x8]
007de31d  CMP dword ptr [EAX + EDX*0x4],0x0
007de321  JZ 0x007de327
007de323  XOR EAX,EAX
007de325  JMP 0x007de32e
007de327  JMP 0x007de308
007de329  MOV EAX,0x1
007de32e  MOV ESP,EBP
007de330  POP EBP
007de331  RET
