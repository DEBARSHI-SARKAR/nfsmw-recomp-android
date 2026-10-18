005e6f20  MOV EAX,dword ptr [ECX]
005e6f22  MOV DL,byte ptr [EAX + 0x1d]
005e6f25  TEST DL,DL
005e6f27  JZ 0x005e6f2f
005e6f29  MOV EAX,dword ptr [EAX + 0x8]
005e6f2c  MOV dword ptr [ECX],EAX
005e6f2e  RET
005e6f2f  MOV EDX,dword ptr [EAX]
005e6f31  PUSH EBX
005e6f32  MOV BL,byte ptr [EDX + 0x1d]
005e6f35  TEST BL,BL
005e6f37  JNZ 0x005e6f53
005e6f39  MOV EAX,dword ptr [EDX + 0x8]
005e6f3c  MOV BL,byte ptr [EAX + 0x1d]
005e6f3f  TEST BL,BL
005e6f41  JNZ 0x005e6f4f
005e6f43  MOV EDX,EAX
005e6f45  MOV EAX,dword ptr [EDX + 0x8]
005e6f48  MOV BL,byte ptr [EAX + 0x1d]
005e6f4b  TEST BL,BL
005e6f4d  JZ 0x005e6f43
005e6f4f  MOV dword ptr [ECX],EDX
005e6f51  POP EBX
005e6f52  RET
005e6f53  MOV EAX,dword ptr [EAX + 0x4]
005e6f56  MOV DL,byte ptr [EAX + 0x1d]
005e6f59  TEST DL,DL
005e6f5b  JNZ 0x005e6f7b
005e6f5d  LEA ECX,[ECX]
005e6f60  MOV EDX,dword ptr [ECX]
005e6f62  CMP EDX,dword ptr [EAX]
005e6f64  JNZ 0x005e6f72
005e6f66  MOV dword ptr [ECX],EAX
005e6f68  MOV EAX,dword ptr [EAX + 0x4]
005e6f6b  MOV DL,byte ptr [EAX + 0x1d]
005e6f6e  TEST DL,DL
005e6f70  JZ 0x005e6f60
005e6f72  MOV DL,byte ptr [EAX + 0x1d]
005e6f75  TEST DL,DL
005e6f77  JNZ 0x005e6f7b
005e6f79  MOV dword ptr [ECX],EAX
005e6f7b  POP EBX
005e6f7c  RET
