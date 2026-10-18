005df8f0  MOV EAX,dword ptr [ESP + 0x4]
005df8f4  MOV ECX,dword ptr [EAX]
005df8f6  MOV DL,byte ptr [ECX + 0xf]
005df8f9  TEST DL,DL
005df8fb  JNZ 0x005df90b
005df8fd  LEA ECX,[ECX]
005df900  MOV EAX,ECX
005df902  MOV ECX,dword ptr [EAX]
005df904  MOV DL,byte ptr [ECX + 0xf]
005df907  TEST DL,DL
005df909  JZ 0x005df900
005df90b  RET
