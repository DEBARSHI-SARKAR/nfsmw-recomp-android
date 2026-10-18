006b9b20  PUSH -0x1
006b9b22  PUSH 0x87df36
006b9b27  MOV EAX,FS:[0x0]
006b9b2d  PUSH EAX
006b9b2e  MOV dword ptr FS:[0x0],ESP
006b9b35  PUSH ECX
006b9b36  MOV EAX,dword ptr [ESP + 0x18]
006b9b3a  PUSH ESI
006b9b3b  PUSH EDI
006b9b3c  MOV EDI,dword ptr [ESP + 0x1c]
006b9b40  PUSH EAX
006b9b41  MOV ESI,ECX
006b9b43  PUSH EDI
006b9b44  MOV dword ptr [ESP + 0x10],ESI
006b9b48  CALL 0x006b9920
006b9b4d  MOV EAX,dword ptr [EDI + 0x4]
006b9b50  TEST EAX,EAX
006b9b52  MOV dword ptr [ESP + 0x14],0x0
006b9b5a  JZ 0x006b9b61
006b9b5c  ADD EAX,0x10
006b9b5f  JMP 0x006b9b63
006b9b61  XOR EAX,EAX
006b9b63  LEA EDI,[ESI + 0xb8]
006b9b69  PUSH EAX
006b9b6a  MOV ECX,EDI
006b9b6c  CALL 0x006b66b0
006b9b71  MOV EAX,dword ptr [ESI + 0x34]
006b9b74  MOV dword ptr [ESI],0x8ad350
006b9b7a  MOV dword ptr [ESI + 0x8],0x8ad348
006b9b81  MOV dword ptr [ESI + 0x4c],0x8ad324
006b9b88  MOV dword ptr [ESI + 0x54],0x8ad320
006b9b8f  MOV dword ptr [ESI + 0x58],0x8ad314
006b9b96  MOV dword ptr [ESI + 0x60],0x8ad30c
006b9b9d  MOV dword ptr [EDI],0x8ad2fc
006b9ba3  MOV ECX,dword ptr [EAX + 0x4]
006b9ba6  PUSH 0x404040
006b9bab  MOV byte ptr [ESP + 0x18],0x1
006b9bb0  CALL 0x005d59f0
006b9bb5  MOV dword ptr [ESI + 0xc0],EAX
006b9bbb  XOR ECX,ECX
006b9bbd  LEA EDX,[ESI + 0xc4]
006b9bc3  MOV dword ptr [EDX],ECX
006b9bc5  MOV dword ptr [EDX + 0x4],ECX
006b9bc8  MOV dword ptr [EDX + 0x8],ECX
006b9bcb  MOV dword ptr [EDX + 0xc],ECX
006b9bce  MOV dword ptr [ESI + 0xd4],ECX
006b9bd4  MOV ECX,dword ptr [ESP + 0xc]
006b9bd8  POP EDI
006b9bd9  MOV EAX,ESI
006b9bdb  POP ESI
006b9bdc  MOV dword ptr FS:[0x0],ECX
006b9be3  ADD ESP,0x10
006b9be6  RET 0x8
