004dce50  PUSH -0x1
004dce52  PUSH 0x86cbdb
004dce57  MOV EAX,FS:[0x0]
004dce5d  PUSH EAX
004dce5e  MOV dword ptr FS:[0x0],ESP
004dce65  PUSH ECX
004dce66  PUSH EBX
004dce67  PUSH EBP
004dce68  MOV EBP,ECX
004dce6a  MOV EAX,dword ptr [EBP + 0x48]
004dce6d  XOR EBX,EBX
004dce6f  CMP EAX,EBX
004dce71  JZ 0x004dce8d
004dce73  MOV EAX,dword ptr [EBP]
004dce76  CALL dword ptr [EAX + 0x20]
004dce79  MOV byte ptr [EBP + 0x44],BL
004dce7c  POP EBP
004dce7d  POP EBX
004dce7e  MOV ECX,dword ptr [ESP + 0x4]
004dce82  MOV dword ptr FS:[0x0],ECX
004dce89  ADD ESP,0x10
004dce8c  RET
004dce8d  MOV ECX,dword ptr [0x00911fa8]
004dce93  PUSH ESI
004dce94  PUSH EBP
004dce95  CALL 0x004b8db0
004dce9a  PUSH 0x2c
004dce9c  CALL 0x00831667
004dcea1  MOV ESI,EAX
004dcea3  ADD ESP,0x4
004dcea6  MOV dword ptr [ESP + 0xc],ESI
004dceaa  CMP ESI,EBX
004dceac  MOV dword ptr [ESP + 0x18],EBX
004dceb0  JZ 0x004dcf0f
004dceb2  PUSH EDI
004dceb3  LEA EDI,[ESI + 0x4]
004dceb6  PUSH ESI
004dceb7  PUSH EDI
004dceb8  PUSH 0x9147e4
004dcebd  MOV dword ptr [EDI],EBX
004dcebf  MOV dword ptr [ESI + 0x8],EBX
004dcec2  MOV dword ptr [ESI + 0xc],EBX
004dcec5  MOV dword ptr [ESI + 0x10],EBX
004dcec8  MOV dword ptr [ESI + 0x14],EBX
004dcecb  MOV dword ptr [ESI + 0x18],EBX
004dcece  MOV dword ptr [ESI + 0x1c],0x61a8
004dced5  MOV dword ptr [ESI + 0x20],EBX
004dced8  MOV dword ptr [ESI + 0x24],0x7fff
004dcedf  MOV dword ptr [ESI + 0x28],EBX
004dcee2  CALL 0x00831a8a
004dcee7  ADD ESP,0xc
004dceea  TEST EAX,EAX
004dceec  JGE 0x004dcf0c
004dceee  PUSH 0x8f0318
004dcef3  MOV ECX,0x9147e4
004dcef8  CALL 0x0083198b
004dcefd  PUSH ESI
004dcefe  PUSH EDI
004dceff  PUSH 0x9147e4
004dcf04  CALL 0x00831a8a
004dcf09  ADD ESP,0xc
004dcf0c  POP EDI
004dcf0d  JMP 0x004dcf11
004dcf0f  XOR ESI,ESI
004dcf11  MOV ECX,dword ptr [ESP + 0x10]
004dcf15  MOV dword ptr [EBP + 0x48],ESI
004dcf18  POP ESI
004dcf19  MOV byte ptr [EBP + 0x44],BL
004dcf1c  POP EBP
004dcf1d  POP EBX
004dcf1e  MOV dword ptr FS:[0x0],ECX
004dcf25  ADD ESP,0x10
004dcf28  RET
