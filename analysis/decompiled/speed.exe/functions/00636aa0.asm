00636aa0  SUB ESP,0x24
00636aa3  MOV ECX,dword ptr [ESP + 0x28]
00636aa7  XOR EAX,EAX
00636aa9  MOV dword ptr [ESP],EAX
00636aac  MOV dword ptr [ESP + 0x4],EAX
00636ab0  MOV dword ptr [ESP + 0x8],EAX
00636ab4  MOV dword ptr [ESP + 0xc],EAX
00636ab8  MOV dword ptr [ESP + 0x10],EAX
00636abc  MOV dword ptr [ESP + 0x14],0x0
00636ac4  MOV dword ptr [ESP + 0x14],EAX
00636ac8  MOV dword ptr [ESP + 0x18],EAX
00636acc  LEA EDX,[ESP + 0x28]
00636ad0  MOV dword ptr [ESP + 0x1c],EAX
00636ad4  PUSH EDX
00636ad5  MOV dword ptr [ESP + 0x24],EAX
00636ad9  MOV dword ptr [ESP + 0x4],ECX
00636add  MOV dword ptr [ESP + 0x14],0x62a070
00636ae5  CALL 0x0056a9b0
00636aea  MOV EAX,dword ptr [EAX]
00636aec  MOV ECX,dword ptr [ESP + 0x34]
00636af0  MOV EDX,dword ptr [ESP + 0x30]
00636af4  MOV dword ptr [ESP + 0x18],EAX
00636af8  MOV EAX,[0x008f831c]
00636afd  MOV dword ptr [ESP + 0x1c],EAX
00636b01  INC EAX
00636b02  MOV [0x008f831c],EAX
00636b07  MOV dword ptr [ESP + 0x20],ECX
00636b0b  MOV EAX,ESP
00636b0d  LEA ECX,[ESP + 0x4]
00636b11  MOV dword ptr [EAX],EDX
00636b13  CALL 0x00665390
00636b18  ADD ESP,0x24
00636b1b  RET
