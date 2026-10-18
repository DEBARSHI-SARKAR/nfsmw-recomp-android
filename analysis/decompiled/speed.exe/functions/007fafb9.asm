007fafb9  PUSH EBP
007fafba  MOV EBP,ESP
007fafbc  PUSH ESI
007fafbd  PUSH EDI
007fafbe  PUSH 0x8
007fafc0  MOV ESI,EAX
007fafc2  POP EDI
007fafc3  MOV EAX,0x1ff
007fafc8  XOR EDX,EDX
007fafca  MOV DX,word ptr [ECX + 0x2]
007fafce  ADD ECX,0x20
007fafd1  AND EDX,EAX
007fafd3  MOV DL,byte ptr [EDX + 0x9c1640]
007fafd9  MOV byte ptr [ESI],DL
007fafdb  XOR EDX,EDX
007fafdd  MOV DX,word ptr [ECX + -0x1a]
007fafe1  AND EDX,EAX
007fafe3  MOV DL,byte ptr [EDX + 0x9c1640]
007fafe9  MOV byte ptr [ESI + 0x1],DL
007fafec  XOR EDX,EDX
007fafee  MOV DX,word ptr [ECX + -0x16]
007faff2  AND EDX,EAX
007faff4  MOV DL,byte ptr [EDX + 0x9c1640]
007faffa  MOV byte ptr [ESI + 0x2],DL
007faffd  XOR EDX,EDX
007fafff  MOV DX,word ptr [ECX + -0x12]
007fb003  AND EDX,EAX
007fb005  MOV DL,byte ptr [EDX + 0x9c1640]
007fb00b  MOV byte ptr [ESI + 0x3],DL
007fb00e  XOR EDX,EDX
007fb010  MOV DX,word ptr [ECX + -0xe]
007fb014  AND EDX,EAX
007fb016  MOV DL,byte ptr [EDX + 0x9c1640]
007fb01c  MOV byte ptr [ESI + 0x4],DL
007fb01f  XOR EDX,EDX
007fb021  MOV DX,word ptr [ECX + -0xa]
007fb025  AND EDX,EAX
007fb027  MOV DL,byte ptr [EDX + 0x9c1640]
007fb02d  MOV byte ptr [ESI + 0x5],DL
007fb030  XOR EDX,EDX
007fb032  MOV DX,word ptr [ECX + -0x6]
007fb036  AND EDX,EAX
007fb038  MOV DL,byte ptr [EDX + 0x9c1640]
007fb03e  MOV byte ptr [ESI + 0x6],DL
007fb041  XOR EDX,EDX
007fb043  MOV DX,word ptr [ECX + -0x2]
007fb047  AND EDX,EAX
007fb049  MOV DL,byte ptr [EDX + 0x9c1640]
007fb04f  MOV byte ptr [ESI + 0x7],DL
007fb052  ADD ESI,dword ptr [EBP + 0x8]
007fb055  DEC EDI
007fb056  JNZ 0x007fafc8
007fb05c  POP EDI
007fb05d  POP ESI
007fb05e  POP EBP
007fb05f  RET
