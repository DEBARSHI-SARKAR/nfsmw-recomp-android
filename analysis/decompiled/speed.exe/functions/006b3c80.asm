006b3c80  PUSH ESI
006b3c81  MOV ESI,ECX
006b3c83  MOV EAX,dword ptr [ESI + 0xfffffe98]
006b3c89  LEA ECX,[ESI + 0xfffffe98]
006b3c8f  CALL dword ptr [EAX + 0x10]
006b3c92  TEST AL,AL
006b3c94  JNZ 0x006b3cba
006b3c96  FLD float ptr [ESI + 0x10]
006b3c99  FCOMP float ptr [0x00890968]
006b3c9f  FNSTSW AX
006b3ca1  TEST AH,0x41
006b3ca4  JNZ 0x006b3cba
006b3ca6  FLD float ptr [ESI + 0xc]
006b3ca9  FMUL float ptr [ESI + 0x10]
006b3cac  POP ESI
006b3cad  FMUL float ptr [0x00894c30]
006b3cb3  FADD float ptr [0x0089096c]
006b3cb9  RET
006b3cba  FLD float ptr [0x0089096c]
006b3cc0  POP ESI
006b3cc1  RET
