005af4f0  MOV EAX,dword ptr [ECX + 0x88]
005af4f6  MOV EDX,dword ptr [ECX + 0x60]
005af4f9  INC EAX
005af4fa  CMP EAX,EDX
005af4fc  MOV dword ptr [ECX + 0x88],EAX
005af502  JC 0x005af528
005af504  MOV EAX,dword ptr [ECX + 0x8c]
005af50a  XOR EDX,EDX
005af50c  PUSH ESI
005af50d  MOV ESI,dword ptr [ECX + 0x64]
005af510  INC EAX
005af511  CMP EAX,ESI
005af513  MOV dword ptr [ECX + 0x88],EDX
005af519  MOV dword ptr [ECX + 0x8c],EAX
005af51f  POP ESI
005af520  JC 0x005af528
005af522  MOV dword ptr [ECX + 0x8c],EDX
005af528  RET
