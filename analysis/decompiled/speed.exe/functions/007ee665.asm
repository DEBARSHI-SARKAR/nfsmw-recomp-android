007ee665  PUSH ESI
007ee666  MOV ESI,ECX
007ee668  PUSH EDI
007ee669  XOR EDI,EDI
007ee66b  LEA ECX,[ESI + 0xc]
007ee66e  MOV dword ptr [ESI + 0x4],EDI
007ee671  MOV dword ptr [ESI],EDI
007ee673  MOV dword ptr [ESI + 0x8],EDI
007ee676  CALL 0x007ec196
007ee67b  LEA ECX,[ESI + 0x34]
007ee67e  MOV dword ptr [ESI + 0x2c],EDI
007ee681  MOV dword ptr [ESI + 0x28],EDI
007ee684  MOV dword ptr [ESI + 0x30],EDI
007ee687  CALL 0x007ec196
007ee68c  LEA ECX,[ESI + 0x54]
007ee68f  CALL 0x007ec196
007ee694  LEA EAX,[ESI + 0x7c]
007ee697  MOV dword ptr [ESI + 0x74],EDI
007ee69a  MOV dword ptr [ESI + 0x70],EDI
007ee69d  MOV dword ptr [ESI + 0x78],EDI
007ee6a0  MOV dword ptr [EAX + 0x4],EDI
007ee6a3  MOV dword ptr [EAX],EDI
007ee6a5  MOV dword ptr [EAX + 0x8],EDI
007ee6a8  POP EDI
007ee6a9  MOV EAX,ESI
007ee6ab  POP ESI
007ee6ac  RET
