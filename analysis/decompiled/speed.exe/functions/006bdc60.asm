006bdc60  PUSH EBP
006bdc61  MOV EBP,ESP
006bdc63  AND ESP,0xfffffff0
006bdc66  SUB ESP,0x4c
006bdc69  PUSH ESI
006bdc6a  MOV ESI,dword ptr [EBP + 0x10]
006bdc6d  PUSH ESI
006bdc6e  CALL 0x0045dbf0
006bdc73  FSTP float ptr [ESP + 0x10]
006bdc77  PUSH ESI
006bdc78  CALL 0x0045db30
006bdc7d  FLD ST0
006bdc7f  MOV EAX,dword ptr [ESP + 0x14]
006bdc83  FCHS
006bdc85  ADD ESP,0x8
006bdc88  FSTP float ptr [ESP + 0x18]
006bdc8c  MOV ECX,EAX
006bdc8e  LEA EDX,[ESP + 0x10]
006bdc92  FSTP float ptr [ESP + 0x30]
006bdc96  MOV dword ptr [ESP + 0x10],EAX
006bdc9a  MOV EAX,dword ptr [EBP + 0xc]
006bdc9d  PUSH EDX
006bdc9e  MOV dword ptr [ESP + 0x3c],ECX
006bdca2  MOV ECX,dword ptr [EBP + 0x8]
006bdca5  PUSH EAX
006bdca6  PUSH ECX
006bdca7  MOV dword ptr [ESP + 0x20],0x0
006bdcaf  MOV dword ptr [ESP + 0x28],0x0
006bdcb7  MOV dword ptr [ESP + 0x2c],0x0
006bdcbf  MOV dword ptr [ESP + 0x30],0x3f800000
006bdcc7  MOV dword ptr [ESP + 0x34],0x0
006bdccf  MOV dword ptr [ESP + 0x38],0x0
006bdcd7  MOV dword ptr [ESP + 0x40],0x0
006bdcdf  MOV dword ptr [ESP + 0x48],0x0
006bdce7  MOV dword ptr [ESP + 0x4c],0x0
006bdcef  MOV dword ptr [ESP + 0x50],0x0
006bdcf7  MOV dword ptr [ESP + 0x54],0x0
006bdcff  MOV dword ptr [ESP + 0x58],0x3f800000
006bdd07  CALL 0x007e7d5e
006bdd0c  POP ESI
006bdd0d  MOV ESP,EBP
006bdd0f  POP EBP
006bdd10  RET
