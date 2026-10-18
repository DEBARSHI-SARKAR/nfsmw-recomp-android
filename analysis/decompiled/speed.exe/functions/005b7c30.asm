005b7c30  SUB ESP,0x40
005b7c33  PUSH EBX
005b7c34  MOV EBX,ECX
005b7c36  MOV EAX,dword ptr [EBX + 0x54]
005b7c39  MOV ECX,dword ptr [EAX + 0x20]
005b7c3c  MOV EAX,dword ptr [EAX + 0x1c]
005b7c3f  TEST EAX,EAX
005b7c41  JBE 0x005b7d9c
005b7c47  PUSH EBP
005b7c48  PUSH ESI
005b7c49  PUSH EDI
005b7c4a  LEA ESI,[ECX + 0x18]
005b7c4d  MOV dword ptr [ESP + 0x10],EAX
005b7c51  MOV DL,byte ptr [ESI + -0x15]
005b7c54  MOV AL,byte ptr [ESI + -0x16]
005b7c57  AND DL,0x7f
005b7c5a  CMP AL,0x3
005b7c5c  MOV byte ptr [ESI + -0x15],DL
005b7c5f  JZ 0x005b7c69
005b7c61  CMP AL,0x4
005b7c63  JNZ 0x005b7d87
005b7c69  MOVSX EAX,byte ptr [ESI + -0x11]
005b7c6d  MOV ECX,dword ptr [EBX + 0x2c]
005b7c70  LEA EBP,[ECX + EAX*0x4]
005b7c73  MOV AL,byte ptr [ESI + 0x14]
005b7c76  TEST AL,AL
005b7c78  JZ 0x005b7c86
005b7c7a  MOV ECX,dword ptr [ESI + 0x18]
005b7c7d  CALL 0x005ad440
005b7c82  MOV EDI,EAX
005b7c84  JMP 0x005b7c89
005b7c86  MOV EDI,dword ptr [ESI + 0x18]
005b7c89  TEST EDI,EDI
005b7c8b  JZ 0x005b7d87
005b7c91  MOVZX EAX,byte ptr [ESI + -0x18]
005b7c95  DEC EAX
005b7c96  CMP EAX,0x5
005b7c99  JA 0x005b7d87
005b7c9f  JMP dword ptr [EAX*0x4 + 0x5b7da4]
005b7ca6  MOV EDX,dword ptr [EBP]
005b7ca9  SUB EDX,dword ptr [ESI]
005b7cab  JMP 0x005b7d84
005b7cb0  FLD float ptr [EBP]
005b7cb3  FSUB float ptr [ESI]
005b7cb5  FSTP float ptr [EDI + 0x10]
005b7cb8  JMP 0x005b7d87
005b7cbd  FLD float ptr [EBP]
005b7cc0  FSUB float ptr [ESI]
005b7cc2  FLD float ptr [EBP + 0x4]
005b7cc5  FSUB float ptr [ESI + 0x4]
005b7cc8  FXCH
005b7cca  FSTP float ptr [EDI + 0x10]
005b7ccd  FSTP float ptr [EDI + 0x14]
005b7cd0  JMP 0x005b7d87
005b7cd5  FLD float ptr [EBP]
005b7cd8  FSUB float ptr [ESI]
005b7cda  FLD float ptr [EBP + 0x4]
005b7cdd  FSUB float ptr [ESI + 0x4]
005b7ce0  FLD float ptr [EBP + 0x8]
005b7ce3  FSUB float ptr [ESI + 0x8]
005b7ce6  FSTP float ptr [ESP + 0x1c]
005b7cea  MOV EAX,dword ptr [ESP + 0x1c]
005b7cee  FXCH
005b7cf0  MOV dword ptr [EDI + 0x18],EAX
005b7cf3  FSTP float ptr [EDI + 0x10]
005b7cf6  FSTP float ptr [EDI + 0x14]
005b7cf9  JMP 0x005b7d87
005b7cfe  MOV ECX,ESI
005b7d00  MOV EDX,dword ptr [ECX]
005b7d02  MOV EAX,dword ptr [ECX + 0x4]
005b7d05  MOV dword ptr [ESP + 0x20],EDX
005b7d09  FLD float ptr [ESP + 0x20]
005b7d0d  MOV EDX,dword ptr [ECX + 0x8]
005b7d10  FCHS
005b7d12  FSTP float ptr [ESP + 0x20]
005b7d16  MOV dword ptr [ESP + 0x24],EAX
005b7d1a  FLD float ptr [ESP + 0x24]
005b7d1e  MOV EAX,dword ptr [ECX + 0xc]
005b7d21  FCHS
005b7d23  MOV dword ptr [ESP + 0x28],EDX
005b7d27  FSTP float ptr [ESP + 0x24]
005b7d2b  LEA ECX,[ESP + 0x20]
005b7d2f  FLD float ptr [ESP + 0x28]
005b7d33  PUSH ECX
005b7d34  LEA EDX,[ESP + 0x34]
005b7d38  FCHS
005b7d3a  PUSH EDX
005b7d3b  FSTP float ptr [ESP + 0x30]
005b7d3f  MOV ECX,EBP
005b7d41  MOV dword ptr [ESP + 0x34],EAX
005b7d45  CALL 0x005ad0f0
005b7d4a  MOV ECX,dword ptr [EAX]
005b7d4c  MOV dword ptr [EDI + 0x10],ECX
005b7d4f  MOV EDX,dword ptr [EAX + 0x4]
005b7d52  MOV dword ptr [EDI + 0x14],EDX
005b7d55  MOV ECX,dword ptr [EAX + 0x8]
005b7d58  MOV dword ptr [EDI + 0x18],ECX
005b7d5b  MOV EDX,dword ptr [EAX + 0xc]
005b7d5e  MOV dword ptr [EDI + 0x1c],EDX
005b7d61  JMP 0x005b7d87
005b7d63  PUSH ESI
005b7d64  LEA EAX,[ESP + 0x44]
005b7d68  PUSH EAX
005b7d69  MOV ECX,EBP
005b7d6b  CALL 0x005b2ea0
005b7d70  MOV ECX,dword ptr [EAX + 0xc]
005b7d73  MOV dword ptr [EDI + 0x1c],ECX
005b7d76  MOV EDX,dword ptr [EAX + 0x8]
005b7d79  MOV dword ptr [EDI + 0x18],EDX
005b7d7c  MOV ECX,dword ptr [EAX + 0x4]
005b7d7f  MOV dword ptr [EDI + 0x14],ECX
005b7d82  MOV EDX,dword ptr [EAX]
005b7d84  MOV dword ptr [EDI + 0x10],EDX
005b7d87  MOV EAX,dword ptr [ESP + 0x10]
005b7d8b  ADD ESI,0x38
005b7d8e  DEC EAX
005b7d8f  MOV dword ptr [ESP + 0x10],EAX
005b7d93  JNZ 0x005b7c51
005b7d99  POP EDI
005b7d9a  POP ESI
005b7d9b  POP EBP
005b7d9c  POP EBX
005b7d9d  ADD ESP,0x40
005b7da0  RET
