004ceeb0  PUSH ECX
004ceeb1  PUSH ESI
004ceeb2  MOV ESI,ECX
004ceeb4  MOV EDX,dword ptr [ESI + 0x4]
004ceeb7  TEST EDX,EDX
004ceeb9  JNZ 0x004ceebf
004ceebb  XOR ECX,ECX
004ceebd  JMP 0x004ceec7
004ceebf  MOV ECX,dword ptr [ESI + 0x8]
004ceec2  SUB ECX,EDX
004ceec4  SAR ECX,0x2
004ceec7  TEST EDX,EDX
004ceec9  JZ 0x004cef02
004ceecb  MOV EAX,dword ptr [ESI + 0xc]
004ceece  SUB EAX,EDX
004ceed0  SAR EAX,0x2
004ceed3  CMP ECX,EAX
004ceed5  JNC 0x004cef02
004ceed7  MOV ECX,dword ptr [ESP + 0xc]
004ceedb  PUSH EDI
004ceedc  MOV EDI,dword ptr [ESI + 0x8]
004ceedf  MOV byte ptr [ESP + 0x8],0x0
004ceee4  MOV EAX,dword ptr [ESP + 0x8]
004ceee8  PUSH EAX
004ceee9  PUSH ESI
004ceeea  PUSH ECX
004ceeeb  PUSH 0x1
004ceeed  PUSH EDI
004ceeee  CALL 0x004c1950
004ceef3  ADD ESP,0x14
004ceef6  ADD EDI,0x4
004ceef9  MOV dword ptr [ESI + 0x8],EDI
004ceefc  POP EDI
004ceefd  POP ESI
004ceefe  POP ECX
004ceeff  RET 0x4
004cef02  MOV EDX,dword ptr [ESP + 0xc]
004cef06  MOV EAX,dword ptr [ESI + 0x8]
004cef09  PUSH EDX
004cef0a  PUSH 0x1
004cef0c  PUSH EAX
004cef0d  MOV ECX,ESI
004cef0f  CALL 0x004cde30
004cef14  POP ESI
004cef15  POP ECX
004cef16  RET 0x4
