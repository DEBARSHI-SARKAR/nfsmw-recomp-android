006eb7e0  MOV EAX,dword ptr [ECX]
006eb7e2  MOV DL,byte ptr [EAX + 0x15]
006eb7e5  TEST DL,DL
006eb7e7  JZ 0x006eb7ef
006eb7e9  MOV EAX,dword ptr [EAX + 0x8]
006eb7ec  MOV dword ptr [ECX],EAX
006eb7ee  RET
006eb7ef  MOV EDX,dword ptr [EAX]
006eb7f1  PUSH EBX
006eb7f2  MOV BL,byte ptr [EDX + 0x15]
006eb7f5  TEST BL,BL
006eb7f7  JNZ 0x006eb813
006eb7f9  MOV EAX,dword ptr [EDX + 0x8]
006eb7fc  MOV BL,byte ptr [EAX + 0x15]
006eb7ff  TEST BL,BL
006eb801  JNZ 0x006eb80f
006eb803  MOV EDX,EAX
006eb805  MOV EAX,dword ptr [EDX + 0x8]
006eb808  MOV BL,byte ptr [EAX + 0x15]
006eb80b  TEST BL,BL
006eb80d  JZ 0x006eb803
006eb80f  MOV dword ptr [ECX],EDX
006eb811  POP EBX
006eb812  RET
006eb813  MOV EAX,dword ptr [EAX + 0x4]
006eb816  MOV DL,byte ptr [EAX + 0x15]
006eb819  TEST DL,DL
006eb81b  JNZ 0x006eb83b
006eb81d  LEA ECX,[ECX]
006eb820  MOV EDX,dword ptr [ECX]
006eb822  CMP EDX,dword ptr [EAX]
006eb824  JNZ 0x006eb832
006eb826  MOV dword ptr [ECX],EAX
006eb828  MOV EAX,dword ptr [EAX + 0x4]
006eb82b  MOV DL,byte ptr [EAX + 0x15]
006eb82e  TEST DL,DL
006eb830  JZ 0x006eb820
006eb832  MOV DL,byte ptr [EAX + 0x15]
006eb835  TEST DL,DL
006eb837  JNZ 0x006eb83b
006eb839  MOV dword ptr [ECX],EAX
006eb83b  POP EBX
006eb83c  RET
