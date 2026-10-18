0056a080  SUB ESP,0x1c
0056a083  MOV CL,byte ptr [ESP + 0x20]
0056a087  MOV byte ptr [ESP],0x2d
0056a08b  MOV byte ptr [ESP + 0x1],0x3d
0056a090  MOV byte ptr [ESP + 0x2],0x2f
0056a095  MOV byte ptr [ESP + 0x3],0x3f
0056a09a  MOV byte ptr [ESP + 0x4],0x5c
0056a09f  MOV byte ptr [ESP + 0x5],0x3b
0056a0a4  MOV byte ptr [ESP + 0x6],0x27
0056a0a9  MOV byte ptr [ESP + 0x7],0x2c
0056a0ae  MOV byte ptr [ESP + 0x8],0x2e
0056a0b3  MOV byte ptr [ESP + 0x9],0x21
0056a0b8  MOV byte ptr [ESP + 0xa],0x40
0056a0bd  MOV byte ptr [ESP + 0xb],0x23
0056a0c2  MOV byte ptr [ESP + 0xc],0x7e
0056a0c7  MOV byte ptr [ESP + 0xd],0x25
0056a0cc  MOV byte ptr [ESP + 0xe],0x60
0056a0d1  MOV byte ptr [ESP + 0xf],0x26
0056a0d6  MOV byte ptr [ESP + 0x10],0x2a
0056a0db  MOV byte ptr [ESP + 0x11],0x28
0056a0e0  MOV byte ptr [ESP + 0x12],0x29
0056a0e5  MOV byte ptr [ESP + 0x13],0x5f
0056a0ea  MOV byte ptr [ESP + 0x14],0x2b
0056a0ef  MOV byte ptr [ESP + 0x15],0x5b
0056a0f4  MOV byte ptr [ESP + 0x16],0x5d
0056a0f9  MOV byte ptr [ESP + 0x17],0x7c
0056a0fe  MOV byte ptr [ESP + 0x18],0x3a
0056a103  MOV byte ptr [ESP + 0x19],0x22
0056a108  MOV byte ptr [ESP + 0x1a],0x3c
0056a10d  MOV byte ptr [ESP + 0x1b],0x3e
0056a112  XOR EAX,EAX
0056a114  CMP CL,byte ptr [ESP + EAX*0x1]
0056a117  JZ 0x0056a127
0056a119  INC EAX
0056a11a  CMP EAX,0x1c
0056a11d  JC 0x0056a114
0056a11f  XOR AL,AL
0056a121  ADD ESP,0x1c
0056a124  RET 0x4
0056a127  MOV AL,0x1
0056a129  ADD ESP,0x1c
0056a12c  RET 0x4
