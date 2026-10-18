007fd063  PUSH EBP
007fd064  MOV EBP,ESP
007fd066  MOV EAX,dword ptr [EBP + 0x8]
007fd069  XOR ECX,ECX
007fd06b  PUSH ESI
007fd06c  INC ECX
007fd06d  PUSH EDI
007fd06e  MOV EDX,dword ptr [EAX]
007fd070  MOV DX,word ptr [EDX*0x4 + 0x8c38b8]
007fd078  MOVZX ESI,byte ptr [EAX + ECX*0x1 + 0x140]
007fd080  MOV EDI,dword ptr [EAX + 0x180]
007fd086  SHL DX,0x2
007fd08a  INC ECX
007fd08b  CMP ECX,0x40
007fd08e  MOV word ptr [EDI + ESI*0x2],DX
007fd092  JL 0x007fd06e
007fd094  MOV ECX,dword ptr [EAX]
007fd096  MOV CX,word ptr [ECX*0x2 + 0x8c3eb8]
007fd09e  MOV EDX,dword ptr [EAX + 0x180]
007fd0a4  SHL CX,0x2
007fd0a8  MOV word ptr [EDX],CX
007fd0ab  XOR ECX,ECX
007fd0ad  INC ECX
007fd0ae  MOV EDX,dword ptr [EAX]
007fd0b0  MOV DX,word ptr [EDX*0x4 + 0x8c39b8]
007fd0b8  MOVZX ESI,byte ptr [EAX + ECX*0x1 + 0x140]
007fd0c0  MOV EDI,dword ptr [EAX + 0x184]
007fd0c6  SHL DX,0x2
007fd0ca  INC ECX
007fd0cb  CMP ECX,0x40
007fd0ce  MOV word ptr [EDI + ESI*0x2],DX
007fd0d2  JL 0x007fd0ae
007fd0d4  MOV ECX,dword ptr [EAX]
007fd0d6  MOV CX,word ptr [ECX*0x2 + 0x8c3f38]
007fd0de  MOV EAX,dword ptr [EAX + 0x184]
007fd0e4  SHL CX,0x2
007fd0e8  POP EDI
007fd0e9  MOV word ptr [EAX],CX
007fd0ec  POP ESI
007fd0ed  POP EBP
007fd0ee  RET
