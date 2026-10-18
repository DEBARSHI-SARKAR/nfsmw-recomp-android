0041c490  PUSH 0x0
0041c492  PUSH 0x1c
0041c494  MOV ECX,0x925b30
0041c499  CALL 0x005d29d0
0041c49e  TEST EAX,EAX
0041c4a0  JZ 0x0041c4d4
0041c4a2  MOV EDX,dword ptr [ESP + 0x8]
0041c4a6  MOV ECX,dword ptr [ESP + 0x4]
0041c4aa  MOV dword ptr [EAX],ECX
0041c4ac  MOV dword ptr [EAX + 0x4],EDX
0041c4af  MOV EDX,dword ptr [ESP + 0xc]
0041c4b3  PUSH ESI
0041c4b4  MOV ESI,dword ptr [EDX]
0041c4b6  LEA ECX,[EAX + 0x8]
0041c4b9  MOV dword ptr [ECX],ESI
0041c4bb  MOV ESI,dword ptr [EDX + 0x4]
0041c4be  MOV dword ptr [ECX + 0x4],ESI
0041c4c1  MOV ESI,dword ptr [EDX + 0x8]
0041c4c4  MOV dword ptr [ECX + 0x8],ESI
0041c4c7  MOV ESI,dword ptr [EDX + 0xc]
0041c4ca  MOV dword ptr [ECX + 0xc],ESI
0041c4cd  MOV EDX,dword ptr [EDX + 0x10]
0041c4d0  MOV dword ptr [ECX + 0x10],EDX
0041c4d3  POP ESI
0041c4d4  RET 0xc
