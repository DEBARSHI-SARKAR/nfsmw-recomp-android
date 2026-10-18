006faec0  PUSH -0x1
006faec2  PUSH 0x87f4e2
006faec7  MOV EAX,FS:[0x0]
006faecd  PUSH EAX
006faece  MOV dword ptr FS:[0x0],ESP
006faed5  SUB ESP,0x8
006faed8  PUSH 0x0
006faeda  PUSH 0x90
006faedf  MOV ECX,0x925b30
006faee4  CALL 0x005d29d0
006faee9  MOV dword ptr [ESP],EAX
006faeec  TEST EAX,EAX
006faeee  MOV dword ptr [ESP + 0x10],0x0
006faef6  JZ 0x006faf32
006faef8  MOV ECX,dword ptr [ESP + 0x18]
006faefc  SUB ESP,0x10
006faeff  MOV EDX,ESP
006faf01  MOV dword ptr [EDX],ECX
006faf03  MOV ECX,dword ptr [ESP + 0x2c]
006faf07  MOV dword ptr [EDX + 0x4],ECX
006faf0a  MOV ECX,dword ptr [ESP + 0x30]
006faf0e  MOV dword ptr [EDX + 0x8],ECX
006faf11  MOV ECX,EAX
006faf13  MOV dword ptr [ESP + 0x14],ESP
006faf17  CALL 0x006f9b10
006faf1c  TEST EAX,EAX
006faf1e  JZ 0x006faf32
006faf20  ADD EAX,0x2c
006faf23  MOV ECX,dword ptr [ESP + 0x8]
006faf27  MOV dword ptr FS:[0x0],ECX
006faf2e  ADD ESP,0x14
006faf31  RET
006faf32  MOV ECX,dword ptr [ESP + 0x8]
006faf36  XOR EAX,EAX
006faf38  MOV dword ptr FS:[0x0],ECX
006faf3f  ADD ESP,0x14
006faf42  RET
