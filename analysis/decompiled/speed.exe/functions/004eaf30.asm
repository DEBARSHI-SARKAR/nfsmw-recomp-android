004eaf30  PUSH ESI
004eaf31  MOV ESI,ECX
004eaf33  MOV EAX,dword ptr [ESI + 0xc]
004eaf36  CMP EAX,dword ptr [ESI + 0x8]
004eaf39  JC 0x004eaf4c
004eaf3b  MOV EDX,dword ptr [ESI]
004eaf3d  INC EAX
004eaf3e  PUSH EAX
004eaf3f  MOV ECX,ESI
004eaf41  CALL dword ptr [EDX + 0xc]
004eaf44  PUSH EAX
004eaf45  MOV ECX,ESI
004eaf47  CALL 0x004ea920
004eaf4c  MOV EAX,dword ptr [ESI + 0xc]
004eaf4f  MOV ECX,dword ptr [ESI + 0x4]
004eaf52  LEA EAX,[ECX + EAX*0x4]
004eaf55  TEST EAX,EAX
004eaf57  JZ 0x004eaf61
004eaf59  MOV EDX,dword ptr [ESP + 0x8]
004eaf5d  MOV ECX,dword ptr [EDX]
004eaf5f  MOV dword ptr [EAX],ECX
004eaf61  INC dword ptr [ESI + 0xc]
004eaf64  POP ESI
004eaf65  RET 0x4
