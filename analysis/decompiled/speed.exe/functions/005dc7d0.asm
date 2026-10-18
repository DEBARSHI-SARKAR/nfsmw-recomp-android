005dc7d0  MOV EDX,dword ptr [0x0091e000]
005dc7d6  PUSH ESI
005dc7d7  MOV ESI,dword ptr [EDX + 0x1964]
005dc7dd  MOV EAX,0x1
005dc7e2  CMP ESI,EAX
005dc7e4  POP ESI
005dc7e5  JNZ 0x005dc7fe
005dc7e7  MOV DL,byte ptr [ECX + 0x21]
005dc7ea  TEST DL,DL
005dc7ec  JNZ 0x005dc7fe
005dc7ee  MOV DL,byte ptr [ECX + 0x1e]
005dc7f1  TEST DL,DL
005dc7f3  JNZ 0x005dc7fe
005dc7f5  MOV DL,byte ptr [ECX + 0x1d]
005dc7f8  TEST DL,DL
005dc7fa  JNZ 0x005dc7fe
005dc7fc  XOR EAX,EAX
005dc7fe  RET
