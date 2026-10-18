007f0eac  PUSH EBP
007f0ead  MOV EBP,ESP
007f0eaf  MOV EAX,dword ptr [EBP + 0xc]
007f0eb2  SUB EAX,0x0
007f0eb5  JZ 0x007f0ee9
007f0eb7  DEC EAX
007f0eb8  JZ 0x007f0ee0
007f0eba  DEC EAX
007f0ebb  JZ 0x007f0ecf
007f0ebd  DEC EAX
007f0ebe  JZ 0x007f0ec4
007f0ec0  XOR EAX,EAX
007f0ec2  POP EBP
007f0ec3  RET
007f0ec4  MOV EAX,dword ptr [EBP + 0x8]
007f0ec7  MOV EAX,dword ptr [EAX + 0x8]
007f0eca  AND EAX,0x1
007f0ecd  POP EBP
007f0ece  RET
007f0ecf  MOV EAX,dword ptr [EBP + 0x8]
007f0ed2  MOVZX ECX,word ptr [EAX + 0xe]
007f0ed6  MOV ECX,dword ptr [EAX + ECX*0x4 + 0x10]
007f0eda  MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc]
007f0ede  POP EBP
007f0edf  RET
007f0ee0  MOV EAX,dword ptr [EBP + 0x8]
007f0ee3  MOVZX EAX,word ptr [EAX + 0xc]
007f0ee7  POP EBP
007f0ee8  RET
007f0ee9  MOV EAX,dword ptr [EBP + 0x8]
007f0eec  MOVZX EAX,word ptr [EAX + 0xe]
007f0ef0  POP EBP
007f0ef1  RET
