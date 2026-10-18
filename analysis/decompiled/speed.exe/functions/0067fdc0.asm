0067fdc0  PUSH -0x1
0067fdc2  PUSH 0x87b3a8
0067fdc7  MOV EAX,FS:[0x0]
0067fdcd  PUSH EAX
0067fdce  MOV dword ptr FS:[0x0],ESP
0067fdd5  PUSH ECX
0067fdd6  XOR EAX,EAX
0067fdd8  PUSH ESI
0067fdd9  MOV ESI,ECX
0067fddb  MOV dword ptr [ESP + 0x4],ESI
0067fddf  MOV dword ptr [ESI + 0x4],EAX
0067fde2  MOV dword ptr [ESI + 0x8],EAX
0067fde5  MOV dword ptr [ESI + 0xc],EAX
0067fde8  PUSH 0x8
0067fdea  MOV dword ptr [ESP + 0x14],EAX
0067fdee  MOV dword ptr [ESI],0x8aa40c
0067fdf4  CALL 0x004792a0
0067fdf9  MOV ECX,dword ptr [ESP + 0x8]
0067fdfd  MOV EAX,ESI
0067fdff  POP ESI
0067fe00  MOV dword ptr FS:[0x0],ECX
0067fe07  ADD ESP,0x10
0067fe0a  RET
