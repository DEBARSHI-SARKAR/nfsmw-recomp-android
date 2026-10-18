007fee29  PUSH EBP
007fee2a  MOV EBP,ESP
007fee2c  SUB ESP,0xc
007fee2f  PUSH EBX
007fee30  PUSH ESI
007fee31  PUSH EDI
007fee32  PUSH dword ptr [EBP + 0x24]
007fee35  MOV EDI,dword ptr [EBP + 0x1c]
007fee38  PUSH EDI
007fee39  PUSH dword ptr [EBP + 0x14]
007fee3c  PUSH dword ptr [EBP + 0xc]
007fee3f  CALL dword ptr [0x009c6acc]
007fee45  MOV EAX,dword ptr [EBP + 0x28]
007fee48  ADD ESP,0x10
007fee4b  PUSH 0x5
007fee4d  XOR EDX,EDX
007fee4f  POP ECX
007fee50  DIV ECX
007fee52  MOV ESI,dword ptr [EBP + 0x20]
007fee55  MOV EBX,dword ptr [EBP + 0x10]
007fee58  DEC EAX
007fee59  JZ 0x007feed1
007fee5b  MOV dword ptr [EBP + -0xc],EAX
007fee5e  MOV EAX,dword ptr [EBP + 0xc]
007fee61  ADD EAX,EBX
007fee63  MOV dword ptr [EBP + -0x4],EAX
007fee66  LEA EAX,[EDI + ESI*0x1]
007fee69  MOV dword ptr [EBP + 0x28],EAX
007fee6c  MOV dword ptr [EBP + -0x8],0x2
007fee73  PUSH dword ptr [EBP + 0x24]
007fee76  PUSH dword ptr [EBP + 0x28]
007fee79  PUSH dword ptr [EBP + 0x14]
007fee7c  PUSH dword ptr [EBP + -0x4]
007fee7f  CALL dword ptr [0x009c6acc]
007fee85  ADD dword ptr [EBP + 0x28],ESI
007fee88  ADD dword ptr [EBP + -0x4],EBX
007fee8b  ADD ESP,0x10
007fee8e  DEC dword ptr [EBP + -0x8]
007fee91  JNZ 0x007fee73
007fee93  PUSH dword ptr [EBP + 0x24]
007fee96  MOV EDX,dword ptr [EBP + 0xc]
007fee99  LEA EAX,[ESI + ESI*0x4]
007fee9c  LEA ECX,[EAX + EDI*0x1]
007fee9f  PUSH ECX
007feea0  PUSH dword ptr [EBP + 0x14]
007feea3  LEA EAX,[EBX + EBX*0x2]
007feea6  ADD EAX,EDX
007feea8  PUSH EAX
007feea9  MOV dword ptr [EBP + -0x8],ECX
007feeac  MOV dword ptr [EBP + 0x28],EAX
007feeaf  CALL dword ptr [0x009c6acc]
007feeb5  PUSH dword ptr [EBP + 0x24]
007feeb8  PUSH ESI
007feeb9  PUSH EDI
007feeba  CALL dword ptr [0x009c6ac4]
007feec0  MOV EAX,dword ptr [EBP + 0x28]
007feec3  MOV EDI,dword ptr [EBP + -0x8]
007feec6  ADD ESP,0x1c
007feec9  DEC dword ptr [EBP + -0xc]
007feecc  MOV dword ptr [EBP + 0xc],EAX
007feecf  JNZ 0x007fee5e
007feed1  MOV EAX,dword ptr [EBP + 0xc]
007feed4  ADD EAX,EBX
007feed6  MOV dword ptr [EBP + -0x4],EAX
007feed9  LEA EAX,[EDI + ESI*0x1]
007feedc  MOV dword ptr [EBP + 0x28],EAX
007feedf  MOV dword ptr [EBP + -0xc],0x2
007feee6  PUSH dword ptr [EBP + 0x24]
007feee9  PUSH dword ptr [EBP + 0x28]
007feeec  PUSH dword ptr [EBP + 0x14]
007feeef  PUSH dword ptr [EBP + -0x4]
007feef2  CALL dword ptr [0x009c6acc]
007feef8  ADD dword ptr [EBP + 0x28],ESI
007feefb  ADD dword ptr [EBP + -0x4],EBX
007feefe  ADD ESP,0x10
007fef01  DEC dword ptr [EBP + -0xc]
007fef04  JNZ 0x007feee6
007fef06  PUSH dword ptr [EBP + 0x24]
007fef09  PUSH ESI
007fef0a  PUSH EDI
007fef0b  CALL dword ptr [0x009c6aac]
007fef11  ADD ESP,0xc
007fef14  POP EDI
007fef15  POP ESI
007fef16  POP EBX
007fef17  LEAVE
007fef18  RET
