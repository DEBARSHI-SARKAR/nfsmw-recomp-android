005ec490  PUSH ECX
005ec491  MOV EDX,dword ptr [ECX + 0x4]
005ec494  MOV EAX,dword ptr [EDX + 0x4]
005ec497  PUSH EBX
005ec498  MOV BL,byte ptr [EAX + 0x15]
005ec49b  TEST BL,BL
005ec49d  PUSH ESI
005ec49e  PUSH EDI
005ec49f  MOV EDI,dword ptr [ESP + 0x18]
005ec4a3  JNZ 0x005ec4bc
005ec4a5  MOV ESI,dword ptr [EDI]
005ec4a7  CMP dword ptr [EAX + 0xc],ESI
005ec4aa  JNC 0x005ec4b1
005ec4ac  MOV EAX,dword ptr [EAX + 0x8]
005ec4af  JMP 0x005ec4b5
005ec4b1  MOV EDX,EAX
005ec4b3  MOV EAX,dword ptr [EAX]
005ec4b5  MOV BL,byte ptr [EAX + 0x15]
005ec4b8  TEST BL,BL
005ec4ba  JZ 0x005ec4a7
005ec4bc  MOV EAX,dword ptr [ECX + 0x4]
005ec4bf  CMP EDX,EAX
005ec4c1  MOV dword ptr [ESP + 0x18],EDX
005ec4c5  JZ 0x005ec4e1
005ec4c7  MOV ECX,dword ptr [EDI]
005ec4c9  CMP ECX,dword ptr [EDX + 0xc]
005ec4cc  JC 0x005ec4e1
005ec4ce  LEA EAX,[ESP + 0x18]
005ec4d2  MOV EDX,dword ptr [EAX]
005ec4d4  MOV EAX,dword ptr [ESP + 0x14]
005ec4d8  POP EDI
005ec4d9  POP ESI
005ec4da  MOV dword ptr [EAX],EDX
005ec4dc  POP EBX
005ec4dd  POP ECX
005ec4de  RET 0x8
005ec4e1  MOV dword ptr [ESP + 0xc],EAX
005ec4e5  LEA EAX,[ESP + 0xc]
005ec4e9  MOV EDX,dword ptr [EAX]
005ec4eb  MOV EAX,dword ptr [ESP + 0x14]
005ec4ef  POP EDI
005ec4f0  POP ESI
005ec4f1  MOV dword ptr [EAX],EDX
005ec4f3  POP EBX
005ec4f4  POP ECX
005ec4f5  RET 0x8
