006a0760  MOV EDX,dword ptr [ECX + 0x14c]
006a0766  XOR EAX,EAX
006a0768  MOV dword ptr [ECX + 0x80],EAX
006a076e  FLD float ptr [EDX + 0x5c]
006a0771  FMUL float ptr [0x008a9398]
006a0777  MOV dword ptr [ECX + 0xf0],EAX
006a077d  FSTP float ptr [ECX + 0xec]
006a0783  MOV EDX,dword ptr [EDX + 0x5c]
006a0786  MOV dword ptr [ECX + 0x180],EDX
006a078c  MOV dword ptr [ECX + 0xf4],EAX
006a0792  MOV dword ptr [ECX + 0x198],EAX
006a0798  MOV dword ptr [ECX + 0x19c],EAX
006a079e  MOV dword ptr [ECX + 0x88],EAX
006a07a4  MOV dword ptr [ECX + 0x90],EAX
006a07aa  MOV dword ptr [ECX + 0x94],EAX
006a07b0  MOV dword ptr [ECX + 0x98],EAX
006a07b6  MOV dword ptr [ECX + 0x184],EAX
006a07bc  MOV dword ptr [ECX + 0x188],EAX
006a07c2  MOV dword ptr [ECX + 0x84],0x2
006a07cc  MOV dword ptr [ECX + 0x100],EAX
006a07d2  MOV dword ptr [ECX + 0x104],EAX
006a07d8  MOV dword ptr [ECX + 0x8c],EAX
006a07de  MOV dword ptr [ECX + 0xfc],0x3f800000
006a07e8  MOV dword ptr [ECX + 0x10c],EAX
006a07ee  JMP 0x00691ed0
