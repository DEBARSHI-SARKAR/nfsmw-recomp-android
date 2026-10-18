006e1f40  PUSH ECX
006e1f41  PUSH ESI
006e1f42  MOV EAX,ECX
006e1f44  MOV dword ptr [ESP + 0x4],0x0
006e1f4c  MOV dword ptr [ESP + 0x4],ESP
006e1f50  MOV EDX,dword ptr [ESP + 0x4]
006e1f54  AND EDX,0x3
006e1f57  MOV ECX,dword ptr [EDX*0x4 + 0x901a04]
006e1f5e  MOV EDX,dword ptr [EDX*0x4 + 0x901a14]
006e1f65  MOV dword ptr [EAX],EDX
006e1f67  MOV EDX,dword ptr [ESP + 0xc]
006e1f6b  MOV dword ptr [EAX + 0x4],0x10800a41
006e1f72  MOV dword ptr [EAX + 0x8],0x842c6
006e1f79  MOV dword ptr [EAX + 0xc],0x10800a41
006e1f80  MOV EDX,dword ptr [EDX]
006e1f82  MOV dword ptr [EAX + 0x10],EDX
006e1f85  MOV EDX,dword ptr [ESP + 0x10]
006e1f89  MOV EDX,dword ptr [EDX]
006e1f8b  MOV dword ptr [EAX + 0x14],EDX
006e1f8e  MOV EDX,ECX
006e1f90  IMUL EDX,ECX
006e1f93  XOR EDX,0x10800a41
006e1f99  MOV dword ptr [EAX + 0x4],EDX
006e1f9c  IMUL EDX,ECX
006e1f9f  XOR EDX,0x842c6
006e1fa5  MOV ESI,dword ptr [EAX + 0x10]
006e1fa8  MOV dword ptr [EAX + 0x8],EDX
006e1fab  IMUL EDX,ECX
006e1fae  XOR EDX,0x10800a41
006e1fb4  MOV dword ptr [EAX + 0xc],EDX
006e1fb7  IMUL EDX,ECX
006e1fba  XOR ESI,EDX
006e1fbc  MOV EDX,ESI
006e1fbe  IMUL EDX,ECX
006e1fc1  MOV dword ptr [EAX + 0x10],ESI
006e1fc4  MOV ESI,dword ptr [EAX + 0x14]
006e1fc7  XOR ESI,EDX
006e1fc9  MOV EDX,ESI
006e1fcb  IMUL EDX,ECX
006e1fce  MOV dword ptr [EAX + 0x14],ESI
006e1fd1  MOV ESI,dword ptr [EAX + 0x18]
006e1fd4  XOR ESI,EDX
006e1fd6  MOV EDX,ESI
006e1fd8  IMUL EDX,ECX
006e1fdb  MOV ECX,dword ptr [EAX + 0x1c]
006e1fde  XOR ECX,EDX
006e1fe0  MOV dword ptr [EAX + 0x18],ESI
006e1fe3  MOV dword ptr [EAX + 0x1c],ECX
006e1fe6  POP ESI
006e1fe7  POP ECX
006e1fe8  RET 0x8
