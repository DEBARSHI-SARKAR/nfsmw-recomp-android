004eb180  SUB ESP,0x24
004eb183  MOV ECX,dword ptr [ESP + 0x28]
004eb187  MOV EDX,dword ptr [ESP + 0x2c]
004eb18b  XOR EAX,EAX
004eb18d  MOV dword ptr [ESP],EAX
004eb190  MOV dword ptr [ESP + 0x4],EAX
004eb194  MOV dword ptr [ESP + 0x8],EAX
004eb198  MOV dword ptr [ESP + 0xc],EAX
004eb19c  MOV dword ptr [ESP + 0x10],EAX
004eb1a0  MOV dword ptr [ESP + 0x14],0x0
004eb1a8  MOV dword ptr [ESP + 0x14],EAX
004eb1ac  MOV dword ptr [ESP + 0x18],EAX
004eb1b0  MOV dword ptr [ESP + 0x1c],EAX
004eb1b4  MOV dword ptr [ESP + 0x20],EAX
004eb1b8  LEA EAX,[ESP + 0x28]
004eb1bc  PUSH EAX
004eb1bd  MOV dword ptr [ESP + 0x8],ECX
004eb1c1  MOV dword ptr [ESP + 0x4],EDX
004eb1c5  MOV dword ptr [ESP + 0x14],0x4e4ba0
004eb1cd  CALL 0x00405d20
004eb1d2  MOV ECX,dword ptr [EAX]
004eb1d4  MOV EAX,[0x008f831c]
004eb1d9  MOV EDX,dword ptr [ESP + 0x38]
004eb1dd  MOV dword ptr [ESP + 0x1c],EAX
004eb1e1  INC EAX
004eb1e2  MOV dword ptr [ESP + 0x18],ECX
004eb1e6  MOV ECX,dword ptr [ESP + 0x34]
004eb1ea  MOV [0x008f831c],EAX
004eb1ef  MOV EAX,ESP
004eb1f1  MOV dword ptr [ESP + 0x20],EDX
004eb1f5  MOV dword ptr [EAX],ECX
004eb1f7  LEA ECX,[ESP + 0x4]
004eb1fb  CALL 0x00665390
004eb200  ADD ESP,0x24
004eb203  RET
