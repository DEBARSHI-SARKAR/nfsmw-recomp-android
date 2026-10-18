006ee930  PUSH -0x1
006ee932  PUSH 0x87e9cf
006ee937  MOV EAX,FS:[0x0]
006ee93d  PUSH EAX
006ee93e  MOV dword ptr FS:[0x0],ESP
006ee945  SUB ESP,0x8
006ee948  PUSH ESI
006ee949  MOV ESI,ECX
006ee94b  LEA EAX,[ESI + 0x8]
006ee94e  MOV dword ptr [ESP + 0x8],ESI
006ee952  MOV dword ptr [ESI],0x8b0590
006ee958  MOV dword ptr [EAX],0x8b0598
006ee95e  DEC dword ptr [0x00988ec8]
006ee964  MOV ECX,dword ptr [EAX + 0x4]
006ee967  PUSH EAX
006ee968  MOV dword ptr [ESP + 0x18],0x1
006ee970  MOV dword ptr [EAX],0x890970
006ee976  CALL 0x005d5a50
006ee97b  MOV ECX,dword ptr [ESI + 0x4]
006ee97e  PUSH ESI
006ee97f  MOV byte ptr [ESP + 0x18],0x0
006ee984  MOV dword ptr [ESI],0x890970
006ee98a  CALL 0x005d5a50
006ee98f  LEA ECX,[ESI + 0x10]
006ee992  MOV dword ptr [ESP + 0x14],0xffffffff
006ee99a  CALL 0x005d59e0
006ee99f  MOV ECX,dword ptr [ESP + 0xc]
006ee9a3  POP ESI
006ee9a4  MOV dword ptr FS:[0x0],ECX
006ee9ab  ADD ESP,0x14
006ee9ae  RET
