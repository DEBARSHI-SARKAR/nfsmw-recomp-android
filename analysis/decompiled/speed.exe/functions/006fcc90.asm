006fcc90  PUSH -0x1
006fcc92  PUSH 0x87f6c6
006fcc97  MOV EAX,FS:[0x0]
006fcc9d  PUSH EAX
006fcc9e  MOV dword ptr FS:[0x0],ESP
006fcca5  SUB ESP,0x8
006fcca8  MOV EDX,dword ptr [ESP + 0x1c]
006fccac  PUSH EBX
006fccad  PUSH ESI
006fccae  PUSH EDI
006fccaf  MOV ESI,ECX
006fccb1  MOV ECX,dword ptr [ESP + 0x24]
006fccb5  SUB ESP,0x10
006fccb8  MOV EAX,ESP
006fccba  MOV dword ptr [EAX],ECX
006fccbc  MOV ECX,dword ptr [ESP + 0x3c]
006fccc0  MOV dword ptr [EAX + 0x4],EDX
006fccc3  MOV dword ptr [EAX + 0x8],ECX
006fccc6  MOV ECX,ESI
006fccc8  MOV dword ptr [ESP + 0x1c],ESI
006fcccc  MOV dword ptr [ESP + 0x20],ESP
006fccd0  CALL 0x006fca30
006fccd5  TEST ESI,ESI
006fccd7  MOV dword ptr [ESP + 0x1c],0x0
006fccdf  JZ 0x006fcce6
006fcce1  LEA ECX,[ESI + 0x10]
006fcce4  JMP 0x006fcce8
006fcce6  XOR ECX,ECX
006fcce8  LEA EDI,[ESI + 0x8c]
006fccee  PUSH EDI
006fccef  PUSH 0x402840
006fccf4  MOV dword ptr [EDI],0x890970
006fccfa  MOV dword ptr [EDI + 0x4],ECX
006fccfd  CALL 0x005d7930
006fcd02  MOV dword ptr [EDI],0x8b03cc
006fcd08  LEA EBX,[ESI + 0x8]
006fcd0b  PUSH 0x8911a8
006fcd10  MOV byte ptr [ESP + 0x20],0x1
006fcd15  MOV dword ptr [ESI],0x8b0c70
006fcd1b  MOV dword ptr [EBX],0x8b0c68
006fcd21  MOV dword ptr [ESI + 0x2c],0x8b0c40
006fcd28  MOV dword ptr [ESI + 0x38],0x8b0c24
006fcd2f  MOV dword ptr [ESI + 0x4c],0x8b0bd0
006fcd36  MOV dword ptr [ESI + 0x54],0x8b0bcc
006fcd3d  MOV dword ptr [EDI],0x8b0bbc
006fcd43  MOV dword ptr [ESI + 0x94],0x0
006fcd4d  CALL 0x005cc240
006fcd52  MOV ECX,dword ptr [0x009885e0]
006fcd58  ADD ESP,0x4
006fcd5b  PUSH 0x0
006fcd5d  PUSH 0x0
006fcd5f  PUSH EBX
006fcd60  PUSH 0x3f800000
006fcd65  LEA EDX,[ESP + 0x34]
006fcd69  PUSH EDX
006fcd6a  MOV dword ptr [ESP + 0x38],EAX
006fcd6e  CALL 0x006ed0f0
006fcd73  MOV dword ptr [ESI + 0x98],EAX
006fcd79  TEST EAX,EAX
006fcd7b  MOV EAX,ESI
006fcd7d  JZ 0x006fcd82
006fcd7f  INC dword ptr [ESI + 0x24]
006fcd82  MOV ECX,dword ptr [ESP + 0x14]
006fcd86  POP EDI
006fcd87  POP ESI
006fcd88  MOV dword ptr FS:[0x0],ECX
006fcd8f  POP EBX
006fcd90  ADD ESP,0x14
006fcd93  RET 0x10
