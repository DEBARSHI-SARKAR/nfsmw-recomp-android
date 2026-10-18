007655c0  SUB ESP,0x8
007655c3  MOV EDX,dword ptr [0x009b38bc]
007655c9  MOV ECX,dword ptr [ESP + 0xc]
007655cd  MOVZX EAX,word ptr [ECX]
007655d0  MOVZX ECX,word ptr [ECX + 0x2]
007655d4  SHL ECX,0x5
007655d7  SHL EAX,0x5
007655da  ADD EAX,EDX
007655dc  ADD ECX,EDX
007655de  MOV EDX,dword ptr [ESP + 0x10]
007655e2  MOV dword ptr [ESP + 0x4],ECX
007655e6  MOV ECX,dword ptr [EAX]
007655e8  MOV dword ptr [EDX],ECX
007655ea  MOV ECX,dword ptr [EAX + 0x4]
007655ed  MOV dword ptr [EDX + 0x4],ECX
007655f0  MOV EAX,dword ptr [EAX + 0x8]
007655f3  MOV ECX,dword ptr [ESP + 0x4]
007655f7  MOV dword ptr [EDX + 0x8],EAX
007655fa  MOV EAX,dword ptr [ECX]
007655fc  MOV EDX,dword ptr [ESP + 0x14]
00765600  MOV dword ptr [EDX],EAX
00765602  MOV EAX,dword ptr [ECX + 0x4]
00765605  MOV dword ptr [EDX + 0x4],EAX
00765608  MOV ECX,dword ptr [ECX + 0x8]
0076560b  MOV dword ptr [EDX + 0x8],ECX
0076560e  ADD ESP,0x8
00765611  RET 0xc
