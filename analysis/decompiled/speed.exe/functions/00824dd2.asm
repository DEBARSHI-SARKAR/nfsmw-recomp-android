00824dd2  MOV EAX,dword ptr [ESP + 0x4]
00824dd6  XOR ECX,ECX
00824dd8  MOV dword ptr [EAX + 0x8],ECX
00824ddb  MOV dword ptr [EAX + 0xc],ECX
00824dde  MOV dword ptr [EAX + 0x10],ECX
00824de1  MOV dword ptr [EAX + 0x14],ECX
00824de4  MOV byte ptr [EAX + 0x1b],CL
00824de7  MOV dword ptr [EAX + 0x4],ECX
00824dea  MOV dword ptr [EAX],0x824d89
00824df0  ADD EAX,0x1c
00824df3  PUSH EAX
00824df4  CALL 0x0082644a
00824df9  POP ECX
00824dfa  XOR EAX,EAX
00824dfc  RET
