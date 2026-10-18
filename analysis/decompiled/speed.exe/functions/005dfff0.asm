005dfff0  MOV EAX,dword ptr [ESP + 0x4]
005dfff4  MOV ECX,dword ptr [EAX + 0x8]
005dfff7  MOV DL,byte ptr [ECX + 0x21]
005dfffa  TEST DL,DL
005dfffc  JNZ 0x005e000c
005dfffe  MOV EDI,EDI
005e0000  MOV EAX,ECX
005e0002  MOV ECX,dword ptr [EAX + 0x8]
005e0005  MOV DL,byte ptr [ECX + 0x21]
005e0008  TEST DL,DL
005e000a  JZ 0x005e0000
005e000c  RET
