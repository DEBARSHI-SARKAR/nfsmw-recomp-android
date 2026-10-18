005fde80  SUB ESP,0x4c
005fde83  PUSH EBX
005fde84  PUSH ESI
005fde85  PUSH EDI
005fde86  MOV EDI,ECX
005fde88  MOV EDX,dword ptr [EDI + 0x1958]
005fde8e  XOR EAX,EAX
005fde90  TEST EDX,EDX
005fde92  MOV dword ptr [ESP + 0x14],EDI
005fde96  JLE 0x005fdeaf
005fde98  LEA ECX,[EDI + 0x18]
005fde9b  JMP 0x005fdea0
005fdea0  MOV dword ptr [ESP + EAX*0x4 + 0x18],ECX
005fdea4  INC EAX
005fdea5  ADD ECX,0x194
005fdeab  CMP EAX,EDX
005fdead  JL 0x005fdea0
005fdeaf  MOV ESI,dword ptr [EDI + 0x1968]
005fdeb5  MOV EAX,dword ptr [ESI + 0x4]
005fdeb8  TEST EAX,EAX
005fdeba  JZ 0x005fdec6
005fdebc  MOV EAX,dword ptr [EAX + 0x18]
005fdebf  SHR EAX,0x9
005fdec2  AND AL,0x1
005fdec4  JMP 0x005fdf15
005fdec6  MOV EAX,dword ptr [ESI + 0xc]
005fdec9  TEST EAX,EAX
005fdecb  JZ 0x005fdede
005fdecd  CMP dword ptr [EAX],0x0
005fded0  JNZ 0x005fdede
005fded2  MOV ECX,dword ptr [0x0091e00c]
005fded8  PUSH EAX
005fded9  CALL 0x005fa780
005fdede  MOV EAX,dword ptr [ESI + 0x10]
005fdee1  TEST EAX,EAX
005fdee3  JZ 0x005fdef6
005fdee5  CMP dword ptr [EAX],0x0
005fdee8  JNZ 0x005fdef6
005fdeea  MOV ECX,dword ptr [0x0091e00c]
005fdef0  PUSH EAX
005fdef1  CALL 0x005fa780
005fdef6  MOV ECX,dword ptr [ESI + 0x8]
005fdef9  PUSH 0x0
005fdefb  PUSH 0x5ec1880f
005fdf00  CALL 0x00454810
005fdf05  TEST EAX,EAX
005fdf07  JNZ 0x005fdf13
005fdf09  PUSH 0x1
005fdf0b  CALL 0x006269b0
005fdf10  ADD ESP,0x4
005fdf13  MOV AL,byte ptr [EAX]
005fdf15  MOV ECX,dword ptr [EDI + 0x1958]
005fdf1b  DEC ECX
005fdf1c  TEST ECX,ECX
005fdf1e  MOV byte ptr [ESP + 0xf],AL
005fdf22  MOV dword ptr [ESP + 0x10],ECX
005fdf26  JLE 0x005fdfa0
005fdf28  PUSH EBP
005fdf29  LEA EBP,[ESP + ECX*0x4 + 0x1c]
005fdf2d  LEA ECX,[ECX]
005fdf30  XOR EBX,EBX
005fdf32  TEST ECX,ECX
005fdf34  JLE 0x005fdf93
005fdf36  MOV AL,byte ptr [ESP + 0x13]
005fdf3a  TEST AL,AL
005fdf3c  MOV EDI,dword ptr [ESP + EBX*0x4 + 0x1c]
005fdf40  MOV ESI,dword ptr [EBP]
005fdf43  JZ 0x005fdf73
005fdf45  FLD float ptr [ESI + 0x120]
005fdf4b  FLD float ptr [EDI + 0x120]
005fdf51  FLD ST0
005fdf53  FADD ST0,ST2
005fdf55  FCOMP float ptr [0x0089096c]
005fdf5b  FNSTSW AX
005fdf5d  TEST AH,0x41
005fdf60  JNZ 0x005fdf6f
005fdf62  FCOMP
005fdf64  FNSTSW AX
005fdf66  FSTP ST0
005fdf68  TEST AH,0x5
005fdf6b  JNP 0x005fdf83
005fdf6d  JMP 0x005fdf8a
005fdf6f  FSTP ST0
005fdf71  FSTP ST0
005fdf73  MOV ECX,EDI
005fdf75  PUSH ESI
005fdf76  CALL 0x005e31d0
005fdf7b  TEST AL,AL
005fdf7d  MOV ECX,dword ptr [ESP + 0x14]
005fdf81  JZ 0x005fdf8a
005fdf83  MOV dword ptr [EBP],EDI
005fdf86  MOV dword ptr [ESP + EBX*0x4 + 0x1c],ESI
005fdf8a  INC EBX
005fdf8b  CMP EBX,ECX
005fdf8d  JL 0x005fdf36
005fdf8f  MOV EDI,dword ptr [ESP + 0x18]
005fdf93  DEC ECX
005fdf94  SUB EBP,0x4
005fdf97  TEST ECX,ECX
005fdf99  MOV dword ptr [ESP + 0x14],ECX
005fdf9d  JG 0x005fdf30
005fdf9f  POP EBP
005fdfa0  MOV EAX,dword ptr [EDI + 0x1958]
005fdfa6  XOR ESI,ESI
005fdfa8  TEST EAX,EAX
005fdfaa  JLE 0x005fdfe3
005fdfac  MOV ECX,0x1
005fdfb1  LEA EDX,[ESP + 0x18]
005fdfb5  MOV EAX,dword ptr [EDX]
005fdfb7  MOV dword ptr [EAX + 0x10],ECX
005fdfba  MOV EBX,dword ptr [EAX + 0x4]
005fdfbd  TEST EBX,EBX
005fdfbf  JNZ 0x005fdfcb
005fdfc1  MOV dword ptr [EAX + 0x14],0x0
005fdfc8  INC ESI
005fdfc9  JMP 0x005fdfd2
005fdfcb  MOV EBX,ECX
005fdfcd  SUB EBX,ESI
005fdfcf  MOV dword ptr [EAX + 0x14],EBX
005fdfd2  MOV EBX,dword ptr [EDI + 0x1958]
005fdfd8  INC ECX
005fdfd9  LEA EAX,[ECX + -0x1]
005fdfdc  ADD EDX,0x4
005fdfdf  CMP EAX,EBX
005fdfe1  JL 0x005fdfb5
005fdfe3  POP EDI
005fdfe4  POP ESI
005fdfe5  POP EBX
005fdfe6  ADD ESP,0x4c
005fdfe9  RET
