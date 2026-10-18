0069ab90  PUSH ESI
0069ab91  MOV ESI,ECX
0069ab93  MOV ECX,dword ptr [ESI + 0x138]
0069ab99  MOV EAX,dword ptr [ECX]
0069ab9b  CALL dword ptr [EAX + 0xbc]
0069aba1  TEST AL,AL
0069aba3  JNZ 0x0069abda
0069aba5  MOV EDX,dword ptr [ESI + 0x50]
0069aba8  LEA ECX,[ESI + 0x50]
0069abab  CALL dword ptr [EDX + 0x48]
0069abae  TEST AL,AL
0069abb0  JNZ 0x0069abda
0069abb2  MOV EAX,dword ptr [ESI + 0x13c]
0069abb8  TEST EAX,EAX
0069abba  JZ 0x0069abde
0069abbc  MOV ECX,EAX
0069abbe  MOV EAX,dword ptr [ECX]
0069abc0  CALL dword ptr [EAX + 0x4c]
0069abc3  TEST EAX,EAX
0069abc5  JZ 0x0069abde
0069abc7  FLD float ptr [ESI + 0x154]
0069abcd  FCOMP float ptr [0x008aac9c]
0069abd3  FNSTSW AX
0069abd5  TEST AH,0x5
0069abd8  JP 0x0069abde
0069abda  XOR AL,AL
0069abdc  POP ESI
0069abdd  RET
0069abde  MOV ECX,ESI
0069abe0  POP ESI
0069abe1  JMP 0x00699d60
