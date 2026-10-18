00635ca0  SUB ESP,0x24
00635ca3  MOV ECX,dword ptr [ESP + 0x28]
00635ca7  XOR EAX,EAX
00635ca9  MOV dword ptr [ESP],EAX
00635cac  MOV dword ptr [ESP + 0x4],EAX
00635cb0  MOV dword ptr [ESP + 0x8],EAX
00635cb4  MOV dword ptr [ESP + 0xc],EAX
00635cb8  MOV dword ptr [ESP + 0x10],EAX
00635cbc  MOV dword ptr [ESP + 0x14],0x0
00635cc4  MOV dword ptr [ESP + 0x14],EAX
00635cc8  MOV dword ptr [ESP + 0x18],EAX
00635ccc  LEA EDX,[ESP + 0x28]
00635cd0  MOV dword ptr [ESP + 0x1c],EAX
00635cd4  PUSH EDX
00635cd5  MOV dword ptr [ESP + 0x24],EAX
00635cd9  MOV dword ptr [ESP + 0x4],ECX
00635cdd  MOV dword ptr [ESP + 0x14],0x629eb0
00635ce5  CALL 0x005db1d0
00635cea  MOV EAX,dword ptr [EAX]
00635cec  MOV ECX,dword ptr [ESP + 0x34]
00635cf0  MOV EDX,dword ptr [ESP + 0x30]
00635cf4  MOV dword ptr [ESP + 0x18],EAX
00635cf8  MOV EAX,[0x008f831c]
00635cfd  MOV dword ptr [ESP + 0x1c],EAX
00635d01  INC EAX
00635d02  MOV [0x008f831c],EAX
00635d07  MOV dword ptr [ESP + 0x20],ECX
00635d0b  MOV EAX,ESP
00635d0d  LEA ECX,[ESP + 0x4]
00635d11  MOV dword ptr [EAX],EDX
00635d13  CALL 0x00665390
00635d18  ADD ESP,0x24
00635d1b  RET
