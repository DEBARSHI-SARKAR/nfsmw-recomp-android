00635fa0  SUB ESP,0x24
00635fa3  MOV ECX,dword ptr [ESP + 0x28]
00635fa7  XOR EAX,EAX
00635fa9  MOV dword ptr [ESP],EAX
00635fac  MOV dword ptr [ESP + 0x4],EAX
00635fb0  MOV dword ptr [ESP + 0x8],EAX
00635fb4  MOV dword ptr [ESP + 0xc],EAX
00635fb8  MOV dword ptr [ESP + 0x10],EAX
00635fbc  MOV dword ptr [ESP + 0x14],0x0
00635fc4  MOV dword ptr [ESP + 0x14],EAX
00635fc8  MOV dword ptr [ESP + 0x18],EAX
00635fcc  LEA EDX,[ESP + 0x28]
00635fd0  MOV dword ptr [ESP + 0x1c],EAX
00635fd4  PUSH EDX
00635fd5  MOV dword ptr [ESP + 0x24],EAX
00635fd9  MOV dword ptr [ESP + 0x4],ECX
00635fdd  MOV dword ptr [ESP + 0x14],0x629f10
00635fe5  CALL 0x0046a5b0
00635fea  MOV EAX,dword ptr [EAX]
00635fec  MOV ECX,dword ptr [ESP + 0x34]
00635ff0  MOV EDX,dword ptr [ESP + 0x30]
00635ff4  MOV dword ptr [ESP + 0x18],EAX
00635ff8  MOV EAX,[0x008f831c]
00635ffd  MOV dword ptr [ESP + 0x1c],EAX
00636001  INC EAX
00636002  MOV [0x008f831c],EAX
00636007  MOV dword ptr [ESP + 0x20],ECX
0063600b  MOV EAX,ESP
0063600d  LEA ECX,[ESP + 0x4]
00636011  MOV dword ptr [EAX],EDX
00636013  CALL 0x00665390
00636018  ADD ESP,0x24
0063601b  RET
