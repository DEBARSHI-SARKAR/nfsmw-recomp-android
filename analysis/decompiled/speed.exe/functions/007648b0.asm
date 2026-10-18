007648b0  SUB ESP,0x10
007648b3  MOVSX EAX,byte ptr [ECX + 0x15]
007648b7  MOVSX ECX,byte ptr [ECX + 0x13]
007648bb  MOV EDX,dword ptr [ESP + 0x14]
007648bf  MOV dword ptr [ESP],EAX
007648c2  MOV dword ptr [ESP + 0x8],0x0
007648ca  FILD dword ptr [ESP]
007648cd  MOV dword ptr [ESP],ECX
007648d0  MOV ECX,dword ptr [ESP + 0x8]
007648d4  FMUL float ptr [0x00890bf0]
007648da  FSTP float ptr [ESP + 0x4]
007648de  MOV EAX,dword ptr [ESP + 0x4]
007648e2  FILD dword ptr [ESP]
007648e5  MOV dword ptr [EDX],EAX
007648e7  MOV dword ptr [EDX + 0x4],ECX
007648ea  FMUL float ptr [0x008b5b30]
007648f0  FSTP float ptr [ESP + 0xc]
007648f4  MOV EAX,dword ptr [ESP + 0xc]
007648f8  MOV dword ptr [EDX + 0x8],EAX
007648fb  ADD ESP,0x10
007648fe  RET 0x4
