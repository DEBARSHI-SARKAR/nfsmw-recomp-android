0082a280  PUSH ESI
0082a281  MOV ESI,ECX
0082a283  CALL 0x0082cfe0
0082a288  XOR AL,AL
0082a28a  PUSH 0x18
0082a28c  MOV dword ptr [ESI],0x8c5e08
0082a292  MOV byte ptr [ESI + 0x6c],AL
0082a295  MOV byte ptr [ESI + 0x7c],AL
0082a298  CALL 0x00829480
0082a29d  MOV dword ptr [ESI + 0xfc],EAX
0082a2a3  MOV dword ptr [ESI + 0x24],EAX
0082a2a6  MOV ECX,dword ptr [0x009c29ac]
0082a2ac  MOV EDX,dword ptr [ECX]
0082a2ae  ADD ESP,0x4
0082a2b1  PUSH EAX
0082a2b2  CALL dword ptr [EDX + 0xc]
0082a2b5  MOV EAX,dword ptr [ESI + 0xfc]
0082a2bb  MOVZX ECX,word ptr [EAX + 0xc]
0082a2bf  MOV dword ptr [ESI + 0x100],ECX
0082a2c5  MOV dword ptr [ESI + 0x4],0xffffffff
0082a2cc  MOV EAX,ESI
0082a2ce  POP ESI
0082a2cf  RET
