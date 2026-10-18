0076aea0  MOV EAX,dword ptr [ECX]
0076aea2  MOV DL,byte ptr [EAX + 0x15]
0076aea5  TEST DL,DL
0076aea7  JNZ 0x0076aef6
0076aea9  MOV EDX,dword ptr [EAX + 0x8]
0076aeac  PUSH EBX
0076aead  MOV BL,byte ptr [EDX + 0x15]
0076aeb0  TEST BL,BL
0076aeb2  JNZ 0x0076aecf
0076aeb4  MOV EAX,dword ptr [EDX]
0076aeb6  MOV BL,byte ptr [EAX + 0x15]
0076aeb9  TEST BL,BL
0076aebb  JNZ 0x0076aecb
0076aebd  LEA ECX,[ECX]
0076aec0  MOV EDX,EAX
0076aec2  MOV EAX,dword ptr [EDX]
0076aec4  MOV BL,byte ptr [EAX + 0x15]
0076aec7  TEST BL,BL
0076aec9  JZ 0x0076aec0
0076aecb  MOV dword ptr [ECX],EDX
0076aecd  POP EBX
0076aece  RET
0076aecf  MOV EAX,dword ptr [EAX + 0x4]
0076aed2  MOV DL,byte ptr [EAX + 0x15]
0076aed5  TEST DL,DL
0076aed7  JNZ 0x0076aef3
0076aed9  LEA ESP,[ESP]
0076aee0  MOV EDX,dword ptr [ECX]
0076aee2  CMP EDX,dword ptr [EAX + 0x8]
0076aee5  JNZ 0x0076aef3
0076aee7  MOV dword ptr [ECX],EAX
0076aee9  MOV EAX,dword ptr [EAX + 0x4]
0076aeec  MOV DL,byte ptr [EAX + 0x15]
0076aeef  TEST DL,DL
0076aef1  JZ 0x0076aee0
0076aef3  MOV dword ptr [ECX],EAX
0076aef5  POP EBX
0076aef6  RET
