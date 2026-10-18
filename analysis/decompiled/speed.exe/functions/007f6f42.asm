007f6f42  PUSH EBP
007f6f43  MOV EBP,ESP
007f6f45  PUSH ESI
007f6f46  MOV ESI,ECX
007f6f48  PUSH EDI
007f6f49  LEA EDI,[ESI + 0x108]
007f6f4f  CMP dword ptr [EDI],0x0
007f6f52  JNZ 0x007f6f7f
007f6f54  CALL 0x007f6337
007f6f59  PUSH dword ptr [EBP + 0x18]
007f6f5c  LEA ECX,[ESI + 0x8]
007f6f5f  PUSH dword ptr [EBP + 0x14]
007f6f62  MOV dword ptr [EDI],0x8
007f6f68  PUSH dword ptr [EBP + 0x10]
007f6f6b  PUSH dword ptr [EBP + 0xc]
007f6f6e  PUSH dword ptr [EBP + 0x8]
007f6f71  CALL 0x007f61ef
007f6f76  MOV ECX,ESI
007f6f78  CALL 0x007f6455
007f6f7d  JMP 0x007f6fa4
007f6f7f  PUSH dword ptr [EBP + 0x18]
007f6f82  LEA ECX,[ESI + 0x5c]
007f6f85  PUSH dword ptr [EBP + 0x14]
007f6f88  PUSH dword ptr [EBP + 0x10]
007f6f8b  PUSH dword ptr [EBP + 0xc]
007f6f8e  PUSH dword ptr [EBP + 0x8]
007f6f91  CALL 0x007f61ef
007f6f96  MOV EAX,dword ptr [ESI]
007f6f98  CMP dword ptr [EAX + 0x6c],0x0
007f6f9c  JNZ 0x007f6fa4
007f6f9e  DEC dword ptr [ESI + 0x104]
007f6fa4  POP EDI
007f6fa5  POP ESI
007f6fa6  POP EBP
007f6fa7  RET 0x14
