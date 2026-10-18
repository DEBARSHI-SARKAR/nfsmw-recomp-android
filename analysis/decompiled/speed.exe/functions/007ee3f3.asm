007ee3f3  PUSH EBP
007ee3f4  MOV EBP,ESP
007ee3f6  MOV EAX,dword ptr [ECX]
007ee3f8  TEST EAX,EAX
007ee3fa  JZ 0x007ee401
007ee3fc  LEA EDX,[EAX + 0x8]
007ee3ff  JMP 0x007ee403
007ee401  XOR EDX,EDX
007ee403  MOV EAX,dword ptr [EBP + 0x8]
007ee406  MOV dword ptr [EAX + 0x8],EDX
007ee409  INC dword ptr [ECX + 0x8]
007ee40c  MOV dword ptr [ECX],EAX
007ee40e  CMP dword ptr [EAX + 0x8],0x0
007ee412  JNZ 0x007ee417
007ee414  MOV dword ptr [ECX + 0x4],EAX
007ee417  POP EBP
007ee418  RET 0x4
