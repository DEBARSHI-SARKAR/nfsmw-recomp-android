005ceeb0  PUSH ESI
005ceeb1  MOV ESI,ECX
005ceeb3  MOV EAX,dword ptr [ESI + 0x4]
005ceeb6  TEST AL,0x10
005ceeb8  JNZ 0x005ceee5
005ceeba  MOV ECX,EAX
005ceebc  SHR ECX,0x5
005ceebf  CMP ECX,0x1
005ceec2  JBE 0x005ceee1
005ceec4  TEST AL,0x2
005ceec6  MOV EAX,dword ptr [ESI + 0xc]
005ceec9  JZ 0x005ceed0
005ceecb  SHL EAX,0x4
005ceece  ADD EAX,ESI
005ceed0  PUSH 0x5c7840
005ceed5  PUSH 0x10
005ceed7  PUSH ECX
005ceed8  PUSH EAX
005ceed9  CALL 0x007c5250
005ceede  ADD ESP,0x10
005ceee1  OR dword ptr [ESI + 0x4],0x10
005ceee5  POP ESI
005ceee6  RET
