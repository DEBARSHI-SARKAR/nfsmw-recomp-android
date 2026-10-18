004ba280  MOV EAX,ECX
004ba282  XOR ECX,ECX
004ba284  PUSH ESI
004ba285  MOV dword ptr [EAX + 0x74],ECX
004ba288  MOV dword ptr [EAX],ECX
004ba28a  MOV dword ptr [EAX + 0x70],ECX
004ba28d  MOV dword ptr [EAX + 0x6c],ECX
004ba290  XOR ESI,ESI
004ba292  LEA EDX,[EAX + 0x34]
004ba295  MOV dword ptr [EDX + -0x18],ECX
004ba298  MOV dword ptr [EDX],ECX
004ba29a  MOV dword ptr [EDX + -0x30],ECX
004ba29d  MOV byte ptr [EAX + ESI*0x1 + 0x4c],CL
004ba2a1  MOV dword ptr [EDX + 0x20],ECX
004ba2a4  INC ESI
004ba2a5  ADD EDX,0x4
004ba2a8  CMP ESI,0x6
004ba2ab  JL 0x004ba295
004ba2ad  MOV byte ptr [EAX + 0x78],0x1
004ba2b1  POP ESI
004ba2b2  RET
