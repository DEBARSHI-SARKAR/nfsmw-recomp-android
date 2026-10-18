006b10c0  PUSH 0x0
006b10c2  PUSH 0x18
006b10c4  MOV ECX,0x925b30
006b10c9  CALL 0x005d29d0
006b10ce  TEST EAX,EAX
006b10d0  JZ 0x006b1100
006b10d2  MOV ECX,dword ptr [ESP + 0x4]
006b10d6  MOV EDX,dword ptr [ESP + 0x8]
006b10da  MOV dword ptr [EAX],ECX
006b10dc  MOV ECX,dword ptr [ESP + 0xc]
006b10e0  MOV dword ptr [EAX + 0x8],ECX
006b10e3  MOV ECX,dword ptr [ESP + 0x10]
006b10e7  MOV dword ptr [EAX + 0x4],EDX
006b10ea  MOV EDX,dword ptr [ECX]
006b10ec  MOV dword ptr [EAX + 0xc],EDX
006b10ef  MOV ECX,dword ptr [ECX + 0x4]
006b10f2  MOV DL,byte ptr [ESP + 0x14]
006b10f6  MOV dword ptr [EAX + 0x10],ECX
006b10f9  MOV byte ptr [EAX + 0x14],DL
006b10fc  MOV byte ptr [EAX + 0x15],0x0
006b1100  RET 0x14
