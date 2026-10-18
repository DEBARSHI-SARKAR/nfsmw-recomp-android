004badc0  PUSH ESI
004badc1  MOV ESI,ECX
004badc3  MOV EAX,dword ptr [ESI + 0x14]
004badc6  TEST EAX,EAX
004badc8  JL 0x004baddf
004badca  CALL 0x004b2530
004badcf  MOV ESI,dword ptr [ESI + 0xc]
004badd2  TEST ESI,ESI
004badd4  JZ 0x004baddf
004badd6  PUSH ESI
004badd7  CALL 0x004655f0
004baddc  ADD ESP,0x4
004baddf  POP ESI
004bade0  RET
