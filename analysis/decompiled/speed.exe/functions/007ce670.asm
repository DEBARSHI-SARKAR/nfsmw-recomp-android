007ce670  PUSH EBP
007ce671  MOV EBP,ESP
007ce673  PUSH -0x1
007ce675  PUSH 0x8b9228
007ce67a  PUSH 0x7cd5e4
007ce67f  MOV EAX,FS:[0x0]
007ce685  PUSH EAX
007ce686  MOV dword ptr FS:[0x0],ESP
007ce68d  ADD ESP,-0xc
007ce690  PUSH EBX
007ce691  PUSH ESI
007ce692  PUSH EDI
007ce693  MOV dword ptr [EBP + -0x18],ESP
007ce696  MOV dword ptr [EBP + -0x1c],0x0
007ce69d  MOV dword ptr [EBP + -0x4],0x0
007ce6a4  MOVAPD XMM0,XMM1
007ce6a8  MOV dword ptr [EBP + -0x1c],0x1
007ce6af  MOV dword ptr [EBP + -0x4],0xffffffff
007ce6b6  JMP 0x007ce6c8
007ce6c8  MOV EAX,dword ptr [EBP + -0x1c]
007ce6cb  MOV ECX,dword ptr [EBP + -0x10]
007ce6ce  MOV dword ptr FS:[0x0],ECX
007ce6d5  POP EDI
007ce6d6  POP ESI
007ce6d7  POP EBX
007ce6d8  MOV ESP,EBP
007ce6da  POP EBP
007ce6db  RET
