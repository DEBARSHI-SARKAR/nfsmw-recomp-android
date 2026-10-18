004f9f90  PUSH EBP
004f9f91  MOV EBP,ESP
004f9f93  AND ESP,0xfffffff0
004f9f96  PUSH -0x1
004f9f98  PUSH 0x86dd74
004f9f9d  MOV EAX,FS:[0x0]
004f9fa3  PUSH EAX
004f9fa4  MOV dword ptr FS:[0x0],ESP
004f9fab  SUB ESP,0x8
004f9fae  PUSH EBX
004f9faf  PUSH ESI
004f9fb0  PUSH EDI
004f9fb1  PUSH 0x30
004f9fb3  MOV EDI,ECX
004f9fb5  CALL 0x00652ad0
004f9fba  MOV ESI,EAX
004f9fbc  ADD ESP,0x4
004f9fbf  MOV dword ptr [ESP + 0xc],ESI
004f9fc3  TEST ESI,ESI
004f9fc5  MOV dword ptr [ESP + 0x1c],0x0
004f9fcd  JZ 0x004f9ff7
004f9fcf  LEA ECX,[ESI + 0x4]
004f9fd2  CALL 0x004eaff0
004f9fd7  MOV EAX,dword ptr [EBP + 0x8]
004f9fda  MOV ECX,dword ptr [EBP + 0xc]
004f9fdd  MOV EDX,dword ptr [EBP + 0x10]
004f9fe0  MOV dword ptr [ESI],0x8992e4
004f9fe6  MOV dword ptr [ESI + 0x10],EAX
004f9fe9  MOV EAX,dword ptr [EBP + 0x14]
004f9fec  MOV dword ptr [ESI + 0x14],ECX
004f9fef  MOV dword ptr [ESI + 0x18],EDX
004f9ff2  MOV dword ptr [ESI + 0x20],EAX
004f9ff5  JMP 0x004f9ff9
004f9ff7  XOR ESI,ESI
004f9ff9  MOV dword ptr [ESP + 0xc],ESI
004f9ffd  LEA ESI,[EDI + 0x1c]
004fa000  MOV EDI,dword ptr [ESI + 0x4]
004fa003  MOV EDX,dword ptr [EDI + 0x4]
004fa006  LEA ECX,[ESP + 0xc]
004fa00a  PUSH ECX
004fa00b  PUSH EDX
004fa00c  PUSH EDI
004fa00d  MOV ECX,ESI
004fa00f  MOV dword ptr [ESP + 0x28],0xffffffff
004fa017  CALL 0x004eaf90
004fa01c  PUSH 0x1
004fa01e  MOV ECX,ESI
004fa020  MOV EBX,EAX
004fa022  CALL 0x004f8f40
004fa027  MOV ECX,dword ptr [ESP + 0x14]
004fa02b  MOV dword ptr [EDI + 0x4],EBX
004fa02e  MOV EAX,dword ptr [EBX + 0x4]
004fa031  POP EDI
004fa032  MOV dword ptr [EAX],EBX
004fa034  POP ESI
004fa035  MOV dword ptr FS:[0x0],ECX
004fa03c  POP EBX
004fa03d  MOV ESP,EBP
004fa03f  POP EBP
004fa040  RET 0x10
