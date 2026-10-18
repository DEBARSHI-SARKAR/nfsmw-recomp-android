006fbb80  PUSH ECX
006fbb81  PUSH ESI
006fbb82  MOV ESI,ECX
006fbb84  MOV EDX,dword ptr [ESI + 0x4]
006fbb87  TEST EDX,EDX
006fbb89  JNZ 0x006fbb8f
006fbb8b  XOR ECX,ECX
006fbb8d  JMP 0x006fbb97
006fbb8f  MOV ECX,dword ptr [ESI + 0x8]
006fbb92  SUB ECX,EDX
006fbb94  SAR ECX,0x2
006fbb97  TEST EDX,EDX
006fbb99  JZ 0x006fbbd2
006fbb9b  MOV EAX,dword ptr [ESI + 0xc]
006fbb9e  SUB EAX,EDX
006fbba0  SAR EAX,0x2
006fbba3  CMP ECX,EAX
006fbba5  JNC 0x006fbbd2
006fbba7  MOV ECX,dword ptr [ESP + 0xc]
006fbbab  PUSH EDI
006fbbac  MOV EDI,dword ptr [ESI + 0x8]
006fbbaf  MOV byte ptr [ESP + 0x8],0x0
006fbbb4  MOV EAX,dword ptr [ESP + 0x8]
006fbbb8  PUSH EAX
006fbbb9  PUSH ESI
006fbbba  PUSH ECX
006fbbbb  PUSH 0x1
006fbbbd  PUSH EDI
006fbbbe  CALL 0x006f0930
006fbbc3  ADD ESP,0x14
006fbbc6  ADD EDI,0x4
006fbbc9  MOV dword ptr [ESI + 0x8],EDI
006fbbcc  POP EDI
006fbbcd  POP ESI
006fbbce  POP ECX
006fbbcf  RET 0x4
006fbbd2  MOV EDX,dword ptr [ESP + 0xc]
006fbbd6  MOV EAX,dword ptr [ESI + 0x8]
006fbbd9  PUSH EDX
006fbbda  PUSH 0x1
006fbbdc  PUSH EAX
006fbbdd  MOV ECX,ESI
006fbbdf  CALL 0x006fa920
006fbbe4  POP ESI
006fbbe5  POP ECX
006fbbe6  RET 0x4
