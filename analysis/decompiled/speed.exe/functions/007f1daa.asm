007f1daa  PUSH EBP
007f1dab  MOV EBP,ESP
007f1dad  LEA EAX,[ECX + 0xa0]
007f1db3  PUSH ESI
007f1db4  MOV ESI,dword ptr [EAX]
007f1db6  CMP ESI,0x20
007f1db9  JGE 0x007f1dea
007f1dbb  MOV EDX,dword ptr [EBP + 0x8]
007f1dbe  MOV dword ptr [ECX + ESI*0x4 + 0x20],EDX
007f1dc2  INC dword ptr [EAX]
007f1dc4  MOV EAX,dword ptr [EDX + 0x8]
007f1dc7  DEC EAX
007f1dc8  JZ 0x007f1de0
007f1dca  DEC EAX
007f1dcb  JZ 0x007f1dd8
007f1dcd  DEC EAX
007f1dce  JNZ 0x007f1de6
007f1dd0  MOV dword ptr [ECX + 0xac],EDX
007f1dd6  JMP 0x007f1de6
007f1dd8  MOV dword ptr [ECX + 0xa4],EDX
007f1dde  JMP 0x007f1de6
007f1de0  MOV dword ptr [ECX + 0xa8],EDX
007f1de6  MOV AL,0x1
007f1de8  JMP 0x007f1dec
007f1dea  XOR AL,AL
007f1dec  POP ESI
007f1ded  POP EBP
007f1dee  RET 0x4
