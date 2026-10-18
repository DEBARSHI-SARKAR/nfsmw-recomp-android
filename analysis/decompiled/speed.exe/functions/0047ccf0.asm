0047ccf0  PUSH EBP
0047ccf1  MOV EBP,ESP
0047ccf3  AND ESP,0xfffffff0
0047ccf6  SUB ESP,0x4c
0047ccf9  PUSH ESI
0047ccfa  MOV ESI,ECX
0047ccfc  MOV EAX,dword ptr [ESI + 0x290]
0047cd02  MOV ECX,dword ptr [EAX + 0x1c]
0047cd05  PUSH ECX
0047cd06  LEA EDX,[ESP + 0x14]
0047cd0a  PUSH EDX
0047cd0b  CALL 0x006bde60
0047cd10  MOV EAX,dword ptr [EBP + 0x8]
0047cd13  PUSH EAX
0047cd14  LEA ECX,[ESP + 0x1c]
0047cd18  PUSH ECX
0047cd19  CALL 0x0047b9f0
0047cd1e  MOV EDX,dword ptr [ESI + 0x290]
0047cd24  MOV EAX,dword ptr [EDX + 0x1c]
0047cd27  FLD float ptr [EAX + 0x204]
0047cd2d  MOV ECX,dword ptr [EAX + 0x208]
0047cd33  MOV EDX,dword ptr [EAX + 0x200]
0047cd39  FCHS
0047cd3b  ADD ESP,0x10
0047cd3e  FSTP float ptr [ESP + 0x4]
0047cd42  ADD EAX,0x200
0047cd47  MOV EAX,dword ptr [EBP + 0xc]
0047cd4a  MOV dword ptr [ESP + 0x8],ECX
0047cd4e  MOV ECX,dword ptr [ESP + 0x4]
0047cd52  MOV dword ptr [EAX],ECX
0047cd54  MOV dword ptr [ESP + 0xc],EDX
0047cd58  MOV EDX,dword ptr [ESP + 0x8]
0047cd5c  MOV ECX,dword ptr [ESP + 0xc]
0047cd60  MOV dword ptr [EAX + 0x4],EDX
0047cd63  MOV dword ptr [EAX + 0x8],ECX
0047cd66  MOV AL,0x1
0047cd68  POP ESI
0047cd69  MOV ESP,EBP
0047cd6b  POP EBP
0047cd6c  RET 0x8
