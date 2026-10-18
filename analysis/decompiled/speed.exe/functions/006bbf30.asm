006bbf30  PUSH -0x1
006bbf32  PUSH 0x87e1a8
006bbf37  MOV EAX,FS:[0x0]
006bbf3d  PUSH EAX
006bbf3e  MOV dword ptr FS:[0x0],ESP
006bbf45  PUSH ECX
006bbf46  MOV EAX,dword ptr [ESP + 0x18]
006bbf4a  PUSH ESI
006bbf4b  MOV ESI,ECX
006bbf4d  MOV ECX,dword ptr [ESP + 0x18]
006bbf51  PUSH EAX
006bbf52  PUSH ECX
006bbf53  MOV ECX,ESI
006bbf55  MOV dword ptr [ESP + 0xc],ESI
006bbf59  CALL 0x006bbc70
006bbf5e  MOV EAX,dword ptr [ESI + 0x34]
006bbf61  MOV dword ptr [ESI],0x8ada1c
006bbf67  MOV dword ptr [ESI + 0x8],0x8ada14
006bbf6e  MOV dword ptr [ESI + 0x4c],0x8ad9f8
006bbf75  MOV dword ptr [ESI + 0x54],0x8ad978
006bbf7c  MOV dword ptr [ESI + 0x60],0x8ad95c
006bbf83  MOV ECX,dword ptr [EAX + 0x4]
006bbf86  PUSH 0x404010
006bbf8b  MOV dword ptr [ESP + 0x14],0x0
006bbf93  CALL 0x005d59f0
006bbf98  MOV dword ptr [ESI + 0xbc],EAX
006bbf9e  MOV EAX,dword ptr [ESI + 0x34]
006bbfa1  MOV ECX,dword ptr [EAX + 0x4]
006bbfa4  PUSH 0x404020
006bbfa9  CALL 0x005d59f0
006bbfae  MOV ECX,dword ptr [ESP + 0x8]
006bbfb2  MOV dword ptr [ESI + 0xc0],EAX
006bbfb8  MOV EAX,ESI
006bbfba  POP ESI
006bbfbb  MOV dword ptr FS:[0x0],ECX
006bbfc2  ADD ESP,0x10
006bbfc5  RET 0x8
