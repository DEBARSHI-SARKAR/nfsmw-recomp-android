004dbb90  PUSH -0x1
004dbb92  PUSH 0x86cafb
004dbb97  MOV EAX,FS:[0x0]
004dbb9d  PUSH EAX
004dbb9e  MOV dword ptr FS:[0x0],ESP
004dbba5  PUSH ECX
004dbba6  PUSH EBX
004dbba7  PUSH EBP
004dbba8  PUSH ESI
004dbba9  MOV EBP,ECX
004dbbab  MOV ECX,dword ptr [0x00911fa8]
004dbbb1  PUSH 0x89878c
004dbbb6  CALL 0x004ae980
004dbbbb  PUSH 0x14
004dbbbd  CALL 0x00831667
004dbbc2  MOV ESI,EAX
004dbbc4  ADD ESP,0x4
004dbbc7  MOV dword ptr [ESP + 0xc],ESI
004dbbcb  XOR EBX,EBX
004dbbcd  CMP ESI,EBX
004dbbcf  MOV dword ptr [ESP + 0x18],EBX
004dbbd3  JZ 0x004dbc18
004dbbd5  PUSH EDI
004dbbd6  LEA EDI,[ESI + 0x4]
004dbbd9  PUSH ESI
004dbbda  PUSH EDI
004dbbdb  PUSH 0x9147d4
004dbbe0  MOV dword ptr [EDI],EBX
004dbbe2  MOV dword ptr [ESI + 0x8],EBX
004dbbe5  MOV dword ptr [ESI + 0xc],EBX
004dbbe8  MOV dword ptr [ESI + 0x10],EBX
004dbbeb  CALL 0x00831a8a
004dbbf0  ADD ESP,0xc
004dbbf3  CMP EAX,EBX
004dbbf5  JGE 0x004dbc15
004dbbf7  PUSH 0x8f02a0
004dbbfc  MOV ECX,0x9147d4
004dbc01  CALL 0x0083198b
004dbc06  PUSH ESI
004dbc07  PUSH EDI
004dbc08  PUSH 0x9147d4
004dbc0d  CALL 0x00831a8a
004dbc12  ADD ESP,0xc
004dbc15  POP EDI
004dbc16  JMP 0x004dbc1a
004dbc18  XOR ESI,ESI
004dbc1a  MOV dword ptr [EBP + 0x30],ESI
004dbc1d  MOV ECX,dword ptr [ESI]
004dbc1f  XOR EAX,EAX
004dbc21  CMP ECX,EBX
004dbc23  MOV dword ptr [ESP + 0x18],0xffffffff
004dbc2b  MOV dword ptr [ESP + 0xc],EAX
004dbc2f  JZ 0x004dbc54
004dbc31  LEA EAX,[ESP + 0xc]
004dbc35  PUSH EAX
004dbc36  CALL 0x008311aa
004dbc3b  MOV ECX,dword ptr [ESP + 0xc]
004dbc3f  POP ESI
004dbc40  MOV dword ptr [EBP + 0x34],ECX
004dbc43  POP EBP
004dbc44  POP EBX
004dbc45  MOV ECX,dword ptr [ESP + 0x4]
004dbc49  MOV dword ptr FS:[0x0],ECX
004dbc50  ADD ESP,0x10
004dbc53  RET
004dbc54  MOV ECX,dword ptr [ESP + 0x10]
004dbc58  POP ESI
004dbc59  MOV dword ptr [EBP + 0x34],EAX
004dbc5c  POP EBP
004dbc5d  POP EBX
004dbc5e  MOV dword ptr FS:[0x0],ECX
004dbc65  ADD ESP,0x10
004dbc68  RET
