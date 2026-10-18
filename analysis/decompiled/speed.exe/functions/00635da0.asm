00635da0  SUB ESP,0x24
00635da3  MOV ECX,dword ptr [ESP + 0x28]
00635da7  XOR EAX,EAX
00635da9  MOV dword ptr [ESP],EAX
00635dac  MOV dword ptr [ESP + 0x4],EAX
00635db0  MOV dword ptr [ESP + 0x8],EAX
00635db4  MOV dword ptr [ESP + 0xc],EAX
00635db8  MOV dword ptr [ESP + 0x10],EAX
00635dbc  MOV dword ptr [ESP + 0x14],0x0
00635dc4  MOV dword ptr [ESP + 0x14],EAX
00635dc8  MOV dword ptr [ESP + 0x18],EAX
00635dcc  LEA EDX,[ESP + 0x28]
00635dd0  MOV dword ptr [ESP + 0x1c],EAX
00635dd4  PUSH EDX
00635dd5  MOV dword ptr [ESP + 0x24],EAX
00635dd9  MOV dword ptr [ESP + 0x4],ECX
00635ddd  MOV dword ptr [ESP + 0x14],0x629ed0
00635de5  CALL 0x00405600
00635dea  MOV EAX,dword ptr [EAX]
00635dec  MOV ECX,dword ptr [ESP + 0x34]
00635df0  MOV EDX,dword ptr [ESP + 0x30]
00635df4  MOV dword ptr [ESP + 0x18],EAX
00635df8  MOV EAX,[0x008f831c]
00635dfd  MOV dword ptr [ESP + 0x1c],EAX
00635e01  INC EAX
00635e02  MOV [0x008f831c],EAX
00635e07  MOV dword ptr [ESP + 0x20],ECX
00635e0b  MOV EAX,ESP
00635e0d  LEA ECX,[ESP + 0x4]
00635e11  MOV dword ptr [EAX],EDX
00635e13  CALL 0x00665390
00635e18  ADD ESP,0x24
00635e1b  RET
