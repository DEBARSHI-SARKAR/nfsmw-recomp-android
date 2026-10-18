0058afb0  PUSH ESI
0058afb1  MOV ESI,ECX
0058afb3  CALL 0x00466410
0058afb8  TEST EAX,EAX
0058afba  JZ 0x0058afd4
0058afbc  MOV ECX,dword ptr [ESP + 0x8]
0058afc0  MOV dword ptr [EAX + 0x8],ECX
0058afc3  MOV ECX,dword ptr [ESI + 0x4]
0058afc6  MOV dword ptr [ECX],EAX
0058afc8  MOV dword ptr [ESI + 0x4],EAX
0058afcb  MOV dword ptr [EAX],ESI
0058afcd  MOV dword ptr [EAX + 0x4],ECX
0058afd0  POP ESI
0058afd1  RET 0x4
0058afd4  MOV ECX,dword ptr [ESI + 0x4]
0058afd7  XOR EAX,EAX
0058afd9  MOV dword ptr [ECX],EAX
0058afdb  MOV dword ptr [ESI + 0x4],EAX
0058afde  MOV dword ptr [EAX],ESI
0058afe0  MOV dword ptr [EAX + 0x4],ECX
0058afe3  POP ESI
0058afe4  RET 0x4
