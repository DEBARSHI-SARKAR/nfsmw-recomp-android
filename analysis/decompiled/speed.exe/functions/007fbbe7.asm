007fbbe7  PUSH EBP
007fbbe8  MOV EBP,ESP
007fbbea  PUSH ESI
007fbbeb  CALL 0x007fba80
007fbbf0  MOV ESI,dword ptr [EBP + 0x8]
007fbbf3  MOV ECX,dword ptr [EBP + 0xc]
007fbbf6  MOV dword ptr [ESI],EAX
007fbbf8  MOV dword ptr [EAX + 0x234],ECX
007fbbfe  MOV EDX,dword ptr [ESI]
007fbc00  MOV EAX,dword ptr [EBP + 0x10]
007fbc03  MOV dword ptr [EDX + 0x238],EAX
007fbc09  MOV EDX,dword ptr [ESI]
007fbc0b  MOV dword ptr [EDX + 0x23c],ECX
007fbc11  MOV EDX,dword ptr [ESI]
007fbc13  MOV dword ptr [EDX + 0x240],EAX
007fbc19  MOV EDX,dword ptr [ESI]
007fbc1b  MOV dword ptr [EDX + 0x1b0],ECX
007fbc21  MOV ECX,dword ptr [ESI]
007fbc23  MOV dword ptr [ECX + 0x1b4],EAX
007fbc29  MOV EAX,dword ptr [ESI]
007fbc2b  ADD EAX,0x1b0
007fbc30  PUSH EAX
007fbc31  CALL 0x007fc9f3
007fbc36  MOV ECX,dword ptr [ESI]
007fbc38  MOV dword ptr [ECX + 0x29c],EAX
007fbc3e  CALL 0x007fd4e5
007fbc43  MOV ECX,dword ptr [ESI]
007fbc45  MOV dword ptr [ECX + 0x13c],EAX
007fbc4b  MOV EAX,dword ptr [ESI]
007fbc4d  MOV ECX,dword ptr [0x009c6e00]
007fbc53  MOV dword ptr [EAX + 0x1a4],ECX
007fbc59  PUSH dword ptr [ESI]
007fbc5b  CALL 0x007fe2a1
007fbc60  TEST EAX,EAX
007fbc62  POP ECX
007fbc63  POP ECX
007fbc64  JNZ 0x007fbc70
007fbc66  PUSH ESI
007fbc67  CALL 0x007fba42
007fbc6c  XOR EAX,EAX
007fbc6e  JMP 0x007fbc86
007fbc70  MOV EAX,dword ptr [ESI]
007fbc72  MOV EAX,dword ptr [EAX + 0x13c]
007fbc78  AND dword ptr [EAX + 0x38],0x0
007fbc7c  PUSH dword ptr [ESI]
007fbc7e  CALL 0x007fe486
007fbc83  XOR EAX,EAX
007fbc85  INC EAX
007fbc86  POP ECX
007fbc87  POP ESI
007fbc88  POP EBP
007fbc89  RET
