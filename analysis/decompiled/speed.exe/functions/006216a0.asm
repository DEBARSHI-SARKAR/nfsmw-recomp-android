006216a0  MOV EAX,ECX
006216a2  MOV ECX,dword ptr [ESP + 0x4]
006216a6  MOV dword ptr [EAX + 0x8],ECX
006216a9  MOV ECX,dword ptr [ESP + 0x8]
006216ad  LEA EDX,[EAX + 0xc]
006216b0  MOV dword ptr [EDX],ECX
006216b2  MOV ECX,dword ptr [ESP + 0xc]
006216b6  MOV dword ptr [EDX + 0x4],ECX
006216b9  MOV ECX,dword ptr [ESP + 0x10]
006216bd  MOV dword ptr [EDX + 0x8],ECX
006216c0  MOV ECX,dword ptr [ESP + 0x14]
006216c4  MOV dword ptr [EDX + 0xc],ECX
006216c7  MOV ECX,dword ptr [ESP + 0x18]
006216cb  LEA EDX,[EAX + 0x1c]
006216ce  MOV dword ptr [EDX],ECX
006216d0  MOV ECX,dword ptr [ESP + 0x1c]
006216d4  MOV dword ptr [EDX + 0x4],ECX
006216d7  MOV ECX,dword ptr [ESP + 0x20]
006216db  MOV dword ptr [EDX + 0x8],ECX
006216de  MOV ECX,dword ptr [ESP + 0x24]
006216e2  MOV dword ptr [EDX + 0xc],ECX
006216e5  MOV ECX,dword ptr [ESP + 0x28]
006216e9  LEA EDX,[EAX + 0x2c]
006216ec  MOV dword ptr [EDX],ECX
006216ee  MOV ECX,dword ptr [ESP + 0x2c]
006216f2  MOV dword ptr [EDX + 0x4],ECX
006216f5  MOV ECX,dword ptr [ESP + 0x30]
006216f9  MOV dword ptr [EDX + 0x8],ECX
006216fc  MOV ECX,dword ptr [ESP + 0x34]
00621700  MOV dword ptr [EDX + 0xc],ECX
00621703  MOV EDX,dword ptr [ESP + 0x38]
00621707  MOV dword ptr [EAX + 0x4],0x40
0062170e  MOV dword ptr [EAX],0x8a6a8c
00621714  MOV dword ptr [EAX + 0x3c],EDX
00621717  RET 0x38
