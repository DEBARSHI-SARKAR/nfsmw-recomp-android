007b09f0  PUSH -0x1
007b09f2  PUSH 0x8830b4
007b09f7  MOV EAX,FS:[0x0]
007b09fd  PUSH EAX
007b09fe  MOV dword ptr FS:[0x0],ESP
007b0a05  SUB ESP,0xc
007b0a08  PUSH ESI
007b0a09  PUSH EDI
007b0a0a  PUSH 0x58
007b0a0c  MOV EDI,ECX
007b0a0e  CALL 0x00652ad0
007b0a13  MOV ESI,EAX
007b0a15  ADD ESP,0x4
007b0a18  MOV dword ptr [ESP + 0x8],ESI
007b0a1c  TEST ESI,ESI
007b0a1e  MOV dword ptr [ESP + 0x1c],0x0
007b0a26  JZ 0x007b0a40
007b0a28  PUSH 0x1
007b0a2a  MOV ECX,ESI
007b0a2c  CALL 0x00589150
007b0a31  MOV EAX,dword ptr [ESP + 0x24]
007b0a35  MOV dword ptr [ESI],0x8b7520
007b0a3b  MOV dword ptr [ESI + 0x54],EAX
007b0a3e  JMP 0x007b0a42
007b0a40  XOR ESI,ESI
007b0a42  PUSH 0x8b7a34
007b0a47  MOV ECX,EDI
007b0a49  MOV dword ptr [ESP + 0x20],0xffffffff
007b0a51  CALL 0x00573cc0
007b0a56  PUSH 0x8b7a2c
007b0a5b  MOV ECX,EDI
007b0a5d  MOV dword ptr [ESI + 0x2c],EAX
007b0a60  CALL 0x00573cc0
007b0a65  MOV dword ptr [ESI + 0x30],EAX
007b0a68  MOV ECX,dword ptr [EDI + 0xbc]
007b0a6e  PUSH ECX
007b0a6f  MOV ECX,EDI
007b0a71  CALL 0x00573d80
007b0a76  PUSH 0x8b7a20
007b0a7b  MOV ECX,EDI
007b0a7d  MOV dword ptr [ESI + 0x24],EAX
007b0a80  CALL 0x00573d10
007b0a85  PUSH 0x8b7a14
007b0a8a  MOV ECX,EDI
007b0a8c  MOV dword ptr [ESI + 0x4c],EAX
007b0a8f  CALL 0x00573cc0
007b0a94  MOV dword ptr [ESI + 0x50],EAX
007b0a97  MOV EDX,dword ptr [EDI + 0xd4]
007b0a9d  MOV dword ptr [ESI + 0xc],EDX
007b0aa0  MOV EAX,dword ptr [EDI + 0xd8]
007b0aa6  MOV dword ptr [ESI + 0x10],EAX
007b0aa9  MOV ECX,dword ptr [EDI + 0xe4]
007b0aaf  MOV dword ptr [ESI + 0x34],ECX
007b0ab2  MOV EDX,dword ptr [EDI + 0xe8]
007b0ab8  MOV dword ptr [ESI + 0x38],EDX
007b0abb  MOV EAX,dword ptr [EDI + 0xec]
007b0ac1  MOV dword ptr [ESI + 0x3c],EAX
007b0ac4  MOV ECX,dword ptr [EDI + 0xf0]
007b0aca  MOV dword ptr [ESI + 0x40],ECX
007b0acd  MOV EDX,dword ptr [EDI + 0xf4]
007b0ad3  MOV dword ptr [ESI + 0x44],EDX
007b0ad6  MOV EAX,dword ptr [EDI + 0xf8]
007b0adc  MOV dword ptr [ESI + 0x48],EAX
007b0adf  MOV EDX,dword ptr [EDI + 0x30]
007b0ae2  LEA ECX,[EDI + 0x2c]
007b0ae5  LEA EAX,[ESI + 0x4]
007b0ae8  MOV dword ptr [EDX],EAX
007b0aea  MOV dword ptr [ECX + 0x4],EAX
007b0aed  MOV dword ptr [EAX],ECX
007b0aef  MOV dword ptr [EAX + 0x4],EDX
007b0af2  MOV EAX,dword ptr [EDI + 0x104]
007b0af8  INC EAX
007b0af9  MOV ECX,EDI
007b0afb  MOV dword ptr [EDI + 0x104],EAX
007b0b01  CALL 0x00573e70
007b0b06  MOV EDX,dword ptr [ESI]
007b0b08  MOV ECX,ESI
007b0b0a  CALL dword ptr [EDX + 0x14]
007b0b0d  MOV EAX,dword ptr [ESI]
007b0b0f  MOV ECX,ESI
007b0b11  CALL dword ptr [EAX + 0xc]
007b0b14  MOV EDX,dword ptr [ESI]
007b0b16  MOV ECX,ESI
007b0b18  CALL dword ptr [EDX + 0x10]
007b0b1b  MOV EDX,dword ptr [ESI + 0x30]
007b0b1e  LEA EAX,[ESP + 0xc]
007b0b22  PUSH EAX
007b0b23  LEA ECX,[ESP + 0xc]
007b0b27  PUSH ECX
007b0b28  PUSH EDX
007b0b29  CALL 0x00514fd0
007b0b2e  MOV EDX,dword ptr [ESI + 0x30]
007b0b31  LEA EAX,[ESP + 0x1c]
007b0b35  PUSH EAX
007b0b36  LEA ECX,[ESP + 0x34]
007b0b3a  PUSH ECX
007b0b3b  PUSH EDX
007b0b3c  CALL 0x00515520
007b0b41  FLD float ptr [ESP + 0x3c]
007b0b45  FADD float ptr [ESP + 0x20]
007b0b49  ADD ESP,0x18
007b0b4c  FSUBR float ptr [ESI + 0xc]
007b0b4f  FABS
007b0b51  FSTP float ptr [ESI + 0x14]
007b0b54  MOV ECX,dword ptr [ESP + 0x14]
007b0b58  POP EDI
007b0b59  POP ESI
007b0b5a  MOV dword ptr FS:[0x0],ECX
007b0b61  ADD ESP,0x18
007b0b64  RET 0x4
