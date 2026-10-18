007ee299  PUSH EBP
007ee29a  MOV EBP,ESP
007ee29c  SUB ESP,0x10
007ee29f  LEA EAX,[EBP + -0x8]
007ee2a2  PUSH EAX
007ee2a3  LEA EAX,[EBP + -0x10]
007ee2a6  PUSH EAX
007ee2a7  PUSH dword ptr [EBP + 0xc]
007ee2aa  PUSH dword ptr [EBP + 0x8]
007ee2ad  CALL 0x007ee073
007ee2b2  MOV ECX,dword ptr [EBP + 0x10]
007ee2b5  ADD ESP,0x10
007ee2b8  TEST ECX,ECX
007ee2ba  JZ 0x007ee2c7
007ee2bc  MOV EDX,dword ptr [EBP + -0x8]
007ee2bf  MOV dword ptr [ECX],EDX
007ee2c1  MOV EDX,dword ptr [EBP + -0x4]
007ee2c4  MOV dword ptr [ECX + 0x4],EDX
007ee2c7  LEAVE
007ee2c8  RET
