007b3fc0  PUSH ESI
007b3fc1  MOV ESI,ECX
007b3fc3  MOV EAX,dword ptr [ESI]
007b3fc5  CMP EAX,ESI
007b3fc7  JZ 0x007b3fed
007b3fc9  LEA ESP,[ESP]
007b3fd0  MOV ECX,dword ptr [EAX]
007b3fd2  MOV EDX,dword ptr [EAX + 0x4]
007b3fd5  MOV dword ptr [EDX],ECX
007b3fd7  MOV dword ptr [ECX + 0x4],EDX
007b3fda  LEA ECX,[EAX + -0x4]
007b3fdd  TEST ECX,ECX
007b3fdf  JZ 0x007b3fe7
007b3fe1  MOV EAX,dword ptr [ECX]
007b3fe3  PUSH 0x1
007b3fe5  CALL dword ptr [EAX]
007b3fe7  MOV EAX,dword ptr [ESI]
007b3fe9  CMP EAX,ESI
007b3feb  JNZ 0x007b3fd0
007b3fed  POP ESI
007b3fee  RET
