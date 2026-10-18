006be080  PUSH EBP
006be081  MOV EBP,ESP
006be083  AND ESP,0xfffffff0
006be086  SUB ESP,0x3c
006be089  PUSH ESI
006be08a  MOV ESI,dword ptr [EBP + 0xc]
006be08d  LEA EAX,[ESP + 0x20]
006be091  PUSH ESI
006be092  PUSH EAX
006be093  CALL 0x0045f490
006be098  ADD ESI,0x10
006be09b  PUSH ESI
006be09c  LEA ECX,[ESP + 0x2c]
006be0a0  PUSH ECX
006be0a1  LEA EDX,[ESP + 0x20]
006be0a5  PUSH EDX
006be0a6  CALL 0x0045f7c0
006be0ab  LEA EAX,[ESP + 0x24]
006be0af  PUSH EAX
006be0b0  MOV ECX,EAX
006be0b2  PUSH ECX
006be0b3  CALL 0x0045f490
006be0b8  LEA EDX,[ESP + 0x3c]
006be0bc  PUSH EDX
006be0bd  LEA EAX,[ESP + 0x30]
006be0c1  PUSH EAX
006be0c2  LEA ECX,[ESP + 0x54]
006be0c6  PUSH ECX
006be0c7  CALL 0x0045f7c0
006be0cc  FLD float ptr [ESP + 0x48]
006be0d0  MOV EAX,dword ptr [EBP + 0x8]
006be0d3  MOV ECX,dword ptr [ESP + 0x50]
006be0d7  FSTP float ptr [EAX]
006be0d9  MOV EDX,dword ptr [ESP + 0x4c]
006be0dd  MOV dword ptr [EAX + 0x8],ECX
006be0e0  MOV ECX,dword ptr [ESP + 0x5c]
006be0e4  MOV dword ptr [EAX + 0x4],EDX
006be0e7  MOV EDX,dword ptr [ESP + 0x58]
006be0eb  MOV dword ptr [EAX + 0x14],ECX
006be0ee  MOV ECX,dword ptr [ESP + 0x64]
006be0f2  MOV dword ptr [EAX + 0x10],EDX
006be0f5  MOV EDX,dword ptr [ESP + 0x60]
006be0f9  MOV dword ptr [EAX + 0x1c],ECX
006be0fc  MOV ECX,dword ptr [ESP + 0x3c]
006be100  MOV dword ptr [EAX + 0x18],EDX
006be103  MOV EDX,dword ptr [ESP + 0x38]
006be107  MOV dword ptr [EAX + 0x24],ECX
006be10a  MOV ECX,dword ptr [ESP + 0x44]
006be10e  MOV dword ptr [EAX + 0x20],EDX
006be111  MOV EDX,dword ptr [ESP + 0x40]
006be115  MOV dword ptr [EAX + 0x2c],ECX
006be118  MOV dword ptr [EAX + 0x28],EDX
006be11b  ADD ESP,0x28
006be11e  XOR ECX,ECX
006be120  MOV dword ptr [EAX + 0xc],ECX
006be123  MOV dword ptr [EAX + 0x1c],ECX
006be126  MOV dword ptr [EAX + 0x2c],ECX
006be129  MOV dword ptr [EAX + 0x30],ECX
006be12c  MOV dword ptr [EAX + 0x34],ECX
006be12f  MOV dword ptr [EAX + 0x38],ECX
006be132  MOV dword ptr [EAX + 0x3c],0x3f800000
006be139  POP ESI
006be13a  MOV ESP,EBP
006be13c  POP EBP
006be13d  RET
