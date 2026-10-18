007f6edb  PUSH EBP
007f6edc  MOV EBP,ESP
007f6ede  PUSH ESI
007f6edf  MOV ESI,ECX
007f6ee1  PUSH EDI
007f6ee2  LEA EDI,[ESI + 0x108]
007f6ee8  CMP dword ptr [EDI],0x0
007f6eeb  JNZ 0x007f6f15
007f6eed  CALL 0x007f6337
007f6ef2  PUSH 0x4
007f6ef4  POP EAX
007f6ef5  MOV dword ptr [EDI],EAX
007f6ef7  MOV dword ptr [ESI + 0x8],EAX
007f6efa  MOV EAX,dword ptr [EBP + 0x8]
007f6efd  MOV dword ptr [ESI + 0xc],EAX
007f6f00  MOV EAX,dword ptr [EBP + 0xc]
007f6f03  MOV dword ptr [ESI + 0x10],EAX
007f6f06  MOV EAX,dword ptr [EBP + 0x10]
007f6f09  MOV ECX,ESI
007f6f0b  MOV dword ptr [ESI + 0x14],EAX
007f6f0e  CALL 0x007f6455
007f6f13  JMP 0x007f6f3c
007f6f15  MOV EAX,dword ptr [EBP + 0x8]
007f6f18  MOV dword ptr [ESI + 0x60],EAX
007f6f1b  MOV EAX,dword ptr [EBP + 0xc]
007f6f1e  MOV dword ptr [ESI + 0x64],EAX
007f6f21  MOV EAX,dword ptr [EBP + 0x10]
007f6f24  MOV dword ptr [ESI + 0x5c],0x4
007f6f2b  MOV dword ptr [ESI + 0x68],EAX
007f6f2e  MOV EAX,dword ptr [ESI]
007f6f30  CMP dword ptr [EAX + 0x6c],0x0
007f6f34  JNZ 0x007f6f3c
007f6f36  DEC dword ptr [ESI + 0x104]
007f6f3c  POP EDI
007f6f3d  POP ESI
007f6f3e  POP EBP
007f6f3f  RET 0xc
