007cbef0  PUSH EBP
007cbef1  MOV EBP,ESP
007cbef3  PUSH ECX
007cbef4  MOV dword ptr [EBP + -0x4],0x0
007cbefb  MOVZX EAX,word ptr [EBP + 0x8]
007cbeff  AND EAX,0x1
007cbf02  JZ 0x007cbf0d
007cbf04  MOV ECX,dword ptr [EBP + -0x4]
007cbf07  OR ECX,0x10
007cbf0a  MOV dword ptr [EBP + -0x4],ECX
007cbf0d  MOVZX EDX,word ptr [EBP + 0x8]
007cbf11  AND EDX,0x4
007cbf14  JZ 0x007cbf1f
007cbf16  MOV EAX,dword ptr [EBP + -0x4]
007cbf19  OR EAX,0x8
007cbf1c  MOV dword ptr [EBP + -0x4],EAX
007cbf1f  MOVZX ECX,word ptr [EBP + 0x8]
007cbf23  AND ECX,0x8
007cbf26  JZ 0x007cbf31
007cbf28  MOV EDX,dword ptr [EBP + -0x4]
007cbf2b  OR EDX,0x4
007cbf2e  MOV dword ptr [EBP + -0x4],EDX
007cbf31  MOVZX EAX,word ptr [EBP + 0x8]
007cbf35  AND EAX,0x10
007cbf38  JZ 0x007cbf43
007cbf3a  MOV ECX,dword ptr [EBP + -0x4]
007cbf3d  OR ECX,0x2
007cbf40  MOV dword ptr [EBP + -0x4],ECX
007cbf43  MOVZX EDX,word ptr [EBP + 0x8]
007cbf47  AND EDX,0x20
007cbf4a  JZ 0x007cbf55
007cbf4c  MOV EAX,dword ptr [EBP + -0x4]
007cbf4f  OR EAX,0x1
007cbf52  MOV dword ptr [EBP + -0x4],EAX
007cbf55  MOVZX ECX,word ptr [EBP + 0x8]
007cbf59  AND ECX,0x2
007cbf5c  JZ 0x007cbf6a
007cbf5e  MOV EDX,dword ptr [EBP + -0x4]
007cbf61  OR EDX,0x80000
007cbf67  MOV dword ptr [EBP + -0x4],EDX
007cbf6a  MOV EAX,dword ptr [EBP + -0x4]
007cbf6d  MOV ESP,EBP
007cbf6f  POP EBP
007cbf70  RET
