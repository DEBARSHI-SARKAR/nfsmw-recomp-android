004ead20  PUSH ESI
004ead21  MOV ESI,ECX
004ead23  MOV EAX,dword ptr [ESI + 0x8]
004ead26  PUSH EDI
004ead27  MOV EDI,dword ptr [ESP + 0xc]
004ead2b  CMP EDI,EAX
004ead2d  JBE 0x004eadc0
004ead33  MOV EAX,dword ptr [ESI]
004ead35  PUSH EBX
004ead36  PUSH EBP
004ead37  PUSH EDI
004ead38  CALL dword ptr [EAX + 0x14]
004ead3b  MOV ECX,dword ptr [ESI + 0x8]
004ead3e  MOV EDX,dword ptr [ESI]
004ead40  MOV EBP,dword ptr [ESI + 0x4]
004ead43  MOV EBX,dword ptr [ESI + 0xc]
004ead46  PUSH 0x10
004ead48  MOV dword ptr [ESP + 0x18],ECX
004ead4c  PUSH EDI
004ead4d  MOV ECX,ESI
004ead4f  CALL dword ptr [EDX + 0x4]
004ead52  CMP EBP,EAX
004ead54  MOV dword ptr [ESI + 0x4],EAX
004ead57  MOV dword ptr [ESI + 0x8],EDI
004ead5a  JZ 0x004eadbe
004ead5c  TEST EBX,EBX
004ead5e  MOV dword ptr [ESI + 0xc],0x0
004ead65  JLE 0x004eadad
004ead67  MOV EDI,EBP
004ead69  LEA ESP,[ESP]
004ead70  MOV EAX,dword ptr [ESI + 0xc]
004ead73  CMP EAX,dword ptr [ESI + 0x8]
004ead76  JC 0x004ead89
004ead78  MOV EDX,dword ptr [ESI]
004ead7a  INC EAX
004ead7b  PUSH EAX
004ead7c  MOV ECX,ESI
004ead7e  CALL dword ptr [EDX + 0xc]
004ead81  PUSH EAX
004ead82  MOV ECX,ESI
004ead84  CALL 0x004ead20
004ead89  MOV EAX,dword ptr [ESI + 0xc]
004ead8c  MOV ECX,dword ptr [ESI + 0x4]
004ead8f  LEA EAX,[ECX + EAX*0x8]
004ead92  TEST EAX,EAX
004ead94  JZ 0x004eada0
004ead96  MOV EDX,dword ptr [EDI]
004ead98  MOV dword ptr [EAX],EDX
004ead9a  MOV ECX,dword ptr [EDI + 0x4]
004ead9d  MOV dword ptr [EAX + 0x4],ECX
004eada0  MOV EDX,dword ptr [ESI + 0xc]
004eada3  INC EDX
004eada4  ADD EDI,0x8
004eada7  DEC EBX
004eada8  MOV dword ptr [ESI + 0xc],EDX
004eadab  JNZ 0x004ead70
004eadad  TEST EBP,EBP
004eadaf  JZ 0x004eadbe
004eadb1  MOV EAX,dword ptr [ESP + 0x14]
004eadb5  MOV EDX,dword ptr [ESI]
004eadb7  PUSH EAX
004eadb8  PUSH EBP
004eadb9  MOV ECX,ESI
004eadbb  CALL dword ptr [EDX + 0x8]
004eadbe  POP EBP
004eadbf  POP EBX
004eadc0  POP EDI
004eadc1  POP ESI
004eadc2  RET 0x4
