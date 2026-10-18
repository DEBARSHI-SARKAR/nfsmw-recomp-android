007e0470  PUSH EBP
007e0471  MOV EBP,ESP
007e0473  PUSH ECX
007e0474  MOV dword ptr [EBP + -0x4],0x0
007e047b  CMP dword ptr [EBP + 0x18],0x0
007e047f  JZ 0x007e0497
007e0481  MOV EAX,dword ptr [EBP + 0x14]
007e0484  PUSH EAX
007e0485  MOV ECX,dword ptr [EBP + 0x10]
007e0488  PUSH ECX
007e0489  MOV EDX,dword ptr [EBP + 0x8]
007e048c  PUSH EDX
007e048d  CALL 0x007e0520
007e0492  ADD ESP,0xc
007e0495  JMP 0x007e0514
007e0497  MOV EAX,dword ptr [EBP + 0x14]
007e049a  MOV ECX,dword ptr [EBP + 0xc]
007e049d  CMP ECX,dword ptr [EAX]
007e049f  JNC 0x007e050b
007e04a1  MOV EDX,dword ptr [EBP + 0xc]
007e04a4  SUB EDX,0x1
007e04a7  MOV dword ptr [EBP + 0xc],EDX
007e04aa  JMP 0x007e04b5
007e04ac  MOV EAX,dword ptr [EBP + 0xc]
007e04af  SUB EAX,0x1
007e04b2  MOV dword ptr [EBP + 0xc],EAX
007e04b5  MOV ECX,dword ptr [EBP + 0xc]
007e04b8  ADD ECX,0x1
007e04bb  JZ 0x007e04ef
007e04bd  MOV EAX,dword ptr [EBP + 0x8]
007e04c0  CDQ
007e04c1  MOV ECX,0xa
007e04c6  IDIV ECX
007e04c8  ADD EDX,0x30
007e04cb  MOV EAX,dword ptr [EBP + 0x10]
007e04ce  MOV ECX,dword ptr [EAX]
007e04d0  MOV EAX,dword ptr [EBP + 0xc]
007e04d3  MOV byte ptr [ECX + EAX*0x1],DL
007e04d6  MOV EAX,dword ptr [EBP + 0x8]
007e04d9  CDQ
007e04da  MOV ECX,0xa
007e04df  IDIV ECX
007e04e1  MOV dword ptr [EBP + 0x8],EAX
007e04e4  MOV EDX,dword ptr [EBP + -0x4]
007e04e7  ADD EDX,0x1
007e04ea  MOV dword ptr [EBP + -0x4],EDX
007e04ed  JMP 0x007e04ac
007e04ef  MOV EAX,dword ptr [EBP + 0x10]
007e04f2  MOV ECX,dword ptr [EAX]
007e04f4  ADD ECX,dword ptr [EBP + -0x4]
007e04f7  MOV EDX,dword ptr [EBP + 0x10]
007e04fa  MOV dword ptr [EDX],ECX
007e04fc  MOV EAX,dword ptr [EBP + 0x14]
007e04ff  MOV ECX,dword ptr [EAX]
007e0501  SUB ECX,dword ptr [EBP + -0x4]
007e0504  MOV EDX,dword ptr [EBP + 0x14]
007e0507  MOV dword ptr [EDX],ECX
007e0509  JMP 0x007e0514
007e050b  MOV EAX,dword ptr [EBP + 0x14]
007e050e  MOV dword ptr [EAX],0x0
007e0514  MOV ESP,EBP
007e0516  POP EBP
007e0517  RET
