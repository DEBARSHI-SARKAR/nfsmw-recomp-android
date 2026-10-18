004cfd10  PUSH -0x1
004cfd12  PUSH 0x86c798
004cfd17  MOV EAX,FS:[0x0]
004cfd1d  PUSH EAX
004cfd1e  MOV dword ptr FS:[0x0],ESP
004cfd25  SUB ESP,0x14
004cfd28  MOV EAX,dword ptr [ESP + 0x24]
004cfd2c  PUSH ESI
004cfd2d  PUSH EDI
004cfd2e  XOR EDI,EDI
004cfd30  PUSH EDI
004cfd31  PUSH EDI
004cfd32  MOV ESI,ECX
004cfd34  PUSH EAX
004cfd35  PUSH 0x3473edcd
004cfd3a  MOV dword ptr [ESI + 0x8],EDI
004cfd3d  MOV dword ptr [ESI + 0xc],EDI
004cfd40  MOV dword ptr [ESI],EAX
004cfd42  CALL 0x00455fd0
004cfd47  ADD ESP,0x8
004cfd4a  PUSH EAX
004cfd4b  LEA ECX,[ESP + 0x14]
004cfd4f  CALL 0x00452380
004cfd54  PUSH EDI
004cfd55  PUSH 0x1553cd23
004cfd5a  LEA ECX,[ESP + 0x10]
004cfd5e  MOV dword ptr [ESP + 0x2c],EDI
004cfd62  CALL 0x00454810
004cfd67  CMP EAX,EDI
004cfd69  JNZ 0x004cfd75
004cfd6b  PUSH 0x4
004cfd6d  CALL 0x006269b0
004cfd72  ADD ESP,0x4
004cfd75  MOV ECX,dword ptr [0x00911fa8]
004cfd7b  MOV ECX,dword ptr [ECX + 0x88]
004cfd81  MOV EAX,dword ptr [EAX]
004cfd83  PUSH EAX
004cfd84  ADD ECX,0x4
004cfd87  CALL 0x0045d380
004cfd8c  MOV EAX,dword ptr [EAX + 0x8]
004cfd8f  PUSH EDI
004cfd90  PUSH 0xad8c27f5
004cfd95  LEA ECX,[ESP + 0x10]
004cfd99  MOV dword ptr [ESI + 0x4],EAX
004cfd9c  CALL 0x00454810
004cfda1  CMP EAX,EDI
004cfda3  JNZ 0x004cfdaf
004cfda5  PUSH 0x4
004cfda7  CALL 0x006269b0
004cfdac  ADD ESP,0x4
004cfdaf  MOV AX,word ptr [EAX]
004cfdb2  PUSH EDI
004cfdb3  MOV word ptr [ESI + 0x10],AX
004cfdb7  MOV word ptr [ESI + 0x12],AX
004cfdbb  MOV ECX,dword ptr [0x009120c8]
004cfdc1  PUSH 0x1
004cfdc3  CALL 0x00465fd0
004cfdc8  CMP EAX,EDI
004cfdca  JZ 0x004cfdd9
004cfdcc  MOV EDX,dword ptr [ESI + 0x4]
004cfdcf  PUSH EDX
004cfdd0  MOV ECX,EAX
004cfdd2  CALL 0x004b0c50
004cfdd7  JMP 0x004cfddb
004cfdd9  XOR EAX,EAX
004cfddb  LEA ECX,[EAX + 0x4]
004cfdde  MOV dword ptr [ESI + 0x8],EAX
004cfde1  PUSH ECX
004cfde2  MOV ECX,EAX
004cfde4  MOV dword ptr [EAX + 0x10],EDI
004cfde7  MOV dword ptr [EAX + 0x8],EDI
004cfdea  MOV dword ptr [EAX + 0xc],EDI
004cfded  CALL 0x004cf520
004cfdf2  LEA ECX,[ESP + 0x8]
004cfdf6  MOV dword ptr [ESP + 0x24],0xffffffff
004cfdfe  CALL 0x0045a430
004cfe03  MOV ECX,dword ptr [ESP + 0x1c]
004cfe07  POP EDI
004cfe08  MOV EAX,ESI
004cfe0a  POP ESI
004cfe0b  MOV dword ptr FS:[0x0],ECX
004cfe12  ADD ESP,0x20
004cfe15  RET 0x4
