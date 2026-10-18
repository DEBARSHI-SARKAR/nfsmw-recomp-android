0041d220  SUB ESP,0x24
0041d223  MOV ECX,dword ptr [ESP + 0x28]
0041d227  MOV EDX,dword ptr [ESP + 0x2c]
0041d22b  XOR EAX,EAX
0041d22d  MOV dword ptr [ESP],EAX
0041d230  MOV dword ptr [ESP + 0x4],EAX
0041d234  MOV dword ptr [ESP + 0x8],EAX
0041d238  MOV dword ptr [ESP + 0xc],EAX
0041d23c  MOV dword ptr [ESP + 0x10],EAX
0041d240  MOV dword ptr [ESP + 0x14],0x0
0041d248  MOV dword ptr [ESP + 0x14],EAX
0041d24c  MOV dword ptr [ESP + 0x18],EAX
0041d250  MOV dword ptr [ESP + 0x1c],EAX
0041d254  MOV dword ptr [ESP + 0x8],ECX
0041d258  MOV dword ptr [ESP + 0x20],EAX
0041d25c  MOV EAX,dword ptr [ESP + 0x30]
0041d260  LEA ECX,[ESP + 0x28]
0041d264  PUSH ECX
0041d265  MOV dword ptr [ESP + 0x4],EDX
0041d269  MOV dword ptr [ESP + 0x8],EAX
0041d26d  MOV dword ptr [ESP + 0x14],0x40ec80
0041d275  CALL 0x00407140
0041d27a  MOV EDX,dword ptr [EAX]
0041d27c  MOV EAX,[0x008f831c]
0041d281  MOV ECX,dword ptr [ESP + 0x38]
0041d285  MOV dword ptr [ESP + 0x1c],EAX
0041d289  INC EAX
0041d28a  MOV [0x008f831c],EAX
0041d28f  MOV EAX,dword ptr [ESP + 0x3c]
0041d293  MOV dword ptr [ESP + 0x20],EAX
0041d297  MOV EAX,ESP
0041d299  MOV dword ptr [ESP + 0x18],EDX
0041d29d  MOV dword ptr [EAX],ECX
0041d29f  LEA ECX,[ESP + 0x4]
0041d2a3  CALL 0x00665390
0041d2a8  ADD ESP,0x24
0041d2ab  RET
