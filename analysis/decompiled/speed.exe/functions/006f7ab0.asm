006f7ab0  PUSH ESI
006f7ab1  MOV ESI,ECX
006f7ab3  CALL 0x006efef0
006f7ab8  MOV dword ptr [ESI + 0x4],EAX
006f7abb  MOV byte ptr [EAX + 0x15],0x1
006f7abf  MOV EAX,dword ptr [ESI + 0x4]
006f7ac2  MOV dword ptr [EAX + 0x4],EAX
006f7ac5  MOV EAX,dword ptr [ESI + 0x4]
006f7ac8  MOV dword ptr [EAX],EAX
006f7aca  MOV EAX,dword ptr [ESI + 0x4]
006f7acd  MOV dword ptr [EAX + 0x8],EAX
006f7ad0  MOV dword ptr [ESI + 0x8],0x0
006f7ad7  MOV EAX,ESI
006f7ad9  POP ESI
006f7ada  RET 0x8
