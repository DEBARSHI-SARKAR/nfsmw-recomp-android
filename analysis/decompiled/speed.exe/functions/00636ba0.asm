00636ba0  SUB ESP,0x24
00636ba3  MOV ECX,dword ptr [ESP + 0x28]
00636ba7  XOR EAX,EAX
00636ba9  MOV dword ptr [ESP],EAX
00636bac  MOV dword ptr [ESP + 0x4],EAX
00636bb0  MOV dword ptr [ESP + 0x8],EAX
00636bb4  MOV dword ptr [ESP + 0xc],EAX
00636bb8  MOV dword ptr [ESP + 0x10],EAX
00636bbc  MOV dword ptr [ESP + 0x14],0x0
00636bc4  MOV dword ptr [ESP + 0x14],EAX
00636bc8  MOV dword ptr [ESP + 0x18],EAX
00636bcc  LEA EDX,[ESP + 0x28]
00636bd0  MOV dword ptr [ESP + 0x1c],EAX
00636bd4  PUSH EDX
00636bd5  MOV dword ptr [ESP + 0x24],EAX
00636bd9  MOV dword ptr [ESP + 0x4],ECX
00636bdd  MOV dword ptr [ESP + 0x14],0x62a090
00636be5  CALL 0x00604350
00636bea  MOV EAX,dword ptr [EAX]
00636bec  MOV ECX,dword ptr [ESP + 0x34]
00636bf0  MOV EDX,dword ptr [ESP + 0x30]
00636bf4  MOV dword ptr [ESP + 0x18],EAX
00636bf8  MOV EAX,[0x008f831c]
00636bfd  MOV dword ptr [ESP + 0x1c],EAX
00636c01  INC EAX
00636c02  MOV [0x008f831c],EAX
00636c07  MOV dword ptr [ESP + 0x20],ECX
00636c0b  MOV EAX,ESP
00636c0d  LEA ECX,[ESP + 0x4]
00636c11  MOV dword ptr [EAX],EDX
00636c13  CALL 0x00665390
00636c18  ADD ESP,0x24
00636c1b  RET
