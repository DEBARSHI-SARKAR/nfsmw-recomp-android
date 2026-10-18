006bdd50  PUSH EBP
006bdd51  MOV EBP,ESP
006bdd53  AND ESP,0xfffffff0
006bdd56  SUB ESP,0x40
006bdd59  MOV EAX,dword ptr [EBP + 0x10]
006bdd5c  MOV ECX,dword ptr [EAX]
006bdd5e  MOV EDX,dword ptr [EAX + 0x4]
006bdd61  MOV EAX,dword ptr [EAX + 0x8]
006bdd64  MOV dword ptr [ESP + 0x30],ECX
006bdd68  LEA ECX,[ESP]
006bdd6b  MOV dword ptr [ESP + 0x34],EDX
006bdd6f  MOV EDX,dword ptr [EBP + 0xc]
006bdd72  PUSH ECX
006bdd73  MOV dword ptr [ESP + 0x3c],EAX
006bdd77  MOV EAX,dword ptr [EBP + 0x8]
006bdd7a  PUSH EDX
006bdd7b  PUSH EAX
006bdd7c  MOV dword ptr [ESP + 0xc],0x3f800000
006bdd84  MOV dword ptr [ESP + 0x10],0x0
006bdd8c  MOV dword ptr [ESP + 0x14],0x0
006bdd94  MOV dword ptr [ESP + 0x18],0x0
006bdd9c  MOV dword ptr [ESP + 0x1c],0x0
006bdda4  MOV dword ptr [ESP + 0x20],0x3f800000
006bddac  MOV dword ptr [ESP + 0x24],0x0
006bddb4  MOV dword ptr [ESP + 0x28],0x0
006bddbc  MOV dword ptr [ESP + 0x2c],0x0
006bddc4  MOV dword ptr [ESP + 0x30],0x0
006bddcc  MOV dword ptr [ESP + 0x34],0x3f800000
006bddd4  MOV dword ptr [ESP + 0x38],0x0
006bdddc  MOV dword ptr [ESP + 0x48],0x3f800000
006bdde4  CALL 0x007e7d5e
006bdde9  MOV ESP,EBP
006bddeb  POP EBP
006bddec  RET
