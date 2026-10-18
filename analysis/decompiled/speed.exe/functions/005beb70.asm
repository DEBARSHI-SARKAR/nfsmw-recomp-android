005beb70  PUSH -0x1
005beb72  PUSH 0x874328
005beb77  MOV EAX,FS:[0x0]
005beb7d  PUSH EAX
005beb7e  MOV dword ptr FS:[0x0],ESP
005beb85  PUSH ECX
005beb86  PUSH ESI
005beb87  MOV ESI,ECX
005beb89  MOV dword ptr [ESP + 0x4],ESI
005beb8d  LEA ECX,[ESI + 0xc]
005beb90  MOV dword ptr [ESP + 0x10],0x0
005beb98  MOV dword ptr [ECX],0x8a2c18
005beb9e  CALL 0x005b3b20
005beba3  MOV ECX,dword ptr [ESP + 0x8]
005beba7  MOV dword ptr [ESI],0x8a2c14
005bebad  POP ESI
005bebae  MOV dword ptr FS:[0x0],ECX
005bebb5  ADD ESP,0x10
005bebb8  RET
