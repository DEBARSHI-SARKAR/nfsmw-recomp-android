007fb060  PUSH EBP
007fb061  MOV EBP,ESP
007fb063  CMP dword ptr [0x009c1238],0x0
007fb06a  JNZ 0x007fb071
007fb06c  CALL 0x007fab21
007fb071  MOV EAX,dword ptr [EBP + 0x8]
007fb074  MOVZX ECX,word ptr [EAX]
007fb077  MOVZX EDX,word ptr [EAX + 0x2]
007fb07b  ADD EAX,0x4
007fb07e  SHL ECX,0x10
007fb081  MOV [0x009c1840],EAX
007fb086  MOV EAX,dword ptr [EBP + 0xc]
007fb089  OR ECX,EDX
007fb08b  MOV dword ptr [0x009c0a30],ECX
007fb091  MOV dword ptr [0x009bfe28],0x20
007fb09b  MOV [0x009c123c],EAX
007fb0a0  MOV dword ptr [EBP + 0x8],0x80000
007fb0a7  MOV EAX,dword ptr [EBP + 0x8]
007fb0aa  IMUL dword ptr [0x0090a0cc]
007fb0b0  SHL EDX,0x10
007fb0b3  SHR EAX,0x10
007fb0b6  ADC EAX,EDX
007fb0b8  MOV [0x009c0230],EAX
007fb0bd  XOR ECX,ECX
007fb0bf  MOV EAX,dword ptr [ECX + 0x90a0d0]
007fb0c5  MOV dword ptr [EBP + 0x8],EAX
007fb0c8  MOV EAX,dword ptr [ECX + 0x8c374c]
007fb0ce  IMUL EAX,dword ptr [EBP + 0x10]
007fb0d2  SHL EAX,0xd
007fb0d5  MOV dword ptr [EBP + 0xc],EAX
007fb0d8  MOV EAX,dword ptr [EBP + 0xc]
007fb0db  IMUL dword ptr [EBP + 0x8]
007fb0de  SHL EDX,0x10
007fb0e1  SHR EAX,0x10
007fb0e4  ADC EAX,EDX
007fb0e6  MOV dword ptr [ECX + 0x9c0234],EAX
007fb0ec  ADD ECX,0x4
007fb0ef  CMP ECX,0xfc
007fb0f5  JL 0x007fb0bf
007fb0f7  POP EBP
007fb0f8  RET
