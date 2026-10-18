0069cad0  PUSH -0x1
0069cad2  PUSH 0x87c478
0069cad7  MOV EAX,FS:[0x0]
0069cadd  PUSH EAX
0069cade  MOV dword ptr FS:[0x0],ESP
0069cae5  PUSH ECX
0069cae6  PUSH EBX
0069cae7  PUSH ESI
0069cae8  PUSH EDI
0069cae9  MOV EDI,dword ptr [ESP + 0x20]
0069caed  XOR EBX,EBX
0069caef  PUSH EBX
0069caf0  MOV ESI,ECX
0069caf2  PUSH EDI
0069caf3  MOV dword ptr [ESP + 0x14],ESI
0069caf7  CALL 0x006717f0
0069cafc  MOV EAX,dword ptr [EDI + 0x4]
0069caff  CMP EAX,EBX
0069cb01  MOV dword ptr [ESP + 0x18],EBX
0069cb05  JZ 0x0069cb0c
0069cb07  LEA ECX,[EAX + 0x10]
0069cb0a  JMP 0x0069cb0e
0069cb0c  XOR ECX,ECX
0069cb0e  LEA EDI,[ESI + 0x48]
0069cb11  PUSH EDI
0069cb12  PUSH 0x403f90
0069cb17  MOV dword ptr [EDI],0x890970
0069cb1d  MOV dword ptr [EDI + 0x4],ECX
0069cb20  CALL 0x005d7930
0069cb25  MOV ECX,dword ptr [ESP + 0x10]
0069cb29  MOV dword ptr [EDI],0x8aae98
0069cb2f  MOV dword ptr [EDI],0x8ab5c8
0069cb35  MOV dword ptr [ESI],0x8ab598
0069cb3b  MOV dword ptr [ESI + 0x8],0x8ab590
0069cb42  MOV dword ptr [ESI + 0x50],EBX
0069cb45  MOV dword ptr [ESI + 0x54],EBX
0069cb48  MOV dword ptr [ESI + 0x58],EBX
0069cb4b  MOV dword ptr [ESI + 0x5c],EBX
0069cb4e  MOV dword ptr [ESI + 0x60],EBX
0069cb51  MOV dword ptr [ESI + 0x64],EBX
0069cb54  MOV dword ptr [ESI + 0x68],EBX
0069cb57  MOV dword ptr [ESI + 0x6c],EBX
0069cb5a  MOV byte ptr [ESI + 0x70],BL
0069cb5d  MOV byte ptr [ESI + 0x71],BL
0069cb60  POP EDI
0069cb61  MOV EAX,ESI
0069cb63  POP ESI
0069cb64  POP EBX
0069cb65  MOV dword ptr FS:[0x0],ECX
0069cb6c  ADD ESP,0x10
0069cb6f  RET 0x4
