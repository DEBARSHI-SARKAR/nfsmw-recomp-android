004ea7b0  PUSH ESI
004ea7b1  MOV ESI,ECX
004ea7b3  MOV EAX,dword ptr [ESI + 0xc]
004ea7b6  CMP EAX,dword ptr [ESI + 0x8]
004ea7b9  JC 0x004ea7cc
004ea7bb  MOV EDX,dword ptr [ESI]
004ea7bd  INC EAX
004ea7be  PUSH EAX
004ea7bf  MOV ECX,ESI
004ea7c1  CALL dword ptr [EDX + 0xc]
004ea7c4  PUSH EAX
004ea7c5  MOV ECX,ESI
004ea7c7  CALL 0x004eab00
004ea7cc  MOV EAX,dword ptr [ESI + 0xc]
004ea7cf  MOV ECX,dword ptr [ESI + 0x4]
004ea7d2  LEA EAX,[ECX + EAX*0x8]
004ea7d5  TEST EAX,EAX
004ea7d7  JZ 0x004ea7e7
004ea7d9  MOV ECX,dword ptr [ESP + 0x8]
004ea7dd  MOV EDX,dword ptr [ECX]
004ea7df  MOV dword ptr [EAX],EDX
004ea7e1  MOV ECX,dword ptr [ECX + 0x4]
004ea7e4  MOV dword ptr [EAX + 0x4],ECX
004ea7e7  INC dword ptr [ESI + 0xc]
004ea7ea  POP ESI
004ea7eb  RET 0x4
