005deac0  MOV EAX,dword ptr [ESP + 0x4]
005deac4  TEST EAX,EAX
005deac6  JZ 0x005deae1
005deac8  MOV ECX,dword ptr [ESP + 0x8]
005deacc  PUSH 0x0
005deace  LEA EDX,[ECX*0x4 + 0x0]
005dead5  PUSH EDX
005dead6  PUSH EAX
005dead7  MOV ECX,0x925b30
005deadc  CALL 0x005d0370
005deae1  RET 0x8
