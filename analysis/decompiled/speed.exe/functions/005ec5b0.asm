005ec5b0  PUSH ECX
005ec5b1  MOV EDX,dword ptr [ECX + 0x4]
005ec5b4  MOV EAX,dword ptr [EDX + 0x4]
005ec5b7  PUSH EBX
005ec5b8  MOV BL,byte ptr [EAX + 0x21]
005ec5bb  TEST BL,BL
005ec5bd  PUSH ESI
005ec5be  PUSH EDI
005ec5bf  MOV EDI,dword ptr [ESP + 0x18]
005ec5c3  JNZ 0x005ec5dc
005ec5c5  MOV ESI,dword ptr [EDI]
005ec5c7  CMP dword ptr [EAX + 0xc],ESI
005ec5ca  JNC 0x005ec5d1
005ec5cc  MOV EAX,dword ptr [EAX + 0x8]
005ec5cf  JMP 0x005ec5d5
005ec5d1  MOV EDX,EAX
005ec5d3  MOV EAX,dword ptr [EAX]
005ec5d5  MOV BL,byte ptr [EAX + 0x21]
005ec5d8  TEST BL,BL
005ec5da  JZ 0x005ec5c7
005ec5dc  MOV EAX,dword ptr [ECX + 0x4]
005ec5df  CMP EDX,EAX
005ec5e1  MOV dword ptr [ESP + 0x18],EDX
005ec5e5  JZ 0x005ec601
005ec5e7  MOV ECX,dword ptr [EDI]
005ec5e9  CMP ECX,dword ptr [EDX + 0xc]
005ec5ec  JC 0x005ec601
005ec5ee  LEA EAX,[ESP + 0x18]
005ec5f2  MOV EDX,dword ptr [EAX]
005ec5f4  MOV EAX,dword ptr [ESP + 0x14]
005ec5f8  POP EDI
005ec5f9  POP ESI
005ec5fa  MOV dword ptr [EAX],EDX
005ec5fc  POP EBX
005ec5fd  POP ECX
005ec5fe  RET 0x8
005ec601  MOV dword ptr [ESP + 0xc],EAX
005ec605  LEA EAX,[ESP + 0xc]
005ec609  MOV EDX,dword ptr [EAX]
005ec60b  MOV EAX,dword ptr [ESP + 0x14]
005ec60f  POP EDI
005ec610  POP ESI
005ec611  MOV dword ptr [EAX],EDX
005ec613  POP EBX
005ec614  POP ECX
005ec615  RET 0x8
