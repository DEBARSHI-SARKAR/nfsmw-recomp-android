007ffaa6  PUSH EBP
007ffaa7  MOV EBP,ESP
007ffaa9  SUB ESP,0xc
007ffaac  MOV ECX,dword ptr [EBP + 0x10]
007ffaaf  MOV EDX,dword ptr [ECX]
007ffab1  PUSH EBX
007ffab2  MOV EBX,dword ptr [EBP + 0x8]
007ffab5  MOV EAX,dword ptr [EBX + 0x44]
007ffab8  AND dword ptr [EBP + 0x8],0x0
007ffabc  PUSH ESI
007ffabd  MOV ESI,dword ptr [ECX + 0x4]
007ffac0  SUB ESI,EAX
007ffac2  MOV EAX,dword ptr [EBX + 0x78]
007ffac5  ADD EAX,dword ptr [EBP + 0xc]
007ffac8  PUSH EDI
007ffac9  SHR ESI,0x1
007ffacb  MOV EDI,EDX
007ffacd  IMUL EDX,ESI
007ffad0  SUB EDI,dword ptr [EBX + 0x40]
007ffad3  ADD EDX,dword ptr [ECX + 0x18]
007ffad6  SHR EDI,0x1
007ffad8  ADD EDX,EDI
007ffada  CMP dword ptr [EBX + 0x44],0x0
007ffade  MOV dword ptr [EBP + -0xc],ESI
007ffae1  MOV dword ptr [EBP + -0x4],EDI
007ffae4  MOV dword ptr [EBP + -0x8],EDX
007ffae7  JBE 0x007ffb23
007ffae9  MOV ECX,dword ptr [EBX + 0x40]
007ffaec  MOV EDI,EDX
007ffaee  MOV EDX,ECX
007ffaf0  SHR ECX,0x2
007ffaf3  MOV ESI,EAX
007ffaf5  MOVSD.REP ES:EDI,ESI
007ffaf7  MOV ECX,EDX
007ffaf9  MOV EDX,dword ptr [EBP + -0x8]
007ffafc  AND ECX,0x3
007ffaff  MOVSB.REP ES:EDI,ESI
007ffb01  MOV ECX,dword ptr [EBP + 0x10]
007ffb04  ADD EDX,dword ptr [ECX]
007ffb06  ADD EAX,dword ptr [EBX + 0x98]
007ffb0c  INC dword ptr [EBP + 0x8]
007ffb0f  MOV ECX,dword ptr [EBP + 0x8]
007ffb12  CMP ECX,dword ptr [EBX + 0x44]
007ffb15  MOV dword ptr [EBP + -0x8],EDX
007ffb18  JC 0x007ffae9
007ffb1a  MOV EDI,dword ptr [EBP + -0x4]
007ffb1d  MOV ECX,dword ptr [EBP + 0x10]
007ffb20  MOV ESI,dword ptr [EBP + -0xc]
007ffb23  MOV EAX,dword ptr [EBX + 0x7c]
007ffb26  ADD EAX,dword ptr [EBP + 0xc]
007ffb29  AND dword ptr [EBP + 0x8],0x0
007ffb2d  MOV dword ptr [EBP + -0x4],EAX
007ffb30  MOV EAX,ESI
007ffb32  CDQ
007ffb33  SUB EAX,EDX
007ffb35  MOV dword ptr [EBP + -0x8],EAX
007ffb38  SAR dword ptr [EBP + -0x8],0x1
007ffb3b  MOV EAX,EDI
007ffb3d  CDQ
007ffb3e  SUB EAX,EDX
007ffb40  MOV EDX,dword ptr [ECX + 0xc]
007ffb43  IMUL EDX,dword ptr [EBP + -0x8]
007ffb47  ADD EDX,dword ptr [ECX + 0x1c]
007ffb4a  SAR EAX,0x1
007ffb4c  ADD EDX,EAX
007ffb4e  TEST dword ptr [EBX + 0x44],0xfffffffe
007ffb55  MOV dword ptr [EBP + -0xc],EAX
007ffb58  JBE 0x007ffb91
007ffb5a  MOV ECX,dword ptr [EBX + 0x40]
007ffb5d  MOV ESI,dword ptr [EBP + -0x4]
007ffb60  SHR ECX,0x1
007ffb62  MOV EAX,ECX
007ffb64  SHR ECX,0x2
007ffb67  MOV EDI,EDX
007ffb69  MOVSD.REP ES:EDI,ESI
007ffb6b  MOV ECX,EAX
007ffb6d  MOV EAX,dword ptr [EBP + 0x10]
007ffb70  AND ECX,0x3
007ffb73  MOVSB.REP ES:EDI,ESI
007ffb75  ADD EDX,dword ptr [EAX + 0xc]
007ffb78  MOV EAX,dword ptr [EBX + 0x9c]
007ffb7e  ADD dword ptr [EBP + -0x4],EAX
007ffb81  MOV EAX,dword ptr [EBX + 0x44]
007ffb84  INC dword ptr [EBP + 0x8]
007ffb87  SHR EAX,0x1
007ffb89  CMP dword ptr [EBP + 0x8],EAX
007ffb8c  JC 0x007ffb5a
007ffb8e  MOV ECX,dword ptr [EBP + 0x10]
007ffb91  MOV EAX,dword ptr [ECX + 0xc]
007ffb94  IMUL EAX,dword ptr [EBP + -0x8]
007ffb98  ADD EAX,dword ptr [ECX + 0x20]
007ffb9b  MOV ESI,dword ptr [EBX + 0x80]
007ffba1  ADD ESI,dword ptr [EBP + 0xc]
007ffba4  ADD EAX,dword ptr [EBP + -0xc]
007ffba7  AND dword ptr [EBP + 0x8],0x0
007ffbab  TEST dword ptr [EBX + 0x44],0xfffffffe
007ffbb2  MOV dword ptr [EBP + -0x4],ESI
007ffbb5  JBE 0x007ffbeb
007ffbb7  MOV ECX,dword ptr [EBX + 0x40]
007ffbba  SHR ECX,0x1
007ffbbc  MOV EDX,ECX
007ffbbe  SHR ECX,0x2
007ffbc1  MOV EDI,EAX
007ffbc3  MOVSD.REP ES:EDI,ESI
007ffbc5  MOV ECX,EDX
007ffbc7  AND ECX,0x3
007ffbca  MOVSB.REP ES:EDI,ESI
007ffbcc  MOV ECX,dword ptr [EBP + 0x10]
007ffbcf  ADD EAX,dword ptr [ECX + 0xc]
007ffbd2  MOV ESI,dword ptr [EBP + -0x4]
007ffbd5  ADD ESI,dword ptr [EBX + 0x9c]
007ffbdb  MOV ECX,dword ptr [EBX + 0x44]
007ffbde  INC dword ptr [EBP + 0x8]
007ffbe1  SHR ECX,0x1
007ffbe3  CMP dword ptr [EBP + 0x8],ECX
007ffbe6  MOV dword ptr [EBP + -0x4],ESI
007ffbe9  JC 0x007ffbb7
007ffbeb  POP EDI
007ffbec  POP ESI
007ffbed  POP EBX
007ffbee  LEAVE
007ffbef  RET
