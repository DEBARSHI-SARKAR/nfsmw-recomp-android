005a0e60  PUSH -0x1
005a0e62  PUSH 0x8734d8
005a0e67  MOV EAX,FS:[0x0]
005a0e6d  PUSH EAX
005a0e6e  MOV dword ptr FS:[0x0],ESP
005a0e75  PUSH ECX
005a0e76  PUSH ESI
005a0e77  MOV ESI,ECX
005a0e79  LEA EAX,[ESI + 0x30]
005a0e7c  MOV dword ptr [ESP + 0x4],ESI
005a0e80  MOV dword ptr [ESI],0x8a25c8
005a0e86  MOV dword ptr [EAX],0x8a25b8
005a0e8c  MOV ECX,dword ptr [EAX + 0x4]
005a0e8f  PUSH EAX
005a0e90  MOV dword ptr [ESP + 0x14],0x0
005a0e98  MOV dword ptr [EAX],0x890970
005a0e9e  CALL 0x005d5a50
005a0ea3  MOV dword ptr [ESI],0x8a1e80
005a0ea9  MOV EAX,dword ptr [ESI + 0x8]
005a0eac  ADD ESI,0x8
005a0eaf  CMP EAX,ESI
005a0eb1  MOV dword ptr [ESP + 0x10],0xffffffff
005a0eb9  JZ 0x005a0ed9
005a0ebb  JMP 0x005a0ec0
005a0ec0  MOV ECX,dword ptr [EAX]
005a0ec2  MOV EDX,dword ptr [EAX + 0x4]
005a0ec5  MOV dword ptr [EDX],ECX
005a0ec7  PUSH EAX
005a0ec8  MOV dword ptr [ECX + 0x4],EDX
005a0ecb  CALL 0x00466440
005a0ed0  MOV EAX,dword ptr [ESI]
005a0ed2  ADD ESP,0x4
005a0ed5  CMP EAX,ESI
005a0ed7  JNZ 0x005a0ec0
005a0ed9  MOV ECX,dword ptr [ESP + 0x8]
005a0edd  POP ESI
005a0ede  MOV dword ptr FS:[0x0],ECX
005a0ee5  ADD ESP,0x10
005a0ee8  RET
