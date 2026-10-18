005fac80  PUSH ESI
005fac81  MOV ESI,ECX
005fac83  MOV EAX,dword ptr [ESI + 0x4]
005fac86  TEST EAX,EAX
005fac88  JZ 0x005fac94
005fac8a  MOV EAX,dword ptr [EAX + 0x18]
005fac8d  SHR EAX,0x3
005fac90  AND AL,0x1
005fac92  POP ESI
005fac93  RET
005fac94  MOV EAX,dword ptr [ESI + 0xc]
005fac97  TEST EAX,EAX
005fac99  JZ 0x005facac
005fac9b  CMP dword ptr [EAX],0x0
005fac9e  JNZ 0x005facac
005faca0  MOV ECX,dword ptr [0x0091e00c]
005faca6  PUSH EAX
005faca7  CALL 0x005fa780
005facac  MOV ESI,dword ptr [ESI + 0x10]
005facaf  TEST ESI,ESI
005facb1  JZ 0x005facc4
005facb3  CMP dword ptr [ESI],0x0
005facb6  JNZ 0x005facc4
005facb8  MOV ECX,dword ptr [0x0091e00c]
005facbe  PUSH ESI
005facbf  CALL 0x005fa780
005facc4  XOR AL,AL
005facc6  POP ESI
005facc7  RET
