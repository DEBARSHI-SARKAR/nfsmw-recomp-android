006bfd00  PUSH EBP
006bfd01  MOV EBP,ESP
006bfd03  AND ESP,0xfffffff0
006bfd06  SUB ESP,0x8c
006bfd0c  PUSH ESI
006bfd0d  MOV ESI,dword ptr [EBP + 0x8]
006bfd10  MOV EAX,dword ptr [ESI]
006bfd12  MOV ECX,dword ptr [EAX]
006bfd14  MOV EDX,dword ptr [EAX + 0x8]
006bfd17  PUSH ECX
006bfd18  PUSH EDX
006bfd19  CALL 0x0045ded0
006bfd1e  MOV dword ptr [ESP + 0x18],0x3f800000
006bfd26  MOV dword ptr [ESP + 0x1c],0x0
006bfd2e  MOV dword ptr [ESP + 0x20],0x0
006bfd36  MOV dword ptr [ESP + 0x24],0x0
006bfd3e  MOV dword ptr [ESP + 0x28],0x0
006bfd46  PUSH EAX
006bfd47  LEA EAX,[ESP + 0x5c]
006bfd4b  PUSH EAX
006bfd4c  MOV dword ptr [ESP + 0x34],0x3f800000
006bfd54  MOV dword ptr [ESP + 0x38],0x0
006bfd5c  MOV dword ptr [ESP + 0x3c],0x0
006bfd64  MOV dword ptr [ESP + 0x40],0x0
006bfd6c  MOV dword ptr [ESP + 0x44],0x0
006bfd74  MOV dword ptr [ESP + 0x48],0x3f800000
006bfd7c  MOV dword ptr [ESP + 0x4c],0x0
006bfd84  MOV dword ptr [ESP + 0x50],0x0
006bfd8c  MOV dword ptr [ESP + 0x54],0x0
006bfd94  MOV dword ptr [ESP + 0x58],0x0
006bfd9c  MOV dword ptr [ESP + 0x5c],0x3f800000
006bfda4  CALL 0x006bdb50
006bfda9  ADD ESP,0x10
006bfdac  LEA ECX,[ESP + 0x50]
006bfdb0  PUSH ECX
006bfdb1  LEA EDX,[ESP + 0x14]
006bfdb5  PUSH EDX
006bfdb6  MOV EAX,EDX
006bfdb8  PUSH EAX
006bfdb9  CALL 0x007e7d5e
006bfdbe  MOV ECX,dword ptr [EBP + 0xc]
006bfdc1  MOV dword ptr [ECX + 0x80],ESI
006bfdc7  POP ESI
006bfdc8  MOV ESP,EBP
006bfdca  POP EBP
006bfdcb  RET
