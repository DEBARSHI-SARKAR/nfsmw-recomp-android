006b3b30  PUSH -0x1
006b3b32  PUSH 0x87d3f4
006b3b37  MOV EAX,FS:[0x0]
006b3b3d  PUSH EAX
006b3b3e  MOV dword ptr FS:[0x0],ESP
006b3b45  PUSH ECX
006b3b46  PUSH EBX
006b3b47  PUSH EBP
006b3b48  PUSH ESI
006b3b49  PUSH EDI
006b3b4a  MOV EDI,dword ptr [ESP + 0x24]
006b3b4e  MOV ESI,ECX
006b3b50  PUSH EDI
006b3b51  MOV dword ptr [ESP + 0x14],ESI
006b3b55  CALL 0x006b37b0
006b3b5a  MOV EAX,dword ptr [EDI + 0x4]
006b3b5d  XOR EBP,EBP
006b3b5f  CMP EAX,EBP
006b3b61  MOV dword ptr [ESP + 0x1c],EBP
006b3b65  JZ 0x006b3b6c
006b3b67  LEA ECX,[EAX + 0x10]
006b3b6a  JMP 0x006b3b6e
006b3b6c  XOR ECX,ECX
006b3b6e  LEA EBX,[ESI + 0x1ac]
006b3b74  PUSH EBX
006b3b75  PUSH 0x68a9e0
006b3b7a  MOV dword ptr [EBX],0x890970
006b3b80  MOV dword ptr [EBX + 0x4],ECX
006b3b83  CALL 0x005d7930
006b3b88  MOV dword ptr [EBX],0x8aaf70
006b3b8e  MOV EAX,dword ptr [EDI + 0x4]
006b3b91  CMP EAX,EBP
006b3b93  MOV byte ptr [ESP + 0x1c],0x1
006b3b98  JZ 0x006b3b9f
006b3b9a  LEA ECX,[EAX + 0x10]
006b3b9d  JMP 0x006b3ba1
006b3b9f  XOR ECX,ECX
006b3ba1  LEA EDI,[ESI + 0x1b4]
006b3ba7  PUSH EDI
006b3ba8  PUSH 0x68a830
006b3bad  MOV dword ptr [EDI],0x890970
006b3bb3  MOV dword ptr [EDI + 0x4],ECX
006b3bb6  CALL 0x005d7930
006b3bbb  MOV dword ptr [EDI],0x8aaf0c
006b3bc1  MOV EAX,dword ptr [ESI + 0x34]
006b3bc4  MOV dword ptr [ESI],0x8ac000
006b3bca  MOV dword ptr [ESI + 0x8],0x8abff8
006b3bd1  MOV dword ptr [ESI + 0x4c],0x8abfc8
006b3bd8  MOV dword ptr [ESI + 0x54],0x8abf88
006b3bdf  MOV dword ptr [ESI + 0x5c],0x8abf84
006b3be6  MOV dword ptr [ESI + 0x60],0x8abf70
006b3bed  MOV dword ptr [ESI + 0x68],0x8abf68
006b3bf4  MOV dword ptr [ESI + 0x70],0x8abf60
006b3bfb  MOV dword ptr [ESI + 0x78],0x8abf48
006b3c02  MOV dword ptr [EBX],0x8abf3c
006b3c08  MOV dword ptr [EDI],0x8abf34
006b3c0e  MOV dword ptr [ESI + 0x1bc],EBP
006b3c14  MOV dword ptr [ESI + 0x1c0],EBP
006b3c1a  MOV dword ptr [ESI + 0x1c4],EBP
006b3c20  MOV dword ptr [ESI + 0x1c8],EBP
006b3c26  MOV dword ptr [ESI + 0x1cc],EBP
006b3c2c  MOV dword ptr [ESI + 0x1d0],EBP
006b3c32  MOV ECX,dword ptr [EAX + 0x4]
006b3c35  PUSH 0x404040
006b3c3a  MOV byte ptr [ESP + 0x20],0x2
006b3c3f  CALL 0x005d59f0
006b3c44  MOV ECX,dword ptr [ESP + 0x14]
006b3c48  MOV dword ptr [ESI + 0x1d0],EAX
006b3c4e  POP EDI
006b3c4f  MOV EAX,ESI
006b3c51  POP ESI
006b3c52  POP EBP
006b3c53  POP EBX
006b3c54  MOV dword ptr FS:[0x0],ECX
006b3c5b  ADD ESP,0x10
006b3c5e  RET 0x4
