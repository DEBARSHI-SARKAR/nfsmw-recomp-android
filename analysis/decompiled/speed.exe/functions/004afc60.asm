004afc60  PUSH ESI
004afc61  MOV ESI,dword ptr [ESP + 0x8]
004afc65  MOV EAX,ESI
004afc67  DEC EAX
004afc68  JZ 0x004afcb7
004afc6a  SUB EAX,0x4
004afc6d  MOV EDX,dword ptr [ESP + 0xc]
004afc71  JZ 0x004afc95
004afc73  DEC EAX
004afc74  JNZ 0x004afca7
004afc76  MOV EAX,EDX
004afc78  MOV dword ptr [ECX + 0x134],EAX
004afc7e  MOV EAX,dword ptr [ESP + 0x10]
004afc82  PUSH EAX
004afc83  PUSH EDX
004afc84  PUSH ESI
004afc85  MOV byte ptr [ECX + 0x130],0x1
004afc8c  CALL 0x004d5c70
004afc91  POP ESI
004afc92  RET 0xc
004afc95  MOV EAX,EDX
004afc97  SHR EAX,0x8
004afc9a  MOV byte ptr [ECX + 0x128],0x1
004afca1  MOV dword ptr [ECX + 0x12c],EAX
004afca7  MOV EAX,dword ptr [ESP + 0x10]
004afcab  PUSH EAX
004afcac  PUSH EDX
004afcad  PUSH ESI
004afcae  CALL 0x004d5c70
004afcb3  POP ESI
004afcb4  RET 0xc
004afcb7  XOR EAX,EAX
004afcb9  POP ESI
004afcba  RET 0xc
