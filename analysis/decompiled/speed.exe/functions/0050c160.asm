0050c160  PUSH -0x1
0050c162  PUSH 0x86e04e
0050c167  MOV EAX,FS:[0x0]
0050c16d  PUSH EAX
0050c16e  MOV dword ptr FS:[0x0],ESP
0050c175  PUSH ECX
0050c176  PUSH EBX
0050c177  PUSH ESI
0050c178  MOV ESI,ECX
0050c17a  PUSH EDI
0050c17b  XOR EDI,EDI
0050c17d  LEA EAX,[ESI + 0x80]
0050c183  MOV dword ptr [ESI + 0x8],0x1
0050c18a  MOV dword ptr [ESI + 0xc],EDI
0050c18d  MOV dword ptr [ESP + 0xc],ESI
0050c191  MOV dword ptr [EAX],EAX
0050c193  MOV dword ptr [EAX + 0x4],EAX
0050c196  MOV EAX,dword ptr [ESP + 0x20]
0050c19a  PUSH EAX
0050c19b  MOV ECX,0x9166c0
0050c1a0  MOV dword ptr [ESP + 0x1c],EDI
0050c1a4  CALL 0x0050bef0
0050c1a9  MOV dword ptr [ESI + 0x7c],EAX
0050c1ac  MOV dword ptr [ESI + 0x10],EDI
0050c1af  MOV dword ptr [ESI + 0x14],EDI
0050c1b2  MOV EBX,0x3f800000
0050c1b7  PUSH 0x8f29e8
0050c1bc  PUSH 0x4f000000
0050c1c1  MOV dword ptr [ESI + 0x20],EBX
0050c1c4  MOV dword ptr [ESI + 0x24],EDI
0050c1c7  MOV dword ptr [ESI + 0x28],EDI
0050c1ca  MOV dword ptr [ESI + 0x2c],EDI
0050c1cd  MOV dword ptr [ESI + 0x30],EDI
0050c1d0  MOV dword ptr [ESI + 0x34],EBX
0050c1d3  MOV dword ptr [ESI + 0x38],EDI
0050c1d6  MOV dword ptr [ESI + 0x3c],EDI
0050c1d9  MOV dword ptr [ESI + 0x40],EDI
0050c1dc  MOV dword ptr [ESI + 0x44],EDI
0050c1df  MOV dword ptr [ESI + 0x48],EBX
0050c1e2  MOV dword ptr [ESI + 0x4c],EDI
0050c1e5  MOV dword ptr [ESI + 0x50],EDI
0050c1e8  MOV dword ptr [ESI + 0x54],EDI
0050c1eb  MOV dword ptr [ESI + 0x58],EDI
0050c1ee  MOV dword ptr [ESI + 0x5c],EBX
0050c1f1  CALL 0x0045d9e0
0050c1f6  ADD ESP,0x8
0050c1f9  CALL 0x007c4b80
0050c1fe  MOV EDX,dword ptr [ESI + 0x7c]
0050c201  MOV dword ptr [ESI + 0x14],EAX
0050c204  MOV EAX,dword ptr [ESP + 0x24]
0050c208  MOV ECX,dword ptr [EAX + 0x18]
0050c20b  AND ECX,0xffff0000
0050c211  MOV dword ptr [ESI + 0x18],ECX
0050c214  MOV dword ptr [ESI + 0x70],EDI
0050c217  MOV dword ptr [ESI + 0x74],EBX
0050c21a  MOV dword ptr [ESI + 0x8c],EAX
0050c220  MOV dword ptr [ESI + 0x88],EDI
0050c226  MOV word ptr [ESI + 0x1c],DI
0050c22a  MOV EAX,dword ptr [EDX + 0x8]
0050c22d  MOV CX,word ptr [EAX + 0x9c]
0050c234  MOV dword ptr [ESI + 0x78],EDI
0050c237  ADD CX,0x2
0050c23b  MOV word ptr [ESI + 0x1e],CX
0050c23f  MOV ECX,dword ptr [ESP + 0x10]
0050c243  POP EDI
0050c244  MOV EAX,ESI
0050c246  POP ESI
0050c247  POP EBX
0050c248  MOV dword ptr FS:[0x0],ECX
0050c24f  ADD ESP,0x10
0050c252  RET 0x8
