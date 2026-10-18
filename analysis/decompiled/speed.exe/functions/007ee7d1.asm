007ee7d1  PUSH ESI
007ee7d2  MOV ESI,ECX
007ee7d4  MOV ECX,dword ptr [0x009076dc]
007ee7da  MOV EAX,dword ptr [ECX]
007ee7dc  PUSH 0x0
007ee7de  PUSH dword ptr [ESI + 0x30]
007ee7e1  CALL dword ptr [EAX + 0x4]
007ee7e4  XOR EAX,EAX
007ee7e6  INC EAX
007ee7e7  CMP byte ptr [ESI + 0x11],AL
007ee7ea  POP ESI
007ee7eb  JZ 0x007ee7ef
007ee7ed  XOR EAX,EAX
007ee7ef  XOR EDX,EDX
007ee7f1  RET
