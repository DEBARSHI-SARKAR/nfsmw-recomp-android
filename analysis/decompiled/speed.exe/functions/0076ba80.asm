0076ba80  MOV EAX,dword ptr [ECX]
0076ba82  MOV DL,byte ptr [EAX + 0xf]
0076ba85  TEST DL,DL
0076ba87  JNZ 0x0076bad6
0076ba89  MOV EDX,dword ptr [EAX + 0x8]
0076ba8c  PUSH EBX
0076ba8d  MOV BL,byte ptr [EDX + 0xf]
0076ba90  TEST BL,BL
0076ba92  JNZ 0x0076baaf
0076ba94  MOV EAX,dword ptr [EDX]
0076ba96  MOV BL,byte ptr [EAX + 0xf]
0076ba99  TEST BL,BL
0076ba9b  JNZ 0x0076baab
0076ba9d  LEA ECX,[ECX]
0076baa0  MOV EDX,EAX
0076baa2  MOV EAX,dword ptr [EDX]
0076baa4  MOV BL,byte ptr [EAX + 0xf]
0076baa7  TEST BL,BL
0076baa9  JZ 0x0076baa0
0076baab  MOV dword ptr [ECX],EDX
0076baad  POP EBX
0076baae  RET
0076baaf  MOV EAX,dword ptr [EAX + 0x4]
0076bab2  MOV DL,byte ptr [EAX + 0xf]
0076bab5  TEST DL,DL
0076bab7  JNZ 0x0076bad3
0076bab9  LEA ESP,[ESP]
0076bac0  MOV EDX,dword ptr [ECX]
0076bac2  CMP EDX,dword ptr [EAX + 0x8]
0076bac5  JNZ 0x0076bad3
0076bac7  MOV dword ptr [ECX],EAX
0076bac9  MOV EAX,dword ptr [EAX + 0x4]
0076bacc  MOV DL,byte ptr [EAX + 0xf]
0076bacf  TEST DL,DL
0076bad1  JZ 0x0076bac0
0076bad3  MOV dword ptr [ECX],EAX
0076bad5  POP EBX
0076bad6  RET
