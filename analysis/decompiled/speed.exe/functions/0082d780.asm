0082d780  PUSH EBP
0082d781  MOV EBP,ESP
0082d783  MOV EAX,[0x009c2980]
0082d788  MOV ECX,dword ptr [EBP + 0x10]
0082d78b  MOV DX,word ptr [EBP + 0x14]
0082d78f  PUSH ESI
0082d790  MOV ESI,dword ptr [EBP + 0x8]
0082d793  MOV dword ptr [ESI + 0x44],ECX
0082d796  MOV ECX,dword ptr [ESI + 0x12c]
0082d79c  MOV dword ptr [ESI + 0x40],EAX
0082d79f  MOV word ptr [ESI + 0x4c],DX
0082d7a3  MOV EAX,dword ptr [ECX]
0082d7a5  CALL dword ptr [EAX + 0x44]
0082d7a8  MOV word ptr [ESI + 0x48],AX
0082d7ac  MOV EAX,dword ptr [EBP + 0xc]
0082d7af  TEST EAX,EAX
0082d7b1  MOV word ptr [ESI + 0x4a],AX
0082d7b5  JGE 0x0082d7bd
0082d7b7  MOV word ptr [ESI + 0x4a],0x0
0082d7bd  CMP EAX,0x4000
0082d7c2  JL 0x0082d7ca
0082d7c4  MOV word ptr [ESI + 0x4a],0x4000
0082d7ca  POP ESI
0082d7cb  POP EBP
0082d7cc  RET
