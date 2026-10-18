004afe90  PUSH ESI
004afe91  MOV ESI,ECX
004afe93  MOV ECX,dword ptr [ESI + 0xf0]
004afe99  TEST ECX,ECX
004afe9b  MOV byte ptr [ESI + 0xfc],0x0
004afea2  JZ 0x004afea9
004afea4  MOV EAX,dword ptr [ECX]
004afea6  CALL dword ptr [EAX + 0x1c]
004afea9  DEC dword ptr [ESI + 0xf4]
004afeaf  JNZ 0x004afeb9
004afeb1  MOV EDX,dword ptr [ESI]
004afeb3  PUSH 0x1
004afeb5  MOV ECX,ESI
004afeb7  CALL dword ptr [EDX]
004afeb9  POP ESI
004afeba  RET
