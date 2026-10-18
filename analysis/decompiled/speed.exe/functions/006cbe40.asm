006cbe40  PUSH -0x1
006cbe42  PUSH 0x87e304
006cbe47  MOV EAX,FS:[0x0]
006cbe4d  PUSH EAX
006cbe4e  MOV dword ptr FS:[0x0],ESP
006cbe55  PUSH ECX
006cbe56  PUSH ESI
006cbe57  PUSH 0x5c
006cbe59  MOV ESI,ECX
006cbe5b  CALL 0x00652ad0
006cbe60  ADD ESP,0x4
006cbe63  MOV dword ptr [ESP + 0x4],EAX
006cbe67  TEST EAX,EAX
006cbe69  MOV dword ptr [ESP + 0x10],0x0
006cbe71  JZ 0x006cbe7c
006cbe73  MOV ECX,EAX
006cbe75  CALL 0x007f3f23
006cbe7a  JMP 0x006cbe7e
006cbe7c  XOR EAX,EAX
006cbe7e  MOV ECX,EAX
006cbe80  MOV dword ptr [ESP + 0x10],0xffffffff
006cbe88  MOV dword ptr [ESI + 0x8],EAX
006cbe8b  CALL 0x007f3ec3
006cbe90  MOV EAX,dword ptr [ESI + 0x8]
006cbe93  MOV ECX,dword ptr [ESP + 0x18]
006cbe97  MOV EDX,dword ptr [ECX*0x4 + 0x8f3948]
006cbe9e  MOV dword ptr [EAX + 0x54],EDX
006cbea1  MOV EAX,dword ptr [ESI + 0x8]
006cbea4  MOV dword ptr [EAX + 0x58],0x91c2b8
006cbeab  MOV ECX,dword ptr [ESI + 0x8]
006cbeae  MOV EAX,dword ptr [ESP + 0x20]
006cbeb2  MOV dword ptr [ECX + 0x4c],0x8
006cbeb9  MOV EDX,dword ptr [ESI + 0x8]
006cbebc  MOV ECX,dword ptr [ESP + 0x8]
006cbec0  MOV dword ptr [EDX + 0x50],EAX
006cbec3  MOV EAX,dword ptr [ESI + 0x8]
006cbec6  POP ESI
006cbec7  MOV dword ptr FS:[0x0],ECX
006cbece  ADD ESP,0x10
006cbed1  RET 0xc
