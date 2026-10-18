004a91a0  MOV EDX,dword ptr [ESP + 0x8]
004a91a4  PUSH ESI
004a91a5  MOV ESI,ECX
004a91a7  MOV ECX,dword ptr [ESP + 0x8]
004a91ab  XOR EAX,EAX
004a91ad  MOV dword ptr [ESI + 0x10],ECX
004a91b0  MOV ECX,dword ptr [ESP + 0x10]
004a91b4  MOV dword ptr [ESI + 0x1c],ECX
004a91b7  PUSH ECX
004a91b8  MOV ECX,ESI
004a91ba  MOV dword ptr [ESI],EAX
004a91bc  MOV dword ptr [ESI + 0x4],EAX
004a91bf  MOV dword ptr [ESI + 0x8],EAX
004a91c2  MOV dword ptr [ESI + 0xc],EAX
004a91c5  MOV dword ptr [ESI + 0x14],EDX
004a91c8  MOV dword ptr [ESI + 0x18],EAX
004a91cb  MOV dword ptr [ESI + 0x20],EAX
004a91ce  MOV dword ptr [ESI + 0x24],EAX
004a91d1  MOV dword ptr [ESI + 0x28],EAX
004a91d4  MOV byte ptr [ESI + 0x2c],AL
004a91d7  CALL 0x00491660
004a91dc  MOV ECX,ESI
004a91de  CALL 0x004a2200
004a91e3  MOV EAX,ESI
004a91e5  POP ESI
004a91e6  RET 0xc
