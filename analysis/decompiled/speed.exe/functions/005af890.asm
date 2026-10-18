005af890  PUSH ESI
005af891  MOV ESI,dword ptr [ESP + 0xc]
005af895  XOR ECX,ECX
005af897  CMP ESI,ECX
005af899  JBE 0x005af8dd
005af89b  MOV EAX,dword ptr [ESP + 0x8]
005af89f  ADD EAX,0x10
005af8a2  MOV EDX,0x3f800000
005af8a7  JMP 0x005af8b0
005af8b0  MOV dword ptr [EAX + -0x10],0xffffffff
005af8b7  MOV dword ptr [EAX + -0xc],EDX
005af8ba  MOV dword ptr [EAX + -0x8],EDX
005af8bd  MOV dword ptr [EAX + -0x4],ECX
005af8c0  MOV dword ptr [EAX],ECX
005af8c2  MOV dword ptr [EAX + 0x4],ECX
005af8c5  MOV dword ptr [EAX + 0x8],ECX
005af8c8  MOV dword ptr [EAX + 0x10],ECX
005af8cb  MOV dword ptr [EAX + 0x14],ECX
005af8ce  MOV dword ptr [EAX + 0x18],EDX
005af8d1  MOV dword ptr [EAX + 0x1c],EDX
005af8d4  MOV dword ptr [EAX + 0xc],ECX
005af8d7  ADD EAX,0x30
005af8da  DEC ESI
005af8db  JNZ 0x005af8b0
005af8dd  POP ESI
005af8de  RET
