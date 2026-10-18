004c6ab0  PUSH ESI
004c6ab1  MOV ESI,ECX
004c6ab3  MOV EAX,dword ptr [ESI + 0xc]
004c6ab6  TEST EAX,EAX
004c6ab8  JLE 0x004c6ac7
004c6aba  MOV ECX,EAX
004c6abc  LEA ESP,[ESP]
004c6ac0  DEC ECX
004c6ac1  DEC EAX
004c6ac2  JNZ 0x004c6ac0
004c6ac4  MOV dword ptr [ESI + 0xc],ECX
004c6ac7  MOV EAX,dword ptr [ESI + 0x4]
004c6aca  TEST EAX,EAX
004c6acc  JZ 0x004c6aef
004c6ace  MOV ECX,dword ptr [ESI + 0x8]
004c6ad1  MOV EDX,dword ptr [ESI]
004c6ad3  PUSH ECX
004c6ad4  PUSH EAX
004c6ad5  MOV ECX,ESI
004c6ad7  CALL dword ptr [EDX + 0x8]
004c6ada  MOV dword ptr [ESI + 0x4],0x0
004c6ae1  MOV dword ptr [ESI + 0x8],0x0
004c6ae8  MOV dword ptr [ESI + 0xc],0x0
004c6aef  POP ESI
004c6af0  RET
