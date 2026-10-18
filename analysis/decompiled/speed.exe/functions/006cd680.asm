006cd680  PUSH EBP
006cd681  MOV EBP,ESP
006cd683  SUB ESP,0x28
006cd686  PUSH ESI
006cd687  PUSH EAX
006cd688  MOV EAX,0xcfcecdcc
006cd68d  MOV EAX,0x6cd68d
006cd692  MOV EAX,0x1
006cd697  MOV EAX,0x0
006cd69c  MOV EAX,0xcfcecdcc
006cd6a1  POP EAX
006cd6a2  MOV EAX,dword ptr [EBP + 0x8]
006cd6a5  MOV ECX,dword ptr [EAX + 0x14]
006cd6a8  MOV dword ptr [EBP + -0x20],ECX
006cd6ab  MOV EDX,dword ptr [EBP + 0x8]
006cd6ae  MOV EAX,dword ptr [EDX + 0x18]
006cd6b1  MOV dword ptr [EBP + -0x1c],EAX
006cd6b4  MOV ECX,dword ptr [EBP + 0x8]
006cd6b7  MOV EDX,dword ptr [ECX + 0x1c]
006cd6ba  MOV dword ptr [EBP + -0x18],EDX
006cd6bd  MOV EAX,dword ptr [EBP + 0x8]
006cd6c0  MOV ECX,dword ptr [EAX + 0x20]
006cd6c3  MOV dword ptr [EBP + -0x14],ECX
006cd6c6  MOV EDX,dword ptr [EBP + 0x8]
006cd6c9  MOV EAX,dword ptr [EDX + 0x24]
006cd6cc  MOV dword ptr [EBP + -0xc],EAX
006cd6cf  MOV ECX,dword ptr [EBP + 0x8]
006cd6d2  MOV EDX,dword ptr [ECX + 0x28]
006cd6d5  MOV dword ptr [EBP + -0x4],EDX
006cd6d8  MOV EAX,dword ptr [EBP + 0x8]
006cd6db  MOV ECX,dword ptr [EAX + 0x2c]
006cd6de  MOV dword ptr [EBP + -0x28],ECX
006cd6e1  MOV EDX,dword ptr [EBP + 0x8]
006cd6e4  MOV EAX,dword ptr [EDX + 0x30]
006cd6e7  MOV dword ptr [EBP + -0x24],EAX
006cd6ea  MOV ECX,dword ptr [EBP + 0x8]
006cd6ed  MOV EDX,dword ptr [ECX + 0x34]
006cd6f0  MOV dword ptr [EBP + -0x8],EDX
006cd6f3  MOV EAX,dword ptr [EBP + 0xc]
006cd6f6  AND EAX,dword ptr [EBP + -0x20]
006cd6f9  MOV ECX,dword ptr [EBP + 0xc]
006cd6fc  AND ECX,dword ptr [EBP + -0x20]
006cd6ff  ADD ECX,dword ptr [EBP + -0x4]
006cd702  IMUL ECX,dword ptr [EBP + -0x28]
006cd706  XOR EAX,ECX
006cd708  MOV EDX,dword ptr [EBP + 0xc]
006cd70b  AND EDX,dword ptr [EBP + -0x20]
006cd70e  ADD EDX,dword ptr [EBP + -0x24]
006cd711  IMUL EDX,dword ptr [EBP + -0x8]
006cd715  XOR EAX,EDX
006cd717  MOV ECX,dword ptr [EBP + -0x20]
006cd71a  NOT ECX
006cd71c  AND EAX,ECX
006cd71e  XOR EAX,dword ptr [EBP + 0xc]
006cd721  MOV EDX,dword ptr [EBP + 0xc]
006cd724  AND EDX,dword ptr [EBP + -0x20]
006cd727  MOV ECX,dword ptr [EBP + 0xc]
006cd72a  AND ECX,dword ptr [EBP + -0x20]
006cd72d  ADD ECX,dword ptr [EBP + -0x4]
006cd730  IMUL ECX,dword ptr [EBP + -0x28]
006cd734  XOR EDX,ECX
006cd736  MOV ECX,dword ptr [EBP + 0xc]
006cd739  AND ECX,dword ptr [EBP + -0x20]
006cd73c  ADD ECX,dword ptr [EBP + -0x24]
006cd73f  IMUL ECX,dword ptr [EBP + -0x8]
006cd743  XOR EDX,ECX
006cd745  MOV ECX,dword ptr [EBP + -0x20]
006cd748  NOT ECX
006cd74a  AND EDX,ECX
006cd74c  XOR EDX,dword ptr [EBP + 0xc]
006cd74f  MOV ECX,dword ptr [EBP + -0x20]
006cd752  NOT ECX
006cd754  AND EDX,ECX
006cd756  MOV ECX,dword ptr [EBP + 0xc]
006cd759  AND ECX,dword ptr [EBP + -0x20]
006cd75c  MOV ESI,dword ptr [EBP + 0xc]
006cd75f  AND ESI,dword ptr [EBP + -0x20]
006cd762  ADD ESI,dword ptr [EBP + -0x4]
006cd765  IMUL ESI,dword ptr [EBP + -0x28]
006cd769  XOR ECX,ESI
006cd76b  MOV ESI,dword ptr [EBP + 0xc]
006cd76e  AND ESI,dword ptr [EBP + -0x20]
006cd771  ADD ESI,dword ptr [EBP + -0x24]
006cd774  IMUL ESI,dword ptr [EBP + -0x8]
006cd778  XOR ECX,ESI
006cd77a  MOV ESI,dword ptr [EBP + -0x20]
006cd77d  NOT ESI
006cd77f  AND ECX,ESI
006cd781  XOR ECX,dword ptr [EBP + 0xc]
006cd784  MOV ESI,dword ptr [EBP + -0x20]
006cd787  NOT ESI
006cd789  AND ECX,ESI
006cd78b  ADD ECX,dword ptr [EBP + -0x18]
006cd78e  IMUL ECX,dword ptr [EBP + -0x1c]
006cd792  XOR EDX,ECX
006cd794  MOV ECX,dword ptr [EBP + 0xc]
006cd797  AND ECX,dword ptr [EBP + -0x20]
006cd79a  MOV ESI,dword ptr [EBP + 0xc]
006cd79d  AND ESI,dword ptr [EBP + -0x20]
006cd7a0  ADD ESI,dword ptr [EBP + -0x4]
006cd7a3  IMUL ESI,dword ptr [EBP + -0x28]
006cd7a7  XOR ECX,ESI
006cd7a9  MOV ESI,dword ptr [EBP + 0xc]
006cd7ac  AND ESI,dword ptr [EBP + -0x20]
006cd7af  ADD ESI,dword ptr [EBP + -0x24]
006cd7b2  IMUL ESI,dword ptr [EBP + -0x8]
006cd7b6  XOR ECX,ESI
006cd7b8  MOV ESI,dword ptr [EBP + -0x20]
006cd7bb  NOT ESI
006cd7bd  AND ECX,ESI
006cd7bf  XOR ECX,dword ptr [EBP + 0xc]
006cd7c2  MOV ESI,dword ptr [EBP + -0x20]
006cd7c5  NOT ESI
006cd7c7  AND ECX,ESI
006cd7c9  ADD ECX,dword ptr [EBP + -0xc]
006cd7cc  IMUL ECX,dword ptr [EBP + -0x14]
006cd7d0  XOR EDX,ECX
006cd7d2  AND EDX,dword ptr [EBP + -0x20]
006cd7d5  XOR EAX,EDX
006cd7d7  MOV dword ptr [EBP + -0x10],EAX
006cd7da  PUSH EAX
006cd7db  MOV EAX,0xcfcecdcc
006cd7e0  MOV EAX,0x6cd68d
006cd7e5  MOV EAX,0x0
006cd7ea  MOV EAX,0x0
006cd7ef  MOV EAX,0xcecdcccb
006cd7f4  POP EAX
006cd7f5  MOV EAX,dword ptr [EBP + -0x10]
006cd7f8  POP ESI
006cd7f9  MOV ESP,EBP
006cd7fb  POP EBP
006cd7fc  RET
