006bdbb0  PUSH EBP
006bdbb1  MOV EBP,ESP
006bdbb3  AND ESP,0xfffffff0
006bdbb6  SUB ESP,0x4c
006bdbb9  PUSH ESI
006bdbba  MOV ESI,dword ptr [EBP + 0x10]
006bdbbd  PUSH ESI
006bdbbe  CALL 0x0045dbf0
006bdbc3  FSTP float ptr [ESP + 0x10]
006bdbc7  PUSH ESI
006bdbc8  CALL 0x0045db30
006bdbcd  FST float ptr [ESP + 0x30]
006bdbd1  MOV EAX,dword ptr [ESP + 0x14]
006bdbd5  FCHS
006bdbd7  ADD ESP,0x8
006bdbda  FSTP float ptr [ESP + 0x34]
006bdbde  MOV ECX,EAX
006bdbe0  LEA EDX,[ESP + 0x10]
006bdbe4  MOV dword ptr [ESP + 0x24],EAX
006bdbe8  MOV EAX,dword ptr [EBP + 0xc]
006bdbeb  PUSH EDX
006bdbec  MOV dword ptr [ESP + 0x3c],ECX
006bdbf0  MOV ECX,dword ptr [EBP + 0x8]
006bdbf3  PUSH EAX
006bdbf4  PUSH ECX
006bdbf5  MOV dword ptr [ESP + 0x1c],0x3f800000
006bdbfd  MOV dword ptr [ESP + 0x20],0x0
006bdc05  MOV dword ptr [ESP + 0x24],0x0
006bdc0d  MOV dword ptr [ESP + 0x28],0x0
006bdc15  MOV dword ptr [ESP + 0x2c],0x0
006bdc1d  MOV dword ptr [ESP + 0x38],0x0
006bdc25  MOV dword ptr [ESP + 0x3c],0x0
006bdc2d  MOV dword ptr [ESP + 0x48],0x0
006bdc35  MOV dword ptr [ESP + 0x4c],0x0
006bdc3d  MOV dword ptr [ESP + 0x50],0x0
006bdc45  MOV dword ptr [ESP + 0x54],0x0
006bdc4d  MOV dword ptr [ESP + 0x58],0x3f800000
006bdc55  CALL 0x007e7d5e
006bdc5a  POP ESI
006bdc5b  MOV ESP,EBP
006bdc5d  POP EBP
006bdc5e  RET
