00517ff0  PUSH EBX
00517ff1  XOR EBX,EBX
00517ff3  PUSH ESI
00517ff4  MOV ESI,ECX
00517ff6  MOV dword ptr [ESI + 0x40],EBX
00517ff9  MOV byte ptr [ESI + 0x14],BL
00517ffc  MOV dword ptr [ESI + 0xc8],EBX
00518002  MOV dword ptr [ESI + 0x30],EBX
00518005  CALL 0x007f3d0b
0051800a  MOV dword ptr [ESI + 0xbc],EBX
00518010  MOV byte ptr [ESI + 0x15],BL
00518013  MOV byte ptr [ESI + 0x16],BL
00518016  MOV byte ptr [ESI + 0x1e],BL
00518019  MOV byte ptr [ESI + 0x20],BL
0051801c  MOV byte ptr [ESI + 0x22],BL
0051801f  MOV byte ptr [ESI + 0x1f],BL
00518022  MOV byte ptr [ESI + 0x17],BL
00518025  MOV dword ptr [ESI + 0x38],EBX
00518028  MOV byte ptr [ESI + 0x19],BL
0051802b  MOV byte ptr [ESI + 0x1a],BL
0051802e  MOV byte ptr [ESI + 0x1b],BL
00518031  MOV byte ptr [ESI + 0x1c],BL
00518034  MOV byte ptr [ESI + 0x1d],BL
00518037  MOV byte ptr [ESI + 0x21],BL
0051803a  MOV byte ptr [ESI + 0x23],BL
0051803d  MOV byte ptr [ESI + 0x24],BL
00518040  MOV byte ptr [ESI + 0x25],BL
00518043  MOV byte ptr [ESI + 0x26],BL
00518046  MOV byte ptr [ESI + 0x27],BL
00518049  MOV byte ptr [ESI + 0x28],BL
0051804c  MOV byte ptr [ESI + 0x29],BL
0051804f  MOV byte ptr [ESI + 0x2a],BL
00518052  MOV byte ptr [ESI + 0x2b],BL
00518055  MOV byte ptr [ESI + 0x2c],BL
00518058  MOV byte ptr [ESI + 0x2d],BL
0051805b  MOV byte ptr [ESI + 0x2e],BL
0051805e  MOV byte ptr [ESI + 0x2f],BL
00518061  MOV dword ptr [ESI + 0x50],EBX
00518064  MOV byte ptr [ESI + 0x18],0x1
00518068  MOV EAX,ESI
0051806a  POP ESI
0051806b  POP EBX
0051806c  RET
