007ebab0  PUSH ESI
007ebab1  MOV ESI,ECX
007ebab3  CALL 0x007e8ca0
007ebab8  CMP EAX,0x10
007ebabb  JLE 0x007ebadd
007ebabd  LEA ECX,[ECX]
007ebac0  SUB EAX,0x20
007ebac3  JZ 0x007ebaf6
007ebac5  SUB EAX,0x60
007ebac8  JZ 0x007ebaf6
007ebaca  SUB EAX,0x80
007ebacf  JNZ 0x007ebaf2
007ebad1  MOV ECX,ESI
007ebad3  CALL 0x007e8ca0
007ebad8  CMP EAX,0x10
007ebadb  JG 0x007ebac0
007ebadd  JZ 0x007ebaea
007ebadf  DEC EAX
007ebae0  JZ 0x007ebaf2
007ebae2  DEC EAX
007ebae3  JZ 0x007ebaea
007ebae5  SUB EAX,0x2
007ebae8  JNZ 0x007ebaf2
007ebaea  MOV EAX,dword ptr [ESI + 0xc]
007ebaed  ADD EAX,0x20
007ebaf0  POP ESI
007ebaf1  RET
007ebaf2  XOR EAX,EAX
007ebaf4  POP ESI
007ebaf5  RET
007ebaf6  MOV EAX,dword ptr [ESI + 0xc]
007ebaf9  ADD EAX,0x10
007ebafc  POP ESI
007ebafd  RET
