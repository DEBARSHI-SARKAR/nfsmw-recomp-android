004eab00  PUSH ESI
004eab01  MOV ESI,ECX
004eab03  MOV EAX,dword ptr [ESI + 0x8]
004eab06  PUSH EDI
004eab07  MOV EDI,dword ptr [ESP + 0xc]
004eab0b  CMP EDI,EAX
004eab0d  JBE 0x004eaba0
004eab13  MOV EAX,dword ptr [ESI]
004eab15  PUSH EBX
004eab16  PUSH EBP
004eab17  PUSH EDI
004eab18  CALL dword ptr [EAX + 0x14]
004eab1b  MOV ECX,dword ptr [ESI + 0x8]
004eab1e  MOV EDX,dword ptr [ESI]
004eab20  MOV EBP,dword ptr [ESI + 0x4]
004eab23  MOV EBX,dword ptr [ESI + 0xc]
004eab26  PUSH 0x10
004eab28  MOV dword ptr [ESP + 0x18],ECX
004eab2c  PUSH EDI
004eab2d  MOV ECX,ESI
004eab2f  CALL dword ptr [EDX + 0x4]
004eab32  CMP EBP,EAX
004eab34  MOV dword ptr [ESI + 0x4],EAX
004eab37  MOV dword ptr [ESI + 0x8],EDI
004eab3a  JZ 0x004eab9e
004eab3c  TEST EBX,EBX
004eab3e  MOV dword ptr [ESI + 0xc],0x0
004eab45  JLE 0x004eab8d
004eab47  MOV EDI,EBP
004eab49  LEA ESP,[ESP]
004eab50  MOV EAX,dword ptr [ESI + 0xc]
004eab53  CMP EAX,dword ptr [ESI + 0x8]
004eab56  JC 0x004eab69
004eab58  MOV EDX,dword ptr [ESI]
004eab5a  INC EAX
004eab5b  PUSH EAX
004eab5c  MOV ECX,ESI
004eab5e  CALL dword ptr [EDX + 0xc]
004eab61  PUSH EAX
004eab62  MOV ECX,ESI
004eab64  CALL 0x004eab00
004eab69  MOV EAX,dword ptr [ESI + 0xc]
004eab6c  MOV ECX,dword ptr [ESI + 0x4]
004eab6f  LEA EAX,[ECX + EAX*0x8]
004eab72  TEST EAX,EAX
004eab74  JZ 0x004eab80
004eab76  MOV EDX,dword ptr [EDI]
004eab78  MOV dword ptr [EAX],EDX
004eab7a  MOV ECX,dword ptr [EDI + 0x4]
004eab7d  MOV dword ptr [EAX + 0x4],ECX
004eab80  MOV EDX,dword ptr [ESI + 0xc]
004eab83  INC EDX
004eab84  ADD EDI,0x8
004eab87  DEC EBX
004eab88  MOV dword ptr [ESI + 0xc],EDX
004eab8b  JNZ 0x004eab50
004eab8d  TEST EBP,EBP
004eab8f  JZ 0x004eab9e
004eab91  MOV EAX,dword ptr [ESP + 0x14]
004eab95  MOV EDX,dword ptr [ESI]
004eab97  PUSH EAX
004eab98  PUSH EBP
004eab99  MOV ECX,ESI
004eab9b  CALL dword ptr [EDX + 0x8]
004eab9e  POP EBP
004eab9f  POP EBX
004eaba0  POP EDI
004eaba1  POP ESI
004eaba2  RET 0x4
