006b7ad0  PUSH -0x1
006b7ad2  PUSH 0x87db42
006b7ad7  MOV EAX,FS:[0x0]
006b7add  PUSH EAX
006b7ade  MOV dword ptr FS:[0x0],ESP
006b7ae5  PUSH ECX
006b7ae6  PUSH EBX
006b7ae7  MOV EBX,dword ptr [ESP + 0x1c]
006b7aeb  PUSH EBP
006b7aec  PUSH ESI
006b7aed  PUSH EDI
006b7aee  MOV EDI,dword ptr [ESP + 0x24]
006b7af2  PUSH EBX
006b7af3  MOV ESI,ECX
006b7af5  PUSH EDI
006b7af6  MOV dword ptr [ESP + 0x18],ESI
006b7afa  CALL 0x006b59f0
006b7aff  MOV EAX,dword ptr [EDI + 0x4]
006b7b02  XOR EBP,EBP
006b7b04  CMP EAX,EBP
006b7b06  MOV dword ptr [ESP + 0x1c],EBP
006b7b0a  JZ 0x006b7b11
006b7b0c  LEA ECX,[EAX + 0x10]
006b7b0f  JMP 0x006b7b13
006b7b11  XOR ECX,ECX
006b7b13  LEA EDI,[ESI + 0x130]
006b7b19  PUSH EDI
006b7b1a  PUSH 0x4039e0
006b7b1f  MOV dword ptr [EDI],0x890970
006b7b25  MOV dword ptr [EDI + 0x4],ECX
006b7b28  CALL 0x005d7930
006b7b2d  MOV dword ptr [EDI],0x8ab040
006b7b33  MOV EAX,dword ptr [ESI + 0x34]
006b7b36  MOV dword ptr [EDI],0x8ac990
006b7b3c  PUSH EBP
006b7b3d  LEA EDI,[ESI + 0x140]
006b7b43  PUSH EAX
006b7b44  MOV ECX,EDI
006b7b46  MOV byte ptr [ESP + 0x24],0x1
006b7b4b  MOV dword ptr [ESI],0x8ac938
006b7b51  MOV dword ptr [ESI + 0x8],0x8ac92c
006b7b58  MOV dword ptr [ESI + 0x48],0x8ac880
006b7b5f  MOV dword ptr [ESI + 0x50],0x8ac7d8
006b7b66  MOV dword ptr [ESI + 0x58],0x8ac7d4
006b7b6d  MOV dword ptr [ESI + 0x60],0x8ac79c
006b7b74  MOV dword ptr [ESI + 0x64],0x8ac798
006b7b7b  MOV dword ptr [ESI + 0x68],0x8ac788
006b7b82  MOV dword ptr [ESI + 0x138],EBP
006b7b88  MOV dword ptr [ESI + 0x13c],EBP
006b7b8e  CALL 0x00674c40
006b7b93  PUSH EAX
006b7b94  MOV ECX,EDI
006b7b96  CALL 0x00674d20
006b7b9b  MOV dword ptr [ESI + 0x154],EBP
006b7ba1  MOV dword ptr [ESI + 0x15c],EBP
006b7ba7  MOV ECX,dword ptr [0x008a2fb4]
006b7bad  LEA EAX,[ESI + 0x160]
006b7bb3  MOV dword ptr [EAX],ECX
006b7bb5  MOV EDX,dword ptr [0x008a2fb8]
006b7bbb  MOV dword ptr [EAX + 0x4],EDX
006b7bbe  MOV ECX,dword ptr [0x008a2fbc]
006b7bc4  PUSH EBP
006b7bc5  PUSH EBP
006b7bc6  MOV dword ptr [EAX + 0x8],ECX
006b7bc9  PUSH EBP
006b7bca  LEA ECX,[ESI + 0x180]
006b7bd0  MOV byte ptr [ESP + 0x28],0x2
006b7bd5  MOV dword ptr [ESI + 0x16c],EBP
006b7bdb  MOV byte ptr [ESI + 0x170],0x1
006b7be2  MOV dword ptr [ESI + 0x174],EBP
006b7be8  MOV dword ptr [ESI + 0x178],EBP
006b7bee  MOV dword ptr [ESI + 0x17c],EBP
006b7bf4  CALL 0x00407d50
006b7bf9  MOV EAX,dword ptr [ESI + 0x34]
006b7bfc  MOV ECX,dword ptr [EAX + 0x4]
006b7bff  PUSH 0x4040e0
006b7c04  MOV byte ptr [ESP + 0x20],0x3
006b7c09  CALL 0x005d59f0
006b7c0e  MOV dword ptr [ESI + 0x138],EAX
006b7c14  MOV EAX,dword ptr [ESI + 0x34]
006b7c17  MOV ECX,dword ptr [EAX + 0x4]
006b7c1a  PUSH 0x404040
006b7c1f  CALL 0x005d59f0
006b7c24  MOV dword ptr [ESI + 0x13c],EAX
006b7c2a  MOV EAX,dword ptr [EBX + 0x30]
006b7c2d  CMP EAX,EBP
006b7c2f  JZ 0x006b7c3c
006b7c31  MOV EAX,dword ptr [EAX + 0x2c]
006b7c34  MOV dword ptr [ESI + 0x158],EAX
006b7c3a  JMP 0x006b7c42
006b7c3c  MOV dword ptr [ESI + 0x158],EBP
006b7c42  MOV ECX,dword ptr [ESP + 0x14]
006b7c46  POP EDI
006b7c47  MOV EAX,ESI
006b7c49  POP ESI
006b7c4a  POP EBP
006b7c4b  POP EBX
006b7c4c  MOV dword ptr FS:[0x0],ECX
006b7c53  ADD ESP,0x10
006b7c56  RET 0x8
