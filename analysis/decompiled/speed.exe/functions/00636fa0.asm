00636fa0  SUB ESP,0x24
00636fa3  MOV ECX,dword ptr [ESP + 0x28]
00636fa7  XOR EAX,EAX
00636fa9  MOV dword ptr [ESP],EAX
00636fac  MOV dword ptr [ESP + 0x4],EAX
00636fb0  MOV dword ptr [ESP + 0x8],EAX
00636fb4  MOV dword ptr [ESP + 0xc],EAX
00636fb8  MOV dword ptr [ESP + 0x10],EAX
00636fbc  MOV dword ptr [ESP + 0x14],0x0
00636fc4  MOV dword ptr [ESP + 0x14],EAX
00636fc8  MOV dword ptr [ESP + 0x18],EAX
00636fcc  LEA EDX,[ESP + 0x28]
00636fd0  MOV dword ptr [ESP + 0x1c],EAX
00636fd4  PUSH EDX
00636fd5  MOV dword ptr [ESP + 0x24],EAX
00636fd9  MOV dword ptr [ESP + 0x4],ECX
00636fdd  MOV dword ptr [ESP + 0x14],0x62a110
00636fe5  CALL 0x005db770
00636fea  MOV EAX,dword ptr [EAX]
00636fec  MOV ECX,dword ptr [ESP + 0x34]
00636ff0  MOV EDX,dword ptr [ESP + 0x30]
00636ff4  MOV dword ptr [ESP + 0x18],EAX
00636ff8  MOV EAX,[0x008f831c]
00636ffd  MOV dword ptr [ESP + 0x1c],EAX
00637001  INC EAX
00637002  MOV [0x008f831c],EAX
00637007  MOV dword ptr [ESP + 0x20],ECX
0063700b  MOV EAX,ESP
0063700d  LEA ECX,[ESP + 0x4]
00637011  MOV dword ptr [EAX],EDX
00637013  CALL 0x00665390
00637018  ADD ESP,0x24
0063701b  RET
