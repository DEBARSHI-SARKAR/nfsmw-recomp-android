007eff01  PUSH EBP
007eff02  MOV EBP,ESP
007eff04  MOV EAX,dword ptr [EBP + 0x8]
007eff07  TEST EAX,EAX
007eff09  JNZ 0x007eff15
007eff0b  PUSH dword ptr [EBP + 0xc]
007eff0e  CALL 0x007efed8
007eff13  JMP 0x007eff2b
007eff15  CMP dword ptr [EAX],0x0
007eff18  MOV EDX,dword ptr [EBP + 0xc]
007eff1b  JNZ 0x007eff20
007eff1d  MOV dword ptr [ECX + 0x4],EDX
007eff20  PUSH ESI
007eff21  MOV ESI,dword ptr [EAX]
007eff23  MOV dword ptr [EDX],ESI
007eff25  MOV dword ptr [EAX],EDX
007eff27  INC dword ptr [ECX + 0x8]
007eff2a  POP ESI
007eff2b  POP EBP
007eff2c  RET 0x8
