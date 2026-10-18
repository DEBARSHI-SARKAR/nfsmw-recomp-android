006ddaa0  MOV ECX,dword ptr [ESP + 0x4]
006ddaa4  MOV EDX,dword ptr [ESP + 0x8]
006ddaa8  CMP ECX,EDX
006ddaaa  MOV EAX,dword ptr [ESP + 0xc]
006ddaae  JZ 0x006ddaca
006ddab0  PUSH ESI
006ddab1  TEST EAX,EAX
006ddab3  JZ 0x006ddabf
006ddab5  MOV ESI,dword ptr [ECX]
006ddab7  MOV dword ptr [EAX],ESI
006ddab9  MOV ESI,dword ptr [ECX + 0x4]
006ddabc  MOV dword ptr [EAX + 0x4],ESI
006ddabf  ADD ECX,0x8
006ddac2  ADD EAX,0x8
006ddac5  CMP ECX,EDX
006ddac7  JNZ 0x006ddab1
006ddac9  POP ESI
006ddaca  RET
