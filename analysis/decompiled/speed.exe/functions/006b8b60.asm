006b8b60  PUSH -0x1
006b8b62  PUSH 0x87dd28
006b8b67  MOV EAX,FS:[0x0]
006b8b6d  PUSH EAX
006b8b6e  MOV dword ptr FS:[0x0],ESP
006b8b75  PUSH ECX
006b8b76  PUSH ESI
006b8b77  MOV ESI,ECX
006b8b79  MOV dword ptr [ESP + 0x4],ESI
006b8b7d  MOV dword ptr [ESI],0x8ad438
006b8b83  MOV dword ptr [ESI + 0x8],0x8ad430
006b8b8a  MOV dword ptr [ESI + 0x4c],0x8ad40c
006b8b91  MOV dword ptr [ESI + 0x54],0x8ad408
006b8b98  MOV dword ptr [ESI + 0x58],0x8ad3fc
006b8b9f  MOV dword ptr [ESI + 0x60],0x8ad3f4
006b8ba6  MOV EAX,dword ptr [ESI + 0xbc]
006b8bac  PUSH EAX
006b8bad  MOV dword ptr [ESP + 0x14],0x0
006b8bb5  CALL 0x006e9c90
006b8bba  MOV ECX,ESI
006b8bbc  MOV dword ptr [ESP + 0x10],0xffffffff
006b8bc4  CALL 0x006b87d0
006b8bc9  MOV ECX,dword ptr [ESP + 0x8]
006b8bcd  POP ESI
006b8bce  MOV dword ptr FS:[0x0],ECX
006b8bd5  ADD ESP,0x10
006b8bd8  RET
