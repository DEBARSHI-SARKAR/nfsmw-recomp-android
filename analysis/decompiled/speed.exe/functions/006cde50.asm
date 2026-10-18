006cde50  MOV EAX,dword ptr [ECX]
006cde52  MOV DL,byte ptr [EAX + 0x25]
006cde55  TEST DL,DL
006cde57  JNZ 0x006cdea6
006cde59  MOV EDX,dword ptr [EAX + 0x8]
006cde5c  PUSH EBX
006cde5d  MOV BL,byte ptr [EDX + 0x25]
006cde60  TEST BL,BL
006cde62  JNZ 0x006cde7f
006cde64  MOV EAX,dword ptr [EDX]
006cde66  MOV BL,byte ptr [EAX + 0x25]
006cde69  TEST BL,BL
006cde6b  JNZ 0x006cde7b
006cde6d  LEA ECX,[ECX]
006cde70  MOV EDX,EAX
006cde72  MOV EAX,dword ptr [EDX]
006cde74  MOV BL,byte ptr [EAX + 0x25]
006cde77  TEST BL,BL
006cde79  JZ 0x006cde70
006cde7b  MOV dword ptr [ECX],EDX
006cde7d  POP EBX
006cde7e  RET
006cde7f  MOV EAX,dword ptr [EAX + 0x4]
006cde82  MOV DL,byte ptr [EAX + 0x25]
006cde85  TEST DL,DL
006cde87  JNZ 0x006cdea3
006cde89  LEA ESP,[ESP]
006cde90  MOV EDX,dword ptr [ECX]
006cde92  CMP EDX,dword ptr [EAX + 0x8]
006cde95  JNZ 0x006cdea3
006cde97  MOV dword ptr [ECX],EAX
006cde99  MOV EAX,dword ptr [EAX + 0x4]
006cde9c  MOV DL,byte ptr [EAX + 0x25]
006cde9f  TEST DL,DL
006cdea1  JZ 0x006cde90
006cdea3  MOV dword ptr [ECX],EAX
006cdea5  POP EBX
006cdea6  RET
