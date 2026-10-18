007be160  PUSH -0x1
007be162  PUSH 0x8837a9
007be167  MOV EAX,FS:[0x0]
007be16d  PUSH EAX
007be16e  MOV dword ptr FS:[0x0],ESP
007be175  PUSH ECX
007be176  PUSH ESI
007be177  PUSH EDI
007be178  MOV EDI,dword ptr [ESP + 0x1c]
007be17c  MOV ESI,ECX
007be17e  PUSH EDI
007be17f  MOV dword ptr [ESP + 0xc],ESI
007be183  CALL 0x00586290
007be188  LEA EAX,[ESI + 0x2c]
007be18b  XOR ECX,ECX
007be18d  MOV dword ptr [ESI],0x8b7f18
007be193  MOV dword ptr [ESP + 0x14],ECX
007be197  MOV dword ptr [EAX],EAX
007be199  MOV dword ptr [EAX + 0x4],EAX
007be19c  LEA EAX,[ESI + 0x34]
007be19f  MOV dword ptr [EAX],EAX
007be1a1  MOV dword ptr [EAX + 0x4],EAX
007be1a4  OR EAX,0xffffffff
007be1a7  MOV dword ptr [ESI + 0x3c],ECX
007be1aa  MOV dword ptr [ESI + 0x40],ECX
007be1ad  MOV word ptr [ESI + 0x4c],AX
007be1b1  MOV word ptr [ESI + 0x4e],AX
007be1b5  MOV byte ptr [ESI + 0x50],0x1
007be1b9  MOV EAX,dword ptr [EDI]
007be1bb  PUSH EAX
007be1bc  LEA ECX,[ESI + 0x54]
007be1bf  MOV byte ptr [ESP + 0x18],0x2
007be1c4  CALL 0x007b12b0
007be1c9  MOV ECX,dword ptr [EDI + 0x8]
007be1cc  AND ECX,0xffff
007be1d2  MOV dword ptr [ESI + 0x44],ECX
007be1d5  MOVSX EDX,word ptr [EDI + 0xa]
007be1d9  MOV ECX,ESI
007be1db  MOV byte ptr [ESP + 0x14],0x3
007be1e0  MOV dword ptr [ESI + 0x48],EDX
007be1e3  CALL 0x007b8b80
007be1e8  MOV ECX,dword ptr [ESP + 0xc]
007be1ec  POP EDI
007be1ed  MOV EAX,ESI
007be1ef  POP ESI
007be1f0  MOV dword ptr FS:[0x0],ECX
007be1f7  ADD ESP,0x10
007be1fa  RET 0x4
