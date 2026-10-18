005eca20  PUSH ECX
005eca21  PUSH ESI
005eca22  MOV EAX,ECX
005eca24  MOV dword ptr [ESP + 0x4],0x0
005eca2c  MOV dword ptr [ESP + 0x4],ESP
005eca30  MOV EDX,dword ptr [ESP + 0x4]
005eca34  AND EDX,0x3
005eca37  MOV ECX,dword ptr [EDX*0x4 + 0x8f5bc8]
005eca3e  MOV EDX,dword ptr [EDX*0x4 + 0x8f5bd8]
005eca45  MOV dword ptr [EAX],EDX
005eca47  MOV EDX,dword ptr [ESP + 0xc]
005eca4b  MOV dword ptr [EAX + 0x4],0x18005801
005eca52  MOV dword ptr [EAX + 0x8],0x58084a02
005eca59  MOV dword ptr [EAX + 0xc],0x8244a50
005eca60  MOV EDX,dword ptr [EDX]
005eca62  MOV dword ptr [EAX + 0x10],EDX
005eca65  MOV EDX,dword ptr [ESP + 0x10]
005eca69  MOV EDX,dword ptr [EDX]
005eca6b  MOV dword ptr [EAX + 0x14],EDX
005eca6e  MOV EDX,ECX
005eca70  IMUL EDX,ECX
005eca73  XOR EDX,0x18005801
005eca79  MOV dword ptr [EAX + 0x4],EDX
005eca7c  IMUL EDX,ECX
005eca7f  XOR EDX,0x58084a02
005eca85  MOV ESI,dword ptr [EAX + 0x10]
005eca88  MOV dword ptr [EAX + 0x8],EDX
005eca8b  IMUL EDX,ECX
005eca8e  XOR EDX,0x8244a50
005eca94  MOV dword ptr [EAX + 0xc],EDX
005eca97  IMUL EDX,ECX
005eca9a  XOR ESI,EDX
005eca9c  MOV EDX,ESI
005eca9e  IMUL EDX,ECX
005ecaa1  MOV dword ptr [EAX + 0x10],ESI
005ecaa4  MOV ESI,dword ptr [EAX + 0x14]
005ecaa7  XOR ESI,EDX
005ecaa9  MOV EDX,ESI
005ecaab  IMUL EDX,ECX
005ecaae  MOV dword ptr [EAX + 0x14],ESI
005ecab1  MOV ESI,dword ptr [EAX + 0x18]
005ecab4  XOR ESI,EDX
005ecab6  MOV EDX,ESI
005ecab8  IMUL EDX,ECX
005ecabb  MOV ECX,dword ptr [EAX + 0x1c]
005ecabe  XOR ECX,EDX
005ecac0  MOV dword ptr [EAX + 0x18],ESI
005ecac3  MOV dword ptr [EAX + 0x1c],ECX
005ecac6  POP ESI
005ecac7  POP ECX
005ecac8  RET 0x8
