006f5a70  PUSH EBX
006f5a71  PUSH ESI
006f5a72  PUSH EDI
006f5a73  MOV ESI,ECX
006f5a75  CALL 0x006f59c0
006f5a7a  MOV EAX,dword ptr [ESI + 0x15c]
006f5a80  MOV ECX,dword ptr [ESI + 0x154]
006f5a86  MOV EBX,dword ptr [ESI + 0x154]
006f5a8c  LEA EDI,[ESI + 0x150]
006f5a92  LEA EDX,[ECX + EAX*0x8]
006f5a95  CMP EBX,EDX
006f5a97  JZ 0x006f5aea
006f5a99  LEA ESP,[ESP]
006f5aa0  MOV EAX,dword ptr [EBX + 0x4]
006f5aa3  TEST EAX,EAX
006f5aa5  JZ 0x006f5ada
006f5aa7  MOV EAX,dword ptr [ESI + 0xc]
006f5aaa  CMP EAX,dword ptr [ESI + 0x8]
006f5aad  JC 0x006f5ac0
006f5aaf  MOV EDX,dword ptr [ESI]
006f5ab1  INC EAX
006f5ab2  PUSH EAX
006f5ab3  MOV ECX,ESI
006f5ab5  CALL dword ptr [EDX + 0xc]
006f5ab8  PUSH EAX
006f5ab9  MOV ECX,ESI
006f5abb  CALL 0x006ef850
006f5ac0  MOV EAX,dword ptr [ESI + 0xc]
006f5ac3  MOV ECX,dword ptr [ESI + 0x4]
006f5ac6  LEA EAX,[ECX + EAX*0x8]
006f5ac9  TEST EAX,EAX
006f5acb  JZ 0x006f5ad7
006f5acd  MOV EDX,dword ptr [EBX]
006f5acf  MOV dword ptr [EAX],EDX
006f5ad1  MOV ECX,dword ptr [EBX + 0x4]
006f5ad4  MOV dword ptr [EAX + 0x4],ECX
006f5ad7  INC dword ptr [ESI + 0xc]
006f5ada  MOV EDX,dword ptr [EDI + 0xc]
006f5add  MOV EAX,dword ptr [EDI + 0x4]
006f5ae0  ADD EBX,0x8
006f5ae3  LEA ECX,[EAX + EDX*0x8]
006f5ae6  CMP EBX,ECX
006f5ae8  JNZ 0x006f5aa0
006f5aea  MOV EAX,dword ptr [EDI + 0xc]
006f5aed  TEST EAX,EAX
006f5aef  JLE 0x006f5afa
006f5af1  MOV ECX,EAX
006f5af3  DEC ECX
006f5af4  DEC EAX
006f5af5  JNZ 0x006f5af3
006f5af7  MOV dword ptr [EDI + 0xc],ECX
006f5afa  MOV EAX,dword ptr [EDI + 0x4]
006f5afd  TEST EAX,EAX
006f5aff  JZ 0x006f5b22
006f5b01  MOV ECX,dword ptr [EDI + 0x8]
006f5b04  MOV EDX,dword ptr [EDI]
006f5b06  PUSH ECX
006f5b07  PUSH EAX
006f5b08  MOV ECX,EDI
006f5b0a  CALL dword ptr [EDX + 0x8]
006f5b0d  MOV dword ptr [EDI + 0x4],0x0
006f5b14  MOV dword ptr [EDI + 0x8],0x0
006f5b1b  MOV dword ptr [EDI + 0xc],0x0
006f5b22  POP EDI
006f5b23  MOV ECX,ESI
006f5b25  POP ESI
006f5b26  POP EBX
006f5b27  JMP 0x006f59c0
