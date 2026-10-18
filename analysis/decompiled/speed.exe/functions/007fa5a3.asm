007fa5a3  LEA EAX,[ECX + 0x28]
007fa5a6  CMP dword ptr [EAX],EAX
007fa5a8  JZ 0x007fa5e6
007fa5aa  MOV EAX,dword ptr [EAX]
007fa5ac  MOV EDX,dword ptr [EAX]
007fa5ae  PUSH ESI
007fa5af  MOV ESI,dword ptr [EAX + 0x4]
007fa5b2  MOV dword ptr [ESI],EDX
007fa5b4  MOV dword ptr [EDX + 0x4],ESI
007fa5b7  PUSH 0xb
007fa5b9  POP EDX
007fa5ba  MOV dword ptr [EAX],EDX
007fa5bc  MOV dword ptr [EAX + 0x4],EDX
007fa5bf  ADD EAX,-0x8
007fa5c2  MOV EDX,EAX
007fa5c4  NEG EDX
007fa5c6  LEA ESI,[EAX + 0x8]
007fa5c9  SBB EDX,EDX
007fa5cb  AND EDX,ESI
007fa5cd  MOV ESI,dword ptr [ECX + 0x24]
007fa5d0  ADD ECX,0x20
007fa5d3  MOV dword ptr [ESI],EDX
007fa5d5  MOV dword ptr [ECX + 0x4],EDX
007fa5d8  MOV dword ptr [EDX + 0x4],ESI
007fa5db  MOV dword ptr [EDX],ECX
007fa5dd  MOV dword ptr [EAX + 0x10],0x1
007fa5e4  POP ESI
007fa5e5  RET
007fa5e6  PUSH 0x8c28d0
007fa5eb  CALL 0x00862d36
007fa5f0  POP ECX
007fa5f1  XOR EAX,EAX
007fa5f3  RET
