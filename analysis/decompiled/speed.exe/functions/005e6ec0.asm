005e6ec0  MOV EAX,dword ptr [ECX]
005e6ec2  MOV DL,byte ptr [EAX + 0xf]
005e6ec5  TEST DL,DL
005e6ec7  JZ 0x005e6ecf
005e6ec9  MOV EAX,dword ptr [EAX + 0x8]
005e6ecc  MOV dword ptr [ECX],EAX
005e6ece  RET
005e6ecf  MOV EDX,dword ptr [EAX]
005e6ed1  PUSH EBX
005e6ed2  MOV BL,byte ptr [EDX + 0xf]
005e6ed5  TEST BL,BL
005e6ed7  JNZ 0x005e6ef3
005e6ed9  MOV EAX,dword ptr [EDX + 0x8]
005e6edc  MOV BL,byte ptr [EAX + 0xf]
005e6edf  TEST BL,BL
005e6ee1  JNZ 0x005e6eef
005e6ee3  MOV EDX,EAX
005e6ee5  MOV EAX,dword ptr [EDX + 0x8]
005e6ee8  MOV BL,byte ptr [EAX + 0xf]
005e6eeb  TEST BL,BL
005e6eed  JZ 0x005e6ee3
005e6eef  MOV dword ptr [ECX],EDX
005e6ef1  POP EBX
005e6ef2  RET
005e6ef3  MOV EAX,dword ptr [EAX + 0x4]
005e6ef6  MOV DL,byte ptr [EAX + 0xf]
005e6ef9  TEST DL,DL
005e6efb  JNZ 0x005e6f1b
005e6efd  LEA ECX,[ECX]
005e6f00  MOV EDX,dword ptr [ECX]
005e6f02  CMP EDX,dword ptr [EAX]
005e6f04  JNZ 0x005e6f12
005e6f06  MOV dword ptr [ECX],EAX
005e6f08  MOV EAX,dword ptr [EAX + 0x4]
005e6f0b  MOV DL,byte ptr [EAX + 0xf]
005e6f0e  TEST DL,DL
005e6f10  JZ 0x005e6f00
005e6f12  MOV DL,byte ptr [EAX + 0xf]
005e6f15  TEST DL,DL
005e6f17  JNZ 0x005e6f1b
005e6f19  MOV dword ptr [ECX],EAX
005e6f1b  POP EBX
005e6f1c  RET
