006d9610  MOV EAX,dword ptr [ESP + 0x8]
006d9614  SUB ESP,0x6c
006d9617  PUSH EBX
006d9618  MOV EBX,dword ptr [ESP + 0x74]
006d961c  LEA EDX,[EAX + EBX*0x8 + 0x10]
006d9620  MOV EAX,dword ptr [ECX + EDX*0x4]
006d9623  LEA EDX,[ECX + EDX*0x4]
006d9626  PUSH ESI
006d9627  XOR ESI,ESI
006d9629  TEST EAX,EAX
006d962b  JZ 0x006d977a
006d9631  MOV EAX,dword ptr [ESP + 0x9c]
006d9638  MOV ECX,dword ptr [ESP + 0xa0]
006d963f  MOV dword ptr [ESP + 0xc],ECX
006d9643  MOV ECX,dword ptr [ESP + 0xa8]
006d964a  MOV dword ptr [ESP + 0x8],EAX
006d964e  MOV EAX,dword ptr [ESP + 0xa4]
006d9655  MOV dword ptr [ESP + 0x14],ECX
006d9659  MOV ECX,dword ptr [ESP + 0xb0]
006d9660  MOV dword ptr [ESP + 0x10],EAX
006d9664  MOV EAX,dword ptr [ESP + 0xac]
006d966b  MOV dword ptr [ESP + 0x1c],ECX
006d966f  MOV ECX,dword ptr [ESP + 0xb8]
006d9676  MOV dword ptr [ESP + 0x18],EAX
006d967a  MOV EAX,dword ptr [ESP + 0xb4]
006d9681  MOV dword ptr [ESP + 0x24],ECX
006d9685  MOV ECX,dword ptr [ESP + 0xc4]
006d968c  MOV dword ptr [ESP + 0x20],EAX
006d9690  MOV EAX,dword ptr [ESP + 0xc0]
006d9697  MOV dword ptr [ESP + 0x30],ECX
006d969b  MOV ECX,dword ptr [ESP + 0xcc]
006d96a2  MOV dword ptr [ESP + 0x2c],EAX
006d96a6  MOV EAX,dword ptr [ESP + 0xc8]
006d96ad  MOV dword ptr [ESP + 0x38],ECX
006d96b1  MOV EDX,dword ptr [EDX]
006d96b3  MOV dword ptr [ESP + 0x34],EAX
006d96b7  XOR EAX,EAX
006d96b9  PUSH EDI
006d96ba  MOV ECX,0xe
006d96bf  LEA EDI,[ESP + 0x40]
006d96c3  STOSD.REP ES:EDI
006d96c5  MOV ECX,dword ptr [ESP + 0x88]
006d96cc  MOV EAX,dword ptr [ESP + 0x84]
006d96d3  MOV dword ptr [ESP + 0x48],ECX
006d96d7  MOV ECX,dword ptr [ESP + 0x90]
006d96de  MOV dword ptr [ESP + 0x50],ECX
006d96e2  MOV ECX,dword ptr [ESP + 0x98]
006d96e9  MOV dword ptr [ESP + 0x44],EAX
006d96ed  MOV EAX,dword ptr [ESP + 0x8c]
006d96f4  MOV dword ptr [ESP + 0x58],ECX
006d96f8  MOV dword ptr [ESP + 0x4c],EAX
006d96fc  MOV EAX,dword ptr [ESP + 0x94]
006d9703  MOV dword ptr [ESP + 0x54],EAX
006d9707  MOV EAX,dword ptr [ESP + 0x9c]
006d970e  LEA ECX,[ESP + 0xc]
006d9712  MOV dword ptr [ESP + 0x60],ECX
006d9716  LEA ECX,[ESP + 0x2c]
006d971a  MOV dword ptr [ESP + 0x68],ECX
006d971e  MOV ECX,dword ptr [ESP + 0xc0]
006d9725  MOV dword ptr [ESP + 0x5c],EAX
006d9729  LEA EAX,[ESP + 0x14]
006d972d  MOV dword ptr [ESP + 0x74],ECX
006d9731  MOV dword ptr [ESP + 0x64],EAX
006d9735  PUSH 0x140
006d973a  LEA ECX,[ESP + 0x44]
006d973e  LEA EAX,[ESP + 0x20]
006d9742  PUSH ECX
006d9743  MOV dword ptr [ESP + 0x34],0x14
006d974b  MOV dword ptr [ESP + 0x48],0x38
006d9753  MOV dword ptr [ESP + 0x74],0x10
006d975b  MOV dword ptr [ESP + 0x78],EAX
006d975f  MOV EAX,dword ptr [EDX]
006d9761  PUSH EDX
006d9762  CALL dword ptr [EAX + 0x18]
006d9765  MOV ESI,EAX
006d9767  TEST ESI,ESI
006d9769  POP EDI
006d976a  JGE 0x006d977a
006d976c  PUSH EBX
006d976d  PUSH 0x8afe88
006d9772  CALL 0x006ca3d0
006d9777  ADD ESP,0x8
006d977a  MOV EAX,ESI
006d977c  POP ESI
006d977d  POP EBX
006d977e  ADD ESP,0x6c
006d9781  RET 0x58
