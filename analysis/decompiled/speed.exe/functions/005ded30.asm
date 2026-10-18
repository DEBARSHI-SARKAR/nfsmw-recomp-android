005ded30  MOV EAX,dword ptr [ESP + 0x4]
005ded34  MOV ECX,dword ptr [EAX + 0x8]
005ded37  MOV DL,byte ptr [ECX + 0x15]
005ded3a  TEST DL,DL
005ded3c  JNZ 0x005ded4c
005ded3e  MOV EDI,EDI
005ded40  MOV EAX,ECX
005ded42  MOV ECX,dword ptr [EAX + 0x8]
005ded45  MOV DL,byte ptr [ECX + 0x15]
005ded48  TEST DL,DL
005ded4a  JZ 0x005ded40
005ded4c  RET
