0075bad0  MOV EAX,dword ptr [ECX + 0x58]
0075bad3  LEA EDX,[ECX + 0x58]
0075bad6  CMP EAX,EDX
0075bad8  JZ 0x0075bb38
0075bada  PUSH ESI
0075badb  MOV ESI,dword ptr [ESP + 0x8]
0075badf  PUSH EDI
0075bae0  CMP dword ptr [EAX + 0x6d0],ESI
0075bae6  JZ 0x0075baf3
0075bae8  MOV EAX,dword ptr [EAX]
0075baea  CMP EAX,EDX
0075baec  JNZ 0x0075bae0
0075baee  POP EDI
0075baef  POP ESI
0075baf0  RET 0x4
0075baf3  MOV ESI,dword ptr [EAX + 0x8]
0075baf6  TEST ESI,ESI
0075baf8  JZ 0x0075bb36
0075bafa  MOV ESI,dword ptr [EAX + 0x10]
0075bafd  TEST ESI,ESI
0075baff  JZ 0x0075bb18
0075bb01  MOV ESI,dword ptr [EAX]
0075bb03  MOV EDI,dword ptr [EAX + 0x4]
0075bb06  MOV dword ptr [EDI],ESI
0075bb08  MOV dword ptr [ESI + 0x4],EDI
0075bb0b  MOV ESI,dword ptr [EDX + 0x4]
0075bb0e  MOV dword ptr [ESI],EAX
0075bb10  MOV dword ptr [EDX + 0x4],EAX
0075bb13  MOV dword ptr [EAX + 0x4],ESI
0075bb16  MOV dword ptr [EAX],EDX
0075bb18  DEC dword ptr [EAX + 0x8]
0075bb1b  JNZ 0x0075bb20
0075bb1d  DEC dword ptr [ECX + 0x20]
0075bb20  MOV EDX,dword ptr [EAX + 0x8]
0075bb23  TEST EDX,EDX
0075bb25  JNZ 0x0075bb36
0075bb27  MOV EDX,dword ptr [EAX + 0xc]
0075bb2a  TEST EDX,EDX
0075bb2c  JNZ 0x0075bb36
0075bb2e  PUSH 0x0
0075bb30  PUSH EAX
0075bb31  CALL 0x00759c60
0075bb36  POP EDI
0075bb37  POP ESI
0075bb38  RET 0x4
