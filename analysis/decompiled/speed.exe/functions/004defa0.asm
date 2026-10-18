004defa0  PUSH ESI
004defa1  MOV ESI,ECX
004defa3  FLD float ptr [ESI + 0x2c]
004defa6  FSUB float ptr [ESP + 0x8]
004defaa  FST float ptr [ESI + 0x2c]
004defad  FCOMP float ptr [0x00890968]
004defb3  FNSTSW AX
004defb5  TEST AH,0x5
004defb8  JNP 0x004defd0
004defba  MOV EAX,dword ptr [ESI + 0x14]
004defbd  MOV ECX,dword ptr [EAX + 0x34]
004defc0  CMP dword ptr [ECX + 0x1f4],0x2
004defc7  JZ 0x004defd0
004defc9  MOV EAX,dword ptr [ESI + 0x38]
004defcc  POP ESI
004defcd  RET 0x4
004defd0  MOV ECX,dword ptr [0x00911fa8]
004defd6  PUSH 0x40400000
004defdb  CALL 0x004aed10
004defe0  FSTP float ptr [ESI + 0x2c]
004defe3  MOV EDX,dword ptr [ESI + 0x14]
004defe6  MOV EAX,dword ptr [EDX + 0x34]
004defe9  MOV EAX,dword ptr [EAX + 0x1f4]
004defef  POP ESI
004deff0  RET 0x4
