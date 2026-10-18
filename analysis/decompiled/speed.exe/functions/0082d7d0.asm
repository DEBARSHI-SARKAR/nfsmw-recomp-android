0082d7d0  PUSH EBP
0082d7d1  MOV EBP,ESP
0082d7d3  MOV EAX,[0x009c2980]
0082d7d8  MOV ECX,dword ptr [EBP + 0x10]
0082d7db  MOV DX,word ptr [EBP + 0x14]
0082d7df  PUSH ESI
0082d7e0  MOV ESI,dword ptr [EBP + 0x8]
0082d7e3  MOV dword ptr [ESI + 0x54],ECX
0082d7e6  MOV ECX,dword ptr [ESI + 0x12c]
0082d7ec  MOV dword ptr [ESI + 0x50],EAX
0082d7ef  MOV word ptr [ESI + 0x5c],DX
0082d7f3  MOV EAX,dword ptr [ECX]
0082d7f5  CALL dword ptr [EAX + 0x4c]
0082d7f8  MOV word ptr [ESI + 0x58],AX
0082d7fc  MOV EAX,dword ptr [EBP + 0xc]
0082d7ff  CMP EAX,0x800
0082d804  MOV word ptr [ESI + 0x5a],AX
0082d808  JGE 0x0082d810
0082d80a  MOV word ptr [ESI + 0x5a],0x800
0082d810  CMP EAX,0x2000
0082d815  JL 0x0082d81d
0082d817  MOV word ptr [ESI + 0x5a],0x2000
0082d81d  POP ESI
0082d81e  POP EBP
0082d81f  RET
