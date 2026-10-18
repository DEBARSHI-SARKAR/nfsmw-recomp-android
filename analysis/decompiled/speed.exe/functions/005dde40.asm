005dde40  PUSH ECX
005dde41  PUSH ESI
005dde42  LEA EAX,[ESP + 0x4]
005dde46  PUSH EAX
005dde47  MOV ESI,ECX
005dde49  CALL 0x005dddc0
005dde4e  MOV ECX,dword ptr [ESP + 0x8]
005dde52  MOV EDX,dword ptr [ESP + 0x10]
005dde56  ADD ESP,0x4
005dde59  XOR EAX,EAX
005dde5b  MOV dword ptr [ESI],ECX
005dde5d  MOV dword ptr [ESI + 0x4],EAX
005dde60  MOV dword ptr [ESI + 0xc],EAX
005dde63  MOV dword ptr [ESI + 0x8],0x14
005dde6a  MOV dword ptr [ESI + 0x10],EDX
005dde6d  MOV EAX,ESI
005dde6f  POP ESI
005dde70  POP ECX
005dde71  RET 0x4
