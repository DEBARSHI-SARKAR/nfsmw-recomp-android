0051be80  PUSH ESI
0051be81  PUSH EDI
0051be82  MOV EDI,ECX
0051be84  MOV ESI,dword ptr [EDI + 0x2c]
0051be87  TEST ESI,ESI
0051be89  JZ 0x0051beb7
0051be8b  OR dword ptr [ESI + 0x1c],0x400000
0051be92  MOV dword ptr [ESI + 0x60],0x608b9dd6
0051be99  MOV ECX,dword ptr [0x0091dd08]
0051be9f  TEST ECX,ECX
0051bea1  JZ 0x0051bea8
0051bea3  MOV EAX,dword ptr [ECX]
0051bea5  PUSH ESI
0051bea6  CALL dword ptr [EAX]
0051bea8  MOV ECX,dword ptr [ESI + 0x1c]
0051beab  AND ECX,0xfffffffd
0051beae  OR ECX,0x400000
0051beb4  MOV dword ptr [ESI + 0x1c],ECX
0051beb7  MOV EDX,dword ptr [0x0091ca20]
0051bebd  MOV EAX,dword ptr [EDX]
0051bebf  MOV EAX,dword ptr [EAX + 0x18]
0051bec2  MOV ESI,dword ptr [EDI + 0x30]
0051bec5  NEG EAX
0051bec7  SBB EAX,EAX
0051bec9  AND EAX,0x20421a02
0051bece  ADD EAX,0xf6bbd534
0051bed3  TEST ESI,ESI
0051bed5  JZ 0x0051befe
0051bed7  OR dword ptr [ESI + 0x1c],0x400000
0051bede  MOV dword ptr [ESI + 0x60],EAX
0051bee1  MOV ECX,dword ptr [0x0091dd08]
0051bee7  TEST ECX,ECX
0051bee9  JZ 0x0051bef0
0051beeb  MOV EDX,dword ptr [ECX]
0051beed  PUSH ESI
0051beee  CALL dword ptr [EDX]
0051bef0  MOV EAX,dword ptr [ESI + 0x1c]
0051bef3  AND EAX,0xfffffffd
0051bef6  OR EAX,0x400000
0051befb  MOV dword ptr [ESI + 0x1c],EAX
0051befe  POP EDI
0051beff  POP ESI
0051bf00  RET
