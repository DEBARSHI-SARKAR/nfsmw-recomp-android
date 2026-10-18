005ec970  PUSH ECX
005ec971  PUSH ESI
005ec972  MOV EAX,ECX
005ec974  MOV dword ptr [ESP + 0x4],0x0
005ec97c  MOV dword ptr [ESP + 0x4],ESP
005ec980  MOV EDX,dword ptr [ESP + 0x4]
005ec984  AND EDX,0x3
005ec987  MOV ECX,dword ptr [EDX*0x4 + 0x8f5ba8]
005ec98e  MOV EDX,dword ptr [EDX*0x4 + 0x8f5bb8]
005ec995  MOV dword ptr [EAX],EDX
005ec997  MOV EDX,dword ptr [ESP + 0xc]
005ec99b  MOV dword ptr [EAX + 0x4],0x18005801
005ec9a2  MOV dword ptr [EAX + 0x8],0x58084a02
005ec9a9  MOV dword ptr [EAX + 0xc],0x18005804
005ec9b0  MOV EDX,dword ptr [EDX]
005ec9b2  MOV dword ptr [EAX + 0x10],EDX
005ec9b5  MOV EDX,dword ptr [ESP + 0x10]
005ec9b9  MOV EDX,dword ptr [EDX]
005ec9bb  MOV dword ptr [EAX + 0x14],EDX
005ec9be  MOV EDX,ECX
005ec9c0  IMUL EDX,ECX
005ec9c3  XOR EDX,0x18005801
005ec9c9  MOV dword ptr [EAX + 0x4],EDX
005ec9cc  IMUL EDX,ECX
005ec9cf  XOR EDX,0x58084a02
005ec9d5  MOV ESI,dword ptr [EAX + 0x10]
005ec9d8  MOV dword ptr [EAX + 0x8],EDX
005ec9db  IMUL EDX,ECX
005ec9de  XOR EDX,0x18005804
005ec9e4  MOV dword ptr [EAX + 0xc],EDX
005ec9e7  IMUL EDX,ECX
005ec9ea  XOR ESI,EDX
005ec9ec  MOV EDX,ESI
005ec9ee  IMUL EDX,ECX
005ec9f1  MOV dword ptr [EAX + 0x10],ESI
005ec9f4  MOV ESI,dword ptr [EAX + 0x14]
005ec9f7  XOR ESI,EDX
005ec9f9  MOV EDX,ESI
005ec9fb  IMUL EDX,ECX
005ec9fe  MOV dword ptr [EAX + 0x14],ESI
005eca01  MOV ESI,dword ptr [EAX + 0x18]
005eca04  XOR ESI,EDX
005eca06  MOV EDX,ESI
005eca08  IMUL EDX,ECX
005eca0b  MOV ECX,dword ptr [EAX + 0x1c]
005eca0e  XOR ECX,EDX
005eca10  MOV dword ptr [EAX + 0x18],ESI
005eca13  MOV dword ptr [EAX + 0x1c],ECX
005eca16  POP ESI
005eca17  POP ECX
005eca18  RET 0x8
