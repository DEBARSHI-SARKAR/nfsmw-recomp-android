0073d1b0  PUSH EBP
0073d1b1  MOV EBP,ESP
0073d1b3  AND ESP,0xfffffff0
0073d1b6  SUB ESP,0x20
0073d1b9  MOVSX EAX,word ptr [ECX]
0073d1bc  MOVSX EDX,word ptr [ECX + 0x6]
0073d1c0  MOV dword ptr [ESP + 0xc],EAX
0073d1c4  MOVSX EAX,word ptr [ECX + 0xc]
0073d1c8  FILD dword ptr [ESP + 0xc]
0073d1cc  MOV dword ptr [ESP + 0xc],EDX
0073d1d0  FMUL float ptr [0x008910f0]
0073d1d6  FILD dword ptr [ESP + 0xc]
0073d1da  MOV dword ptr [ESP + 0xc],EAX
0073d1de  MOV EAX,dword ptr [EBP + 0x8]
0073d1e1  FMUL float ptr [0x008910f0]
0073d1e7  FILD dword ptr [ESP + 0xc]
0073d1eb  FMUL float ptr [0x008b493c]
0073d1f1  FXCH ST2
0073d1f3  FSTP float ptr [EAX]
0073d1f5  FSTP float ptr [EAX + 0x4]
0073d1f8  FSTP float ptr [EAX + 0x8]
0073d1fb  MOVSX EDX,word ptr [ECX + 0x2]
0073d1ff  MOV dword ptr [ESP + 0xc],EDX
0073d203  MOVSX EDX,word ptr [ECX + 0x8]
0073d207  FILD dword ptr [ESP + 0xc]
0073d20b  MOV dword ptr [ESP + 0xc],EDX
0073d20f  MOVSX EDX,word ptr [ECX + 0xe]
0073d213  FMUL float ptr [0x008910f0]
0073d219  FILD dword ptr [ESP + 0xc]
0073d21d  MOV dword ptr [ESP + 0xc],EDX
0073d221  FMUL float ptr [0x008910f0]
0073d227  FILD dword ptr [ESP + 0xc]
0073d22b  FMUL float ptr [0x008b493c]
0073d231  FSTP float ptr [ESP + 0x18]
0073d235  MOV EDX,dword ptr [ESP + 0x18]
0073d239  FXCH
0073d23b  MOV dword ptr [EAX + 0x18],EDX
0073d23e  FSTP float ptr [EAX + 0x10]
0073d241  FSTP float ptr [EAX + 0x14]
0073d244  MOVSX EDX,word ptr [ECX + 0x4]
0073d248  MOV dword ptr [ESP + 0xc],EDX
0073d24c  MOVSX EDX,word ptr [ECX + 0xa]
0073d250  FILD dword ptr [ESP + 0xc]
0073d254  MOVSX ECX,word ptr [ECX + 0x10]
0073d258  FMUL float ptr [0x008910f0]
0073d25e  MOV dword ptr [ESP + 0xc],EDX
0073d262  FILD dword ptr [ESP + 0xc]
0073d266  MOV dword ptr [ESP + 0xc],ECX
0073d26a  FMUL float ptr [0x008910f0]
0073d270  FILD dword ptr [ESP + 0xc]
0073d274  FMUL float ptr [0x008b493c]
0073d27a  FSTP float ptr [ESP + 0x18]
0073d27e  MOV EDX,dword ptr [ESP + 0x18]
0073d282  FXCH
0073d284  MOV dword ptr [EAX + 0x28],EDX
0073d287  FSTP float ptr [EAX + 0x20]
0073d28a  FSTP float ptr [EAX + 0x24]
0073d28d  MOV ESP,EBP
0073d28f  POP EBP
0073d290  RET 0x4
