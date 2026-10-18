00635ba0  SUB ESP,0x24
00635ba3  MOV ECX,dword ptr [ESP + 0x28]
00635ba7  XOR EAX,EAX
00635ba9  MOV dword ptr [ESP],EAX
00635bac  MOV dword ptr [ESP + 0x4],EAX
00635bb0  MOV dword ptr [ESP + 0x8],EAX
00635bb4  MOV dword ptr [ESP + 0xc],EAX
00635bb8  MOV dword ptr [ESP + 0x10],EAX
00635bbc  MOV dword ptr [ESP + 0x14],0x0
00635bc4  MOV dword ptr [ESP + 0x14],EAX
00635bc8  MOV dword ptr [ESP + 0x18],EAX
00635bcc  LEA EDX,[ESP + 0x28]
00635bd0  MOV dword ptr [ESP + 0x1c],EAX
00635bd4  PUSH EDX
00635bd5  MOV dword ptr [ESP + 0x24],EAX
00635bd9  MOV dword ptr [ESP + 0x4],ECX
00635bdd  MOV dword ptr [ESP + 0x14],0x629e90
00635be5  CALL 0x00407140
00635bea  MOV EAX,dword ptr [EAX]
00635bec  MOV ECX,dword ptr [ESP + 0x34]
00635bf0  MOV EDX,dword ptr [ESP + 0x30]
00635bf4  MOV dword ptr [ESP + 0x18],EAX
00635bf8  MOV EAX,[0x008f831c]
00635bfd  MOV dword ptr [ESP + 0x1c],EAX
00635c01  INC EAX
00635c02  MOV [0x008f831c],EAX
00635c07  MOV dword ptr [ESP + 0x20],ECX
00635c0b  MOV EAX,ESP
00635c0d  LEA ECX,[ESP + 0x4]
00635c11  MOV dword ptr [EAX],EDX
00635c13  CALL 0x00665390
00635c18  ADD ESP,0x24
00635c1b  RET
