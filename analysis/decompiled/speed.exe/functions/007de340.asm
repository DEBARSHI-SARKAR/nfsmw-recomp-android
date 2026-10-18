007de340  PUSH EBP
007de341  MOV EBP,ESP
007de343  SUB ESP,0x10
007de346  MOV EAX,dword ptr [EBP + 0xc]
007de349  CDQ
007de34a  AND EDX,0x1f
007de34d  ADD EAX,EDX
007de34f  SAR EAX,0x5
007de352  MOV dword ptr [EBP + -0x8],EAX
007de355  MOV EAX,dword ptr [EBP + 0xc]
007de358  AND EAX,0x8000001f
007de35d  JNS 0x007de364
007de35f  DEC EAX
007de360  OR EAX,0xffffffe0
007de363  INC EAX
007de364  MOV ECX,0x1f
007de369  SUB ECX,EAX
007de36b  MOV dword ptr [EBP + -0x10],ECX
007de36e  MOV EDX,0x1
007de373  MOV ECX,dword ptr [EBP + -0x10]
007de376  SHL EDX,CL
007de378  MOV dword ptr [EBP + -0xc],EDX
007de37b  MOV EAX,dword ptr [EBP + -0x8]
007de37e  MOV ECX,dword ptr [EBP + 0x8]
007de381  LEA EDX,[ECX + EAX*0x4]
007de384  PUSH EDX
007de385  MOV EAX,dword ptr [EBP + -0xc]
007de388  PUSH EAX
007de389  MOV ECX,dword ptr [EBP + -0x8]
007de38c  MOV EDX,dword ptr [EBP + 0x8]
007de38f  MOV EAX,dword ptr [EDX + ECX*0x4]
007de392  PUSH EAX
007de393  CALL 0x007e5b90
007de398  ADD ESP,0xc
007de39b  MOV dword ptr [EBP + -0x4],EAX
007de39e  MOV ECX,dword ptr [EBP + -0x8]
007de3a1  SUB ECX,0x1
007de3a4  MOV dword ptr [EBP + -0x8],ECX
007de3a7  JMP 0x007de3b2
007de3a9  MOV EDX,dword ptr [EBP + -0x8]
007de3ac  SUB EDX,0x1
007de3af  MOV dword ptr [EBP + -0x8],EDX
007de3b2  CMP dword ptr [EBP + -0x8],0x0
007de3b6  JL 0x007de3e1
007de3b8  CMP dword ptr [EBP + -0x4],0x0
007de3bc  JZ 0x007de3e1
007de3be  MOV EAX,dword ptr [EBP + -0x8]
007de3c1  MOV ECX,dword ptr [EBP + 0x8]
007de3c4  LEA EDX,[ECX + EAX*0x4]
007de3c7  PUSH EDX
007de3c8  PUSH 0x1
007de3ca  MOV EAX,dword ptr [EBP + -0x8]
007de3cd  MOV ECX,dword ptr [EBP + 0x8]
007de3d0  MOV EDX,dword ptr [ECX + EAX*0x4]
007de3d3  PUSH EDX
007de3d4  CALL 0x007e5b90
007de3d9  ADD ESP,0xc
007de3dc  MOV dword ptr [EBP + -0x4],EAX
007de3df  JMP 0x007de3a9
007de3e1  MOV EAX,dword ptr [EBP + -0x4]
007de3e4  MOV ESP,EBP
007de3e6  POP EBP
007de3e7  RET
