005aed00  MOV AL,byte ptr [ECX + 0x2c]
005aed03  TEST AL,AL
005aed05  JZ 0x005aed11
005aed07  MOV ECX,dword ptr [ECX + 0x30]
005aed0a  CALL 0x005ad440
005aed0f  JMP 0x005aed14
005aed11  MOV EAX,dword ptr [ECX + 0x30]
005aed14  TEST EAX,EAX
005aed16  JNZ 0x005aed1b
005aed18  RET 0x4
005aed1b  MOV EDX,dword ptr [EAX + 0x4]
005aed1e  TEST EDX,EDX
005aed20  LEA ECX,[EAX + 0x4]
005aed23  JZ 0x005aed42
005aed25  MOV EDX,dword ptr [ESP + 0x4]
005aed29  PUSH ESI
005aed2a  LEA EBX,[EBX]
005aed30  CMP dword ptr [EAX + 0xc],EDX
005aed33  JGE 0x005aed41
005aed35  MOV EAX,dword ptr [ECX]
005aed37  MOV ESI,dword ptr [EAX + 0x4]
005aed3a  TEST ESI,ESI
005aed3c  LEA ECX,[EAX + 0x4]
005aed3f  JNZ 0x005aed30
005aed41  POP ESI
005aed42  RET 0x4
