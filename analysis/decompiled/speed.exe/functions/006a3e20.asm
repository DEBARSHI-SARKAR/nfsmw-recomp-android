006a3e20  PUSH -0x1
006a3e22  PUSH 0x87c934
006a3e27  MOV EAX,FS:[0x0]
006a3e2d  PUSH EAX
006a3e2e  MOV dword ptr FS:[0x0],ESP
006a3e35  SUB ESP,0xc
006a3e38  PUSH EBX
006a3e39  PUSH ESI
006a3e3a  MOV ESI,ECX
006a3e3c  PUSH EDI
006a3e3d  LEA EDI,[ESI + 0x4c]
006a3e40  LEA EBX,[ESI + 0x54]
006a3e43  MOV dword ptr [ESP + 0x14],ESI
006a3e47  MOV dword ptr [ESI],0x8ab9d4
006a3e4d  MOV dword ptr [ESI + 0x8],0x8ab9cc
006a3e54  MOV dword ptr [EDI],0x8ab9c4
006a3e5a  MOV dword ptr [EBX],0x8ab9bc
006a3e60  MOV EAX,dword ptr [ESI + 0x5c]
006a3e63  TEST EAX,EAX
006a3e65  MOV dword ptr [ESP + 0x20],0x3
006a3e6d  JZ 0x006a3e75
006a3e6f  PUSH EAX
006a3e70  CALL 0x006eea10
006a3e75  LEA ECX,[ESI + 0x84]
006a3e7b  MOV byte ptr [ESP + 0x20],0x2
006a3e80  CALL 0x0045a430
006a3e85  MOV dword ptr [EBX],0x890970
006a3e8b  MOV ECX,dword ptr [EBX + 0x4]
006a3e8e  PUSH EBX
006a3e8f  MOV byte ptr [ESP + 0x24],0x1
006a3e94  CALL 0x005d5a50
006a3e99  MOV dword ptr [EDI],0x890970
006a3e9f  MOV ECX,dword ptr [EDI + 0x4]
006a3ea2  PUSH EDI
006a3ea3  MOV byte ptr [ESP + 0x24],0x0
006a3ea8  CALL 0x005d5a50
006a3ead  MOV ECX,ESI
006a3eaf  MOV dword ptr [ESP + 0x20],0xffffffff
006a3eb7  MOV dword ptr [ESI],0x890f28
006a3ebd  MOV dword ptr [ESI + 0x8],0x890f20
006a3ec4  CALL 0x006ee930
006a3ec9  MOV ECX,dword ptr [ESP + 0x18]
006a3ecd  POP EDI
006a3ece  POP ESI
006a3ecf  POP EBX
006a3ed0  MOV dword ptr FS:[0x0],ECX
006a3ed7  ADD ESP,0x18
006a3eda  RET
