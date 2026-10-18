006eb320  MOV EDX,dword ptr [ESP + 0x4]
006eb324  MOV EAX,dword ptr [EDX]
006eb326  PUSH EBX
006eb327  PUSH ESI
006eb328  MOV ESI,dword ptr [EAX + 0x8]
006eb32b  MOV dword ptr [EDX],ESI
006eb32d  MOV ESI,dword ptr [EAX + 0x8]
006eb330  MOV BL,byte ptr [ESI + 0x15]
006eb333  TEST BL,BL
006eb335  JNZ 0x006eb33a
006eb337  MOV dword ptr [ESI + 0x4],EDX
006eb33a  MOV ESI,dword ptr [EDX + 0x4]
006eb33d  MOV dword ptr [EAX + 0x4],ESI
006eb340  MOV ECX,dword ptr [ECX + 0x4]
006eb343  CMP EDX,dword ptr [ECX + 0x4]
006eb346  JNZ 0x006eb356
006eb348  MOV dword ptr [ECX + 0x4],EAX
006eb34b  POP ESI
006eb34c  MOV dword ptr [EAX + 0x8],EDX
006eb34f  MOV dword ptr [EDX + 0x4],EAX
006eb352  POP EBX
006eb353  RET 0x4
006eb356  MOV ECX,dword ptr [EDX + 0x4]
006eb359  CMP EDX,dword ptr [ECX + 0x8]
006eb35c  JNZ 0x006eb36c
006eb35e  MOV dword ptr [ECX + 0x8],EAX
006eb361  POP ESI
006eb362  MOV dword ptr [EAX + 0x8],EDX
006eb365  MOV dword ptr [EDX + 0x4],EAX
006eb368  POP EBX
006eb369  RET 0x4
006eb36c  MOV dword ptr [ECX],EAX
006eb36e  POP ESI
006eb36f  MOV dword ptr [EAX + 0x8],EDX
006eb372  MOV dword ptr [EDX + 0x4],EAX
006eb375  POP EBX
006eb376  RET 0x4
