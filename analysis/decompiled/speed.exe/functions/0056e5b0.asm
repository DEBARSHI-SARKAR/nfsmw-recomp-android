0056e5b0  MOV AL,0x1
0056e5b2  MOV byte ptr [ECX + 0x8],AL
0056e5b5  MOV byte ptr [ECX + 0x9],AL
0056e5b8  MOV byte ptr [ECX + 0xa],AL
0056e5bb  MOV byte ptr [ECX + 0xb],AL
0056e5be  XOR EAX,EAX
0056e5c0  MOV DL,0x3
0056e5c2  MOV byte ptr [ECX + 0x7],DL
0056e5c5  MOV byte ptr [ECX + 0xc],AL
0056e5c8  MOV byte ptr [ECX + 0x5],AL
0056e5cb  MOV byte ptr [ECX + 0x4],0x2
0056e5cf  MOV byte ptr [ECX + 0x6],AL
0056e5d2  MOV dword ptr [ECX + 0x10],EAX
0056e5d5  MOV dword ptr [ECX + 0x14],EAX
0056e5d8  MOV byte ptr [ECX + 0xd],DL
0056e5db  RET
