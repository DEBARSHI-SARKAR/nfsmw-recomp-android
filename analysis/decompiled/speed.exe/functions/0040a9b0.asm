0040a9b0  PUSH ESI
0040a9b1  MOV ESI,ECX
0040a9b3  MOV EAX,dword ptr [ESI]
0040a9b5  CALL dword ptr [EAX + 0x140]
0040a9bb  TEST EAX,EAX
0040a9bd  JZ 0x0040a9f3
0040a9bf  MOV ECX,dword ptr [EAX + 0x8]
0040a9c2  MOV EDX,dword ptr [ECX + 0x70]
0040a9c5  MOV dword ptr [ESI + 0x144],EDX
0040a9cb  MOV ECX,dword ptr [EAX + 0x8]
0040a9ce  MOV EDX,dword ptr [ECX + 0x9c]
0040a9d4  MOV dword ptr [ESI + 0x148],EDX
0040a9da  MOV EAX,dword ptr [EAX + 0x8]
0040a9dd  MOV ECX,dword ptr [EAX + 0x90]
0040a9e3  MOV dword ptr [ESI + 0x104],ECX
0040a9e9  MOV dword ptr [ESI + 0x14c],0x0
0040a9f3  POP ESI
0040a9f4  RET
