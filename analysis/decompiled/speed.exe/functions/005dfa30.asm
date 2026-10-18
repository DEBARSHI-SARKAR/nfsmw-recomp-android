005dfa30  MOV EAX,dword ptr [ECX]
005dfa32  MOV DL,byte ptr [EAX + 0x15]
005dfa35  TEST DL,DL
005dfa37  JNZ 0x005dfa86
005dfa39  MOV EDX,dword ptr [EAX + 0x8]
005dfa3c  PUSH EBX
005dfa3d  MOV BL,byte ptr [EDX + 0x15]
005dfa40  TEST BL,BL
005dfa42  JNZ 0x005dfa5f
005dfa44  MOV EAX,dword ptr [EDX]
005dfa46  MOV BL,byte ptr [EAX + 0x15]
005dfa49  TEST BL,BL
005dfa4b  JNZ 0x005dfa5b
005dfa4d  LEA ECX,[ECX]
005dfa50  MOV EDX,EAX
005dfa52  MOV EAX,dword ptr [EDX]
005dfa54  MOV BL,byte ptr [EAX + 0x15]
005dfa57  TEST BL,BL
005dfa59  JZ 0x005dfa50
005dfa5b  MOV dword ptr [ECX],EDX
005dfa5d  POP EBX
005dfa5e  RET
005dfa5f  MOV EAX,dword ptr [EAX + 0x4]
005dfa62  MOV DL,byte ptr [EAX + 0x15]
005dfa65  TEST DL,DL
005dfa67  JNZ 0x005dfa83
005dfa69  LEA ESP,[ESP]
005dfa70  MOV EDX,dword ptr [ECX]
005dfa72  CMP EDX,dword ptr [EAX + 0x8]
005dfa75  JNZ 0x005dfa83
005dfa77  MOV dword ptr [ECX],EAX
005dfa79  MOV EAX,dword ptr [EAX + 0x4]
005dfa7c  MOV DL,byte ptr [EAX + 0x15]
005dfa7f  TEST DL,DL
005dfa81  JZ 0x005dfa70
005dfa83  MOV dword ptr [ECX],EAX
005dfa85  POP EBX
005dfa86  RET
