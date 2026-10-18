0067faa0  PUSH -0x1
0067faa2  PUSH 0x87b268
0067faa7  MOV EAX,FS:[0x0]
0067faad  PUSH EAX
0067faae  MOV dword ptr FS:[0x0],ESP
0067fab5  PUSH ECX
0067fab6  XOR EAX,EAX
0067fab8  PUSH ESI
0067fab9  MOV ESI,ECX
0067fabb  MOV dword ptr [ESP + 0x4],ESI
0067fabf  MOV dword ptr [ESI + 0x4],EAX
0067fac2  MOV dword ptr [ESI + 0x8],EAX
0067fac5  MOV dword ptr [ESI + 0xc],EAX
0067fac8  PUSH 0x8f8
0067facd  MOV dword ptr [ESP + 0x14],EAX
0067fad1  MOV dword ptr [ESI],0x8aa31c
0067fad7  CALL 0x006745f0
0067fadc  MOV ECX,dword ptr [ESP + 0x8]
0067fae0  MOV EAX,ESI
0067fae2  POP ESI
0067fae3  MOV dword ptr FS:[0x0],ECX
0067faea  ADD ESP,0x10
0067faed  RET
