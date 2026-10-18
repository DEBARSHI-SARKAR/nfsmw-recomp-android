007fe49d  PUSH EBP
007fe49e  MOV EBP,ESP
007fe4a0  SUB ESP,0x20
007fe4a3  MOV EDX,dword ptr [EBP + 0x8]
007fe4a6  MOV EAX,dword ptr [EDX + 0xb4]
007fe4ac  MOV ECX,dword ptr [EDX + 0x98]
007fe4b2  PUSH EBX
007fe4b3  MOV EBX,dword ptr [EBP + 0xc]
007fe4b6  PUSH ESI
007fe4b7  MOV ESI,dword ptr [EDX + 0x94]
007fe4bd  PUSH EDI
007fe4be  MOV EDI,dword ptr [EDX + 0x90]
007fe4c4  MOV dword ptr [EBP + -0x10],EAX
007fe4c7  MOV EAX,dword ptr [EDX + 0x78]
007fe4ca  ADD EAX,EBX
007fe4cc  LEA EDI,[EAX + EDI*0x8 + -0x1]
007fe4d0  MOV dword ptr [EBP + -0x4],EDI
007fe4d3  MOV EDI,EAX
007fe4d5  SUB EDI,dword ptr [EBP + -0x10]
007fe4d8  SHL ESI,0x3
007fe4db  MOV dword ptr [EBP + 0x8],EDI
007fe4de  MOV EDI,dword ptr [EBP + -0x4]
007fe4e1  INC EDI
007fe4e2  TEST ESI,ESI
007fe4e4  MOV dword ptr [EBP + -0x14],ECX
007fe4e7  MOV dword ptr [EBP + -0x8],EAX
007fe4ea  MOV dword ptr [EBP + -0xc],EDI
007fe4ed  JLE 0x007fe554
007fe4ef  MOV dword ptr [EBP + -0x18],ESI
007fe4f2  MOVZX EAX,byte ptr [EAX]
007fe4f5  MOV ECX,dword ptr [EBP + -0x10]
007fe4f8  MOV EDI,dword ptr [EBP + 0x8]
007fe4fb  MOV BL,AL
007fe4fd  MOV BH,BL
007fe4ff  MOV ESI,ECX
007fe501  SHR ECX,0x2
007fe504  MOV EAX,EBX
007fe506  SHL EAX,0x10
007fe509  MOV AX,BX
007fe50c  STOSD.REP ES:EDI
007fe50e  MOV ECX,ESI
007fe510  AND ECX,0x3
007fe513  STOSB.REP ES:EDI
007fe515  MOV EAX,dword ptr [EBP + -0x4]
007fe518  MOVZX EAX,byte ptr [EAX]
007fe51b  MOV EDI,dword ptr [EBP + -0xc]
007fe51e  MOV BL,AL
007fe520  MOV BH,BL
007fe522  MOV ECX,ESI
007fe524  SHR ECX,0x2
007fe527  MOV EAX,EBX
007fe529  SHL EAX,0x10
007fe52c  MOV AX,BX
007fe52f  STOSD.REP ES:EDI
007fe531  MOV ECX,ESI
007fe533  AND ECX,0x3
007fe536  STOSB.REP ES:EDI
007fe538  MOV ECX,dword ptr [EBP + -0x14]
007fe53b  MOV EAX,dword ptr [EBP + -0x8]
007fe53e  ADD dword ptr [EBP + -0x4],ECX
007fe541  ADD dword ptr [EBP + 0x8],ECX
007fe544  ADD dword ptr [EBP + -0xc],ECX
007fe547  ADD EAX,ECX
007fe549  DEC dword ptr [EBP + -0x18]
007fe54c  MOV dword ptr [EBP + -0x8],EAX
007fe54f  JNZ 0x007fe4f2
007fe551  MOV EBX,dword ptr [EBP + 0xc]
007fe554  MOV EAX,dword ptr [EDX + 0x94]
007fe55a  MOV EDI,dword ptr [EBP + -0x10]
007fe55d  MOV ESI,ECX
007fe55f  IMUL ESI,dword ptr [EBP + -0x10]
007fe563  LEA EAX,[EAX*0x8 + 0xffffffff]
007fe56a  IMUL EAX,ECX
007fe56d  ADD ESI,EBX
007fe56f  ADD EAX,ESI
007fe571  MOV dword ptr [EBP + -0x4],EAX
007fe574  ADD EAX,ECX
007fe576  TEST EDI,EDI
007fe578  MOV dword ptr [EBP + -0x8],ESI
007fe57b  MOV dword ptr [EBP + 0x8],EBX
007fe57e  JLE 0x007fe5c5
007fe580  MOV dword ptr [EBP + -0xc],EAX
007fe583  SUB dword ptr [EBP + -0xc],EBX
007fe586  MOV dword ptr [EBP + -0x18],EDI
007fe589  JMP 0x007fe58e
007fe58b  MOV ESI,dword ptr [EBP + -0x8]
007fe58e  MOV EDI,dword ptr [EBP + 0x8]
007fe591  MOV EAX,ECX
007fe593  SHR ECX,0x2
007fe596  MOVSD.REP ES:EDI,ESI
007fe598  MOV ECX,EAX
007fe59a  MOV EAX,dword ptr [EBP + -0xc]
007fe59d  AND ECX,0x3
007fe5a0  MOVSB.REP ES:EDI,ESI
007fe5a2  MOV EDI,dword ptr [EBP + 0x8]
007fe5a5  MOV ECX,dword ptr [EBP + -0x14]
007fe5a8  MOV ESI,dword ptr [EBP + -0x4]
007fe5ab  ADD EDI,EAX
007fe5ad  MOV EAX,ECX
007fe5af  SHR ECX,0x2
007fe5b2  MOVSD.REP ES:EDI,ESI
007fe5b4  MOV ECX,EAX
007fe5b6  AND ECX,0x3
007fe5b9  MOVSB.REP ES:EDI,ESI
007fe5bb  MOV ECX,EAX
007fe5bd  ADD dword ptr [EBP + 0x8],ECX
007fe5c0  DEC dword ptr [EBP + -0x18]
007fe5c3  JNZ 0x007fe58b
007fe5c5  MOV ECX,dword ptr [EDX + 0x94]
007fe5cb  MOV ESI,dword ptr [EDX + 0x7c]
007fe5ce  MOV EAX,dword ptr [EDX + 0x9c]
007fe5d4  SHL ECX,0x2
007fe5d7  MOV dword ptr [EBP + -0x1c],ECX
007fe5da  MOV ECX,dword ptr [EDX + 0x90]
007fe5e0  ADD ESI,EBX
007fe5e2  LEA ECX,[ESI + ECX*0x4 + -0x1]
007fe5e6  MOV dword ptr [EBP + -0x4],ECX
007fe5e9  MOV ECX,dword ptr [EBP + -0x10]
007fe5ec  SHR ECX,0x1
007fe5ee  MOV dword ptr [EBP + -0x10],ECX
007fe5f1  MOV EDI,ESI
007fe5f3  SUB EDI,ECX
007fe5f5  MOV ECX,dword ptr [EBP + -0x4]
007fe5f8  INC ECX
007fe5f9  MOV dword ptr [EBP + -0xc],ECX
007fe5fc  MOV ECX,dword ptr [EBP + -0x1c]
007fe5ff  TEST ECX,ECX
007fe601  MOV dword ptr [EBP + -0x14],EAX
007fe604  MOV dword ptr [EBP + -0x8],ESI
007fe607  MOV dword ptr [EBP + 0x8],EDI
007fe60a  JLE 0x007fe673
007fe60c  MOV dword ptr [EBP + -0x18],ECX
007fe60f  MOVZX EAX,byte ptr [ESI]
007fe612  MOV ECX,dword ptr [EBP + -0x10]
007fe615  MOV BL,AL
007fe617  MOV BH,BL
007fe619  MOV ESI,ECX
007fe61b  SHR ECX,0x2
007fe61e  MOV EAX,EBX
007fe620  SHL EAX,0x10
007fe623  MOV AX,BX
007fe626  STOSD.REP ES:EDI
007fe628  MOV ECX,ESI
007fe62a  AND ECX,0x3
007fe62d  STOSB.REP ES:EDI
007fe62f  MOV EAX,dword ptr [EBP + -0x4]
007fe632  MOVZX EAX,byte ptr [EAX]
007fe635  MOV EDI,dword ptr [EBP + -0xc]
007fe638  MOV BL,AL
007fe63a  MOV BH,BL
007fe63c  MOV ECX,ESI
007fe63e  SHR ECX,0x2
007fe641  MOV EAX,EBX
007fe643  SHL EAX,0x10
007fe646  MOV AX,BX
007fe649  STOSD.REP ES:EDI
007fe64b  MOV ECX,ESI
007fe64d  MOV ESI,dword ptr [EBP + -0x8]
007fe650  AND ECX,0x3
007fe653  STOSB.REP ES:EDI
007fe655  MOV EAX,dword ptr [EBP + -0x14]
007fe658  MOV EDI,dword ptr [EBP + 0x8]
007fe65b  ADD dword ptr [EBP + -0x4],EAX
007fe65e  ADD dword ptr [EBP + -0xc],EAX
007fe661  ADD ESI,EAX
007fe663  ADD EDI,EAX
007fe665  DEC dword ptr [EBP + -0x18]
007fe668  MOV dword ptr [EBP + -0x8],ESI
007fe66b  MOV dword ptr [EBP + 0x8],EDI
007fe66e  JNZ 0x007fe60f
007fe670  MOV EBX,dword ptr [EBP + 0xc]
007fe673  MOV ECX,dword ptr [EDX + 0x94]
007fe679  MOV EDI,dword ptr [EBP + -0x10]
007fe67c  MOV ESI,dword ptr [EDX + 0x7c]
007fe67f  SUB ESI,EDI
007fe681  IMUL EDI,EAX
007fe684  LEA ECX,[ECX*0x4 + 0xffffffff]
007fe68b  IMUL ECX,EAX
007fe68e  ADD ESI,EBX
007fe690  ADD ECX,ESI
007fe692  MOV dword ptr [EBP + -0x8],ESI
007fe695  SUB ESI,EDI
007fe697  MOV dword ptr [EBP + -0x20],EDI
007fe69a  MOV EDI,dword ptr [EBP + -0x10]
007fe69d  MOV dword ptr [EBP + -0x4],ECX
007fe6a0  ADD ECX,EAX
007fe6a2  TEST EDI,EDI
007fe6a4  MOV dword ptr [EBP + 0x8],ESI
007fe6a7  JLE 0x007fe6ee
007fe6a9  MOV dword ptr [EBP + -0xc],ECX
007fe6ac  SUB dword ptr [EBP + -0xc],ESI
007fe6af  MOV dword ptr [EBP + -0x18],EDI
007fe6b2  MOV EDI,dword ptr [EBP + 0x8]
007fe6b5  MOV ESI,dword ptr [EBP + -0x8]
007fe6b8  MOV ECX,EAX
007fe6ba  MOV EBX,ECX
007fe6bc  SHR ECX,0x2
007fe6bf  MOVSD.REP ES:EDI,ESI
007fe6c1  MOV ECX,EBX
007fe6c3  MOV EBX,dword ptr [EBP + 0x8]
007fe6c6  ADD dword ptr [EBP + 0x8],EAX
007fe6c9  AND ECX,0x3
007fe6cc  MOVSB.REP ES:EDI,ESI
007fe6ce  MOV EDI,dword ptr [EBP + -0xc]
007fe6d1  MOV ESI,dword ptr [EBP + -0x4]
007fe6d4  ADD EDI,EBX
007fe6d6  MOV ECX,EAX
007fe6d8  MOV EBX,ECX
007fe6da  SHR ECX,0x2
007fe6dd  MOVSD.REP ES:EDI,ESI
007fe6df  MOV ECX,EBX
007fe6e1  AND ECX,0x3
007fe6e4  DEC dword ptr [EBP + -0x18]
007fe6e7  MOVSB.REP ES:EDI,ESI
007fe6e9  JNZ 0x007fe6b2
007fe6eb  MOV EBX,dword ptr [EBP + 0xc]
007fe6ee  MOV ESI,dword ptr [EDX + 0x80]
007fe6f4  MOV ECX,dword ptr [EDX + 0x90]
007fe6fa  ADD ESI,EBX
007fe6fc  LEA ECX,[ESI + ECX*0x4 + -0x1]
007fe700  MOV EDI,ESI
007fe702  SUB EDI,dword ptr [EBP + -0x10]
007fe705  MOV dword ptr [EBP + -0x4],ECX
007fe708  INC ECX
007fe709  MOV dword ptr [EBP + -0xc],ECX
007fe70c  MOV ECX,dword ptr [EBP + -0x1c]
007fe70f  TEST ECX,ECX
007fe711  MOV dword ptr [EBP + -0x8],ESI
007fe714  MOV dword ptr [EBP + 0x8],EDI
007fe717  JLE 0x007fe780
007fe719  MOV dword ptr [EBP + -0x1c],ECX
007fe71c  MOVZX EAX,byte ptr [ESI]
007fe71f  MOV ECX,dword ptr [EBP + -0x10]
007fe722  MOV BL,AL
007fe724  MOV BH,BL
007fe726  MOV ESI,ECX
007fe728  SHR ECX,0x2
007fe72b  MOV EAX,EBX
007fe72d  SHL EAX,0x10
007fe730  MOV AX,BX
007fe733  STOSD.REP ES:EDI
007fe735  MOV ECX,ESI
007fe737  AND ECX,0x3
007fe73a  STOSB.REP ES:EDI
007fe73c  MOV EAX,dword ptr [EBP + -0x4]
007fe73f  MOVZX EAX,byte ptr [EAX]
007fe742  MOV EDI,dword ptr [EBP + -0xc]
007fe745  MOV BL,AL
007fe747  MOV BH,BL
007fe749  MOV ECX,ESI
007fe74b  SHR ECX,0x2
007fe74e  MOV EAX,EBX
007fe750  SHL EAX,0x10
007fe753  MOV AX,BX
007fe756  STOSD.REP ES:EDI
007fe758  MOV ECX,ESI
007fe75a  MOV ESI,dword ptr [EBP + -0x8]
007fe75d  AND ECX,0x3
007fe760  STOSB.REP ES:EDI
007fe762  MOV EAX,dword ptr [EBP + -0x14]
007fe765  MOV EDI,dword ptr [EBP + 0x8]
007fe768  ADD dword ptr [EBP + -0x4],EAX
007fe76b  ADD dword ptr [EBP + -0xc],EAX
007fe76e  ADD ESI,EAX
007fe770  ADD EDI,EAX
007fe772  DEC dword ptr [EBP + -0x1c]
007fe775  MOV dword ptr [EBP + -0x8],ESI
007fe778  MOV dword ptr [EBP + 0x8],EDI
007fe77b  JNZ 0x007fe71c
007fe77d  MOV EBX,dword ptr [EBP + 0xc]
007fe780  MOV EDI,dword ptr [EBP + -0x10]
007fe783  SUB EBX,EDI
007fe785  ADD EBX,dword ptr [EDX + 0x80]
007fe78b  MOV EDX,dword ptr [EDX + 0x94]
007fe791  LEA EDX,[EDX*0x4 + 0xffffffff]
007fe798  IMUL EDX,EAX
007fe79b  MOV ECX,EBX
007fe79d  ADD EDX,ECX
007fe79f  MOV dword ptr [EBP + -0x8],ECX
007fe7a2  SUB ECX,dword ptr [EBP + -0x20]
007fe7a5  TEST EDI,EDI
007fe7a7  MOV dword ptr [EBP + 0x8],ECX
007fe7aa  LEA ESI,[EDX + EAX*0x1]
007fe7ad  JLE 0x007fe7f0
007fe7af  MOV dword ptr [EBP + -0xc],ESI
007fe7b2  SUB dword ptr [EBP + -0xc],ECX
007fe7b5  MOV dword ptr [EBP + 0xc],EDI
007fe7b8  MOV EDI,dword ptr [EBP + 0x8]
007fe7bb  MOV ESI,dword ptr [EBP + -0x8]
007fe7be  MOV ECX,EAX
007fe7c0  MOV EBX,ECX
007fe7c2  SHR ECX,0x2
007fe7c5  MOVSD.REP ES:EDI,ESI
007fe7c7  MOV ECX,EBX
007fe7c9  MOV EBX,dword ptr [EBP + 0x8]
007fe7cc  ADD dword ptr [EBP + 0x8],EAX
007fe7cf  AND ECX,0x3
007fe7d2  MOVSB.REP ES:EDI,ESI
007fe7d4  MOV EDI,dword ptr [EBP + -0xc]
007fe7d7  ADD EDI,EBX
007fe7d9  MOV ECX,EAX
007fe7db  MOV EBX,ECX
007fe7dd  SHR ECX,0x2
007fe7e0  MOV ESI,EDX
007fe7e2  MOVSD.REP ES:EDI,ESI
007fe7e4  MOV ECX,EBX
007fe7e6  AND ECX,0x3
007fe7e9  DEC dword ptr [EBP + 0xc]
007fe7ec  MOVSB.REP ES:EDI,ESI
007fe7ee  JNZ 0x007fe7b8
007fe7f0  POP EDI
007fe7f1  POP ESI
007fe7f2  POP EBX
007fe7f3  LEAVE
007fe7f4  RET
