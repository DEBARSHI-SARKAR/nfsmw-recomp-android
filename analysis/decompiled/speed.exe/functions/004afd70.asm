004afd70  PUSH ESI
004afd71  MOV ESI,ECX
004afd73  PUSH EDI
004afd74  MOV EDI,dword ptr [ESP + 0xc]
004afd78  FLD float ptr [EDI + 0x4]
004afd7b  MOV EAX,dword ptr [EDI]
004afd7d  FLD float ptr [EDI + 0x8]
004afd80  MOV dword ptr [ESI + 0x10],EAX
004afd83  MOV EAX,dword ptr [ESP + 0x10]
004afd87  FXCH
004afd89  FSTP float ptr [ESI + 0x14]
004afd8c  FSTP float ptr [ESI + 0x18]
004afd8f  MOV ECX,dword ptr [EAX]
004afd91  FLD float ptr [EAX + 0x4]
004afd94  FLD float ptr [EAX + 0x8]
004afd97  MOV EAX,dword ptr [ESP + 0x14]
004afd9b  MOV dword ptr [ESI + 0x20],ECX
004afd9e  FXCH
004afda0  FSTP float ptr [ESI + 0x24]
004afda3  FSTP float ptr [ESI + 0x28]
004afda6  MOV EDX,dword ptr [EAX]
004afda8  FLD float ptr [EAX + 0x4]
004afdab  FLD float ptr [EAX + 0x8]
004afdae  MOV EAX,dword ptr [ESP + 0x18]
004afdb2  FXCH
004afdb4  MOV dword ptr [ESI + 0x30],EDX
004afdb7  FSTP float ptr [ESI + 0x34]
004afdba  FSTP float ptr [ESI + 0x38]
004afdbd  MOV dword ptr [ESI + 0x40],EAX
004afdc0  FLD float ptr [ESP + 0x18]
004afdc4  FCOMP float ptr [0x0089096c]
004afdca  FNSTSW AX
004afdcc  TEST AH,0x5
004afdcf  JP 0x004afe2c
004afdd1  FLD float ptr [ESP + 0x18]
004afdd5  FLD float ptr [0x00890968]
004afddb  FCOMP float ptr [ESP + 0x18]
004afddf  FNSTSW AX
004afde1  TEST AH,0x41
004afde4  JNZ 0x004afdee
004afde6  FSTP ST0
004afde8  FLD float ptr [0x00890968]
004afdee  FMUL float ptr [0x00896ab4]
004afdf4  CALL 0x007c4b80
004afdf9  MOV dword ptr [ESI + 0xd4],EAX
004afdff  FLD float ptr [EDI + 0x4]
004afe02  FLD float ptr [EDI + 0x8]
004afe05  MOV ECX,dword ptr [EDI]
004afe07  FXCH
004afe09  MOV dword ptr [ESI + 0xa0],ECX
004afe0f  FSTP float ptr [ESI + 0xa4]
004afe15  POP EDI
004afe16  FSTP float ptr [ESI + 0xa8]
004afe1c  MOV EDX,dword ptr [0x00925ae8]
004afe22  MOV dword ptr [ESI + 0x80],EDX
004afe28  POP ESI
004afe29  RET 0x10
004afe2c  FLD float ptr [0x0089096c]
004afe32  JMP 0x004afdee
