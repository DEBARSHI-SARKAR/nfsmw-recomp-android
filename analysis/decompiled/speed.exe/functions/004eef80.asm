004eef80  PUSH ESI
004eef81  MOV ESI,ECX
004eef83  CMP byte ptr [ESI + 0x22],0x2
004eef87  JNZ 0x004ef049
004eef8d  MOV AL,byte ptr [ESI + 0x8]
004eef90  TEST AL,AL
004eef92  JZ 0x004ef049
004eef98  PUSH 0x8991a4
004eef9d  CALL 0x00460bf0
004eefa2  MOV EAX,dword ptr [ESI + 0x30]
004eefa5  ADD ESP,0x4
004eefa8  SUB EAX,0x0
004eefab  JZ 0x004eefec
004eefad  DEC EAX
004eefae  JNZ 0x004ef02b
004eefb0  MOV EAX,dword ptr [ESI + 0x18]
004eefb3  MOV ECX,dword ptr [EAX + 0x34]
004eefb6  MOV EAX,dword ptr [ECX + 0x1d4]
004eefbc  TEST EAX,EAX
004eefbe  JNZ 0x004ef02b
004eefc0  MOV EAX,dword ptr [ESI + 0x28]
004eefc3  TEST EAX,EAX
004eefc5  JZ 0x004eefce
004eefc7  MOV ECX,ESI
004eefc9  CALL 0x004dcc60
004eefce  MOV EDX,dword ptr [ESI + 0x58]
004eefd1  PUSH 0x0
004eefd3  PUSH 0x3e8
004eefd8  PUSH 0x0
004eefda  PUSH EDX
004eefdb  LEA ECX,[ESI + 0x44]
004eefde  CALL 0x004b02b0
004eefe3  MOV dword ptr [ESI + 0x30],0x0
004eefea  JMP 0x004ef02b
004eefec  MOV EAX,dword ptr [ESI + 0x18]
004eefef  MOV ECX,dword ptr [EAX + 0x34]
004eeff2  MOV EDX,dword ptr [ECX + 0x1d4]
004eeff8  TEST EDX,EDX
004eeffa  JZ 0x004ef02b
004eeffc  MOV dword ptr [ESI + 0x30],0x1
004ef003  MOV EDX,dword ptr [EAX + 0xcc]
004ef009  PUSH EDX
004ef00a  PUSH 0x0
004ef00c  PUSH 0x0
004ef00e  MOV ECX,ESI
004ef010  CALL 0x004eedc0
004ef015  PUSH 0x0
004ef017  PUSH 0x190
004ef01c  PUSH 0x3f800000
004ef021  PUSH 0x0
004ef023  LEA ECX,[ESI + 0x44]
004ef026  CALL 0x004b02b0
004ef02b  MOV EAX,dword ptr [ESI + 0x14]
004ef02e  MOV ECX,dword ptr [EAX + 0x34]
004ef031  MOV AL,byte ptr [ECX + 0xb0]
004ef037  TEST AL,AL
004ef039  JZ 0x004ef049
004ef03b  MOV EAX,dword ptr [ESI + 0x2c]
004ef03e  TEST EAX,EAX
004ef040  JNZ 0x004ef049
004ef042  MOV ECX,ESI
004ef044  CALL 0x004e6a00
004ef049  POP ESI
004ef04a  RET 0x4
