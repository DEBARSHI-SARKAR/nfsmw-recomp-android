00635aa0  SUB ESP,0x24
00635aa3  MOV ECX,dword ptr [ESP + 0x28]
00635aa7  XOR EAX,EAX
00635aa9  MOV dword ptr [ESP],EAX
00635aac  MOV dword ptr [ESP + 0x4],EAX
00635ab0  MOV dword ptr [ESP + 0x8],EAX
00635ab4  MOV dword ptr [ESP + 0xc],EAX
00635ab8  MOV dword ptr [ESP + 0x10],EAX
00635abc  MOV dword ptr [ESP + 0x14],0x0
00635ac4  MOV dword ptr [ESP + 0x14],EAX
00635ac8  MOV dword ptr [ESP + 0x18],EAX
00635acc  LEA EDX,[ESP + 0x28]
00635ad0  MOV dword ptr [ESP + 0x1c],EAX
00635ad4  PUSH EDX
00635ad5  MOV dword ptr [ESP + 0x24],EAX
00635ad9  MOV dword ptr [ESP + 0x4],ECX
00635add  MOV dword ptr [ESP + 0x14],0x629e70
00635ae5  CALL 0x005dd6d0
00635aea  MOV EAX,dword ptr [EAX]
00635aec  MOV ECX,dword ptr [ESP + 0x34]
00635af0  MOV EDX,dword ptr [ESP + 0x30]
00635af4  MOV dword ptr [ESP + 0x18],EAX
00635af8  MOV EAX,[0x008f831c]
00635afd  MOV dword ptr [ESP + 0x1c],EAX
00635b01  INC EAX
00635b02  MOV [0x008f831c],EAX
00635b07  MOV dword ptr [ESP + 0x20],ECX
00635b0b  MOV EAX,ESP
00635b0d  LEA ECX,[ESP + 0x4]
00635b11  MOV dword ptr [EAX],EDX
00635b13  CALL 0x00665390
00635b18  ADD ESP,0x24
00635b1b  RET
