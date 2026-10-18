00636ea0  SUB ESP,0x24
00636ea3  MOV ECX,dword ptr [ESP + 0x28]
00636ea7  XOR EAX,EAX
00636ea9  MOV dword ptr [ESP],EAX
00636eac  MOV dword ptr [ESP + 0x4],EAX
00636eb0  MOV dword ptr [ESP + 0x8],EAX
00636eb4  MOV dword ptr [ESP + 0xc],EAX
00636eb8  MOV dword ptr [ESP + 0x10],EAX
00636ebc  MOV dword ptr [ESP + 0x14],0x0
00636ec4  MOV dword ptr [ESP + 0x14],EAX
00636ec8  MOV dword ptr [ESP + 0x18],EAX
00636ecc  LEA EDX,[ESP + 0x28]
00636ed0  MOV dword ptr [ESP + 0x1c],EAX
00636ed4  PUSH EDX
00636ed5  MOV dword ptr [ESP + 0x24],EAX
00636ed9  MOV dword ptr [ESP + 0x4],ECX
00636edd  MOV dword ptr [ESP + 0x14],0x62a0f0
00636ee5  CALL 0x00405c40
00636eea  MOV EAX,dword ptr [EAX]
00636eec  MOV ECX,dword ptr [ESP + 0x34]
00636ef0  MOV EDX,dword ptr [ESP + 0x30]
00636ef4  MOV dword ptr [ESP + 0x18],EAX
00636ef8  MOV EAX,[0x008f831c]
00636efd  MOV dword ptr [ESP + 0x1c],EAX
00636f01  INC EAX
00636f02  MOV [0x008f831c],EAX
00636f07  MOV dword ptr [ESP + 0x20],ECX
00636f0b  MOV EAX,ESP
00636f0d  LEA ECX,[ESP + 0x4]
00636f11  MOV dword ptr [EAX],EDX
00636f13  CALL 0x00665390
00636f18  ADD ESP,0x24
00636f1b  RET
