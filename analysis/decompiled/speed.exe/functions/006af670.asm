006af670  PUSH ESI
006af671  MOV ESI,ECX
006af673  MOV ECX,dword ptr [ESI + 0x110]
006af679  TEST ECX,ECX
006af67b  JZ 0x006af68d
006af67d  MOV EAX,dword ptr [ECX]
006af67f  CALL dword ptr [EAX + 0x40]
006af682  TEST AL,AL
006af684  JZ 0x006af68d
006af686  MOV ECX,ESI
006af688  CALL 0x006af490
006af68d  FLD float ptr [ESI + 0x88]
006af693  FCOMP float ptr [0x00890968]
006af699  FNSTSW AX
006af69b  TEST AH,0x41
006af69e  JNZ 0x006af6c7
006af6a0  FLD float ptr [ESI + 0x88]
006af6a6  FSUB float ptr [ESP + 0x8]
006af6aa  FST float ptr [ESI + 0x88]
006af6b0  FCOMP float ptr [0x00890968]
006af6b6  FNSTSW AX
006af6b8  TEST AH,0x41
006af6bb  JP 0x006af6c7
006af6bd  MOV dword ptr [ESI + 0x88],0x0
006af6c7  FLD float ptr [ESI + 0x10c]
006af6cd  FCOMP float ptr [0x00890968]
006af6d3  FNSTSW AX
006af6d5  TEST AH,0x41
006af6d8  JNZ 0x006af72f
006af6da  MOV EAX,dword ptr [ESI + 0x188]
006af6e0  TEST EAX,EAX
006af6e2  JZ 0x006af72f
006af6e4  MOV ECX,dword ptr [ESI + 0x110]
006af6ea  TEST ECX,ECX
006af6ec  JZ 0x006af725
006af6ee  MOV EDX,dword ptr [ECX]
006af6f0  CALL dword ptr [EDX + 0x8]
006af6f3  FLD float ptr [EAX + 0x14]
006af6f6  FSUBR float ptr [0x008aac9c]
006af6fc  FMUL float ptr [ESP + 0x8]
006af700  FSUBR float ptr [ESI + 0x10c]
006af706  FCOM float ptr [0x00890968]
006af70c  FNSTSW AX
006af70e  TEST AH,0x41
006af711  JZ 0x006af71b
006af713  FSTP ST0
006af715  FLD float ptr [0x00890968]
006af71b  FSTP float ptr [ESI + 0x10c]
006af721  POP ESI
006af722  RET 0x4
006af725  MOV dword ptr [ESI + 0x10c],0x0
006af72f  POP ESI
006af730  RET 0x4
