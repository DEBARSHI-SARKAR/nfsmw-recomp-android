005dab80  PUSH ESI
005dab81  MOV ESI,ECX
005dab83  TEST byte ptr [ESI + 0x18],0x4
005dab87  JZ 0x005dab99
005dab89  MOV EAX,dword ptr [ESI + 0x1c]
005dab8c  PUSH EAX
005dab8d  CALL 0x00652b10
005dab92  ADD ESP,0x4
005dab95  AND byte ptr [ESI + 0x18],0xfb
005dab99  AND byte ptr [ESI + 0x18],0xfd
005dab9d  XOR EAX,EAX
005dab9f  MOV dword ptr [ESI + 0x1c],EAX
005daba2  MOV word ptr [ESI + 0x1a],AX
005daba6  POP ESI
005daba7  RET
