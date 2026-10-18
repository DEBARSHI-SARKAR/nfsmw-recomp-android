006beb80  MOV EAX,dword ptr [ESP + 0x4]
006beb84  MOVZX EDX,byte ptr [EAX + 0x1]
006beb88  XOR ECX,ECX
006beb8a  MOV CH,byte ptr [EAX + 0x3]
006beb8d  MOV CL,byte ptr [EAX]
006beb8f  MOVZX EAX,byte ptr [EAX + 0x2]
006beb93  SHL ECX,0x8
006beb96  OR ECX,EDX
006beb98  SHL ECX,0x8
006beb9b  OR EAX,ECX
006beb9d  RET
