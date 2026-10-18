005de2c0  PUSH 0xc
005de2c2  CALL 0x00652ad0
005de2c7  XOR ECX,ECX
005de2c9  ADD ESP,0x4
005de2cc  CMP EAX,ECX
005de2ce  JZ 0x005de2e4
005de2d0  MOV dword ptr [EAX],ECX
005de2d2  MOV dword ptr [EAX + 0x4],ECX
005de2d5  MOV byte ptr [EAX + 0x8],CL
005de2d8  MOV byte ptr [EAX + 0x9],CL
005de2db  MOV byte ptr [EAX + 0xa],CL
005de2de  MOV [0x0091e014],EAX
005de2e3  RET
005de2e4  XOR EAX,EAX
005de2e6  MOV [0x0091e014],EAX
005de2eb  RET
