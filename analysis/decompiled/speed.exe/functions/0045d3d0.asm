0045d3d0  MOV EAX,dword ptr [ESP + 0x4]
0045d3d4  MOV EDX,dword ptr [EAX]
0045d3d6  CMP EDX,EAX
0045d3d8  PUSH EDI
0045d3d9  MOV EDI,dword ptr [EAX + 0x4]
0045d3dc  JZ 0x0045d3f2
0045d3de  PUSH ESI
0045d3df  MOV ESI,dword ptr [ECX + 0x4]
0045d3e2  MOV dword ptr [EDI],ECX
0045d3e4  MOV dword ptr [EDX + 0x4],ESI
0045d3e7  MOV dword ptr [ESI],EDX
0045d3e9  MOV dword ptr [ECX + 0x4],EDI
0045d3ec  MOV dword ptr [EAX],EAX
0045d3ee  MOV dword ptr [EAX + 0x4],EAX
0045d3f1  POP ESI
0045d3f2  POP EDI
0045d3f3  RET 0x4
