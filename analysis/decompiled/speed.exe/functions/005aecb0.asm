005aecb0  PUSH ESI
005aecb1  PUSH EDI
005aecb2  MOV EDI,dword ptr [ESP + 0xc]
005aecb6  CMP EDI,-0x1
005aecb9  MOV ESI,ECX
005aecbb  JLE 0x005aecd5
005aecbd  MOV AL,byte ptr [ESI + 0x2c]
005aecc0  TEST AL,AL
005aecc2  JZ 0x005aecce
005aecc4  MOV ECX,dword ptr [ESI + 0x30]
005aecc7  CALL 0x005ad440
005aeccc  JMP 0x005aecd1
005aecce  MOV EAX,dword ptr [ESI + 0x30]
005aecd1  TEST EAX,EAX
005aecd3  JNZ 0x005aecdd
005aecd5  POP EDI
005aecd6  LEA EAX,[ESI + 0x8]
005aecd9  POP ESI
005aecda  RET 0x4
005aecdd  MOV EDX,dword ptr [EAX + 0x4]
005aece0  TEST EDX,EDX
005aece2  LEA ECX,[EAX + 0x4]
005aece5  JZ 0x005aecf8
005aece7  CMP dword ptr [EAX + 0xc],EDI
005aecea  JGE 0x005aecf8
005aecec  MOV EAX,dword ptr [ECX]
005aecee  MOV EDX,dword ptr [EAX + 0x4]
005aecf1  TEST EDX,EDX
005aecf3  LEA ECX,[EAX + 0x4]
005aecf6  JNZ 0x005aece7
005aecf8  POP EDI
005aecf9  POP ESI
005aecfa  RET 0x4
