007fd61e  PUSH EBP
007fd61f  MOV EBP,ESP
007fd621  MOV ECX,dword ptr [EBP + 0xc]
007fd624  MOV EAX,dword ptr [EBP + 0x8]
007fd627  PUSH 0x8
007fd629  POP EDX
007fd62a  PUSH ESI
007fd62b  MOVZX SI,byte ptr [EAX]
007fd62f  MOV word ptr [ECX],SI
007fd632  MOVZX SI,byte ptr [EAX + 0x1]
007fd637  MOV word ptr [ECX + 0x2],SI
007fd63b  MOVZX SI,byte ptr [EAX + 0x2]
007fd640  MOV word ptr [ECX + 0x4],SI
007fd644  MOVZX SI,byte ptr [EAX + 0x3]
007fd649  MOV word ptr [ECX + 0x6],SI
007fd64d  MOVZX SI,byte ptr [EAX + 0x4]
007fd652  MOV word ptr [ECX + 0x8],SI
007fd656  MOVZX SI,byte ptr [EAX + 0x5]
007fd65b  MOV word ptr [ECX + 0xa],SI
007fd65f  MOVZX SI,byte ptr [EAX + 0x6]
007fd664  MOV word ptr [ECX + 0xc],SI
007fd668  MOVZX SI,byte ptr [EAX + 0x7]
007fd66d  ADD EAX,dword ptr [EBP + 0x10]
007fd670  MOV word ptr [ECX + 0xe],SI
007fd674  ADD ECX,0x10
007fd677  DEC EDX
007fd678  JNZ 0x007fd62b
007fd67a  POP ESI
007fd67b  POP EBP
007fd67c  RET
