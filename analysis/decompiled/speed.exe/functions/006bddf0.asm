006bddf0  MOV EAX,dword ptr [ESP + 0x4]
006bddf4  XOR ECX,ECX
006bddf6  MOV EDX,0x3f800000
006bddfb  MOV dword ptr [EAX + 0x4],ECX
006bddfe  MOV dword ptr [EAX + 0x8],ECX
006bde01  MOV dword ptr [EAX + 0xc],ECX
006bde04  MOV dword ptr [EAX + 0x10],ECX
006bde07  MOV dword ptr [EAX + 0x18],ECX
006bde0a  MOV dword ptr [EAX + 0x1c],ECX
006bde0d  MOV dword ptr [EAX + 0x20],ECX
006bde10  MOV dword ptr [EAX + 0x24],ECX
006bde13  MOV dword ptr [EAX + 0x2c],ECX
006bde16  MOV ECX,dword ptr [ESP + 0x8]
006bde1a  PUSH ESI
006bde1b  MOV dword ptr [EAX],EDX
006bde1d  MOV dword ptr [EAX + 0x14],EDX
006bde20  MOV dword ptr [EAX + 0x28],EDX
006bde23  MOV ESI,dword ptr [ECX]
006bde25  MOV dword ptr [EAX + 0x30],ESI
006bde28  MOV ESI,dword ptr [ECX + 0x4]
006bde2b  MOV dword ptr [EAX + 0x34],ESI
006bde2e  MOV ECX,dword ptr [ECX + 0x8]
006bde31  MOV dword ptr [EAX + 0x38],ECX
006bde34  MOV dword ptr [EAX + 0x3c],EDX
006bde37  POP ESI
006bde38  RET
