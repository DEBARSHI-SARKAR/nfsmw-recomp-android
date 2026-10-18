007fd67d  PUSH EBP
007fd67e  MOV EBP,ESP
007fd680  MOV EAX,dword ptr [EBP + 0xc]
007fd683  MOV ECX,dword ptr [EBP + 0x8]
007fd686  PUSH 0x8
007fd688  POP EDX
007fd689  PUSH ESI
007fd68a  MOVZX SI,byte ptr [ECX]
007fd68e  SUB SI,word ptr [EAX]
007fd691  MOV word ptr [EAX],SI
007fd694  MOVZX SI,byte ptr [ECX + 0x1]
007fd699  SUB SI,word ptr [EAX + 0x2]
007fd69d  ADD EAX,0x10
007fd6a0  MOV word ptr [EAX + -0xe],SI
007fd6a4  MOVZX SI,byte ptr [ECX + 0x2]
007fd6a9  SUB SI,word ptr [EAX + -0xc]
007fd6ad  MOV word ptr [EAX + -0xc],SI
007fd6b1  MOVZX SI,byte ptr [ECX + 0x3]
007fd6b6  SUB SI,word ptr [EAX + -0xa]
007fd6ba  MOV word ptr [EAX + -0xa],SI
007fd6be  MOVZX SI,byte ptr [ECX + 0x4]
007fd6c3  SUB SI,word ptr [EAX + -0x8]
007fd6c7  MOV word ptr [EAX + -0x8],SI
007fd6cb  MOVZX SI,byte ptr [ECX + 0x5]
007fd6d0  SUB SI,word ptr [EAX + -0x6]
007fd6d4  MOV word ptr [EAX + -0x6],SI
007fd6d8  MOVZX SI,byte ptr [ECX + 0x6]
007fd6dd  SUB SI,word ptr [EAX + -0x4]
007fd6e1  MOV word ptr [EAX + -0x4],SI
007fd6e5  MOVZX SI,byte ptr [ECX + 0x7]
007fd6ea  SUB SI,word ptr [EAX + -0x2]
007fd6ee  ADD ECX,dword ptr [EBP + 0x10]
007fd6f1  DEC EDX
007fd6f2  MOV word ptr [EAX + -0x2],SI
007fd6f6  JNZ 0x007fd68a
007fd6f8  POP ESI
007fd6f9  POP EBP
007fd6fa  RET
