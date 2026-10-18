007ca628  MOV EDX,dword ptr [ESP + 0x4]
007ca62c  MOV dword ptr [EDX],EBP
007ca62e  MOV dword ptr [EDX + 0x4],EBX
007ca631  MOV dword ptr [EDX + 0x8],EDI
007ca634  MOV dword ptr [EDX + 0xc],ESI
007ca637  MOV dword ptr [EDX + 0x10],ESP
007ca63a  MOV EAX,dword ptr [ESP]
007ca63d  MOV dword ptr [EDX + 0x14],EAX
007ca640  MOV dword ptr [EDX + 0x20],0x56433230
007ca647  MOV dword ptr [EDX + 0x24],0x0
007ca64e  MOV EAX,FS:[0x0]
007ca654  MOV dword ptr [EDX + 0x18],EAX
007ca657  CMP EAX,-0x1
007ca65a  JNZ 0x007ca665
007ca65c  MOV dword ptr [EDX + 0x1c],0xffffffff
007ca663  JMP 0x007ca6a0
007ca665  MOV ECX,dword ptr [ESP + 0x8]
007ca669  OR ECX,ECX
007ca66b  JZ 0x007ca677
007ca66d  MOV EAX,dword ptr [ESP + 0xc]
007ca671  MOV dword ptr [EDX + 0x24],EAX
007ca674  DEC ECX
007ca675  JNZ 0x007ca67f
007ca677  MOV EAX,dword ptr [EAX + 0xc]
007ca67a  MOV dword ptr [EDX + 0x1c],EAX
007ca67d  JMP 0x007ca6a0
007ca67f  MOV EAX,dword ptr [ESP + 0x10]
007ca683  MOV dword ptr [EDX + 0x1c],EAX
007ca686  DEC ECX
007ca687  JZ 0x007ca6a0
007ca689  PUSH ESI
007ca68a  PUSH EDI
007ca68b  LEA ESI,[ESP + 0x1c]
007ca68f  LEA EDI,[EDX + 0x28]
007ca692  CMP ECX,0x6
007ca695  JBE 0x007ca69c
007ca697  MOV ECX,0x6
007ca69c  MOVSD.REP ES:EDI,ESI
007ca69e  POP EDI
007ca69f  POP ESI
007ca6a0  SUB EAX,EAX
007ca6a2  RET
