006f3ad0  PUSH ESI
006f3ad1  MOV ESI,ECX
006f3ad3  MOV EAX,dword ptr [ESI + 0xc]
006f3ad6  TEST EAX,EAX
006f3ad8  JLE 0x006f3ae7
006f3ada  MOV ECX,EAX
006f3adc  LEA ESP,[ESP]
006f3ae0  DEC ECX
006f3ae1  DEC EAX
006f3ae2  JNZ 0x006f3ae0
006f3ae4  MOV dword ptr [ESI + 0xc],ECX
006f3ae7  MOV EAX,dword ptr [ESI + 0x4]
006f3aea  TEST EAX,EAX
006f3aec  JZ 0x006f3b0f
006f3aee  MOV ECX,dword ptr [ESI + 0x8]
006f3af1  MOV EDX,dword ptr [ESI]
006f3af3  PUSH ECX
006f3af4  PUSH EAX
006f3af5  MOV ECX,ESI
006f3af7  CALL dword ptr [EDX + 0x8]
006f3afa  MOV dword ptr [ESI + 0x4],0x0
006f3b01  MOV dword ptr [ESI + 0x8],0x0
006f3b08  MOV dword ptr [ESI + 0xc],0x0
006f3b0f  POP ESI
006f3b10  RET
