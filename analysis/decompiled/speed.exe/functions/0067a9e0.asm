0067a9e0  PUSH ESI
0067a9e1  MOV ESI,ECX
0067a9e3  CALL 0x00675a10
0067a9e8  MOV dword ptr [ESI + 0x4],EAX
0067a9eb  MOV byte ptr [EAX + 0x15],0x1
0067a9ef  MOV EAX,dword ptr [ESI + 0x4]
0067a9f2  MOV dword ptr [EAX + 0x4],EAX
0067a9f5  MOV EAX,dword ptr [ESI + 0x4]
0067a9f8  MOV dword ptr [EAX],EAX
0067a9fa  MOV EAX,dword ptr [ESI + 0x4]
0067a9fd  MOV dword ptr [EAX + 0x8],EAX
0067aa00  MOV dword ptr [ESI + 0x8],0x0
0067aa07  POP ESI
0067aa08  RET
