004be2b0  PUSH ECX
004be2b1  MOV AL,byte ptr [ECX + 0x80]
004be2b7  TEST AL,AL
004be2b9  JZ 0x004be302
004be2bb  MOV EAX,dword ptr [ECX + 0x40]
004be2be  MOV dword ptr [ESP],EAX
004be2c1  FLD float ptr [ESP]
004be2c4  FADD float ptr [0x00890dd0]
004be2ca  FLD float ptr [0x00890fc8]
004be2d0  FCOMP
004be2d2  FNSTSW AX
004be2d4  TEST AH,0x41
004be2d7  JZ 0x004be342
004be2d9  FSTP ST0
004be2db  FLD float ptr [ESP]
004be2de  FSUB float ptr [0x00890dd0]
004be2e4  FLD float ptr [0x00890fc8]
004be2ea  FCOMP
004be2ec  FNSTSW AX
004be2ee  TEST AH,0x5
004be2f1  JNP 0x004be342
004be2f3  FSTP ST0
004be2f5  FLD float ptr [0x00890fc8]
004be2fb  FSTP float ptr [ECX + 0x40]
004be2fe  POP ECX
004be2ff  RET 0x4
004be302  MOV EDX,dword ptr [ECX + 0x40]
004be305  MOV dword ptr [ESP],EDX
004be308  FLD float ptr [ESP]
004be30b  FADD float ptr [0x00890dd0]
004be311  FLD float ptr [0x00890968]
004be317  FCOMP
004be319  FNSTSW AX
004be31b  TEST AH,0x41
004be31e  JZ 0x004be342
004be320  FSTP ST0
004be322  FLD float ptr [ESP]
004be325  FSUB float ptr [0x00890dd0]
004be32b  FLD float ptr [0x00890968]
004be331  FCOMP
004be333  FNSTSW AX
004be335  TEST AH,0x5
004be338  JNP 0x004be342
004be33a  FSTP ST0
004be33c  FLD float ptr [0x00890968]
004be342  FSTP float ptr [ECX + 0x40]
004be345  POP ECX
004be346  RET 0x4
