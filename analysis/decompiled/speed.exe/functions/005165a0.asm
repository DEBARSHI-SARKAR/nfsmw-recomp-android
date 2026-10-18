005165a0  PUSH ESI
005165a1  MOV ESI,dword ptr [ESP + 0xc]
005165a5  MOV ECX,ESI
005165a7  CALL 0x005b0040
005165ac  MOV EAX,dword ptr [ESP + 0x8]
005165b0  TEST AX,AX
005165b3  JZ 0x00516623
005165b5  MOV ECX,dword ptr [0x0091cfa8]
005165bb  PUSH EAX
005165bc  CALL 0x0056fd60
005165c1  TEST EAX,EAX
005165c3  JZ 0x00516623
005165c5  MOV ECX,dword ptr [EAX]
005165c7  MOV dword ptr [ESI],ECX
005165c9  MOV EDX,dword ptr [EAX + 0x4]
005165cc  MOV dword ptr [ESI + 0x4],EDX
005165cf  MOV ECX,dword ptr [EAX + 0x8]
005165d2  MOV dword ptr [ESI + 0x8],ECX
005165d5  MOV EDX,dword ptr [EAX + 0xc]
005165d8  MOV dword ptr [ESI + 0xc],EDX
005165db  MOV ECX,dword ptr [EAX + 0x10]
005165de  MOV dword ptr [ESI + 0x10],ECX
005165e1  MOV EDX,dword ptr [EAX + 0x14]
005165e4  MOV dword ptr [ESI + 0x14],EDX
005165e7  MOV ECX,dword ptr [EAX + 0x18]
005165ea  MOV dword ptr [ESI + 0x18],ECX
005165ed  MOV EDX,dword ptr [EAX + 0x1c]
005165f0  MOV dword ptr [ESI + 0x1c],EDX
005165f3  MOV ECX,dword ptr [EAX + 0x20]
005165f6  MOV dword ptr [ESI + 0x20],ECX
005165f9  MOV EDX,dword ptr [EAX + 0x24]
005165fc  MOV dword ptr [ESI + 0x24],EDX
005165ff  MOV ECX,dword ptr [EAX + 0x28]
00516602  MOV dword ptr [ESI + 0x28],ECX
00516605  MOV EDX,dword ptr [EAX + 0x2c]
00516608  MOV dword ptr [ESI + 0x2c],EDX
0051660b  MOV ECX,dword ptr [EAX + 0x30]
0051660e  MOV dword ptr [ESI + 0x30],ECX
00516611  MOV EDX,dword ptr [EAX + 0x34]
00516614  MOV dword ptr [ESI + 0x34],EDX
00516617  MOV ECX,dword ptr [EAX + 0x38]
0051661a  MOV dword ptr [ESI + 0x38],ECX
0051661d  MOV EDX,dword ptr [EAX + 0x3c]
00516620  MOV dword ptr [ESI + 0x3c],EDX
00516623  MOV AL,0x1
00516625  POP ESI
00516626  RET 0x8
