006f3a90  PUSH ESI
006f3a91  MOV ESI,ECX
006f3a93  MOV EAX,dword ptr [ESI + 0xc]
006f3a96  CMP EAX,dword ptr [ESI + 0x8]
006f3a99  JC 0x006f3aac
006f3a9b  MOV EDX,dword ptr [ESI]
006f3a9d  INC EAX
006f3a9e  PUSH EAX
006f3a9f  MOV ECX,ESI
006f3aa1  CALL dword ptr [EDX + 0xc]
006f3aa4  PUSH EAX
006f3aa5  MOV ECX,ESI
006f3aa7  CALL 0x006efa70
006f3aac  MOV EAX,dword ptr [ESI + 0xc]
006f3aaf  MOV ECX,dword ptr [ESI + 0x4]
006f3ab2  LEA EAX,[ECX + EAX*0x8]
006f3ab5  TEST EAX,EAX
006f3ab7  JZ 0x006f3ac7
006f3ab9  MOV ECX,dword ptr [ESP + 0x8]
006f3abd  MOV EDX,dword ptr [ECX]
006f3abf  MOV dword ptr [EAX],EDX
006f3ac1  MOV ECX,dword ptr [ECX + 0x4]
006f3ac4  MOV dword ptr [EAX + 0x4],ECX
006f3ac7  INC dword ptr [ESI + 0xc]
006f3aca  POP ESI
006f3acb  RET 0x4
