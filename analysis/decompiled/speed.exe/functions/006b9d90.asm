006b9d90  PUSH -0x1
006b9d92  PUSH 0x87df48
006b9d97  MOV EAX,FS:[0x0]
006b9d9d  PUSH EAX
006b9d9e  MOV dword ptr FS:[0x0],ESP
006b9da5  PUSH ECX
006b9da6  MOV EAX,dword ptr [ESP + 0x18]
006b9daa  PUSH ESI
006b9dab  MOV ESI,ECX
006b9dad  MOV ECX,dword ptr [ESP + 0x18]
006b9db1  PUSH EAX
006b9db2  PUSH ECX
006b9db3  MOV ECX,ESI
006b9db5  MOV dword ptr [ESP + 0xc],ESI
006b9db9  CALL 0x006b9920
006b9dbe  PUSH 0x8918c0
006b9dc3  MOV dword ptr [ESP + 0x14],0x0
006b9dcb  MOV dword ptr [ESI],0x8ad438
006b9dd1  MOV dword ptr [ESI + 0x8],0x8ad430
006b9dd8  MOV dword ptr [ESI + 0x4c],0x8ad40c
006b9ddf  MOV dword ptr [ESI + 0x54],0x8ad408
006b9de6  MOV dword ptr [ESI + 0x58],0x8ad3fc
006b9ded  MOV dword ptr [ESI + 0x60],0x8ad3f4
006b9df4  MOV dword ptr [ESI + 0xb8],0x0
006b9dfe  CALL 0x005cc240
006b9e03  ADD ESP,0x4
006b9e06  PUSH 0x1
006b9e08  PUSH 0x0
006b9e0a  PUSH 0x3dcccccd
006b9e0f  LEA EDX,[ESP + 0x28]
006b9e13  PUSH EDX
006b9e14  MOV ECX,ESI
006b9e16  MOV dword ptr [ESP + 0x2c],EAX
006b9e1a  CALL 0x006ee9b0
006b9e1f  MOV ECX,dword ptr [ESP + 0x8]
006b9e23  MOV dword ptr [ESI + 0xbc],EAX
006b9e29  MOV EAX,ESI
006b9e2b  POP ESI
006b9e2c  MOV dword ptr FS:[0x0],ECX
006b9e33  ADD ESP,0x10
006b9e36  RET 0x8
