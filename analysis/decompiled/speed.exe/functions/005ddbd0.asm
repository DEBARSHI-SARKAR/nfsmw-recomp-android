005ddbd0  MOV EAX,dword ptr [ESP + 0x8]
005ddbd4  TEST EAX,EAX
005ddbd6  JBE 0x005ddc2e
005ddbd8  PUSH EBX
005ddbd9  MOV EBX,dword ptr [ESP + 0x8]
005ddbdd  PUSH EBP
005ddbde  PUSH ESI
005ddbdf  PUSH EDI
005ddbe0  MOV EBP,EAX
005ddbe2  MOV ESI,dword ptr [ECX + 0xa4]
005ddbe8  XOR EDX,EDX
005ddbea  TEST ESI,ESI
005ddbec  JBE 0x005ddc24
005ddbee  MOV EDI,dword ptr [EBX + 0x4]
005ddbf1  MOV EAX,dword ptr [ECX + 0xa8]
005ddbf7  CMP dword ptr [EAX + 0x4],EDI
005ddbfa  JZ 0x005ddc06
005ddbfc  INC EDX
005ddbfd  ADD EAX,0x14
005ddc00  CMP EDX,ESI
005ddc02  JC 0x005ddbf7
005ddc04  JMP 0x005ddc24
005ddc06  MOV EDX,EBX
005ddc08  MOV ESI,dword ptr [EDX]
005ddc0a  MOV dword ptr [EAX],ESI
005ddc0c  MOV ESI,dword ptr [EDX + 0x4]
005ddc0f  MOV dword ptr [EAX + 0x4],ESI
005ddc12  MOV ESI,dword ptr [EDX + 0x8]
005ddc15  MOV dword ptr [EAX + 0x8],ESI
005ddc18  MOV ESI,dword ptr [EDX + 0xc]
005ddc1b  MOV dword ptr [EAX + 0xc],ESI
005ddc1e  MOV EDX,dword ptr [EDX + 0x10]
005ddc21  MOV dword ptr [EAX + 0x10],EDX
005ddc24  ADD EBX,0x14
005ddc27  DEC EBP
005ddc28  JNZ 0x005ddbe2
005ddc2a  POP EDI
005ddc2b  POP ESI
005ddc2c  POP EBP
005ddc2d  POP EBX
005ddc2e  RET 0x8
