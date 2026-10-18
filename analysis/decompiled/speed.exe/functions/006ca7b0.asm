006ca7b0  MOV EAX,dword ptr [ESP + 0x8]
006ca7b4  SUB ESP,0x5c
006ca7b7  PUSH EBX
006ca7b8  MOV EBX,dword ptr [ESP + 0x64]
006ca7bc  PUSH EBP
006ca7bd  MOV EBP,dword ptr [ESP + 0x70]
006ca7c1  LEA EDX,[EAX + EBX*0x8 + 0x10]
006ca7c5  PUSH ESI
006ca7c6  LEA ESI,[ECX + EDX*0x4]
006ca7c9  MOV EDX,dword ptr [ESI]
006ca7cb  PUSH EDI
006ca7cc  XOR EDI,EDI
006ca7ce  TEST EDX,EDX
006ca7d0  JZ 0x006ca7da
006ca7d2  PUSH EBP
006ca7d3  PUSH EAX
006ca7d4  PUSH EBX
006ca7d5  CALL 0x006ca560
006ca7da  MOV EDX,dword ptr [EBP]
006ca7dd  TEST EDX,EDX
006ca7df  JZ 0x006ca91b
006ca7e5  MOV EAX,dword ptr [ESP + 0x98]
006ca7ec  MOV ECX,dword ptr [ESP + 0x9c]
006ca7f3  MOV dword ptr [ESP + 0x10],EAX
006ca7f7  MOV EAX,dword ptr [ESP + 0xa0]
006ca7fe  MOV dword ptr [ESP + 0x18],EAX
006ca802  MOV EAX,dword ptr [ESP + 0xa8]
006ca809  MOV dword ptr [ESP + 0x14],ECX
006ca80d  MOV ECX,dword ptr [ESP + 0xa4]
006ca814  MOV dword ptr [ESP + 0x74],EAX
006ca818  MOV EAX,dword ptr [ESP + 0xb4]
006ca81f  MOV dword ptr [ESP + 0x1c],ECX
006ca823  MOV ECX,dword ptr [ESP + 0xb0]
006ca82a  MOV dword ptr [ESP + 0x28],EAX
006ca82e  MOV EAX,dword ptr [ESP + 0xbc]
006ca835  MOV dword ptr [ESP + 0x24],ECX
006ca839  MOV ECX,dword ptr [ESP + 0xb8]
006ca840  MOV dword ptr [ESP + 0x30],EAX
006ca844  MOV dword ptr [ESP + 0x2c],ECX
006ca848  XOR EAX,EAX
006ca84a  MOV ECX,0xe
006ca84f  LEA EDI,[ESP + 0x34]
006ca853  STOSD.REP ES:EDI
006ca855  MOV EAX,dword ptr [ESP + 0x80]
006ca85c  MOV ECX,dword ptr [ESP + 0x7c]
006ca860  MOV dword ptr [ESP + 0x3c],EAX
006ca864  MOV EAX,dword ptr [ESP + 0x88]
006ca86b  MOV dword ptr [ESP + 0x44],EAX
006ca86f  MOV EAX,dword ptr [ESP + 0x90]
006ca876  MOV dword ptr [ESP + 0x4c],EAX
006ca87a  MOV dword ptr [ESP + 0x38],ECX
006ca87e  MOV ECX,dword ptr [ESP + 0x84]
006ca885  MOV dword ptr [ESP + 0x40],ECX
006ca889  MOV ECX,dword ptr [ESP + 0x8c]
006ca890  LEA EAX,[ESP + 0x10]
006ca894  MOV dword ptr [ESP + 0x54],EAX
006ca898  MOV dword ptr [ESP + 0x48],ECX
006ca89c  MOV ECX,dword ptr [ESP + 0x94]
006ca8a3  LEA EAX,[ESP + 0x20]
006ca8a7  MOV dword ptr [ESP + 0x5c],EAX
006ca8ab  MOV EAX,dword ptr [ESP + 0xac]
006ca8b2  PUSH 0x0
006ca8b4  MOV dword ptr [ESP + 0x6c],EAX
006ca8b8  MOV dword ptr [ESP + 0x54],ECX
006ca8bc  PUSH ESI
006ca8bd  LEA EAX,[ESP + 0x3c]
006ca8c1  PUSH EAX
006ca8c2  MOV EAX,dword ptr [ESP + 0xcc]
006ca8c9  LEA ECX,[ESP + 0x24]
006ca8cd  MOV dword ptr [ESP + 0x64],ECX
006ca8d1  LEA ECX,[ESP + 0x80]
006ca8d8  PUSH EAX
006ca8d9  MOV dword ptr [ESP + 0x30],0x14
006ca8e1  MOV dword ptr [ESP + 0x44],0x38
006ca8e9  MOV dword ptr [ESP + 0x70],0x4
006ca8f1  MOV dword ptr [ESP + 0x74],ECX
006ca8f5  MOV ECX,dword ptr [EDX]
006ca8f7  PUSH EDX
006ca8f8  CALL dword ptr [ECX + 0x48]
006ca8fb  MOV EDI,EAX
006ca8fd  TEST EDI,EDI
006ca8ff  JGE 0x006ca91b
006ca901  PUSH EBX
006ca902  PUSH 0x8af4e4
006ca907  CALL 0x006ca3d0
006ca90c  ADD ESP,0x8
006ca90f  MOV EAX,EDI
006ca911  POP EDI
006ca912  POP ESI
006ca913  POP EBP
006ca914  POP EBX
006ca915  ADD ESP,0x5c
006ca918  RET 0x54
006ca91b  CMP dword ptr [ESI],0x0
006ca91e  MOV EAX,0x80004005
006ca923  JZ 0x006ca927
006ca925  MOV EAX,EDI
006ca927  POP EDI
006ca928  POP ESI
006ca929  POP EBP
006ca92a  POP EBX
006ca92b  ADD ESP,0x5c
006ca92e  RET 0x54
