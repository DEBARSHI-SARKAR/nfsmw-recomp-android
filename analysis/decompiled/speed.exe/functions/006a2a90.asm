006a2a90  PUSH -0x1
006a2a92  PUSH 0x87c8a2
006a2a97  MOV EAX,FS:[0x0]
006a2a9d  PUSH EAX
006a2a9e  MOV dword ptr FS:[0x0],ESP
006a2aa5  SUB ESP,0xc
006a2aa8  PUSH EBX
006a2aa9  PUSH ESI
006a2aaa  MOV ESI,ECX
006a2aac  PUSH EDI
006a2aad  LEA EDI,[ESI + 0x4c]
006a2ab0  LEA EBX,[ESI + 0x54]
006a2ab3  MOV dword ptr [ESP + 0x14],ESI
006a2ab7  MOV dword ptr [ESI],0x8ab970
006a2abd  MOV dword ptr [ESI + 0x8],0x8ab968
006a2ac4  MOV dword ptr [EDI],0x8ab938
006a2aca  MOV dword ptr [EBX],0x8ab8f8
006a2ad0  MOV dword ptr [ESI + 0x5c],0x8ab8f0
006a2ad7  LEA ECX,[ESI + 0xfc]
006a2add  MOV dword ptr [ESP + 0x20],0x4
006a2ae5  CALL 0x0045a430
006a2aea  LEA ECX,[ESI + 0xe8]
006a2af0  MOV byte ptr [ESP + 0x20],0x3
006a2af5  CALL 0x0045a430
006a2afa  LEA ECX,[ESI + 0xd4]
006a2b00  MOV byte ptr [ESP + 0x20],0x2
006a2b05  CALL 0x0045a430
006a2b0a  MOV dword ptr [EBX],0x890970
006a2b10  MOV ECX,dword ptr [EBX + 0x4]
006a2b13  PUSH EBX
006a2b14  MOV byte ptr [ESP + 0x24],0x1
006a2b19  CALL 0x005d5a50
006a2b1e  MOV dword ptr [EDI],0x890970
006a2b24  MOV ECX,dword ptr [EDI + 0x4]
006a2b27  PUSH EDI
006a2b28  MOV byte ptr [ESP + 0x24],0x0
006a2b2d  CALL 0x005d5a50
006a2b32  MOV ECX,ESI
006a2b34  MOV dword ptr [ESP + 0x20],0xffffffff
006a2b3c  MOV dword ptr [ESI],0x890f28
006a2b42  MOV dword ptr [ESI + 0x8],0x890f20
006a2b49  CALL 0x006ee930
006a2b4e  MOV ECX,dword ptr [ESP + 0x18]
006a2b52  POP EDI
006a2b53  POP ESI
006a2b54  POP EBX
006a2b55  MOV dword ptr FS:[0x0],ECX
006a2b5c  ADD ESP,0x18
006a2b5f  RET
