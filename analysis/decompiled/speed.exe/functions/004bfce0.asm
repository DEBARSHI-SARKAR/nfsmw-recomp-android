004bfce0  PUSH ESI
004bfce1  MOV ESI,ECX
004bfce3  CALL 0x00466410
004bfce8  TEST EAX,EAX
004bfcea  JZ 0x004bfd04
004bfcec  MOV ECX,dword ptr [ESP + 0x8]
004bfcf0  MOV dword ptr [EAX + 0x8],ECX
004bfcf3  MOV ECX,dword ptr [ESI + 0x4]
004bfcf6  MOV dword ptr [ECX],EAX
004bfcf8  MOV dword ptr [ESI + 0x4],EAX
004bfcfb  MOV dword ptr [EAX],ESI
004bfcfd  MOV dword ptr [EAX + 0x4],ECX
004bfd00  POP ESI
004bfd01  RET 0x4
004bfd04  MOV ECX,dword ptr [ESI + 0x4]
004bfd07  XOR EAX,EAX
004bfd09  MOV dword ptr [ECX],EAX
004bfd0b  MOV dword ptr [ESI + 0x4],EAX
004bfd0e  MOV dword ptr [EAX],ESI
004bfd10  MOV dword ptr [EAX + 0x4],ECX
004bfd13  POP ESI
004bfd14  RET 0x4
