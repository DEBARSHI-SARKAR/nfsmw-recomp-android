0058b2f0  PUSH 0x890f10
0058b2f5  PUSH 0x18
0058b2f7  MOV ECX,0x925b30
0058b2fc  CALL 0x005d29d0
0058b301  TEST EAX,EAX
0058b303  JZ 0x0058b333
0058b305  MOV ECX,dword ptr [ESP + 0x4]
0058b309  MOV EDX,dword ptr [ESP + 0x8]
0058b30d  MOV dword ptr [EAX],ECX
0058b30f  MOV ECX,dword ptr [ESP + 0xc]
0058b313  MOV dword ptr [EAX + 0x8],ECX
0058b316  MOV ECX,dword ptr [ESP + 0x10]
0058b31a  MOV dword ptr [EAX + 0x4],EDX
0058b31d  MOV EDX,dword ptr [ECX]
0058b31f  MOV dword ptr [EAX + 0xc],EDX
0058b322  MOV ECX,dword ptr [ECX + 0x4]
0058b325  MOV DL,byte ptr [ESP + 0x14]
0058b329  MOV dword ptr [EAX + 0x10],ECX
0058b32c  MOV byte ptr [EAX + 0x14],DL
0058b32f  MOV byte ptr [EAX + 0x15],0x0
0058b333  RET 0x14
