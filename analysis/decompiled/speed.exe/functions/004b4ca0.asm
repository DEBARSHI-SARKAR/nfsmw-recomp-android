004b4ca0  MOV EAX,dword ptr [ECX + 0xac]
004b4ca6  MOV EDX,dword ptr [ECX + 0x28]
004b4ca9  MOV dword ptr [ECX + 0xbc],EAX
004b4caf  MOV EAX,dword ptr [ECX + 0x18]
004b4cb2  FLD float ptr [EAX + 0x64]
004b4cb5  PUSH ESI
004b4cb6  FSUB float ptr [ECX + 0xb4]
004b4cbc  FSTP float ptr [ECX + 0xac]
004b4cc2  FLD float ptr [EDX + 0x118]
004b4cc8  FSUB float ptr [EDX + 0x11c]
004b4cce  FSTP float ptr [ECX + 0xb0]
004b4cd4  MOV EDX,dword ptr [EAX + 0x64]
004b4cd7  MOV dword ptr [ECX + 0xb4],EDX
004b4cdd  MOV EAX,dword ptr [EAX + 0x5c]
004b4ce0  MOV DL,byte ptr [EAX + 0xb4]
004b4ce6  TEST DL,DL
004b4ce8  JZ 0x004b4cfb
004b4cea  LEA ESI,[ECX + 0x84]
004b4cf0  MOV ECX,dword ptr [ECX + 0xb0]
004b4cf6  JMP 0x004b4dc0
004b4cfb  MOV EDX,dword ptr [ECX + 0x30]
004b4cfe  MOV EAX,dword ptr [EDX + 0x84]
004b4d04  TEST EAX,EAX
004b4d06  JZ 0x004b4d39
004b4d08  CMP EAX,0x1
004b4d0b  LEA ESI,[ECX + 0x84]
004b4d11  JNZ 0x004b4d26
004b4d13  MOV EAX,dword ptr [ECX + 0xac]
004b4d19  PUSH EAX
004b4d1a  MOV ECX,ESI
004b4d1c  CALL 0x00653bb0
004b4d21  JMP 0x004b4dc8
004b4d26  MOV ECX,dword ptr [ECX + 0xb0]
004b4d2c  PUSH ECX
004b4d2d  MOV ECX,ESI
004b4d2f  CALL 0x00653bb0
004b4d34  JMP 0x004b4dc8
004b4d39  MOV EAX,dword ptr [ECX + 0x2c]
004b4d3c  MOV EDX,dword ptr [EAX + 0x38]
004b4d3f  CMP EDX,0x3
004b4d42  JZ 0x004b4d48
004b4d44  TEST EDX,EDX
004b4d46  JZ 0x004b4db4
004b4d48  MOV EDX,dword ptr [EAX + 0x38]
004b4d4b  CMP EDX,0x5
004b4d4e  JNZ 0x004b4d66
004b4d50  MOV EDX,dword ptr [ECX + 0xb0]
004b4d56  LEA ESI,[ECX + 0x84]
004b4d5c  PUSH EDX
004b4d5d  MOV ECX,ESI
004b4d5f  CALL 0x00653bb0
004b4d64  JMP 0x004b4dc8
004b4d66  CMP dword ptr [EAX + 0x3c],0x2
004b4d6a  JNZ 0x004b4d87
004b4d6c  FLD float ptr [ECX + 0xac]
004b4d72  LEA ESI,[ECX + 0x84]
004b4d78  PUSH ECX
004b4d79  FABS
004b4d7b  MOV ECX,ESI
004b4d7d  FSTP float ptr [ESP]
004b4d80  CALL 0x00653bb0
004b4d85  JMP 0x004b4dc8
004b4d87  CMP EDX,0x2
004b4d8a  JZ 0x004b4da0
004b4d8c  CMP EDX,0x3
004b4d8f  JZ 0x004b4da0
004b4d91  MOV EAX,dword ptr [ECX + 0xb0]
004b4d97  LEA ESI,[ECX + 0x84]
004b4d9d  PUSH EAX
004b4d9e  JMP 0x004b4dc1
004b4da0  FLD float ptr [ECX + 0xb0]
004b4da6  PUSH ECX
004b4da7  FABS
004b4da9  LEA ESI,[ECX + 0x84]
004b4daf  FSTP float ptr [ESP]
004b4db2  JMP 0x004b4dc1
004b4db4  LEA ESI,[ECX + 0x84]
004b4dba  MOV ECX,dword ptr [ECX + 0xac]
004b4dc0  PUSH ECX
004b4dc1  MOV ECX,ESI
004b4dc3  CALL 0x00653b10
004b4dc8  MOV EDX,dword ptr [ESI]
004b4dca  MOV ECX,ESI
004b4dcc  POP ESI
004b4dcd  JMP dword ptr [EDX + 0x4]
