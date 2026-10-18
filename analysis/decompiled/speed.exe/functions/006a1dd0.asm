006a1dd0  PUSH -0x1
006a1dd2  PUSH 0x87c7fd
006a1dd7  MOV EAX,FS:[0x0]
006a1ddd  PUSH EAX
006a1dde  MOV dword ptr FS:[0x0],ESP
006a1de5  SUB ESP,0x8
006a1de8  PUSH ESI
006a1de9  MOV ESI,ECX
006a1deb  PUSH EDI
006a1dec  LEA EDI,[ESI + 0x4c]
006a1def  MOV dword ptr [ESP + 0xc],ESI
006a1df3  MOV dword ptr [ESI],0x8ab890
006a1df9  MOV dword ptr [ESI + 0x8],0x8ab884
006a1e00  MOV dword ptr [EDI],0x8ab86c
006a1e06  LEA ECX,[ESI + 0xb0]
006a1e0c  MOV dword ptr [ESP + 0x18],0x2
006a1e14  CALL 0x0045a430
006a1e19  LEA ECX,[ESI + 0x9c]
006a1e1f  MOV byte ptr [ESP + 0x18],0x1
006a1e24  CALL 0x0045a430
006a1e29  MOV dword ptr [EDI],0x890970
006a1e2f  MOV ECX,dword ptr [EDI + 0x4]
006a1e32  PUSH EDI
006a1e33  MOV byte ptr [ESP + 0x1c],0x0
006a1e38  CALL 0x005d5a50
006a1e3d  MOV ECX,ESI
006a1e3f  MOV dword ptr [ESP + 0x18],0xffffffff
006a1e47  MOV dword ptr [ESI],0x890f28
006a1e4d  MOV dword ptr [ESI + 0x8],0x890f20
006a1e54  CALL 0x006ee930
006a1e59  MOV ECX,dword ptr [ESP + 0x10]
006a1e5d  POP EDI
006a1e5e  POP ESI
006a1e5f  MOV dword ptr FS:[0x0],ECX
006a1e66  ADD ESP,0x14
006a1e69  RET
