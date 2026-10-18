007fe7f5  PUSH EBP
007fe7f6  MOV EBP,ESP
007fe7f8  PUSH ECX
007fe7f9  MOV EDX,dword ptr [EBP + 0x8]
007fe7fc  MOV EAX,dword ptr [EBP + 0xc]
007fe7ff  AND dword ptr [EBP + 0xc],0x0
007fe803  PUSH EBX
007fe804  PUSH ESI
007fe805  MOV ESI,dword ptr [EAX + 0x18]
007fe808  PUSH EDI
007fe809  MOV EDI,dword ptr [EDX + 0x78]
007fe80c  ADD EDI,dword ptr [EBP + 0x10]
007fe80f  CMP dword ptr [EAX + 0x4],0x0
007fe813  MOV dword ptr [EBP + -0x4],ESI
007fe816  MOV dword ptr [EBP + 0x8],EDI
007fe819  JLE 0x007fe84b
007fe81b  MOV ECX,dword ptr [EAX]
007fe81d  MOV EBX,ECX
007fe81f  SHR ECX,0x2
007fe822  MOVSD.REP ES:EDI,ESI
007fe824  MOV ECX,EBX
007fe826  AND ECX,0x3
007fe829  MOVSB.REP ES:EDI,ESI
007fe82b  MOV ESI,dword ptr [EBP + -0x4]
007fe82e  MOV EDI,dword ptr [EBP + 0x8]
007fe831  ADD ESI,dword ptr [EAX + 0x8]
007fe834  ADD EDI,dword ptr [EDX + 0x98]
007fe83a  INC dword ptr [EBP + 0xc]
007fe83d  MOV ECX,dword ptr [EBP + 0xc]
007fe840  CMP ECX,dword ptr [EAX + 0x4]
007fe843  MOV dword ptr [EBP + -0x4],ESI
007fe846  MOV dword ptr [EBP + 0x8],EDI
007fe849  JL 0x007fe81b
007fe84b  MOV EDI,dword ptr [EDX + 0x7c]
007fe84e  ADD EDI,dword ptr [EBP + 0x10]
007fe851  MOV ESI,dword ptr [EAX + 0x1c]
007fe854  AND dword ptr [EBP + 0xc],0x0
007fe858  CMP dword ptr [EAX + 0x10],0x0
007fe85c  MOV dword ptr [EBP + -0x4],ESI
007fe85f  MOV dword ptr [EBP + 0x8],EDI
007fe862  JLE 0x007fe895
007fe864  MOV ECX,dword ptr [EAX + 0xc]
007fe867  MOV EBX,ECX
007fe869  SHR ECX,0x2
007fe86c  MOVSD.REP ES:EDI,ESI
007fe86e  MOV ECX,EBX
007fe870  AND ECX,0x3
007fe873  MOVSB.REP ES:EDI,ESI
007fe875  MOV ESI,dword ptr [EBP + -0x4]
007fe878  MOV EDI,dword ptr [EBP + 0x8]
007fe87b  ADD ESI,dword ptr [EAX + 0x14]
007fe87e  ADD EDI,dword ptr [EDX + 0x9c]
007fe884  INC dword ptr [EBP + 0xc]
007fe887  MOV ECX,dword ptr [EBP + 0xc]
007fe88a  CMP ECX,dword ptr [EAX + 0x10]
007fe88d  MOV dword ptr [EBP + -0x4],ESI
007fe890  MOV dword ptr [EBP + 0x8],EDI
007fe893  JL 0x007fe864
007fe895  MOV EDI,dword ptr [EDX + 0x80]
007fe89b  ADD EDI,dword ptr [EBP + 0x10]
007fe89e  MOV ESI,dword ptr [EAX + 0x20]
007fe8a1  AND dword ptr [EBP + 0xc],0x0
007fe8a5  CMP dword ptr [EAX + 0x10],0x0
007fe8a9  MOV dword ptr [EBP + -0x4],ESI
007fe8ac  MOV dword ptr [EBP + 0x8],EDI
007fe8af  JLE 0x007fe8e2
007fe8b1  MOV ECX,dword ptr [EAX + 0xc]
007fe8b4  MOV EBX,ECX
007fe8b6  SHR ECX,0x2
007fe8b9  MOVSD.REP ES:EDI,ESI
007fe8bb  MOV ECX,EBX
007fe8bd  AND ECX,0x3
007fe8c0  MOVSB.REP ES:EDI,ESI
007fe8c2  MOV ESI,dword ptr [EBP + -0x4]
007fe8c5  MOV EDI,dword ptr [EBP + 0x8]
007fe8c8  ADD ESI,dword ptr [EAX + 0x14]
007fe8cb  ADD EDI,dword ptr [EDX + 0x9c]
007fe8d1  INC dword ptr [EBP + 0xc]
007fe8d4  MOV ECX,dword ptr [EBP + 0xc]
007fe8d7  CMP ECX,dword ptr [EAX + 0x10]
007fe8da  MOV dword ptr [EBP + -0x4],ESI
007fe8dd  MOV dword ptr [EBP + 0x8],EDI
007fe8e0  JL 0x007fe8b1
007fe8e2  PUSH dword ptr [EBP + 0x10]
007fe8e5  PUSH EDX
007fe8e6  CALL 0x007fe49d
007fe8eb  POP ECX
007fe8ec  POP ECX
007fe8ed  POP EDI
007fe8ee  POP ESI
007fe8ef  POP EBX
007fe8f0  LEAVE
007fe8f1  RET
