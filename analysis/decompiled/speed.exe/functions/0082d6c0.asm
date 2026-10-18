0082d6c0  PUSH EBP
0082d6c1  MOV EBP,ESP
0082d6c3  MOV EAX,[0x009c2980]
0082d6c8  MOV CX,word ptr [EBP + 0x14]
0082d6cc  MOV EDX,dword ptr [EBP + 0x10]
0082d6cf  PUSH ESI
0082d6d0  MOV ESI,dword ptr [EBP + 0x8]
0082d6d3  MOV word ptr [ESI + 0x1c],CX
0082d6d7  MOV ECX,dword ptr [ESI + 0x12c]
0082d6dd  MOV dword ptr [ESI + 0x10],EAX
0082d6e0  MOV dword ptr [ESI + 0x14],EDX
0082d6e3  MOV EAX,dword ptr [ECX]
0082d6e5  CALL dword ptr [EAX + 0x2c]
0082d6e8  MOV word ptr [ESI + 0x18],AX
0082d6ec  MOV AL,byte ptr [EBP + 0xc]
0082d6ef  MOVSX CX,AL
0082d6f3  MOV word ptr [ESI + 0x1a],CX
0082d6f7  MOV byte ptr [ESI + 0x3],AL
0082d6fa  POP ESI
0082d6fb  POP EBP
0082d6fc  RET
