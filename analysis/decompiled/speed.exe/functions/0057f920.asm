0057f920  PUSH -0x1
0057f922  PUSH 0x871fdb
0057f927  MOV EAX,FS:[0x0]
0057f92d  PUSH EAX
0057f92e  MOV dword ptr FS:[0x0],ESP
0057f935  SUB ESP,0x8c
0057f93b  XOR EAX,EAX
0057f93d  PUSH ESI
0057f93e  MOV dword ptr [ESP + 0x4],0x8a071c
0057f946  MOV dword ptr [ESP + 0x8],EAX
0057f94a  MOV dword ptr [ESP + 0xc],0x67452301
0057f952  MOV dword ptr [ESP + 0x10],0xefcdab89
0057f95a  MOV dword ptr [ESP + 0x14],0x98badcfe
0057f962  MOV dword ptr [ESP + 0x18],0x10325476
0057f96a  MOV byte ptr [ESP + 0x5c],AL
0057f96e  MOV ECX,dword ptr [ESP + 0xa0]
0057f975  MOV dword ptr [ESP + 0x98],EAX
0057f97c  MOV EAX,dword ptr [ESP + 0xa8]
0057f983  PUSH EAX
0057f984  PUSH ECX
0057f985  LEA ECX,[ESP + 0xc]
0057f989  CALL 0x0065b6e0
0057f98e  LEA ECX,[ESP + 0x4]
0057f992  CALL 0x0065b760
0057f997  LEA ECX,[ESP + 0x4]
0057f99b  CALL 0x0065b760
0057f9a0  MOV ECX,dword ptr [ESP + 0xa4]
0057f9a7  MOV ESI,dword ptr [ESP + 0xac]
0057f9ae  LEA EDX,[ECX + 0x10]
0057f9b1  CMP EDX,ESI
0057f9b3  POP ESI
0057f9b4  JA 0x0057f9cc
0057f9b6  MOV EDX,dword ptr [EAX]
0057f9b8  MOV dword ptr [ECX],EDX
0057f9ba  MOV EDX,dword ptr [EAX + 0x4]
0057f9bd  MOV dword ptr [ECX + 0x4],EDX
0057f9c0  MOV EDX,dword ptr [EAX + 0x8]
0057f9c3  MOV dword ptr [ECX + 0x8],EDX
0057f9c6  MOV EAX,dword ptr [EAX + 0xc]
0057f9c9  MOV dword ptr [ECX + 0xc],EAX
0057f9cc  MOV ECX,dword ptr [ESP + 0x8c]
0057f9d3  MOV dword ptr FS:[0x0],ECX
0057f9da  ADD ESP,0x98
0057f9e0  RET 0x10
