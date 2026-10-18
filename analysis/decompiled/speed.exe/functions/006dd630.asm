006dd630  PUSH EBP
006dd631  MOV EBP,ESP
006dd633  PUSH -0x1
006dd635  PUSH 0x87e4f1
006dd63a  MOV EAX,FS:[0x0]
006dd640  PUSH EAX
006dd641  MOV dword ptr FS:[0x0],ESP
006dd648  SUB ESP,0x10
006dd64b  PUSH EBX
006dd64c  PUSH ESI
006dd64d  PUSH EDI
006dd64e  MOV dword ptr [EBP + -0x10],ESP
006dd651  PUSH 0x890f10
006dd656  MOV dword ptr [EBP + -0x18],ECX
006dd659  PUSH 0x28
006dd65b  MOV ECX,0x925b30
006dd660  CALL 0x005d29d0
006dd665  MOV ESI,EAX
006dd667  MOV dword ptr [EBP + -0x14],ESI
006dd66a  MOV dword ptr [EBP + -0x4],0x0
006dd671  MOV dword ptr [EBP + -0x1c],ESI
006dd674  TEST ESI,ESI
006dd676  MOV byte ptr [EBP + -0x4],0x1
006dd67a  JZ 0x006dd6ab
006dd67c  MOV EAX,dword ptr [EBP + 0x8]
006dd67f  MOV ECX,dword ptr [EBP + 0xc]
006dd682  MOV EDX,dword ptr [EBP + 0x10]
006dd685  MOV dword ptr [ESI],EAX
006dd687  MOV EAX,dword ptr [EBP + 0x14]
006dd68a  MOV dword ptr [ESI + 0x4],ECX
006dd68d  MOV dword ptr [ESI + 0x8],EDX
006dd690  MOV ECX,dword ptr [EAX]
006dd692  ADD EAX,0x4
006dd695  MOV dword ptr [ESI + 0xc],ECX
006dd698  PUSH EAX
006dd699  LEA ECX,[ESI + 0x10]
006dd69c  CALL 0x006be360
006dd6a1  MOV DL,byte ptr [EBP + 0x18]
006dd6a4  MOV byte ptr [ESI + 0x24],DL
006dd6a7  MOV byte ptr [ESI + 0x25],0x0
006dd6ab  MOV ECX,dword ptr [EBP + -0xc]
006dd6ae  POP EDI
006dd6af  MOV EAX,ESI
006dd6b1  POP ESI
006dd6b2  MOV dword ptr FS:[0x0],ECX
006dd6b9  POP EBX
006dd6ba  MOV ESP,EBP
006dd6bc  POP EBP
006dd6bd  RET 0x14
