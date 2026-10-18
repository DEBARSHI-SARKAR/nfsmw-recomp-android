006c9d70  PUSH ESI
006c9d71  MOV ESI,ECX
006c9d73  XOR EDX,EDX
006c9d75  PUSH EDI
006c9d76  LEA EAX,[ESI + 0x2478]
006c9d7c  XOR ECX,ECX
006c9d7e  MOV EDI,EDI
006c9d80  MOV dword ptr [EAX + 0xfffffdd0],EDX
006c9d86  MOV dword ptr [ECX + 0x93df00],EDX
006c9d8c  MOV dword ptr [EAX],EDX
006c9d8e  MOV dword ptr [EAX + 0xfffffdd8],EDX
006c9d94  MOV dword ptr [ECX + 0x93cc34],EDX
006c9d9a  MOV dword ptr [EAX + 0xfffffda8],EDX
006c9da0  MOV dword ptr [ECX + 0x982904],EDX
006c9da6  MOV dword ptr [EAX + 0xfffffdb0],EDX
006c9dac  MOV dword ptr [ECX + 0x93cc58],EDX
006c9db2  MOV dword ptr [EAX + 0xfffffdb8],EDX
006c9db8  MOV dword ptr [ECX + 0x93d904],EDX
006c9dbe  MOV dword ptr [EAX + 0xfffffdc0],EDX
006c9dc4  MOV dword ptr [EAX + 0xfffffdc8],EDX
006c9dca  ADD ECX,0x4
006c9dcd  ADD EAX,0x4
006c9dd0  CMP ECX,0x8
006c9dd3  JL 0x006c9d80
006c9dd5  XOR EAX,EAX
006c9dd7  MOV EDI,ESI
006c9dd9  MOV ECX,0x88
006c9dde  STOSD.REP ES:EDI
006c9de0  LEA EDI,[ESI + 0x2258]
006c9de6  MOV ECX,0x88
006c9deb  STOSD.REP ES:EDI
006c9ded  LEA EDI,[ESI + 0x220]
006c9df3  MOV ECX,0x800
006c9df8  STOSD.REP ES:EDI
006c9dfa  POP EDI
006c9dfb  POP ESI
006c9dfc  RET
