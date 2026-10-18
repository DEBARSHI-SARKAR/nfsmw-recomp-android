005d40b0  SUB ESP,0x20
005d40b3  MOV EAX,dword ptr [ESP + 0x24]
005d40b7  FLD float ptr [EAX]
005d40b9  PUSH ESI
005d40ba  FSUB float ptr [EAX + 0x10]
005d40bd  MOV ESI,dword ptr [ESP + 0x2c]
005d40c1  PUSH ESI
005d40c2  LEA ECX,[ESP + 0x8]
005d40c6  FSTP float ptr [ESP + 0x8]
005d40ca  MOV dword ptr [ESP + 0x14],0x0
005d40d2  FLD float ptr [EAX + 0x4]
005d40d5  MOV dword ptr [ESP + 0x24],0x0
005d40dd  FSUB float ptr [EAX + 0x14]
005d40e0  FSTP float ptr [ESP + 0xc]
005d40e4  FLD float ptr [EAX + 0x8]
005d40e7  FSUB float ptr [EAX + 0x18]
005d40ea  FSTP float ptr [ESP + 0x10]
005d40ee  FLD float ptr [EAX + 0x20]
005d40f1  FSUB float ptr [EAX]
005d40f3  FSTP float ptr [ESP + 0x18]
005d40f7  FLD float ptr [EAX + 0x24]
005d40fa  FSUB float ptr [EAX + 0x4]
005d40fd  FSTP float ptr [ESP + 0x1c]
005d4101  FLD float ptr [EAX + 0x28]
005d4104  FSUB float ptr [EAX + 0x8]
005d4107  LEA EAX,[ESP + 0x18]
005d410b  PUSH EAX
005d410c  PUSH ECX
005d410d  FSTP float ptr [ESP + 0x28]
005d4111  CALL 0x0041ea60
005d4116  ADD ESP,0xc
005d4119  MOV dword ptr [ESI + 0xc],0x0
005d4120  POP ESI
005d4121  ADD ESP,0x20
005d4124  RET
