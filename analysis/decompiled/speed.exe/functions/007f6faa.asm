007f6faa  PUSH EBP
007f6fab  MOV EBP,ESP
007f6fad  PUSH ESI
007f6fae  MOV ESI,ECX
007f6fb0  PUSH EDI
007f6fb1  LEA EDI,[ESI + 0x108]
007f6fb7  CMP dword ptr [EDI],0x0
007f6fba  JNZ 0x007f6fe1
007f6fbc  CALL 0x007f6337
007f6fc1  PUSH dword ptr [EBP + 0x10]
007f6fc4  LEA ECX,[ESI + 0x8]
007f6fc7  PUSH dword ptr [EBP + 0xc]
007f6fca  MOV dword ptr [EDI],0x20
007f6fd0  PUSH dword ptr [EBP + 0x8]
007f6fd3  CALL 0x007f621a
007f6fd8  MOV ECX,ESI
007f6fda  CALL 0x007f6455
007f6fdf  JMP 0x007f7000
007f6fe1  PUSH dword ptr [EBP + 0x10]
007f6fe4  LEA ECX,[ESI + 0x5c]
007f6fe7  PUSH dword ptr [EBP + 0xc]
007f6fea  PUSH dword ptr [EBP + 0x8]
007f6fed  CALL 0x007f621a
007f6ff2  MOV EAX,dword ptr [ESI]
007f6ff4  CMP dword ptr [EAX + 0x6c],0x0
007f6ff8  JNZ 0x007f7000
007f6ffa  DEC dword ptr [ESI + 0x104]
007f7000  POP EDI
007f7001  POP ESI
007f7002  POP EBP
007f7003  RET 0xc
