007df530  PUSH EBP
007df531  MOV EBP,ESP
007df533  SUB ESP,0x2c
007df536  LEA EAX,[EBP + -0x28]
007df539  MOV dword ptr [EBP + -0x8],EAX
007df53c  CMP dword ptr [EBP + 0x10],0x0
007df540  JNZ 0x007df560
007df542  PUSH 0x8b814c
007df547  PUSH 0x0
007df549  PUSH 0x5a
007df54b  PUSH 0x8bde14
007df550  PUSH 0x2
007df552  CALL 0x007d2670
007df557  ADD ESP,0x14
007df55a  CMP EAX,0x1
007df55d  JNZ 0x007df560
007df55f  INT3
007df560  MOV EDX,dword ptr [EBP + -0x8]
007df563  MOV EAX,dword ptr [EBP + 0xc]
007df566  MOV dword ptr [EDX + 0x4],EAX
007df569  MOV ECX,dword ptr [EBP + -0x8]
007df56c  MOV dword ptr [ECX + 0xc],0x42
007df573  MOV EDX,dword ptr [EBP + -0x8]
007df576  MOV EAX,dword ptr [EBP + 0x8]
007df579  MOV dword ptr [EDX + 0x8],EAX
007df57c  MOV ECX,dword ptr [EBP + -0x8]
007df57f  MOV EDX,dword ptr [EBP + 0x8]
007df582  MOV dword ptr [ECX],EDX
007df584  MOV EAX,dword ptr [EBP + 0x14]
007df587  PUSH EAX
007df588  MOV ECX,dword ptr [EBP + 0x10]
007df58b  PUSH ECX
007df58c  MOV EDX,dword ptr [EBP + -0x8]
007df58f  PUSH EDX
007df590  CALL 0x007d1390
007df595  ADD ESP,0xc
007df598  MOV dword ptr [EBP + -0x4],EAX
007df59b  CMP dword ptr [EBP + 0x8],0x0
007df59f  JZ 0x007df5eb
007df5a1  MOV EAX,dword ptr [EBP + -0x8]
007df5a4  MOV ECX,dword ptr [EAX + 0x4]
007df5a7  SUB ECX,0x1
007df5aa  MOV EDX,dword ptr [EBP + -0x8]
007df5ad  MOV dword ptr [EDX + 0x4],ECX
007df5b0  MOV EAX,dword ptr [EBP + -0x8]
007df5b3  CMP dword ptr [EAX + 0x4],0x0
007df5b7  JL 0x007df5da
007df5b9  MOV ECX,dword ptr [EBP + -0x8]
007df5bc  MOV EDX,dword ptr [ECX]
007df5be  MOV byte ptr [EDX],0x0
007df5c1  XOR EAX,EAX
007df5c3  AND EAX,0xff
007df5c8  MOV dword ptr [EBP + -0x2c],EAX
007df5cb  MOV ECX,dword ptr [EBP + -0x8]
007df5ce  MOV EDX,dword ptr [ECX]
007df5d0  ADD EDX,0x1
007df5d3  MOV EAX,dword ptr [EBP + -0x8]
007df5d6  MOV dword ptr [EAX],EDX
007df5d8  JMP 0x007df5eb
007df5da  MOV ECX,dword ptr [EBP + -0x8]
007df5dd  PUSH ECX
007df5de  PUSH 0x0
007df5e0  CALL 0x007d47d0
007df5e5  ADD ESP,0x8
007df5e8  MOV dword ptr [EBP + -0x2c],EAX
007df5eb  MOV EAX,dword ptr [EBP + -0x4]
007df5ee  MOV ESP,EBP
007df5f0  POP EBP
007df5f1  RET
