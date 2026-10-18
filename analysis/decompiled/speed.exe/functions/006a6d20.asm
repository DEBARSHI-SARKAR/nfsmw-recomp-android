006a6d20  MOV EDX,dword ptr [ECX + 0x2c]
006a6d23  LEA EAX,[ECX + 0x18]
006a6d26  PUSH ESI
006a6d27  CMP dword ptr [EDX],EAX
006a6d29  JNZ 0x006a6d30
006a6d2b  MOV ESI,dword ptr [EAX + 0x4]
006a6d2e  MOV dword ptr [EDX],ESI
006a6d30  MOV EDX,dword ptr [EAX]
006a6d32  XOR ESI,ESI
006a6d34  CMP EDX,ESI
006a6d36  PUSH EDI
006a6d37  JZ 0x006a6d3f
006a6d39  MOV EDI,dword ptr [EAX + 0x4]
006a6d3c  MOV dword ptr [EDX + 0x4],EDI
006a6d3f  MOV EDX,dword ptr [EAX + 0x4]
006a6d42  CMP EDX,ESI
006a6d44  JZ 0x006a6d4a
006a6d46  MOV EDI,dword ptr [EAX]
006a6d48  MOV dword ptr [EDX],EDI
006a6d4a  MOV dword ptr [EAX + 0x4],ESI
006a6d4d  MOV dword ptr [EAX],ESI
006a6d4f  MOV EAX,dword ptr [ECX + 0x14]
006a6d52  CMP dword ptr [EAX],ECX
006a6d54  POP EDI
006a6d55  JNZ 0x006a6d5c
006a6d57  MOV EDX,dword ptr [ECX + 0x4]
006a6d5a  MOV dword ptr [EAX],EDX
006a6d5c  MOV EAX,dword ptr [ECX]
006a6d5e  CMP EAX,ESI
006a6d60  JZ 0x006a6d68
006a6d62  MOV EDX,dword ptr [ECX + 0x4]
006a6d65  MOV dword ptr [EAX + 0x4],EDX
006a6d68  MOV EAX,dword ptr [ECX + 0x4]
006a6d6b  CMP EAX,ESI
006a6d6d  JZ 0x006a6d73
006a6d6f  MOV EDX,dword ptr [ECX]
006a6d71  MOV dword ptr [EAX],EDX
006a6d73  MOV dword ptr [ECX + 0x4],ESI
006a6d76  MOV dword ptr [ECX],ESI
006a6d78  POP ESI
006a6d79  RET
