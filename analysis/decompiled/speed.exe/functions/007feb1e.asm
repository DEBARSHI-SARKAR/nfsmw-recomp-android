007feb1e  PUSH EBP
007feb1f  MOV EBP,ESP
007feb21  SUB ESP,0xc
007feb24  PUSH EBX
007feb25  MOV EBX,dword ptr [EBP + 0xc]
007feb28  PUSH ESI
007feb29  PUSH EDI
007feb2a  PUSH dword ptr [EBP + 0x24]
007feb2d  MOV EDI,dword ptr [EBP + 0x1c]
007feb30  PUSH EDI
007feb31  PUSH dword ptr [EBP + 0x14]
007feb34  PUSH EBX
007feb35  CALL dword ptr [0x009c6a78]
007feb3b  MOV EAX,dword ptr [EBP + 0x28]
007feb3e  ADD ESP,0x10
007feb41  PUSH 0x5
007feb43  XOR EDX,EDX
007feb45  POP ECX
007feb46  DIV ECX
007feb48  MOV ESI,dword ptr [EBP + 0x20]
007feb4b  DEC EAX
007feb4c  JZ 0x007febbb
007feb4e  MOV dword ptr [EBP + -0xc],EAX
007feb51  MOV EAX,dword ptr [EBP + 0x10]
007feb54  ADD EAX,EBX
007feb56  MOV dword ptr [EBP + -0x4],EAX
007feb59  LEA EAX,[EDI + ESI*0x1]
007feb5c  MOV dword ptr [EBP + 0x28],EAX
007feb5f  MOV dword ptr [EBP + -0x8],0x3
007feb66  PUSH dword ptr [EBP + 0x24]
007feb69  PUSH dword ptr [EBP + 0x28]
007feb6c  PUSH dword ptr [EBP + 0x14]
007feb6f  PUSH dword ptr [EBP + -0x4]
007feb72  CALL dword ptr [0x009c6a78]
007feb78  MOV EAX,dword ptr [EBP + 0x10]
007feb7b  ADD dword ptr [EBP + 0x28],ESI
007feb7e  ADD dword ptr [EBP + -0x4],EAX
007feb81  ADD ESP,0x10
007feb84  DEC dword ptr [EBP + -0x8]
007feb87  JNZ 0x007feb66
007feb89  PUSH dword ptr [EBP + 0x24]
007feb8c  MOV ECX,dword ptr [EBP + 0x10]
007feb8f  LEA EAX,[ESI + ESI*0x4]
007feb92  ADD EAX,EDI
007feb94  PUSH EAX
007feb95  PUSH dword ptr [EBP + 0x14]
007feb98  LEA EBX,[EBX + ECX*0x4]
007feb9b  PUSH EBX
007feb9c  MOV dword ptr [EBP + 0x28],EAX
007feb9f  CALL dword ptr [0x009c6a78]
007feba5  PUSH dword ptr [EBP + 0x24]
007feba8  PUSH ESI
007feba9  PUSH EDI
007febaa  CALL dword ptr [0x009c6a98]
007febb0  MOV EDI,dword ptr [EBP + 0x28]
007febb3  ADD ESP,0x1c
007febb6  DEC dword ptr [EBP + -0xc]
007febb9  JNZ 0x007feb51
007febbb  MOV EAX,dword ptr [EBP + 0x10]
007febbe  ADD EBX,EAX
007febc0  MOV dword ptr [EBP + 0x28],EBX
007febc3  LEA EBX,[EDI + ESI*0x1]
007febc6  MOV dword ptr [EBP + -0xc],0x3
007febcd  PUSH dword ptr [EBP + 0x24]
007febd0  PUSH EBX
007febd1  PUSH dword ptr [EBP + 0x14]
007febd4  PUSH dword ptr [EBP + 0x28]
007febd7  CALL dword ptr [0x009c6a78]
007febdd  MOV EAX,dword ptr [EBP + 0x10]
007febe0  ADD dword ptr [EBP + 0x28],EAX
007febe3  ADD ESP,0x10
007febe6  ADD EBX,ESI
007febe8  DEC dword ptr [EBP + -0xc]
007febeb  JNZ 0x007febcd
007febed  PUSH dword ptr [EBP + 0x24]
007febf0  PUSH ESI
007febf1  PUSH EDI
007febf2  CALL dword ptr [0x009c6a94]
007febf8  ADD ESP,0xc
007febfb  POP EDI
007febfc  POP ESI
007febfd  POP EBX
007febfe  LEAVE
007febff  RET
