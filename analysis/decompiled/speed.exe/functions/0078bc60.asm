0078bc60  MOV EAX,dword ptr [ESP + 0x4]
0078bc64  PUSH ESI
0078bc65  MOV ESI,ECX
0078bc67  MOV dword ptr [ESI],EAX
0078bc69  MOV EAX,0x2
0078bc6e  MOV dword ptr [ESI + 0x8],EAX
0078bc71  MOV dword ptr [ESI + 0xc],EAX
0078bc74  MOV dword ptr [ESI + 0x10],EAX
0078bc77  MOV dword ptr [ESI + 0x14],EAX
0078bc7a  XOR ECX,ECX
0078bc7c  MOV dword ptr [ESI + 0x4],0xb
0078bc83  MOV dword ptr [ESI + 0x2c],0x6
0078bc8a  MOV byte ptr [ESI + 0x30],0x0
0078bc8e  LEA EAX,[ESI + 0x18]
0078bc91  MOV EDX,EAX
0078bc93  MOV dword ptr [EDX],ECX
0078bc95  MOV dword ptr [EDX + 0x4],ECX
0078bc98  MOV dword ptr [EDX + 0x8],ECX
0078bc9b  MOV dword ptr [EDX + 0xc],ECX
0078bc9e  MOV byte ptr [EDX + 0x10],CL
0078bca1  MOV ECX,dword ptr [ESP + 0xc]
0078bca5  PUSH 0x10
0078bca7  PUSH ECX
0078bca8  PUSH EAX
0078bca9  CALL 0x00460ca0
0078bcae  ADD ESP,0xc
0078bcb1  MOV EAX,ESI
0078bcb3  POP ESI
0078bcb4  RET 0x8
