007fa486  PUSH EBP
007fa487  MOV EBP,ESP
007fa489  SUB ESP,0xc0
007fa48f  PUSH ESI
007fa490  MOV ESI,ECX
007fa492  PUSH 0x3
007fa494  POP EAX
007fa495  MOV dword ptr [ESI + 0x8],EAX
007fa498  MOV dword ptr [ESI + 0xc],EAX
007fa49b  AND dword ptr [ESI + 0x10],0x0
007fa49f  LEA ECX,[EBP + 0xffffff40]
007fa4a5  MOV dword ptr [ESI],0x1
007fa4ab  CALL 0x007e9b30
007fa4b0  MOV EAX,dword ptr [EBP + 0x8]
007fa4b3  PUSH dword ptr [0x00909e5c]
007fa4b9  MOV dword ptr [EBP + 0xffffff58],EAX
007fa4bf  MOV EAX,dword ptr [EBP + 0xc]
007fa4c2  MOV dword ptr [EBP + 0xffffff5c],EAX
007fa4c8  LEA EAX,[EBP + 0xffffff40]
007fa4ce  PUSH EAX
007fa4cf  MOV dword ptr [EBP + 0xffffff44],0x2
007fa4d9  MOV dword ptr [EBP + 0xffffff54],0x6c
007fa4e3  CALL 0x007eada0
007fa4e8  POP ECX
007fa4e9  MOV dword ptr [ESI + 0x4],EAX
007fa4ec  POP ECX
007fa4ed  MOV EAX,ESI
007fa4ef  POP ESI
007fa4f0  LEAVE
007fa4f1  RET 0x8
