004bfd20  PUSH ESI
004bfd21  MOV ESI,ECX
004bfd23  MOV EAX,dword ptr [ESI + 0xc]
004bfd26  CMP EAX,dword ptr [ESI + 0x8]
004bfd29  JC 0x004bfd3c
004bfd2b  MOV EDX,dword ptr [ESI]
004bfd2d  INC EAX
004bfd2e  PUSH EAX
004bfd2f  MOV ECX,ESI
004bfd31  CALL dword ptr [EDX + 0xc]
004bfd34  PUSH EAX
004bfd35  MOV ECX,ESI
004bfd37  CALL 0x004c01d0
004bfd3c  MOV EAX,dword ptr [ESI + 0xc]
004bfd3f  MOV ECX,dword ptr [ESI + 0x4]
004bfd42  LEA EAX,[ECX + EAX*0x8]
004bfd45  TEST EAX,EAX
004bfd47  JZ 0x004bfd57
004bfd49  MOV ECX,dword ptr [ESP + 0x8]
004bfd4d  MOV EDX,dword ptr [ECX]
004bfd4f  MOV dword ptr [EAX],EDX
004bfd51  MOV ECX,dword ptr [ECX + 0x4]
004bfd54  MOV dword ptr [EAX + 0x4],ECX
004bfd57  INC dword ptr [ESI + 0xc]
004bfd5a  POP ESI
004bfd5b  RET 0x4
