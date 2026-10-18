006b4cc0  PUSH ESI
006b4cc1  PUSH EDI
006b4cc2  MOV EDI,dword ptr [ESP + 0x10]
006b4cc6  MOV EAX,dword ptr [EDI]
006b4cc8  MOV dword ptr [ESP + 0x10],EAX
006b4ccc  FLD float ptr [ESP + 0x10]
006b4cd0  PUSH ECX
006b4cd1  FSUB float ptr [ESP + 0x18]
006b4cd5  MOV ESI,ECX
006b4cd7  FSTP float ptr [ESP]
006b4cda  PUSH 0x9383a4
006b4cdf  PUSH ESI
006b4ce0  CALL 0x006a6130
006b4ce5  FLD float ptr [ESP + 0x10]
006b4ce9  FADD float ptr [ESP + 0x14]
006b4ced  PUSH ECX
006b4cee  LEA ECX,[ESI + 0x18]
006b4cf1  FSTP float ptr [ESP]
006b4cf4  PUSH 0x9383a4
006b4cf9  PUSH ESI
006b4cfa  CALL 0x006a6130
006b4cff  MOV dword ptr [ESI + 0x30],ESI
006b4d02  MOV ECX,dword ptr [EDI + 0x8]
006b4d05  MOV dword ptr [ESP + 0x10],ECX
006b4d09  FLD float ptr [ESP + 0x10]
006b4d0d  PUSH ECX
006b4d0e  FSUB float ptr [ESP + 0x18]
006b4d12  LEA EDI,[ESI + 0x34]
006b4d15  MOV ECX,EDI
006b4d17  FSTP float ptr [ESP]
006b4d1a  PUSH 0x9383a0
006b4d1f  PUSH EDI
006b4d20  CALL 0x006a6130
006b4d25  FLD float ptr [ESP + 0x10]
006b4d29  FADD float ptr [ESP + 0x14]
006b4d2d  PUSH ECX
006b4d2e  LEA ECX,[EDI + 0x18]
006b4d31  FSTP float ptr [ESP]
006b4d34  PUSH 0x9383a0
006b4d39  PUSH EDI
006b4d3a  CALL 0x006a6130
006b4d3f  MOV EDX,dword ptr [ESP + 0xc]
006b4d43  MOV dword ptr [EDI + 0x30],ESI
006b4d46  POP EDI
006b4d47  MOV dword ptr [ESI + 0x68],EDX
006b4d4a  MOV EAX,ESI
006b4d4c  POP ESI
006b4d4d  RET 0xc
