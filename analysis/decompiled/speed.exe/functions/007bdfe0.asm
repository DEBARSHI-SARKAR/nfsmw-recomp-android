007bdfe0  PUSH -0x1
007bdfe2  PUSH 0x883768
007bdfe7  MOV EAX,FS:[0x0]
007bdfed  PUSH EAX
007bdfee  MOV dword ptr FS:[0x0],ESP
007bdff5  PUSH ECX
007bdff6  MOV EAX,dword ptr [ESP + 0x14]
007bdffa  PUSH ESI
007bdffb  MOV ESI,ECX
007bdffd  PUSH EAX
007bdffe  MOV dword ptr [ESP + 0x8],ESI
007be002  CALL 0x007bce90
007be007  MOV ECX,ESI
007be009  MOV dword ptr [ESP + 0x10],0x0
007be011  MOV dword ptr [ESI],0x8b7ef8
007be017  MOV byte ptr [ESI + 0x1bc],0x1
007be01e  CALL 0x007b8680
007be023  MOV ECX,dword ptr [ESP + 0x8]
007be027  MOV EAX,ESI
007be029  POP ESI
007be02a  MOV dword ptr FS:[0x0],ECX
007be031  ADD ESP,0x10
007be034  RET 0x4
