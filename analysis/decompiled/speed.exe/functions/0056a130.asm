0056a130  SUB ESP,0x18
0056a133  MOV CL,byte ptr [ESP + 0x1c]
0056a137  MOV byte ptr [ESP],0x3d
0056a13b  MOV byte ptr [ESP + 0x1],0x2f
0056a140  MOV byte ptr [ESP + 0x2],0x3f
0056a145  MOV byte ptr [ESP + 0x3],0x5c
0056a14a  MOV byte ptr [ESP + 0x4],0x3b
0056a14f  MOV byte ptr [ESP + 0x5],0x27
0056a154  MOV byte ptr [ESP + 0x6],0x2c
0056a159  MOV byte ptr [ESP + 0x7],0x21
0056a15e  MOV byte ptr [ESP + 0x8],0x23
0056a163  MOV byte ptr [ESP + 0x9],0x7e
0056a168  MOV byte ptr [ESP + 0xa],0x25
0056a16d  MOV byte ptr [ESP + 0xb],0x60
0056a172  MOV byte ptr [ESP + 0xc],0x26
0056a177  MOV byte ptr [ESP + 0xd],0x2a
0056a17c  MOV byte ptr [ESP + 0xe],0x28
0056a181  MOV byte ptr [ESP + 0xf],0x29
0056a186  MOV byte ptr [ESP + 0x10],0x2b
0056a18b  MOV byte ptr [ESP + 0x11],0x5b
0056a190  MOV byte ptr [ESP + 0x12],0x5d
0056a195  MOV byte ptr [ESP + 0x13],0x7c
0056a19a  MOV byte ptr [ESP + 0x14],0x3a
0056a19f  MOV byte ptr [ESP + 0x15],0x22
0056a1a4  MOV byte ptr [ESP + 0x16],0x3c
0056a1a9  MOV byte ptr [ESP + 0x17],0x3e
0056a1ae  XOR EAX,EAX
0056a1b0  CMP CL,byte ptr [ESP + EAX*0x1]
0056a1b3  JZ 0x0056a1c3
0056a1b5  INC EAX
0056a1b6  CMP EAX,0x18
0056a1b9  JC 0x0056a1b0
0056a1bb  XOR AL,AL
0056a1bd  ADD ESP,0x18
0056a1c0  RET 0x4
0056a1c3  MOV AL,0x1
0056a1c5  ADD ESP,0x18
0056a1c8  RET 0x4
