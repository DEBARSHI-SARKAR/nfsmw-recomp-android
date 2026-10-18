006fb8b0  PUSH -0x1
006fb8b2  PUSH 0x87f54f
006fb8b7  MOV EAX,FS:[0x0]
006fb8bd  PUSH EAX
006fb8be  MOV dword ptr FS:[0x0],ESP
006fb8c5  SUB ESP,0x8
006fb8c8  PUSH 0x0
006fb8ca  PUSH 0x68
006fb8cc  MOV ECX,0x925b30
006fb8d1  CALL 0x005d29d0
006fb8d6  MOV dword ptr [ESP],EAX
006fb8d9  TEST EAX,EAX
006fb8db  MOV dword ptr [ESP + 0x10],0x0
006fb8e3  JZ 0x006fb91f
006fb8e5  MOV ECX,dword ptr [ESP + 0x18]
006fb8e9  SUB ESP,0x10
006fb8ec  MOV EDX,ESP
006fb8ee  MOV dword ptr [EDX],ECX
006fb8f0  MOV ECX,dword ptr [ESP + 0x2c]
006fb8f4  MOV dword ptr [EDX + 0x4],ECX
006fb8f7  MOV ECX,dword ptr [ESP + 0x30]
006fb8fb  MOV dword ptr [EDX + 0x8],ECX
006fb8fe  MOV ECX,EAX
006fb900  MOV dword ptr [ESP + 0x14],ESP
006fb904  CALL 0x006fac70
006fb909  TEST EAX,EAX
006fb90b  JZ 0x006fb91f
006fb90d  ADD EAX,0x2c
006fb910  MOV ECX,dword ptr [ESP + 0x8]
006fb914  MOV dword ptr FS:[0x0],ECX
006fb91b  ADD ESP,0x14
006fb91e  RET
006fb91f  MOV ECX,dword ptr [ESP + 0x8]
006fb923  XOR EAX,EAX
006fb925  MOV dword ptr FS:[0x0],ECX
006fb92c  ADD ESP,0x14
006fb92f  RET
