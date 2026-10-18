00635ea0  SUB ESP,0x24
00635ea3  MOV ECX,dword ptr [ESP + 0x28]
00635ea7  XOR EAX,EAX
00635ea9  MOV dword ptr [ESP],EAX
00635eac  MOV dword ptr [ESP + 0x4],EAX
00635eb0  MOV dword ptr [ESP + 0x8],EAX
00635eb4  MOV dword ptr [ESP + 0xc],EAX
00635eb8  MOV dword ptr [ESP + 0x10],EAX
00635ebc  MOV dword ptr [ESP + 0x14],0x0
00635ec4  MOV dword ptr [ESP + 0x14],EAX
00635ec8  MOV dword ptr [ESP + 0x18],EAX
00635ecc  LEA EDX,[ESP + 0x28]
00635ed0  MOV dword ptr [ESP + 0x1c],EAX
00635ed4  PUSH EDX
00635ed5  MOV dword ptr [ESP + 0x24],EAX
00635ed9  MOV dword ptr [ESP + 0x4],ECX
00635edd  MOV dword ptr [ESP + 0x14],0x629ef0
00635ee5  CALL 0x006046c0
00635eea  MOV EAX,dword ptr [EAX]
00635eec  MOV ECX,dword ptr [ESP + 0x34]
00635ef0  MOV EDX,dword ptr [ESP + 0x30]
00635ef4  MOV dword ptr [ESP + 0x18],EAX
00635ef8  MOV EAX,[0x008f831c]
00635efd  MOV dword ptr [ESP + 0x1c],EAX
00635f01  INC EAX
00635f02  MOV [0x008f831c],EAX
00635f07  MOV dword ptr [ESP + 0x20],ECX
00635f0b  MOV EAX,ESP
00635f0d  LEA ECX,[ESP + 0x4]
00635f11  MOV dword ptr [EAX],EDX
00635f13  CALL 0x00665390
00635f18  ADD ESP,0x24
00635f1b  RET
