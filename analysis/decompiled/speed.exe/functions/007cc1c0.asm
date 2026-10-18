007cc1c0  PUSH EBP
007cc1c1  MOV EBP,ESP
007cc1c3  PUSH ECX
007cc1c4  MOV EAX,dword ptr [EBP + 0xc]
007cc1c7  MOV dword ptr [EBP + -0x4],EAX
007cc1ca  MOV ECX,dword ptr [EBP + -0x4]
007cc1cd  MOV EDX,dword ptr [ECX]
007cc1cf  CMP EDX,dword ptr [EBP + 0x8]
007cc1d2  JZ 0x007cc1f0
007cc1d4  MOV EAX,dword ptr [EBP + -0x4]
007cc1d7  ADD EAX,0xc
007cc1da  MOV dword ptr [EBP + -0x4],EAX
007cc1dd  MOV ECX,dword ptr [0x00906804]
007cc1e3  IMUL ECX,ECX,0xc
007cc1e6  ADD ECX,dword ptr [EBP + 0xc]
007cc1e9  CMP dword ptr [EBP + -0x4],ECX
007cc1ec  JNC 0x007cc1f0
007cc1ee  JMP 0x007cc1ca
007cc1f0  MOV EDX,dword ptr [0x00906804]
007cc1f6  IMUL EDX,EDX,0xc
007cc1f9  ADD EDX,dword ptr [EBP + 0xc]
007cc1fc  CMP dword ptr [EBP + -0x4],EDX
007cc1ff  JNC 0x007cc20b
007cc201  MOV EAX,dword ptr [EBP + -0x4]
007cc204  MOV ECX,dword ptr [EAX]
007cc206  CMP ECX,dword ptr [EBP + 0x8]
007cc209  JZ 0x007cc20f
007cc20b  XOR EAX,EAX
007cc20d  JMP 0x007cc212
007cc20f  MOV EAX,dword ptr [EBP + -0x4]
007cc212  MOV ESP,EBP
007cc214  POP EBP
007cc215  RET
