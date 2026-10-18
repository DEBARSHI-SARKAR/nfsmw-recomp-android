007ea5a0  PUSH EBP
007ea5a1  MOV EBP,ESP
007ea5a3  MOV EAX,dword ptr [ECX]
007ea5a5  MOV EDX,dword ptr [EBP + 0x8]
007ea5a8  SHR EAX,0xa
007ea5ab  AND EAX,0x1
007ea5ae  MOV dword ptr [EDX + 0x8],EAX
007ea5b1  MOV EAX,dword ptr [ECX]
007ea5b3  SHR EAX,0xb
007ea5b6  AND EAX,0x1
007ea5b9  MOV dword ptr [EDX + 0xc],EAX
007ea5bc  MOV EAX,dword ptr [ECX]
007ea5be  SHR EAX,0x9
007ea5c1  AND EAX,0x1
007ea5c4  MOV dword ptr [EDX + 0x10],EAX
007ea5c7  OR dword ptr [EDX + 0x4],0x20
007ea5cb  MOV EAX,dword ptr [ECX + 0x8]
007ea5ce  TEST EAX,EAX
007ea5d0  JZ 0x007ea5d4
007ea5d2  ADD EAX,ECX
007ea5d4  PUSH ESI
007ea5d5  LEA ESI,[EAX + 0x1]
007ea5d8  MOV CL,byte ptr [EAX]
007ea5da  INC EAX
007ea5db  TEST CL,CL
007ea5dd  JNZ 0x007ea5d8
007ea5df  SUB EAX,ESI
007ea5e1  MOV dword ptr [EDX + 0x90],EAX
007ea5e7  POP ESI
007ea5e8  POP EBP
007ea5e9  RET 0x4
