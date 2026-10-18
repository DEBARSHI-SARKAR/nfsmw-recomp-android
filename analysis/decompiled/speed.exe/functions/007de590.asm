007de590  PUSH EBP
007de591  MOV EBP,ESP
007de593  SUB ESP,0x18
007de596  PUSH ESI
007de597  MOV EAX,dword ptr [EBP + 0xc]
007de59a  CDQ
007de59b  AND EDX,0x1f
007de59e  ADD EAX,EDX
007de5a0  SAR EAX,0x5
007de5a3  MOV dword ptr [EBP + -0x10],EAX
007de5a6  MOV EAX,dword ptr [EBP + 0xc]
007de5a9  AND EAX,0x8000001f
007de5ae  JNS 0x007de5b5
007de5b0  DEC EAX
007de5b1  OR EAX,0xffffffe0
007de5b4  INC EAX
007de5b5  MOV dword ptr [EBP + -0x18],EAX
007de5b8  OR EDX,0xffffffff
007de5bb  MOV ECX,dword ptr [EBP + -0x18]
007de5be  SHL EDX,CL
007de5c0  NOT EDX
007de5c2  MOV dword ptr [EBP + -0xc],EDX
007de5c5  MOV dword ptr [EBP + -0x4],0x0
007de5cc  MOV dword ptr [EBP + -0x8],0x0
007de5d3  JMP 0x007de5de
007de5d5  MOV EAX,dword ptr [EBP + -0x8]
007de5d8  ADD EAX,0x1
007de5db  MOV dword ptr [EBP + -0x8],EAX
007de5de  CMP dword ptr [EBP + -0x8],0x3
007de5e2  JGE 0x007de631
007de5e4  MOV ECX,dword ptr [EBP + -0x8]
007de5e7  MOV EDX,dword ptr [EBP + 0x8]
007de5ea  MOV EAX,dword ptr [EDX + ECX*0x4]
007de5ed  AND EAX,dword ptr [EBP + -0xc]
007de5f0  MOV dword ptr [EBP + -0x14],EAX
007de5f3  MOV ECX,dword ptr [EBP + -0x8]
007de5f6  MOV EDX,dword ptr [EBP + 0x8]
007de5f9  MOV EAX,dword ptr [EDX + ECX*0x4]
007de5fc  MOV ECX,dword ptr [EBP + -0x18]
007de5ff  SHR EAX,CL
007de601  MOV ECX,dword ptr [EBP + -0x8]
007de604  MOV EDX,dword ptr [EBP + 0x8]
007de607  MOV dword ptr [EDX + ECX*0x4],EAX
007de60a  MOV EAX,dword ptr [EBP + -0x8]
007de60d  MOV ECX,dword ptr [EBP + 0x8]
007de610  MOV EDX,dword ptr [ECX + EAX*0x4]
007de613  OR EDX,dword ptr [EBP + -0x4]
007de616  MOV EAX,dword ptr [EBP + -0x8]
007de619  MOV ECX,dword ptr [EBP + 0x8]
007de61c  MOV dword ptr [ECX + EAX*0x4],EDX
007de61f  MOV ECX,0x20
007de624  SUB ECX,dword ptr [EBP + -0x18]
007de627  MOV EDX,dword ptr [EBP + -0x14]
007de62a  SHL EDX,CL
007de62c  MOV dword ptr [EBP + -0x4],EDX
007de62f  JMP 0x007de5d5
007de631  MOV dword ptr [EBP + -0x8],0x2
007de638  JMP 0x007de643
007de63a  MOV EAX,dword ptr [EBP + -0x8]
007de63d  SUB EAX,0x1
007de640  MOV dword ptr [EBP + -0x8],EAX
007de643  CMP dword ptr [EBP + -0x8],0x0
007de647  JL 0x007de677
007de649  MOV ECX,dword ptr [EBP + -0x8]
007de64c  CMP ECX,dword ptr [EBP + -0x10]
007de64f  JL 0x007de668
007de651  MOV EDX,dword ptr [EBP + -0x8]
007de654  SUB EDX,dword ptr [EBP + -0x10]
007de657  MOV EAX,dword ptr [EBP + -0x8]
007de65a  MOV ECX,dword ptr [EBP + 0x8]
007de65d  MOV ESI,dword ptr [EBP + 0x8]
007de660  MOV EDX,dword ptr [ESI + EDX*0x4]
007de663  MOV dword ptr [ECX + EAX*0x4],EDX
007de666  JMP 0x007de675
007de668  MOV EAX,dword ptr [EBP + -0x8]
007de66b  MOV ECX,dword ptr [EBP + 0x8]
007de66e  MOV dword ptr [ECX + EAX*0x4],0x0
007de675  JMP 0x007de63a
007de677  POP ESI
007de678  MOV ESP,EBP
007de67a  POP EBP
007de67b  RET
