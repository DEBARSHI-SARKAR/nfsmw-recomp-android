005b0fc0  PUSH -0x1
005b0fc2  PUSH 0x873e78
005b0fc7  MOV EAX,FS:[0x0]
005b0fcd  PUSH EAX
005b0fce  MOV dword ptr FS:[0x0],ESP
005b0fd5  PUSH ECX
005b0fd6  PUSH ESI
005b0fd7  MOV ESI,ECX
005b0fd9  MOV EAX,0xabadcafe
005b0fde  PUSH EDI
005b0fdf  MOV dword ptr [ESP + 0x8],ESI
005b0fe3  MOV dword ptr [ESI + 0x4],EAX
005b0fe6  MOV dword ptr [ESI + 0x8],EAX
005b0fe9  MOV AX,word ptr [ESP + 0x1c]
005b0fee  MOV word ptr [ESI + 0xc],AX
005b0ff2  MOVZX EAX,AX
005b0ff5  XOR EDI,EDI
005b0ff7  SHL EAX,0x5
005b0ffa  PUSH EAX
005b0ffb  MOV dword ptr [ESP + 0x18],EDI
005b0fff  MOV dword ptr [ESI],0x8a2ca4
005b1005  MOV word ptr [ESI + 0xe],DI
005b1009  MOV dword ptr [ESI + 0x14],EDI
005b100c  CALL 0x00652ad0
005b1011  MOV ECX,dword ptr [ESP + 0x10]
005b1015  MOV dword ptr [ESI + 0x14],EAX
005b1018  ADD ESP,0x4
005b101b  MOV dword ptr [ESI + 0x10],EDI
005b101e  POP EDI
005b101f  MOV EAX,ESI
005b1021  POP ESI
005b1022  MOV dword ptr FS:[0x0],ECX
005b1029  ADD ESP,0x10
005b102c  RET 0x4
