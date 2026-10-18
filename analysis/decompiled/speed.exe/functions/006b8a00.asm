006b8a00  PUSH -0x1
006b8a02  PUSH 0x87dd08
006b8a07  MOV EAX,FS:[0x0]
006b8a0d  PUSH EAX
006b8a0e  MOV dword ptr FS:[0x0],ESP
006b8a15  PUSH ECX
006b8a16  PUSH ESI
006b8a17  MOV ESI,ECX
006b8a19  PUSH EDI
006b8a1a  LEA EDI,[ESI + 0xb8]
006b8a20  MOV dword ptr [ESP + 0x8],ESI
006b8a24  MOV dword ptr [ESI],0x8ad350
006b8a2a  MOV dword ptr [ESI + 0x8],0x8ad348
006b8a31  MOV dword ptr [ESI + 0x4c],0x8ad324
006b8a38  MOV dword ptr [ESI + 0x54],0x8ad320
006b8a3f  MOV dword ptr [ESI + 0x58],0x8ad314
006b8a46  MOV dword ptr [ESI + 0x60],0x8ad30c
006b8a4d  MOV dword ptr [EDI],0x8ad2fc
006b8a53  LEA ECX,[EDI + 0x8]
006b8a56  MOV dword ptr [ESP + 0x14],0x0
006b8a5e  MOV dword ptr [EDI],0x8ac648
006b8a64  CALL 0x006b1650
006b8a69  MOV ECX,dword ptr [EDI + 0x4]
006b8a6c  PUSH EDI
006b8a6d  MOV dword ptr [EDI],0x890970
006b8a73  CALL 0x005d5a50
006b8a78  MOV ECX,ESI
006b8a7a  MOV dword ptr [ESP + 0x14],0xffffffff
006b8a82  CALL 0x006b87d0
006b8a87  MOV ECX,dword ptr [ESP + 0xc]
006b8a8b  POP EDI
006b8a8c  POP ESI
006b8a8d  MOV dword ptr FS:[0x0],ECX
006b8a94  ADD ESP,0x10
006b8a97  RET
