005defa0  MOV EAX,dword ptr [ESP + 0x4]
005defa4  TEST EAX,EAX
005defa6  JZ 0x005defc1
005defa8  MOV ECX,dword ptr [ESP + 0x8]
005defac  PUSH 0x0
005defae  LEA EDX,[ECX*0x4 + 0x0]
005defb5  PUSH EDX
005defb6  PUSH EAX
005defb7  MOV ECX,0x925b30
005defbc  CALL 0x005d0370
005defc1  RET 0x8
