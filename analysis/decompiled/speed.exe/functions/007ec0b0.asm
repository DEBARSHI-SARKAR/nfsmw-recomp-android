007ec0b0  PUSH EBP
007ec0b1  MOV EBP,ESP
007ec0b3  SUB ESP,0xc
007ec0b6  MOV ECX,dword ptr [EBP + 0x8]
007ec0b9  LEA EAX,[EBP + -0xc]
007ec0bc  PUSH EAX
007ec0bd  PUSH ECX
007ec0be  CALL 0x007ebf50
007ec0c3  MOV EAX,dword ptr [EBP + 0xc]
007ec0c6  IMUL EAX,dword ptr [EBP + 0x10]
007ec0ca  MOV ECX,dword ptr [EBP + -0x8]
007ec0cd  IMUL ECX,dword ptr [EBP + -0xc]
007ec0d1  CDQ
007ec0d2  ADD ESP,0x8
007ec0d5  IDIV ECX
007ec0d7  MOV ESP,EBP
007ec0d9  POP EBP
007ec0da  RET
