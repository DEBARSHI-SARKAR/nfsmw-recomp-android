0067fb90  PUSH -0x1
0067fb92  PUSH 0x87b2c8
0067fb97  MOV EAX,FS:[0x0]
0067fb9d  PUSH EAX
0067fb9e  MOV dword ptr FS:[0x0],ESP
0067fba5  PUSH ECX
0067fba6  XOR EAX,EAX
0067fba8  PUSH ESI
0067fba9  MOV ESI,ECX
0067fbab  MOV dword ptr [ESP + 0x4],ESI
0067fbaf  MOV dword ptr [ESI + 0x4],EAX
0067fbb2  MOV dword ptr [ESI + 0x8],EAX
0067fbb5  MOV dword ptr [ESI + 0xc],EAX
0067fbb8  PUSH 0x1c
0067fbba  MOV dword ptr [ESP + 0x14],EAX
0067fbbe  MOV dword ptr [ESI],0x8aa364
0067fbc4  CALL 0x0041d960
0067fbc9  MOV ECX,dword ptr [ESP + 0x8]
0067fbcd  MOV EAX,ESI
0067fbcf  POP ESI
0067fbd0  MOV dword ptr FS:[0x0],ECX
0067fbd7  ADD ESP,0x10
0067fbda  RET
