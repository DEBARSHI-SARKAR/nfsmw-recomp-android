007cd1a0  PUSH EBP
007cd1a1  MOV EBP,ESP
007cd1a3  PUSH -0x1
007cd1a5  PUSH 0x8b8d70
007cd1aa  PUSH 0x7cd5e4
007cd1af  MOV EAX,FS:[0x0]
007cd1b5  PUSH EAX
007cd1b6  MOV dword ptr FS:[0x0],ESP
007cd1bd  ADD ESP,-0x14
007cd1c0  PUSH EBX
007cd1c1  PUSH ESI
007cd1c2  PUSH EDI
007cd1c3  MOV EAX,dword ptr [EBP + 0x8]
007cd1c6  MOV dword ptr [EBP + -0x24],EAX
007cd1c9  CMP dword ptr [EBP + -0x24],0x0
007cd1cd  JZ 0x007cd3fe
007cd1d3  MOV ECX,dword ptr [EBP + -0x24]
007cd1d6  CMP dword ptr [ECX + 0x24],0x0
007cd1da  JZ 0x007cd1ed
007cd1dc  PUSH 0x2
007cd1de  MOV EDX,dword ptr [EBP + -0x24]
007cd1e1  MOV EAX,dword ptr [EDX + 0x24]
007cd1e4  PUSH EAX
007cd1e5  CALL 0x007c7290
007cd1ea  ADD ESP,0x8
007cd1ed  MOV ECX,dword ptr [EBP + -0x24]
007cd1f0  CMP dword ptr [ECX + 0x2c],0x0
007cd1f4  JZ 0x007cd207
007cd1f6  PUSH 0x2
007cd1f8  MOV EDX,dword ptr [EBP + -0x24]
007cd1fb  MOV EAX,dword ptr [EDX + 0x2c]
007cd1fe  PUSH EAX
007cd1ff  CALL 0x007c7290
007cd204  ADD ESP,0x8
007cd207  MOV ECX,dword ptr [EBP + -0x24]
007cd20a  CMP dword ptr [ECX + 0x34],0x0
007cd20e  JZ 0x007cd221
007cd210  PUSH 0x2
007cd212  MOV EDX,dword ptr [EBP + -0x24]
007cd215  MOV EAX,dword ptr [EDX + 0x34]
007cd218  PUSH EAX
007cd219  CALL 0x007c7290
007cd21e  ADD ESP,0x8
007cd221  MOV ECX,dword ptr [EBP + -0x24]
007cd224  CMP dword ptr [ECX + 0x3c],0x0
007cd228  JZ 0x007cd23b
007cd22a  PUSH 0x2
007cd22c  MOV EDX,dword ptr [EBP + -0x24]
007cd22f  MOV EAX,dword ptr [EDX + 0x3c]
007cd232  PUSH EAX
007cd233  CALL 0x007c7290
007cd238  ADD ESP,0x8
007cd23b  MOV ECX,dword ptr [EBP + -0x24]
007cd23e  CMP dword ptr [ECX + 0x44],0x0
007cd242  JZ 0x007cd255
007cd244  PUSH 0x2
007cd246  MOV EDX,dword ptr [EBP + -0x24]
007cd249  MOV EAX,dword ptr [EDX + 0x44]
007cd24c  PUSH EAX
007cd24d  CALL 0x007c7290
007cd252  ADD ESP,0x8
007cd255  MOV ECX,dword ptr [EBP + -0x24]
007cd258  CMP dword ptr [ECX + 0x48],0x0
007cd25c  JZ 0x007cd26f
007cd25e  PUSH 0x2
007cd260  MOV EDX,dword ptr [EBP + -0x24]
007cd263  MOV EAX,dword ptr [EDX + 0x48]
007cd266  PUSH EAX
007cd267  CALL 0x007c7290
007cd26c  ADD ESP,0x8
007cd26f  MOV ECX,dword ptr [EBP + -0x24]
007cd272  CMP dword ptr [ECX + 0x54],0x906780
007cd279  JZ 0x007cd28c
007cd27b  PUSH 0x2
007cd27d  MOV EDX,dword ptr [EBP + -0x24]
007cd280  MOV EAX,dword ptr [EDX + 0x54]
007cd283  PUSH EAX
007cd284  CALL 0x007c7290
007cd289  ADD ESP,0x8
007cd28c  PUSH 0xd
007cd28e  CALL 0x007d0fd0
007cd293  ADD ESP,0x4
007cd296  MOV dword ptr [EBP + -0x4],0x0
007cd29d  MOV ECX,dword ptr [EBP + -0x24]
007cd2a0  MOV EDX,dword ptr [ECX + 0x60]
007cd2a3  MOV dword ptr [EBP + -0x20],EDX
007cd2a6  CMP dword ptr [EBP + -0x20],0x0
007cd2aa  JZ 0x007cd2da
007cd2ac  MOV EAX,dword ptr [EBP + -0x20]
007cd2af  MOV ECX,dword ptr [EAX]
007cd2b1  SUB ECX,0x1
007cd2b4  MOV EDX,dword ptr [EBP + -0x20]
007cd2b7  MOV dword ptr [EDX],ECX
007cd2b9  MOV EAX,dword ptr [EBP + -0x20]
007cd2bc  CMP dword ptr [EAX],0x0
007cd2bf  JNZ 0x007cd2da
007cd2c1  MOV ECX,dword ptr [EBP + -0x20]
007cd2c4  CMP ECX,dword ptr [0x009c50a4]
007cd2ca  JZ 0x007cd2da
007cd2cc  PUSH 0x2
007cd2ce  MOV EDX,dword ptr [EBP + -0x20]
007cd2d1  PUSH EDX
007cd2d2  CALL 0x007c7290
007cd2d7  ADD ESP,0x8
007cd2da  MOV dword ptr [EBP + -0x4],0xffffffff
007cd2e1  CALL 0x007cd2e8
007cd2e6  JMP 0x007cd2f3
