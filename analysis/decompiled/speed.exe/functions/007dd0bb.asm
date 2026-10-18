007dd0bb  CMP dword ptr [EBP + 0x8],0x8
007dd0bf  JNZ 0x007dd0d2
007dd0c1  MOV ECX,dword ptr [EBP + -0x20]
007dd0c4  MOV EDX,dword ptr [ECX + 0x5c]
007dd0c7  PUSH EDX
007dd0c8  PUSH 0x8
007dd0ca  CALL dword ptr [EBP + -0x1c]
007dd0cd  ADD ESP,0x8
007dd0d0  JMP 0x007dd0dc
007dd0d2  MOV EAX,dword ptr [EBP + 0x8]
007dd0d5  PUSH EAX
007dd0d6  CALL dword ptr [EBP + -0x1c]
007dd0d9  ADD ESP,0x4
007dd0dc  CMP dword ptr [EBP + 0x8],0x8
007dd0e0  JZ 0x007dd0ee
007dd0e2  CMP dword ptr [EBP + 0x8],0xb
007dd0e6  JZ 0x007dd0ee
007dd0e8  CMP dword ptr [EBP + 0x8],0x4
007dd0ec  JNZ 0x007dd106
007dd0ee  MOV ECX,dword ptr [EBP + -0x20]
007dd0f1  MOV EDX,dword ptr [EBP + -0x24]
007dd0f4  MOV dword ptr [ECX + 0x58],EDX
007dd0f7  CMP dword ptr [EBP + 0x8],0x8
007dd0fb  JNZ 0x007dd106
007dd0fd  MOV EAX,dword ptr [EBP + -0x20]
007dd100  MOV ECX,dword ptr [EBP + -0x34]
007dd103  MOV dword ptr [EAX + 0x5c],ECX
007dd106  XOR EAX,EAX
007dd108  MOV ECX,dword ptr [EBP + -0x10]
007dd10b  MOV dword ptr FS:[0x0],ECX
007dd112  POP EDI
007dd113  POP ESI
007dd114  POP EBX
007dd115  MOV ESP,EBP
007dd117  POP EBP
007dd118  RET
