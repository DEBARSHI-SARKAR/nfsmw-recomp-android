0044c380  SUB ESP,0x24
0044c383  MOV ECX,dword ptr [ESP + 0x28]
0044c387  MOV EDX,dword ptr [ESP + 0x2c]
0044c38b  XOR EAX,EAX
0044c38d  MOV dword ptr [ESP],EAX
0044c390  MOV dword ptr [ESP + 0x4],EAX
0044c394  MOV dword ptr [ESP + 0x8],EAX
0044c398  MOV dword ptr [ESP + 0xc],EAX
0044c39c  MOV dword ptr [ESP + 0x10],EAX
0044c3a0  MOV dword ptr [ESP + 0x14],0x0
0044c3a8  MOV dword ptr [ESP + 0x14],EAX
0044c3ac  MOV dword ptr [ESP + 0x18],EAX
0044c3b0  MOV dword ptr [ESP + 0x1c],EAX
0044c3b4  MOV dword ptr [ESP + 0x8],ECX
0044c3b8  MOV dword ptr [ESP + 0x20],EAX
0044c3bc  MOV EAX,dword ptr [ESP + 0x30]
0044c3c0  LEA ECX,[ESP + 0x28]
0044c3c4  PUSH ECX
0044c3c5  MOV dword ptr [ESP + 0x4],EDX
0044c3c9  MOV dword ptr [ESP + 0x8],EAX
0044c3cd  MOV dword ptr [ESP + 0x14],0x448c40
0044c3d5  CALL 0x004080d0
0044c3da  MOV EDX,dword ptr [EAX]
0044c3dc  MOV EAX,[0x008f831c]
0044c3e1  MOV ECX,dword ptr [ESP + 0x38]
0044c3e5  MOV dword ptr [ESP + 0x1c],EAX
0044c3e9  INC EAX
0044c3ea  MOV [0x008f831c],EAX
0044c3ef  MOV EAX,dword ptr [ESP + 0x3c]
0044c3f3  MOV dword ptr [ESP + 0x20],EAX
0044c3f7  MOV EAX,ESP
0044c3f9  MOV dword ptr [ESP + 0x18],EDX
0044c3fd  MOV dword ptr [EAX],ECX
0044c3ff  LEA ECX,[ESP + 0x4]
0044c403  CALL 0x00665390
0044c408  ADD ESP,0x24
0044c40b  RET
