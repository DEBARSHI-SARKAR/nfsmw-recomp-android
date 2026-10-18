005db090  PUSH ECX
005db091  PUSH ESI
005db092  LEA EAX,[ESP + 0x4]
005db096  PUSH EAX
005db097  MOV ESI,ECX
005db099  CALL 0x005db010
005db09e  MOV ECX,dword ptr [ESP + 0x8]
005db0a2  MOV EDX,dword ptr [ESP + 0x10]
005db0a6  ADD ESP,0x4
005db0a9  XOR EAX,EAX
005db0ab  MOV dword ptr [ESI],ECX
005db0ad  MOV dword ptr [ESI + 0x4],EAX
005db0b0  MOV dword ptr [ESI + 0xc],EAX
005db0b3  MOV EAX,dword ptr [ESP + 0x10]
005db0b7  MOV dword ptr [ESI + 0x14],EAX
005db0ba  MOV dword ptr [ESI + 0x8],0x18
005db0c1  MOV dword ptr [ESI + 0x10],EDX
005db0c4  MOV EAX,ESI
005db0c6  POP ESI
005db0c7  POP ECX
005db0c8  RET 0x8
