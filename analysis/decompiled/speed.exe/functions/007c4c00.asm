007c4c00  PUSH EBP
007c4c01  MOV EBP,ESP
007c4c03  PUSH ECX
007c4c04  PUSH EBX
007c4c05  MOV EAX,dword ptr [EBP + 0xc]
007c4c08  ADD EAX,0xc
007c4c0b  MOV dword ptr [EBP + -0x4],EAX
007c4c0e  MOV EBX,dword ptr FS:[0x0]
007c4c15  MOV EAX,dword ptr [EBX]
007c4c17  MOV FS:[0x0],EAX
007c4c1d  MOV EAX,dword ptr [EBP + 0x8]
007c4c20  MOV EBX,dword ptr [EBP + 0xc]
007c4c23  MOV ESP,dword ptr [EBX + -0x4]
007c4c26  MOV EBP,dword ptr [EBP + -0x4]
007c4c29  JMP EAX
