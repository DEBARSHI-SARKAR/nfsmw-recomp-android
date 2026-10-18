00636ca0  SUB ESP,0x24
00636ca3  MOV ECX,dword ptr [ESP + 0x28]
00636ca7  XOR EAX,EAX
00636ca9  MOV dword ptr [ESP],EAX
00636cac  MOV dword ptr [ESP + 0x4],EAX
00636cb0  MOV dword ptr [ESP + 0x8],EAX
00636cb4  MOV dword ptr [ESP + 0xc],EAX
00636cb8  MOV dword ptr [ESP + 0x10],EAX
00636cbc  MOV dword ptr [ESP + 0x14],0x0
00636cc4  MOV dword ptr [ESP + 0x14],EAX
00636cc8  MOV dword ptr [ESP + 0x18],EAX
00636ccc  LEA EDX,[ESP + 0x28]
00636cd0  MOV dword ptr [ESP + 0x1c],EAX
00636cd4  PUSH EDX
00636cd5  MOV dword ptr [ESP + 0x24],EAX
00636cd9  MOV dword ptr [ESP + 0x4],ECX
00636cdd  MOV dword ptr [ESP + 0x14],0x62a0b0
00636ce5  CALL 0x00624a40
00636cea  MOV EAX,dword ptr [EAX]
00636cec  MOV ECX,dword ptr [ESP + 0x34]
00636cf0  MOV EDX,dword ptr [ESP + 0x30]
00636cf4  MOV dword ptr [ESP + 0x18],EAX
00636cf8  MOV EAX,[0x008f831c]
00636cfd  MOV dword ptr [ESP + 0x1c],EAX
00636d01  INC EAX
00636d02  MOV [0x008f831c],EAX
00636d07  MOV dword ptr [ESP + 0x20],ECX
00636d0b  MOV EAX,ESP
00636d0d  LEA ECX,[ESP + 0x4]
00636d11  MOV dword ptr [EAX],EDX
00636d13  CALL 0x00665390
00636d18  ADD ESP,0x24
00636d1b  RET
