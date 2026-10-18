007fa2b8  PUSH EBP
007fa2b9  MOV EBP,ESP
007fa2bb  PUSH ESI
007fa2bc  MOV ESI,dword ptr [EBP + 0x8]
007fa2bf  ADD dword ptr [ECX + 0xc],ESI
007fa2c2  MOV EAX,dword ptr [ECX + 0xc]
007fa2c5  CMP EAX,dword ptr [ECX + 0x8]
007fa2c8  JLE 0x007fa2cd
007fa2ca  MOV dword ptr [ECX + 0x8],EAX
007fa2cd  INC dword ptr [ECX + 0x10]
007fa2d0  PUSH dword ptr [0x00909e5c]
007fa2d6  LEA EAX,[ESI + 0x4]
007fa2d9  PUSH 0x4
007fa2db  PUSH 0x0
007fa2dd  PUSH EAX
007fa2de  PUSH 0x8c27d4
007fa2e3  CALL dword ptr [0x00909e54]
007fa2e9  ADD ESP,0x14
007fa2ec  MOV dword ptr [EAX],ESI
007fa2ee  ADD EAX,0x4
007fa2f1  POP ESI
007fa2f2  POP EBP
007fa2f3  RET 0x8
