0058b5b0  PUSH 0x890f10
0058b5b5  PUSH 0x14
0058b5b7  MOV ECX,0x925b30
0058b5bc  CALL 0x005d29d0
0058b5c1  TEST EAX,EAX
0058b5c3  JZ 0x0058b5ed
0058b5c5  MOV ECX,dword ptr [ESP + 0x4]
0058b5c9  MOV EDX,dword ptr [ESP + 0x8]
0058b5cd  MOV dword ptr [EAX],ECX
0058b5cf  MOV ECX,dword ptr [ESP + 0xc]
0058b5d3  MOV dword ptr [EAX + 0x4],EDX
0058b5d6  MOV EDX,dword ptr [ESP + 0x10]
0058b5da  MOV dword ptr [EAX + 0x8],ECX
0058b5dd  MOV ECX,dword ptr [EDX]
0058b5df  MOV DL,byte ptr [ESP + 0x14]
0058b5e3  MOV dword ptr [EAX + 0xc],ECX
0058b5e6  MOV byte ptr [EAX + 0x10],DL
0058b5e9  MOV byte ptr [EAX + 0x11],0x0
0058b5ed  RET 0x14
