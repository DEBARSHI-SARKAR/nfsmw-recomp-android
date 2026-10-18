006fd280  PUSH -0x1
006fd282  PUSH 0x87f7a2
006fd287  MOV EAX,FS:[0x0]
006fd28d  PUSH EAX
006fd28e  MOV dword ptr FS:[0x0],ESP
006fd295  SUB ESP,0x8
006fd298  PUSH 0x0
006fd29a  PUSH 0x8c
006fd29f  MOV ECX,0x925b30
006fd2a4  CALL 0x005d29d0
006fd2a9  MOV dword ptr [ESP],EAX
006fd2ac  TEST EAX,EAX
006fd2ae  MOV dword ptr [ESP + 0x10],0x0
006fd2b6  JZ 0x006fd2f2
006fd2b8  MOV ECX,dword ptr [ESP + 0x18]
006fd2bc  SUB ESP,0x10
006fd2bf  MOV EDX,ESP
006fd2c1  MOV dword ptr [EDX],ECX
006fd2c3  MOV ECX,dword ptr [ESP + 0x2c]
006fd2c7  MOV dword ptr [EDX + 0x4],ECX
006fd2ca  MOV ECX,dword ptr [ESP + 0x30]
006fd2ce  MOV dword ptr [EDX + 0x8],ECX
006fd2d1  MOV ECX,EAX
006fd2d3  MOV dword ptr [ESP + 0x14],ESP
006fd2d7  CALL 0x006fca30
006fd2dc  TEST EAX,EAX
006fd2de  JZ 0x006fd2f2
006fd2e0  ADD EAX,0x2c
006fd2e3  MOV ECX,dword ptr [ESP + 0x8]
006fd2e7  MOV dword ptr FS:[0x0],ECX
006fd2ee  ADD ESP,0x14
006fd2f1  RET
006fd2f2  MOV ECX,dword ptr [ESP + 0x8]
006fd2f6  XOR EAX,EAX
006fd2f8  MOV dword ptr FS:[0x0],ECX
006fd2ff  ADD ESP,0x14
006fd302  RET
