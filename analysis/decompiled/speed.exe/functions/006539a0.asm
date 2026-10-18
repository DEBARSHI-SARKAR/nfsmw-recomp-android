006539a0  MOV EAX,ECX
006539a2  XOR ECX,ECX
006539a4  MOV byte ptr [EAX + 0x4],0x4
006539a8  MOV byte ptr [EAX + 0x5],CL
006539ab  MOV byte ptr [EAX + 0x6],CL
006539ae  MOV byte ptr [EAX + 0x7],CL
006539b1  MOV dword ptr [EAX],0x8a8aac
006539b7  MOV dword ptr [EAX + 0x8],ECX
006539ba  MOV dword ptr [EAX + 0xc],ECX
006539bd  MOV dword ptr [EAX + 0x10],ECX
006539c0  RET
