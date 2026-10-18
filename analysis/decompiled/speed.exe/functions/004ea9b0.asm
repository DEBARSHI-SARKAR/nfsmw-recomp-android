004ea9b0  PUSH ESI
004ea9b1  MOV ESI,ECX
004ea9b3  MOV EAX,dword ptr [ESI + 0x8]
004ea9b6  PUSH EDI
004ea9b7  MOV EDI,dword ptr [ESP + 0xc]
004ea9bb  CMP EDI,EAX
004ea9bd  JBE 0x004eaa67
004ea9c3  MOV EAX,dword ptr [ESI]
004ea9c5  PUSH EBX
004ea9c6  PUSH EBP
004ea9c7  PUSH EDI
004ea9c8  CALL dword ptr [EAX + 0x14]
004ea9cb  MOV ECX,dword ptr [ESI + 0x8]
004ea9ce  MOV EDX,dword ptr [ESI]
004ea9d0  MOV EBP,dword ptr [ESI + 0x4]
004ea9d3  MOV EBX,dword ptr [ESI + 0xc]
004ea9d6  PUSH 0x10
004ea9d8  MOV dword ptr [ESP + 0x18],ECX
004ea9dc  PUSH EDI
004ea9dd  MOV ECX,ESI
004ea9df  CALL dword ptr [EDX + 0x4]
004ea9e2  CMP EBP,EAX
004ea9e4  MOV dword ptr [ESI + 0x4],EAX
004ea9e7  MOV dword ptr [ESI + 0x8],EDI
004ea9ea  JZ 0x004eaa65
004ea9ec  TEST EBX,EBX
004ea9ee  MOV dword ptr [ESI + 0xc],0x0
004ea9f5  JLE 0x004eaa54
004ea9f7  MOV EDI,EBP
004ea9f9  LEA ESP,[ESP]
004eaa00  MOV EAX,dword ptr [ESI + 0xc]
004eaa03  CMP EAX,dword ptr [ESI + 0x8]
004eaa06  JC 0x004eaa19
004eaa08  MOV EDX,dword ptr [ESI]
004eaa0a  INC EAX
004eaa0b  PUSH EAX
004eaa0c  MOV ECX,ESI
004eaa0e  CALL dword ptr [EDX + 0xc]
004eaa11  PUSH EAX
004eaa12  MOV ECX,ESI
004eaa14  CALL 0x004ea9b0
004eaa19  MOV EAX,dword ptr [ESI + 0xc]
004eaa1c  MOV ECX,dword ptr [ESI + 0x4]
004eaa1f  LEA EAX,[EAX + EAX*0x4]
004eaa22  LEA EAX,[ECX + EAX*0x4]
004eaa25  TEST EAX,EAX
004eaa27  JZ 0x004eaa47
004eaa29  MOV EDX,EDI
004eaa2b  MOV ECX,dword ptr [EDX]
004eaa2d  MOV dword ptr [EAX],ECX
004eaa2f  MOV ECX,dword ptr [EDX + 0x4]
004eaa32  MOV dword ptr [EAX + 0x4],ECX
004eaa35  MOV ECX,dword ptr [EDX + 0x8]
004eaa38  MOV dword ptr [EAX + 0x8],ECX
004eaa3b  MOV ECX,dword ptr [EDX + 0xc]
004eaa3e  MOV dword ptr [EAX + 0xc],ECX
004eaa41  MOV EDX,dword ptr [EDX + 0x10]
004eaa44  MOV dword ptr [EAX + 0x10],EDX
004eaa47  MOV EDX,dword ptr [ESI + 0xc]
004eaa4a  INC EDX
004eaa4b  ADD EDI,0x14
004eaa4e  DEC EBX
004eaa4f  MOV dword ptr [ESI + 0xc],EDX
004eaa52  JNZ 0x004eaa00
004eaa54  TEST EBP,EBP
004eaa56  JZ 0x004eaa65
004eaa58  MOV ECX,dword ptr [ESP + 0x14]
004eaa5c  MOV EAX,dword ptr [ESI]
004eaa5e  PUSH ECX
004eaa5f  PUSH EBP
004eaa60  MOV ECX,ESI
004eaa62  CALL dword ptr [EAX + 0x8]
004eaa65  POP EBP
004eaa66  POP EBX
004eaa67  POP EDI
004eaa68  POP ESI
004eaa69  RET 0x4
