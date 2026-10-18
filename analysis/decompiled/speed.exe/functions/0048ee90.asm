0048ee90  SUB ESP,0x20
0048ee93  MOV EAX,dword ptr [ESP + 0x28]
0048ee97  MOV EDX,dword ptr [EAX + 0x4]
0048ee9a  PUSH ESI
0048ee9b  PUSH EDI
0048ee9c  MOV ESI,ECX
0048ee9e  MOV ECX,0x8
0048eea3  LEA EDI,[ESP + 0x8]
0048eea7  MOVSD.REP ES:EDI,ESI
0048eea9  MOV ECX,dword ptr [EAX]
0048eeab  MOV EDI,dword ptr [ESP + 0x8]
0048eeaf  MOV ESI,dword ptr [ESP + 0xc]
0048eeb3  AND ESI,EDX
0048eeb5  MOV EDX,dword ptr [ESP + 0x10]
0048eeb9  AND EDI,ECX
0048eebb  MOV ECX,dword ptr [EAX + 0x8]
0048eebe  AND EDX,ECX
0048eec0  MOV ECX,dword ptr [ESP + 0x14]
0048eec4  MOV dword ptr [ESP + 0x10],EDX
0048eec8  MOV EDX,dword ptr [EAX + 0xc]
0048eecb  AND ECX,EDX
0048eecd  MOV EDX,dword ptr [EAX + 0x14]
0048eed0  MOV dword ptr [ESP + 0x8],EDI
0048eed4  MOV EDI,dword ptr [ESP + 0x18]
0048eed8  MOV dword ptr [ESP + 0xc],ESI
0048eedc  MOV ESI,dword ptr [ESP + 0x1c]
0048eee0  AND ESI,EDX
0048eee2  MOV EDX,dword ptr [ESP + 0x20]
0048eee6  MOV dword ptr [ESP + 0x14],ECX
0048eeea  MOV ECX,dword ptr [EAX + 0x10]
0048eeed  AND EDI,ECX
0048eeef  MOV ECX,dword ptr [EAX + 0x18]
0048eef2  AND EDX,ECX
0048eef4  MOV dword ptr [ESP + 0x20],EDX
0048eef8  MOV EDX,dword ptr [EAX + 0x1c]
0048eefb  AND dword ptr [ESP + 0x24],EDX
0048eeff  MOV EAX,dword ptr [ESP + 0x2c]
0048ef03  MOV dword ptr [ESP + 0x18],EDI
0048ef07  MOV dword ptr [ESP + 0x1c],ESI
0048ef0b  MOV ECX,0x8
0048ef10  LEA ESI,[ESP + 0x8]
0048ef14  MOV EDI,EAX
0048ef16  MOVSD.REP ES:EDI,ESI
0048ef18  POP EDI
0048ef19  POP ESI
0048ef1a  ADD ESP,0x20
0048ef1d  RET 0x8
