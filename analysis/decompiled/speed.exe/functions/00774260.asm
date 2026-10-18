00774260  SUB ESP,0xc
00774263  PUSH EBX
00774264  PUSH ESI
00774265  MOV ESI,ECX
00774267  MOV EAX,dword ptr [ESI + 0x8]
0077426a  XOR EBX,EBX
0077426c  CMP EAX,EBX
0077426e  MOV byte ptr [ESI + 0x50],BL
00774271  JZ 0x0077427c
00774273  MOV dword ptr [EAX],EBX
00774275  MOV dword ptr [EAX + 0x4],0xffffffff
0077427c  MOV ECX,ESI
0077427e  MOV dword ptr [ESI + 0x4],EBX
00774281  CALL 0x0076f3d0
00774286  MOV dword ptr [ESP + 0x8],0x0
0077428e  MOV ECX,dword ptr [ESP + 0x8]
00774292  LEA EAX,[ESI + 0x98]
00774298  MOV dword ptr [EAX],ECX
0077429a  MOV dword ptr [ESP + 0xc],0x0
007742a2  MOV EDX,dword ptr [ESP + 0xc]
007742a6  MOV dword ptr [EAX + 0x4],EDX
007742a9  MOV dword ptr [ESP + 0x10],0x0
007742b1  MOV ECX,dword ptr [ESP + 0x10]
007742b5  MOV dword ptr [EAX + 0x8],ECX
007742b8  MOV dword ptr [ESP + 0x8],0x0
007742c0  MOV EAX,dword ptr [ESP + 0x8]
007742c4  LEA EDX,[ESI + 0xbc]
007742ca  MOV dword ptr [EDX],EAX
007742cc  MOV dword ptr [ESP + 0xc],0x0
007742d4  MOV ECX,dword ptr [ESP + 0xc]
007742d8  MOV dword ptr [EDX + 0x4],ECX
007742db  MOV dword ptr [ESP + 0x10],0x0
007742e3  MOV EAX,dword ptr [ESP + 0x10]
007742e7  MOV dword ptr [EDX + 0x8],EAX
007742ea  MOV dword ptr [ESP + 0x8],0x0
007742f2  MOV EDX,dword ptr [ESP + 0x8]
007742f6  LEA ECX,[ESI + 0xd4]
007742fc  MOV dword ptr [ECX],EDX
007742fe  MOV dword ptr [ESP + 0xc],0x0
00774306  MOV EAX,dword ptr [ESP + 0xc]
0077430a  MOV dword ptr [ECX + 0x4],EAX
0077430d  MOV dword ptr [ESP + 0x10],0x0
00774315  MOV EDX,dword ptr [ESP + 0x10]
00774319  MOV dword ptr [ECX + 0x8],EDX
0077431c  MOV dword ptr [ESP + 0x8],0x0
00774324  MOV ECX,dword ptr [ESP + 0x8]
00774328  LEA EAX,[ESI + 0xc8]
0077432e  MOV dword ptr [EAX],ECX
00774330  MOV dword ptr [ESP + 0xc],0x0
00774338  MOV EDX,dword ptr [ESP + 0xc]
0077433c  MOV dword ptr [EAX + 0x4],EDX
0077433f  MOV dword ptr [ESP + 0x10],0x0
00774347  MOV ECX,dword ptr [ESP + 0x10]
0077434b  MOV dword ptr [EAX + 0x8],ECX
0077434e  MOV dword ptr [ESP + 0x8],0x0
00774356  MOV EAX,dword ptr [ESP + 0x8]
0077435a  LEA EDX,[ESI + 0xec]
00774360  MOV dword ptr [EDX],EAX
00774362  MOV dword ptr [ESP + 0xc],0x0
0077436a  MOV ECX,dword ptr [ESP + 0xc]
0077436e  MOV dword ptr [EDX + 0x4],ECX
00774371  MOV dword ptr [ESP + 0x10],0x0
00774379  MOV EAX,dword ptr [ESP + 0x10]
0077437d  MOV dword ptr [EDX + 0x8],EAX
00774380  MOV dword ptr [ESP + 0x8],0x0
00774388  MOV EDX,dword ptr [ESP + 0x8]
0077438c  LEA ECX,[ESI + 0xe0]
00774392  MOV dword ptr [ECX],EDX
00774394  MOV dword ptr [ESP + 0xc],0x0
0077439c  MOV EAX,dword ptr [ESP + 0xc]
007743a0  MOV dword ptr [ESP + 0x10],0x0
007743a8  MOV EDX,dword ptr [ESP + 0x10]
007743ac  MOV dword ptr [ECX + 0x4],EAX
007743af  MOV dword ptr [ESI + 0x78],EBX
007743b2  MOV dword ptr [ESI + 0x7c],0x1
007743b9  MOV dword ptr [ESI + 0x80],EBX
007743bf  MOV dword ptr [ESI + 0x2e0],EBX
007743c5  MOV byte ptr [ESI + 0x2d8],BL
007743cb  MOV word ptr [ESI + 0x2da],0xffff
007743d4  MOV byte ptr [ESI + 0x8c],BL
007743da  MOV word ptr [ESI + 0x8e],BX
007743e1  MOV dword ptr [ESI + 0x90],EBX
007743e7  MOV dword ptr [ESI + 0x94],EBX
007743ed  MOV dword ptr [ECX + 0x8],EDX
007743f0  MOV byte ptr [ESI + 0x2c0],BL
007743f6  MOV byte ptr [ESI + 0x2c1],BL
007743fc  MOV byte ptr [ESI + 0x2c2],BL
00774402  MOV byte ptr [ESI + 0x2c3],BL
00774408  MOV dword ptr [ESI + 0x2c4],EBX
0077440e  MOV dword ptr [ESI + 0x2c8],EBX
00774414  MOV dword ptr [ESI + 0x2cc],EBX
0077441a  MOV dword ptr [ESI + 0x2d0],EBX
00774420  MOV dword ptr [ESI + 0x2d4],EBX
00774426  MOV dword ptr [ESI + 0x4c],EBX
00774429  POP ESI
0077442a  POP EBX
0077442b  ADD ESP,0xc
0077442e  RET
