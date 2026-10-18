007cd2f3  PUSH 0xc
007cd2f5  CALL 0x007d0fd0
007cd2fa  ADD ESP,0x4
007cd2fd  MOV dword ptr [EBP + -0x4],0x1
007cd304  MOV EAX,dword ptr [EBP + -0x24]
007cd307  MOV ECX,dword ptr [EAX + 0x64]
007cd30a  MOV dword ptr [EBP + -0x1c],ECX
007cd30d  CMP dword ptr [EBP + -0x1c],0x0
007cd311  JZ 0x007cd3d7
007cd317  MOV EDX,dword ptr [EBP + -0x1c]
007cd31a  MOV EAX,dword ptr [EDX]
007cd31c  SUB EAX,0x1
007cd31f  MOV ECX,dword ptr [EBP + -0x1c]
007cd322  MOV dword ptr [ECX],EAX
007cd324  MOV EDX,dword ptr [EBP + -0x1c]
007cd327  CMP dword ptr [EDX + 0x2c],0x0
007cd32b  JZ 0x007cd340
007cd32d  MOV EAX,dword ptr [EBP + -0x1c]
007cd330  MOV ECX,dword ptr [EAX + 0x2c]
007cd333  MOV EDX,dword ptr [ECX]
007cd335  SUB EDX,0x1
007cd338  MOV EAX,dword ptr [EBP + -0x1c]
007cd33b  MOV ECX,dword ptr [EAX + 0x2c]
007cd33e  MOV dword ptr [ECX],EDX
007cd340  MOV EDX,dword ptr [EBP + -0x1c]
007cd343  CMP dword ptr [EDX + 0x34],0x0
007cd347  JZ 0x007cd35c
007cd349  MOV EAX,dword ptr [EBP + -0x1c]
007cd34c  MOV ECX,dword ptr [EAX + 0x34]
007cd34f  MOV EDX,dword ptr [ECX]
007cd351  SUB EDX,0x1
007cd354  MOV EAX,dword ptr [EBP + -0x1c]
007cd357  MOV ECX,dword ptr [EAX + 0x34]
007cd35a  MOV dword ptr [ECX],EDX
007cd35c  MOV EDX,dword ptr [EBP + -0x1c]
007cd35f  CMP dword ptr [EDX + 0x30],0x0
007cd363  JZ 0x007cd378
007cd365  MOV EAX,dword ptr [EBP + -0x1c]
007cd368  MOV ECX,dword ptr [EAX + 0x30]
007cd36b  MOV EDX,dword ptr [ECX]
007cd36d  SUB EDX,0x1
007cd370  MOV EAX,dword ptr [EBP + -0x1c]
007cd373  MOV ECX,dword ptr [EAX + 0x30]
007cd376  MOV dword ptr [ECX],EDX
007cd378  MOV EDX,dword ptr [EBP + -0x1c]
007cd37b  CMP dword ptr [EDX + 0x40],0x0
007cd37f  JZ 0x007cd394
007cd381  MOV EAX,dword ptr [EBP + -0x1c]
007cd384  MOV ECX,dword ptr [EAX + 0x40]
007cd387  MOV EDX,dword ptr [ECX]
007cd389  SUB EDX,0x1
007cd38c  MOV EAX,dword ptr [EBP + -0x1c]
007cd38f  MOV ECX,dword ptr [EAX + 0x40]
007cd392  MOV dword ptr [ECX],EDX
007cd394  MOV EDX,dword ptr [EBP + -0x1c]
007cd397  MOV EAX,dword ptr [EDX + 0x4c]
007cd39a  MOV ECX,dword ptr [EAX + 0xb4]
007cd3a0  SUB ECX,0x1
007cd3a3  MOV EDX,dword ptr [EBP + -0x1c]
007cd3a6  MOV EAX,dword ptr [EDX + 0x4c]
007cd3a9  MOV dword ptr [EAX + 0xb4],ECX
007cd3af  MOV ECX,dword ptr [EBP + -0x1c]
007cd3b2  CMP ECX,dword ptr [0x00906b3c]
007cd3b8  JZ 0x007cd3d7
007cd3ba  CMP dword ptr [EBP + -0x1c],0x906ae8
007cd3c1  JZ 0x007cd3d7
007cd3c3  MOV EDX,dword ptr [EBP + -0x1c]
007cd3c6  CMP dword ptr [EDX],0x0
007cd3c9  JNZ 0x007cd3d7
007cd3cb  MOV EAX,dword ptr [EBP + -0x1c]
007cd3ce  PUSH EAX
007cd3cf  CALL 0x007d2e00
007cd3d4  ADD ESP,0x4
007cd3d7  MOV dword ptr [EBP + -0x4],0xffffffff
007cd3de  CALL 0x007cd3e5
007cd3e3  JMP 0x007cd3f0
