0068cee0  SUB ESP,0x24
0068cee3  PUSH ESI
0068cee4  PUSH EDI
0068cee5  XOR AL,AL
0068cee7  LEA EDI,[ECX + 0x8]
0068ceea  MOV ECX,0x9
0068ceef  LEA ESI,[ESP + 0x8]
0068cef3  MOV dword ptr [ESP + 0x8],0x0
0068cefb  MOV dword ptr [ESP + 0xc],0x0
0068cf03  MOV dword ptr [ESP + 0x10],0x0
0068cf0b  MOV dword ptr [ESP + 0x14],0x0
0068cf13  MOV dword ptr [ESP + 0x18],0x0
0068cf1b  MOV dword ptr [ESP + 0x1c],0x0
0068cf23  MOV dword ptr [ESP + 0x20],0x0
0068cf2b  MOV dword ptr [ESP + 0x24],0x0
0068cf33  MOV byte ptr [ESP + 0x28],AL
0068cf37  MOV byte ptr [ESP + 0x29],AL
0068cf3b  MOVSD.REP ES:EDI,ESI
0068cf3d  POP EDI
0068cf3e  POP ESI
0068cf3f  ADD ESP,0x24
0068cf42  RET
