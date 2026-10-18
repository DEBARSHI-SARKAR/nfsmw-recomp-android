0075efe0  PUSH ESI
0075efe1  MOV ESI,ECX
0075efe3  CALL 0x0074cd10
0075efe8  MOV dword ptr [ESI + 0x4],EAX
0075efeb  MOV byte ptr [EAX + 0x15],0x1
0075efef  MOV EAX,dword ptr [ESI + 0x4]
0075eff2  MOV dword ptr [EAX + 0x4],EAX
0075eff5  MOV EAX,dword ptr [ESI + 0x4]
0075eff8  MOV dword ptr [EAX],EAX
0075effa  MOV EAX,dword ptr [ESI + 0x4]
0075effd  MOV dword ptr [EAX + 0x8],EAX
0075f000  MOV dword ptr [ESI + 0x8],0x0
0075f007  MOV EAX,ESI
0075f009  POP ESI
0075f00a  RET
