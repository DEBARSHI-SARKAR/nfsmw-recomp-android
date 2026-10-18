0070ced0  PUSH -0x1
0070ced2  PUSH 0x87fb8e
0070ced7  MOV EAX,FS:[0x0]
0070cedd  PUSH EAX
0070cede  MOV dword ptr FS:[0x0],ESP
0070cee5  PUSH ECX
0070cee6  PUSH EBX
0070cee7  XOR EBX,EBX
0070cee9  PUSH ESI
0070ceea  MOV ESI,ECX
0070ceec  MOV dword ptr [ESI + 0x10],EBX
0070ceef  MOV dword ptr [ESI + 0x20],EBX
0070cef2  MOV dword ptr [ESI + 0x24],EBX
0070cef5  MOV dword ptr [ESI + 0x28],EBX
0070cef8  MOV dword ptr [ESI + 0x2c],EBX
0070cefb  MOV dword ptr [ESI + 0x30],EBX
0070cefe  MOV dword ptr [ESI + 0x34],EBX
0070cf01  MOV dword ptr [ESI + 0x38],EBX
0070cf04  MOV dword ptr [ESI + 0x3c],0x890978
0070cf0b  MOV dword ptr [ESI + 0x40],EBX
0070cf0e  MOV dword ptr [ESP + 0x8],ESI
0070cf12  MOV dword ptr [ESI + 0x44],EBX
0070cf15  MOV dword ptr [ESI + 0x48],EBX
0070cf18  MOV dword ptr [ESI + 0x4c],EBX
0070cf1b  LEA ECX,[ESI + 0x58]
0070cf1e  MOV dword ptr [ESI],0x8b2228
0070cf24  MOV dword ptr [ESP + 0x14],EBX
0070cf28  MOV dword ptr [ECX + 0x4],EBX
0070cf2b  MOV dword ptr [ECX + 0x8],EBX
0070cf2e  MOV dword ptr [ECX + 0xc],EBX
0070cf31  MOV dword ptr [ECX + 0x10],EBX
0070cf34  MOV byte ptr [ESI + 0x70],BL
0070cf37  MOV dword ptr [ESI + 0x74],EBX
0070cf3a  MOV byte ptr [ESI + 0x78],BL
0070cf3d  OR EAX,0xffffffff
0070cf40  MOV dword ptr [ESI + 0x80],EBX
0070cf46  MOV dword ptr [ESI + 0x7c],EBX
0070cf49  MOV dword ptr [ESI + 0x84],EAX
0070cf4f  MOV dword ptr [ESI + 0x88],EAX
0070cf55  MOV word ptr [ESI + 0x8c],BX
0070cf5c  MOV byte ptr [ESP + 0x14],0x2
0070cf61  CALL 0x00708a50
0070cf66  MOV ECX,dword ptr [ESI + 0x4c]
0070cf69  CMP ECX,EBX
0070cf6b  JZ 0x0070cf72
0070cf6d  CALL 0x004e0800
0070cf72  MOV ECX,dword ptr [ESP + 0xc]
0070cf76  MOV dword ptr [ESI + 0x2c],EBX
0070cf79  MOV EAX,ESI
0070cf7b  POP ESI
0070cf7c  POP EBX
0070cf7d  MOV dword ptr FS:[0x0],ECX
0070cf84  ADD ESP,0x10
0070cf87  RET
