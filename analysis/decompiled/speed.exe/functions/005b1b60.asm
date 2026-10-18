005b1b60  MOV EDX,dword ptr [ESP + 0x8]
005b1b64  MOV EAX,dword ptr [EDX + 0x10]
005b1b67  PUSH EBX
005b1b68  MOV EBX,dword ptr [ESP + 0x8]
005b1b6c  CMP EBX,EAX
005b1b6e  JNZ 0x005b1b8b
005b1b70  MOV EDX,dword ptr [EDX + 0x2c]
005b1b73  MOV EAX,dword ptr [ESP + 0x10]
005b1b77  FLD float ptr [EDX + 0x1c]
005b1b7a  FADD float ptr [EAX]
005b1b7c  POP EBX
005b1b7d  FSTP float ptr [EAX]
005b1b7f  FLD float ptr [EDX + 0x20]
005b1b82  FADD float ptr [EAX + 0x4]
005b1b85  FSTP float ptr [EAX + 0x4]
005b1b88  MOV AL,0x1
005b1b8a  RET
005b1b8b  CMP dword ptr [EDX + 0x18],0x5
005b1b8f  JNZ 0x005b1bd8
005b1b91  PUSH EBX
005b1b92  MOV ECX,EDX
005b1b94  CALL 0x005ae890
005b1b99  TEST EAX,EAX
005b1b9b  JZ 0x005b1bd8
005b1b9d  MOV EAX,dword ptr [EDX + 0x2c]
005b1ba0  FLD float ptr [EAX + 0x1c]
005b1ba3  PUSH ESI
005b1ba4  PUSH EDI
005b1ba5  MOV EDI,dword ptr [ESP + 0x18]
005b1ba9  FADD float ptr [EDI]
005b1bab  FSTP float ptr [EDI]
005b1bad  FLD float ptr [EAX + 0x20]
005b1bb0  FADD float ptr [EDI + 0x4]
005b1bb3  FSTP float ptr [EDI + 0x4]
005b1bb6  MOV ESI,dword ptr [EDX + 0x64]
005b1bb9  TEST ESI,ESI
005b1bbb  JZ 0x005b1bd2
005b1bbd  LEA ECX,[ECX]
005b1bc0  PUSH EDI
005b1bc1  PUSH ESI
005b1bc2  PUSH EBX
005b1bc3  CALL 0x005b1b60
005b1bc8  MOV ESI,dword ptr [ESI + 0x4]
005b1bcb  ADD ESP,0xc
005b1bce  TEST ESI,ESI
005b1bd0  JNZ 0x005b1bc0
005b1bd2  POP EDI
005b1bd3  POP ESI
005b1bd4  MOV AL,0x1
005b1bd6  POP EBX
005b1bd7  RET
005b1bd8  XOR AL,AL
005b1bda  POP EBX
005b1bdb  RET
