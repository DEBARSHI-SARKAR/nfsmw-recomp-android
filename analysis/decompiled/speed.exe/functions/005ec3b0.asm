005ec3b0  PUSH ECX
005ec3b1  MOV EDX,dword ptr [ECX + 0x4]
005ec3b4  MOV EAX,dword ptr [EDX + 0x4]
005ec3b7  PUSH EBX
005ec3b8  MOV BL,byte ptr [EAX + 0x15]
005ec3bb  TEST BL,BL
005ec3bd  PUSH ESI
005ec3be  PUSH EDI
005ec3bf  MOV EDI,dword ptr [ESP + 0x18]
005ec3c3  JNZ 0x005ec3dc
005ec3c5  MOV ESI,dword ptr [EDI]
005ec3c7  CMP dword ptr [EAX + 0xc],ESI
005ec3ca  JNC 0x005ec3d1
005ec3cc  MOV EAX,dword ptr [EAX + 0x8]
005ec3cf  JMP 0x005ec3d5
005ec3d1  MOV EDX,EAX
005ec3d3  MOV EAX,dword ptr [EAX]
005ec3d5  MOV BL,byte ptr [EAX + 0x15]
005ec3d8  TEST BL,BL
005ec3da  JZ 0x005ec3c7
005ec3dc  MOV EAX,dword ptr [ECX + 0x4]
005ec3df  CMP EDX,EAX
005ec3e1  MOV dword ptr [ESP + 0x18],EDX
005ec3e5  JZ 0x005ec401
005ec3e7  MOV ECX,dword ptr [EDI]
005ec3e9  CMP ECX,dword ptr [EDX + 0xc]
005ec3ec  JC 0x005ec401
005ec3ee  LEA EAX,[ESP + 0x18]
005ec3f2  MOV EDX,dword ptr [EAX]
005ec3f4  MOV EAX,dword ptr [ESP + 0x14]
005ec3f8  POP EDI
005ec3f9  POP ESI
005ec3fa  MOV dword ptr [EAX],EDX
005ec3fc  POP EBX
005ec3fd  POP ECX
005ec3fe  RET 0x8
005ec401  MOV dword ptr [ESP + 0xc],EAX
005ec405  LEA EAX,[ESP + 0xc]
005ec409  MOV EDX,dword ptr [EAX]
005ec40b  MOV EAX,dword ptr [ESP + 0x14]
005ec40f  POP EDI
005ec410  POP ESI
005ec411  MOV dword ptr [EAX],EDX
005ec413  POP EBX
005ec414  POP ECX
005ec415  RET 0x8
