00636da0  SUB ESP,0x24
00636da3  MOV ECX,dword ptr [ESP + 0x28]
00636da7  XOR EAX,EAX
00636da9  MOV dword ptr [ESP],EAX
00636dac  MOV dword ptr [ESP + 0x4],EAX
00636db0  MOV dword ptr [ESP + 0x8],EAX
00636db4  MOV dword ptr [ESP + 0xc],EAX
00636db8  MOV dword ptr [ESP + 0x10],EAX
00636dbc  MOV dword ptr [ESP + 0x14],0x0
00636dc4  MOV dword ptr [ESP + 0x14],EAX
00636dc8  MOV dword ptr [ESP + 0x18],EAX
00636dcc  LEA EDX,[ESP + 0x28]
00636dd0  MOV dword ptr [ESP + 0x1c],EAX
00636dd4  PUSH EDX
00636dd5  MOV dword ptr [ESP + 0x24],EAX
00636dd9  MOV dword ptr [ESP + 0x4],ECX
00636ddd  MOV dword ptr [ESP + 0x14],0x62a0d0
00636de5  CALL 0x00405d20
00636dea  MOV EAX,dword ptr [EAX]
00636dec  MOV ECX,dword ptr [ESP + 0x34]
00636df0  MOV EDX,dword ptr [ESP + 0x30]
00636df4  MOV dword ptr [ESP + 0x18],EAX
00636df8  MOV EAX,[0x008f831c]
00636dfd  MOV dword ptr [ESP + 0x1c],EAX
00636e01  INC EAX
00636e02  MOV [0x008f831c],EAX
00636e07  MOV dword ptr [ESP + 0x20],ECX
00636e0b  MOV EAX,ESP
00636e0d  LEA ECX,[ESP + 0x4]
00636e11  MOV dword ptr [EAX],EDX
00636e13  CALL 0x00665390
00636e18  ADD ESP,0x24
00636e1b  RET
