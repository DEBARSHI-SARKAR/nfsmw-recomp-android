0067fcd0  PUSH -0x1
0067fcd2  PUSH 0x87b348
0067fcd7  MOV EAX,FS:[0x0]
0067fcdd  PUSH EAX
0067fcde  MOV dword ptr FS:[0x0],ESP
0067fce5  PUSH ECX
0067fce6  XOR EAX,EAX
0067fce8  PUSH ESI
0067fce9  MOV ESI,ECX
0067fceb  MOV dword ptr [ESP + 0x4],ESI
0067fcef  MOV dword ptr [ESI + 0x4],EAX
0067fcf2  MOV dword ptr [ESI + 0x8],EAX
0067fcf5  MOV dword ptr [ESI + 0xc],EAX
0067fcf8  PUSH 0x14
0067fcfa  MOV dword ptr [ESP + 0x14],EAX
0067fcfe  MOV dword ptr [ESI],0x8aa3c4
0067fd04  CALL 0x0041c080
0067fd09  MOV ECX,dword ptr [ESP + 0x8]
0067fd0d  MOV EAX,ESI
0067fd0f  POP ESI
0067fd10  MOV dword ptr FS:[0x0],ECX
0067fd17  ADD ESP,0x10
0067fd1a  RET
