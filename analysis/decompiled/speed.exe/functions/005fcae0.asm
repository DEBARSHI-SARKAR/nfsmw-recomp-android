005fcae0  PUSH ESI
005fcae1  MOV ESI,ECX
005fcae3  MOV EAX,dword ptr [ESI + 0xc]
005fcae6  TEST EAX,EAX
005fcae8  JZ 0x005fcafb
005fcaea  CMP dword ptr [EAX],0x0
005fcaed  JNZ 0x005fcafb
005fcaef  MOV ECX,dword ptr [0x0091e00c]
005fcaf5  PUSH EAX
005fcaf6  CALL 0x005fa780
005fcafb  MOV EAX,dword ptr [ESI + 0x10]
005fcafe  TEST EAX,EAX
005fcb00  JZ 0x005fcb13
005fcb02  CMP dword ptr [EAX],0x0
005fcb05  JNZ 0x005fcb13
005fcb07  MOV ECX,dword ptr [0x0091e00c]
005fcb0d  PUSH EAX
005fcb0e  CALL 0x005fa780
005fcb13  MOV ECX,dword ptr [ESI + 0x8]
005fcb16  POP ESI
005fcb17  JMP 0x005da520
