004a2a80  PUSH EBP
004a2a81  MOV EBP,ESP
004a2a83  AND ESP,0xfffffff0
004a2a86  SUB ESP,0x88
004a2a8c  MOV EAX,dword ptr [EBP + 0x8]
004a2a8f  MOV EDX,dword ptr [EBP + 0x10]
004a2a92  PUSH ESI
004a2a93  PUSH EDI
004a2a94  MOV EDI,ECX
004a2a96  MOV ECX,dword ptr [EBP + 0xc]
004a2a99  MOV dword ptr [ESP + 0x40],EAX
004a2a9d  LEA EAX,[ESP + 0x50]
004a2aa1  MOV dword ptr [ESP + 0x44],ECX
004a2aa5  PUSH EAX
004a2aa6  LEA ECX,[ESP + 0x14]
004a2aaa  PUSH ECX
004a2aab  PUSH EDI
004a2aac  MOV dword ptr [ESP + 0x1c],0x3f800000
004a2ab4  MOV dword ptr [ESP + 0x20],0x0
004a2abc  MOV dword ptr [ESP + 0x24],0x0
004a2ac4  MOV dword ptr [ESP + 0x28],0x0
004a2acc  MOV dword ptr [ESP + 0x2c],0x0
004a2ad4  MOV dword ptr [ESP + 0x30],0x3f800000
004a2adc  MOV dword ptr [ESP + 0x34],0x0
004a2ae4  MOV dword ptr [ESP + 0x38],0x0
004a2aec  MOV dword ptr [ESP + 0x3c],0x0
004a2af4  MOV dword ptr [ESP + 0x40],0x0
004a2afc  MOV dword ptr [ESP + 0x44],0x3f800000
004a2b04  MOV dword ptr [ESP + 0x48],0x0
004a2b0c  MOV dword ptr [ESP + 0x54],EDX
004a2b10  MOV dword ptr [ESP + 0x58],0x3f800000
004a2b18  CALL 0x00494380
004a2b1d  ADD ESP,0xc
004a2b20  MOV ECX,0x10
004a2b25  LEA ESI,[ESP + 0x50]
004a2b29  MOVSD.REP ES:EDI,ESI
004a2b2b  POP EDI
004a2b2c  POP ESI
004a2b2d  MOV ESP,EBP
004a2b2f  POP EBP
004a2b30  RET 0xc
