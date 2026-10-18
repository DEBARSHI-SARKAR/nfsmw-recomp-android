005facd0  PUSH ESI
005facd1  MOV ESI,ECX
005facd3  MOV EAX,dword ptr [ESI + 0xc]
005facd6  TEST EAX,EAX
005facd8  JZ 0x005faceb
005facda  CMP dword ptr [EAX],0x0
005facdd  JNZ 0x005faceb
005facdf  MOV ECX,dword ptr [0x0091e00c]
005face5  PUSH EAX
005face6  CALL 0x005fa780
005faceb  MOV EAX,dword ptr [ESI + 0x10]
005facee  TEST EAX,EAX
005facf0  JZ 0x005fad03
005facf2  CMP dword ptr [EAX],0x0
005facf5  JNZ 0x005fad03
005facf7  MOV ECX,dword ptr [0x0091e00c]
005facfd  PUSH EAX
005facfe  CALL 0x005fa780
005fad03  MOV ECX,dword ptr [ESI + 0x8]
005fad06  POP ESI
005fad07  JMP 0x005da0f0
