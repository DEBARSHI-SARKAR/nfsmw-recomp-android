007aeb90  MOV EDX,dword ptr [ESP + 0x4]
007aeb94  TEST EDX,EDX
007aeb96  JNZ 0x007aeb9d
007aeb98  XOR EAX,EAX
007aeb9a  RET 0x4
007aeb9d  MOV EAX,dword ptr [ECX + 0x1b4]
007aeba3  TEST EAX,EAX
007aeba5  PUSH ESI
007aeba6  LEA ESI,[ECX + 0x1b4]
007aebac  JZ 0x007aebb3
007aebae  ADD EAX,-0x4
007aebb1  JMP 0x007aebb5
007aebb3  XOR EAX,EAX
007aebb5  PUSH EBX
007aebb6  TEST ESI,ESI
007aebb8  JZ 0x007aebbf
007aebba  LEA ECX,[ESI + -0x4]
007aebbd  JMP 0x007aebc1
007aebbf  XOR ECX,ECX
007aebc1  CMP EAX,ECX
007aebc3  JZ 0x007aebf1
007aebc5  MOV BL,byte ptr [EDX + 0x1c]
007aebc8  TEST BL,BL
007aebca  MOV ECX,dword ptr [EAX + 0xc]
007aebcd  JZ 0x007aebd7
007aebcf  MOV ECX,dword ptr [ECX + 0x18]
007aebd2  MOV EBX,dword ptr [EDX + 0x18]
007aebd5  JMP 0x007aebdd
007aebd7  MOV ECX,dword ptr [ECX + 0x10]
007aebda  MOV EBX,dword ptr [EDX + 0x10]
007aebdd  CMP ECX,EBX
007aebdf  JZ 0x007aebf3
007aebe1  MOV EAX,dword ptr [EAX + 0x4]
007aebe4  TEST EAX,EAX
007aebe6  JZ 0x007aebed
007aebe8  ADD EAX,-0x4
007aebeb  JMP 0x007aebb6
007aebed  XOR EAX,EAX
007aebef  JMP 0x007aebb6
007aebf1  XOR EAX,EAX
007aebf3  POP EBX
007aebf4  POP ESI
007aebf5  RET 0x4
