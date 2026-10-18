0067fc80  PUSH -0x1
0067fc82  PUSH 0x87b328
0067fc87  MOV EAX,FS:[0x0]
0067fc8d  PUSH EAX
0067fc8e  MOV dword ptr FS:[0x0],ESP
0067fc95  PUSH ECX
0067fc96  XOR EAX,EAX
0067fc98  PUSH ESI
0067fc99  MOV ESI,ECX
0067fc9b  MOV dword ptr [ESP + 0x4],ESI
0067fc9f  MOV dword ptr [ESI + 0x4],EAX
0067fca2  MOV dword ptr [ESI + 0x8],EAX
0067fca5  MOV dword ptr [ESI + 0xc],EAX
0067fca8  PUSH 0xa0
0067fcad  MOV dword ptr [ESP + 0x14],EAX
0067fcb1  MOV dword ptr [ESI],0x8aa3ac
0067fcb7  CALL 0x00674820
0067fcbc  MOV ECX,dword ptr [ESP + 0x8]
0067fcc0  MOV EAX,ESI
0067fcc2  POP ESI
0067fcc3  MOV dword ptr FS:[0x0],ECX
0067fcca  ADD ESP,0x10
0067fccd  RET
