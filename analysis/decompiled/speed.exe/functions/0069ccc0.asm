0069ccc0  PUSH -0x1
0069ccc2  PUSH 0x87c498
0069ccc7  MOV EAX,FS:[0x0]
0069cccd  PUSH EAX
0069ccce  MOV dword ptr FS:[0x0],ESP
0069ccd5  PUSH ECX
0069ccd6  PUSH ESI
0069ccd7  MOV ESI,ECX
0069ccd9  LEA EAX,[ESI + 0x48]
0069ccdc  MOV dword ptr [ESP + 0x4],ESI
0069cce0  MOV dword ptr [ESI],0x8ab598
0069cce6  MOV dword ptr [ESI + 0x8],0x8ab590
0069cced  MOV dword ptr [EAX],0x8ab5c8
0069ccf3  MOV ECX,dword ptr [EAX + 0x4]
0069ccf6  PUSH EAX
0069ccf7  MOV dword ptr [ESP + 0x14],0x0
0069ccff  MOV dword ptr [EAX],0x890970
0069cd05  CALL 0x005d5a50
0069cd0a  MOV ECX,ESI
0069cd0c  MOV dword ptr [ESP + 0x10],0xffffffff
0069cd14  MOV dword ptr [ESI],0x890f28
0069cd1a  MOV dword ptr [ESI + 0x8],0x890f20
0069cd21  CALL 0x006ee930
0069cd26  MOV ECX,dword ptr [ESP + 0x8]
0069cd2a  POP ESI
0069cd2b  MOV dword ptr FS:[0x0],ECX
0069cd32  ADD ESP,0x10
0069cd35  RET
