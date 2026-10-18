007b3f90  PUSH ESI
007b3f91  MOV ESI,ECX
007b3f93  MOV EAX,dword ptr [ESI]
007b3f95  CMP EAX,ESI
007b3f97  JZ 0x007b3fbd
007b3f99  LEA ESP,[ESP]
007b3fa0  MOV ECX,dword ptr [EAX]
007b3fa2  MOV EDX,dword ptr [EAX + 0x4]
007b3fa5  MOV dword ptr [EDX],ECX
007b3fa7  MOV dword ptr [ECX + 0x4],EDX
007b3faa  LEA ECX,[EAX + -0x4]
007b3fad  TEST ECX,ECX
007b3faf  JZ 0x007b3fb7
007b3fb1  MOV EAX,dword ptr [ECX]
007b3fb3  PUSH 0x1
007b3fb5  CALL dword ptr [EAX]
007b3fb7  MOV EAX,dword ptr [ESI]
007b3fb9  CMP EAX,ESI
007b3fbb  JNZ 0x007b3fa0
007b3fbd  POP ESI
007b3fbe  RET
