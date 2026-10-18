004fa0c0  PUSH -0x1
004fa0c2  PUSH 0x86dd93
004fa0c7  MOV EAX,FS:[0x0]
004fa0cd  PUSH EAX
004fa0ce  MOV dword ptr FS:[0x0],ESP
004fa0d5  PUSH ECX
004fa0d6  PUSH EBX
004fa0d7  XOR EBX,EBX
004fa0d9  PUSH ESI
004fa0da  MOV ESI,ECX
004fa0dc  PUSH EDI
004fa0dd  MOV dword ptr [ESP + 0xc],ESI
004fa0e1  MOV dword ptr [ESI + 0xc],EBX
004fa0e4  MOV dword ptr [ESI + 0x14],EBX
004fa0e7  MOV dword ptr [ESI + 0x4],EBX
004fa0ea  MOV dword ptr [ESI + 0x8],EBX
004fa0ed  MOV byte ptr [ESI + 0x18],BL
004fa0f0  MOV dword ptr [ESI + 0x10],EBX
004fa0f3  LEA EDI,[ESI + 0x1c]
004fa0f6  MOV ECX,EDI
004fa0f8  MOV dword ptr [ESP + 0x18],EBX
004fa0fc  MOV dword ptr [ESI],0x899afc
004fa102  CALL 0x004eaa90
004fa107  MOV dword ptr [EDI + 0x4],EAX
004fa10a  MOV dword ptr [EDI + 0x8],EBX
004fa10d  MOV ECX,ESI
004fa10f  MOV byte ptr [ESP + 0x18],0x1
004fa114  CALL 0x004fa050
004fa119  MOV ECX,dword ptr [ESP + 0x10]
004fa11d  POP EDI
004fa11e  MOV EAX,ESI
004fa120  POP ESI
004fa121  POP EBX
004fa122  MOV dword ptr FS:[0x0],ECX
004fa129  ADD ESP,0x10
004fa12c  RET
