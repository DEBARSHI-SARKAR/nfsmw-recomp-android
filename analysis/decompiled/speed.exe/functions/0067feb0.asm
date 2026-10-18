0067feb0  PUSH -0x1
0067feb2  PUSH 0x87b408
0067feb7  MOV EAX,FS:[0x0]
0067febd  PUSH EAX
0067febe  MOV dword ptr FS:[0x0],ESP
0067fec5  PUSH ECX
0067fec6  XOR EAX,EAX
0067fec8  PUSH ESI
0067fec9  MOV ESI,ECX
0067fecb  MOV dword ptr [ESP + 0x4],ESI
0067fecf  MOV dword ptr [ESI + 0x4],EAX
0067fed2  MOV dword ptr [ESI + 0x8],EAX
0067fed5  MOV dword ptr [ESI + 0xc],EAX
0067fed8  PUSH 0x14
0067feda  MOV dword ptr [ESP + 0x14],EAX
0067fede  MOV dword ptr [ESI],0x8aa454
0067fee4  CALL 0x00674970
0067fee9  MOV ECX,dword ptr [ESP + 0x8]
0067feed  MOV EAX,ESI
0067feef  POP ESI
0067fef0  MOV dword ptr FS:[0x0],ECX
0067fef7  ADD ESP,0x10
0067fefa  RET
