007cd6ca  PUSH EBP
007cd6cb  MOV ECX,dword ptr [ESP + 0x8]
007cd6cf  MOV EBP,dword ptr [ECX]
007cd6d1  MOV EAX,dword ptr [ECX + 0x1c]
007cd6d4  PUSH EAX
007cd6d5  MOV EAX,dword ptr [ECX + 0x18]
007cd6d8  PUSH EAX
007cd6d9  CALL 0x007c514a
007cd6de  ADD ESP,0x8
007cd6e1  POP EBP
007cd6e2  RET 0x4
