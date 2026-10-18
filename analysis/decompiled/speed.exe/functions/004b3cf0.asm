004b3cf0  PUSH EBX
004b3cf1  PUSH ESI
004b3cf2  MOV ESI,ECX
004b3cf4  XOR EBX,EBX
004b3cf6  PUSH EBX
004b3cf7  LEA ECX,[ESI + 0x50]
004b3cfa  MOV dword ptr [ESI + 0x12c],0x96
004b3d04  MOV byte ptr [ESI + 0x130],BL
004b3d0a  CALL 0x00653bb0
004b3d0f  PUSH EBX
004b3d10  LEA ECX,[ESI + 0xa0]
004b3d16  CALL 0x00653bb0
004b3d1b  PUSH EBX
004b3d1c  LEA ECX,[ESI + 0x78]
004b3d1f  CALL 0x00653bb0
004b3d24  MOV ECX,dword ptr [ESI + 0x34]
004b3d27  LEA EDX,[ESI + 0x40]
004b3d2a  MOV dword ptr [ESI + 0x11c],EBX
004b3d30  MOV byte ptr [ESI + 0x138],BL
004b3d36  MOV dword ptr [ESI + 0x13c],EBX
004b3d3c  MOV dword ptr [ESI + 0x140],EBX
004b3d42  MOV dword ptr [ESI + 0x144],EBX
004b3d48  MOV word ptr [ESI + 0x148],BX
004b3d4f  MOV word ptr [ESI + 0x14a],BX
004b3d56  MOV word ptr [ESI + 0x14c],BX
004b3d5d  MOV dword ptr [ESI + 0x134],0x5dc0
004b3d67  MOV EAX,dword ptr [ECX]
004b3d69  PUSH EDX
004b3d6a  CALL dword ptr [EAX + 0x38]
004b3d6d  MOV EDX,dword ptr [ESI + 0x14]
004b3d70  MOV EDX,dword ptr [EDX + 0x34]
004b3d73  MOV ECX,dword ptr [ESI + 0x34]
004b3d76  MOV EAX,dword ptr [ECX]
004b3d78  ADD EDX,0x50
004b3d7b  PUSH EDX
004b3d7c  CALL dword ptr [EAX + 0x40]
004b3d7f  MOV EDX,dword ptr [ESI + 0x14]
004b3d82  MOV EDX,dword ptr [EDX + 0x34]
004b3d85  MOV ECX,dword ptr [ESI + 0x34]
004b3d88  MOV EAX,dword ptr [ECX]
004b3d8a  ADD EDX,0x10
004b3d8d  PUSH EDX
004b3d8e  CALL dword ptr [EAX + 0x3c]
004b3d91  MOV ECX,dword ptr [ESI + 0x18]
004b3d94  MOV EAX,dword ptr [ECX]
004b3d96  CALL dword ptr [EAX + 0x40]
004b3d99  DEC EAX
004b3d9a  JZ 0x004b3dbf
004b3d9c  DEC EAX
004b3d9d  JZ 0x004b3db4
004b3d9f  DEC EAX
004b3da0  JZ 0x004b3da9
004b3da2  MOV ECX,dword ptr [ESI + 0xc]
004b3da5  MOV dword ptr [ECX],EBX
004b3da7  JMP 0x004b3dc8
004b3da9  MOV EDX,dword ptr [ESI + 0xc]
004b3dac  MOV dword ptr [EDX],0x7fff
004b3db2  JMP 0x004b3dc8
004b3db4  MOV EAX,dword ptr [ESI + 0xc]
004b3db7  MOV dword ptr [EAX],0x5554
004b3dbd  JMP 0x004b3dc8
004b3dbf  MOV ECX,dword ptr [ESI + 0xc]
004b3dc2  MOV dword ptr [ECX],0x2aaa
004b3dc8  MOV dword ptr [ESI + 0xc8],EBX
004b3dce  MOV EAX,[0x0091e000]
004b3dd3  CMP EAX,EBX
004b3dd5  JZ 0x004b3ddf
004b3dd7  MOV EAX,dword ptr [EAX + 0x1968]
004b3ddd  JMP 0x004b3dea
004b3ddf  MOV ECX,dword ptr [0x0091e004]
004b3de5  CALL 0x005dca00
004b3dea  CMP EAX,EBX
004b3dec  JNZ 0x004b3df7
004b3dee  MOV byte ptr [ESI + 0xcc],BL
004b3df4  POP ESI
004b3df5  POP EBX
004b3df6  RET
004b3df7  MOV ECX,EAX
004b3df9  CALL 0x005fc500
004b3dfe  NEG AL
004b3e00  SBB AL,AL
004b3e02  INC AL
004b3e04  MOV byte ptr [ESI + 0xcc],AL
004b3e0a  POP ESI
004b3e0b  POP EBX
004b3e0c  RET
