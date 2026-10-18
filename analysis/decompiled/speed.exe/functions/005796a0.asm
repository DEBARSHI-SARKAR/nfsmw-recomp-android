005796a0  PUSH EBX
005796a1  PUSH ESI
005796a2  MOV ESI,ECX
005796a4  MOV dword ptr [ESI + 0x4],0x3f800000
005796ab  MOV byte ptr [ESI + 0x10],0x0
005796af  MOV BL,0x1
005796b1  PUSH EDI
005796b2  XOR EDI,EDI
005796b4  MOV dword ptr [ESI + 0x8],EDI
005796b7  MOV dword ptr [ESI + 0xc],EDI
005796ba  MOV byte ptr [ESI + 0x14],BL
005796bd  MOV byte ptr [ESI + 0x15],BL
005796c0  MOV byte ptr [ESI + 0x16],BL
005796c3  MOV byte ptr [ESI + 0x18],BL
005796c6  MOV byte ptr [ESI + 0x19],0x0
005796ca  MOV dword ptr [ESI + 0x1c],0xffffffff
005796d1  MOV byte ptr [ESI + 0x20],BL
005796d4  MOV byte ptr [ESI + 0x21],0x2
005796d8  MOV byte ptr [ESI + 0x22],0x0
005796dc  MOV byte ptr [ESI + 0x23],BL
005796df  MOV dword ptr [ESI + 0x24],0x42ff0000
005796e6  CMP dword ptr [0x008f41c0],EDI
005796ec  SETNZ AL
005796ef  LEA ECX,[ESI + 0x28]
005796f2  MOV byte ptr [ESI + 0x17],AL
005796f5  CALL 0x0056d5e0
005796fa  LEA EAX,[ESI + 0x5c]
005796fd  ADD EAX,0x14
00579700  MOV ECX,0x2
00579705  MOV dword ptr [EAX + -0x8],ECX
00579708  MOV byte ptr [EAX + -0x14],BL
0057970b  MOV byte ptr [EAX + -0x13],BL
0057970e  MOV byte ptr [EAX + -0x12],BL
00579711  MOV byte ptr [EAX + -0x11],BL
00579714  MOV byte ptr [EAX + -0xf],BL
00579717  MOV byte ptr [EAX + -0xe],BL
0057971a  MOV byte ptr [EAX + -0x10],BL
0057971d  MOV byte ptr [EAX + -0xd],BL
00579720  MOV dword ptr [EAX + -0xc],EDI
00579723  MOV byte ptr [EAX + -0x4],0x0
00579727  MOV byte ptr [EAX + -0x3],0x0
0057972b  MOV byte ptr [EAX + -0x2],BL
0057972e  MOV dword ptr [EAX + 0xc],ECX
00579731  MOV ECX,ESI
00579733  MOV byte ptr [EAX],BL
00579735  MOV byte ptr [EAX + 0x1],BL
00579738  MOV byte ptr [EAX + 0x2],BL
0057973b  MOV byte ptr [EAX + 0x3],BL
0057973e  MOV byte ptr [EAX + 0x5],BL
00579741  MOV byte ptr [EAX + 0x6],BL
00579744  MOV byte ptr [EAX + 0x4],BL
00579747  MOV byte ptr [EAX + 0x7],BL
0057974a  MOV dword ptr [EAX + 0x8],EDI
0057974d  MOV byte ptr [EAX + 0x10],0x0
00579751  MOV byte ptr [EAX + 0x11],0x0
00579755  MOV byte ptr [EAX + 0x12],BL
00579758  CALL 0x0056d660
0057975d  POP EDI
0057975e  MOV EAX,ESI
00579760  POP ESI
00579761  POP EBX
00579762  RET
