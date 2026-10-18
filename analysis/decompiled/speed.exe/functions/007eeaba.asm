007eeaba  PUSH EBP
007eeabb  MOV EBP,ESP
007eeabd  PUSH EBX
007eeabe  PUSH ESI
007eeabf  MOV ESI,ECX
007eeac1  MOV EAX,dword ptr [ESI + 0x14]
007eeac4  MOV EDX,dword ptr [EAX + 0x4]
007eeac7  PUSH EDI
007eeac8  PUSH dword ptr [EDX + 0x8]
007eeacb  MOV EDX,dword ptr [EDX + 0xc]
007eeace  PUSH dword ptr [EDX + 0x80]
007eead4  MOV EDI,dword ptr [EBP + 0x8]
007eead7  MOV ECX,dword ptr [EDI + 0x80]
007eeadd  MOV EBX,dword ptr [ECX]
007eeadf  PUSH 0x0
007eeae1  PUSH dword ptr [ESI + 0x24]
007eeae4  PUSH dword ptr [ESI + 0x20]
007eeae7  PUSH dword ptr [EAX + 0x8]
007eeaea  CALL dword ptr [EBX + 0x1c]
007eeaed  MOV ECX,dword ptr [ESI + 0x14]
007eeaf0  MOV ECX,dword ptr [ECX + 0x4]
007eeaf3  MOV dword ptr [ECX + 0x18],EAX
007eeaf6  MOV dword ptr [ECX + 0x1c],EDX
007eeaf9  MOV ECX,dword ptr [ESI + 0x28]
007eeafc  MOV EAX,[0x00907700]
007eeb01  CMP ECX,EAX
007eeb03  MOV EBX,ECX
007eeb05  JC 0x007eeb09
007eeb07  MOV EBX,EAX
007eeb09  MOV ECX,dword ptr [EDI + 0x80]
007eeb0f  MOV EAX,dword ptr [ECX]
007eeb11  CALL dword ptr [EAX + 0x34]
007eeb14  TEST EAX,EAX
007eeb16  JZ 0x007eeb1e
007eeb18  CMP EBX,EAX
007eeb1a  JBE 0x007eeb1e
007eeb1c  MOV EBX,EAX
007eeb1e  MOV EAX,dword ptr [ESI + 0x14]
007eeb21  MOV EDX,dword ptr [EAX + 0x4]
007eeb24  PUSH dword ptr [EDX + 0x8]
007eeb27  MOV EDX,dword ptr [EDX + 0xc]
007eeb2a  PUSH dword ptr [EDX + 0x80]
007eeb30  MOV ECX,dword ptr [EDI + 0x80]
007eeb36  MOV EDI,dword ptr [ECX]
007eeb38  PUSH EBX
007eeb39  PUSH dword ptr [ESI + 0x30]
007eeb3c  PUSH dword ptr [EAX + 0x8]
007eeb3f  CALL dword ptr [EDI + 0x14]
007eeb42  XOR ECX,ECX
007eeb44  SUB dword ptr [ESI + 0x28],EAX
007eeb47  SBB dword ptr [ESI + 0x2c],ECX
007eeb4a  ADD dword ptr [ESI + 0x20],EAX
007eeb4d  ADC dword ptr [ESI + 0x24],ECX
007eeb50  ADD dword ptr [ESI + 0x38],EAX
007eeb53  ADC dword ptr [ESI + 0x3c],ECX
007eeb56  ADD dword ptr [ESI + 0x30],EAX
007eeb59  CMP dword ptr [ESI + 0x2c],ECX
007eeb5c  JL 0x007eeb72
007eeb5e  JG 0x007eeb65
007eeb60  CMP dword ptr [ESI + 0x28],ECX
007eeb63  JBE 0x007eeb72
007eeb65  CMP EAX,EBX
007eeb67  JNZ 0x007eeb72
007eeb69  MOV ECX,ESI
007eeb6b  CALL 0x007ed884
007eeb70  JMP 0x007eeb76
007eeb72  MOV byte ptr [ESI + 0x11],0x1
007eeb76  POP EDI
007eeb77  POP ESI
007eeb78  POP EBX
007eeb79  POP EBP
007eeb7a  RET 0x4
