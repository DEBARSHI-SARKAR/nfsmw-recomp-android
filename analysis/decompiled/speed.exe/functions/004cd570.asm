004cd570  PUSH EDI
004cd571  MOV EDI,ECX
004cd573  MOV AL,byte ptr [EDI + 0x20]
004cd576  TEST AL,AL
004cd578  JZ 0x004cd613
004cd57e  MOV EAX,dword ptr [ESP + 0x8]
004cd582  TEST EAX,EAX
004cd584  JZ 0x004cd5ab
004cd586  MOV EDX,dword ptr [EAX]
004cd588  LEA ECX,[EDI + 0x4]
004cd58b  MOV dword ptr [ECX],EDX
004cd58d  MOV EDX,dword ptr [EAX + 0x4]
004cd590  MOV dword ptr [ECX + 0x4],EDX
004cd593  MOV EDX,dword ptr [EAX + 0x8]
004cd596  MOV dword ptr [ECX + 0x8],EDX
004cd599  MOV EDX,dword ptr [EAX + 0xc]
004cd59c  MOV dword ptr [ECX + 0xc],EDX
004cd59f  MOV EDX,dword ptr [EAX + 0x10]
004cd5a2  MOV dword ptr [ECX + 0x10],EDX
004cd5a5  MOV EAX,dword ptr [EAX + 0x14]
004cd5a8  MOV dword ptr [ECX + 0x14],EAX
004cd5ab  MOV ECX,dword ptr [EDI + 0x1c]
004cd5ae  MOV byte ptr [EDI + 0x20],0x0
004cd5b2  MOV AL,byte ptr [ECX + 0x9]
004cd5b5  PUSH EBX
004cd5b6  XOR EBX,EBX
004cd5b8  TEST AL,AL
004cd5ba  JBE 0x004cd612
004cd5bc  PUSH EBP
004cd5bd  PUSH ESI
004cd5be  LEA EBP,[EDI + 0x24]
004cd5c1  MOV ECX,dword ptr [EBP]
004cd5c4  TEST ECX,ECX
004cd5c6  JZ 0x004cd601
004cd5c8  LEA EDX,[EDI + 0x4]
004cd5cb  PUSH EDX
004cd5cc  CALL 0x004cac10
004cd5d1  MOV ESI,dword ptr [EBP]
004cd5d4  CMP dword ptr [ESI],0x0
004cd5d7  JNZ 0x004cd5fd
004cd5d9  TEST ESI,ESI
004cd5db  JZ 0x004cd5f4
004cd5dd  MOV ECX,ESI
004cd5df  CALL 0x004cc6b0
004cd5e4  MOV ECX,dword ptr [0x009120c4]
004cd5ea  TEST ECX,ECX
004cd5ec  JZ 0x004cd5f4
004cd5ee  PUSH ESI
004cd5ef  CALL 0x0045f2e0
004cd5f4  MOV dword ptr [EBP],0x0
004cd5fb  JMP 0x004cd601
004cd5fd  MOV byte ptr [EDI + 0x20],0x1
004cd601  MOV EAX,dword ptr [EDI + 0x1c]
004cd604  MOVZX ECX,byte ptr [EAX + 0x9]
004cd608  INC EBX
004cd609  ADD EBP,0x4
004cd60c  CMP EBX,ECX
004cd60e  JL 0x004cd5c1
004cd610  POP ESI
004cd611  POP EBP
004cd612  POP EBX
004cd613  POP EDI
004cd614  RET 0x4
