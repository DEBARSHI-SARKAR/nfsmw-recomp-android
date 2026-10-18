006d9dc0  MOV EAX,dword ptr [ECX]
006d9dc2  MOV DL,byte ptr [EAX + 0x25]
006d9dc5  TEST DL,DL
006d9dc7  JZ 0x006d9dcf
006d9dc9  MOV EAX,dword ptr [EAX + 0x8]
006d9dcc  MOV dword ptr [ECX],EAX
006d9dce  RET
006d9dcf  MOV EDX,dword ptr [EAX]
006d9dd1  PUSH EBX
006d9dd2  MOV BL,byte ptr [EDX + 0x25]
006d9dd5  TEST BL,BL
006d9dd7  JNZ 0x006d9df3
006d9dd9  MOV EAX,dword ptr [EDX + 0x8]
006d9ddc  MOV BL,byte ptr [EAX + 0x25]
006d9ddf  TEST BL,BL
006d9de1  JNZ 0x006d9def
006d9de3  MOV EDX,EAX
006d9de5  MOV EAX,dword ptr [EDX + 0x8]
006d9de8  MOV BL,byte ptr [EAX + 0x25]
006d9deb  TEST BL,BL
006d9ded  JZ 0x006d9de3
006d9def  MOV dword ptr [ECX],EDX
006d9df1  POP EBX
006d9df2  RET
006d9df3  MOV EAX,dword ptr [EAX + 0x4]
006d9df6  MOV DL,byte ptr [EAX + 0x25]
006d9df9  TEST DL,DL
006d9dfb  JNZ 0x006d9e1b
006d9dfd  LEA ECX,[ECX]
006d9e00  MOV EDX,dword ptr [ECX]
006d9e02  CMP EDX,dword ptr [EAX]
006d9e04  JNZ 0x006d9e12
006d9e06  MOV dword ptr [ECX],EAX
006d9e08  MOV EAX,dword ptr [EAX + 0x4]
006d9e0b  MOV DL,byte ptr [EAX + 0x25]
006d9e0e  TEST DL,DL
006d9e10  JZ 0x006d9e00
006d9e12  MOV DL,byte ptr [EAX + 0x25]
006d9e15  TEST DL,DL
006d9e17  JNZ 0x006d9e1b
006d9e19  MOV dword ptr [ECX],EAX
006d9e1b  POP EBX
006d9e1c  RET
