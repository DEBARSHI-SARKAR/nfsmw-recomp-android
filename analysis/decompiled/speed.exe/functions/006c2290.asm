006c2290  SUB ESP,0x38
006c2293  MOV CL,byte ptr [ESP + 0x3c]
006c2297  MOV byte ptr [ESP],0x20
006c229b  MOV byte ptr [ESP + 0x1],0x2e
006c22a0  MOV byte ptr [ESP + 0x2],0x2c
006c22a5  MOV byte ptr [ESP + 0x3],0x5f
006c22aa  MOV byte ptr [ESP + 0x4],0x40
006c22af  MOV byte ptr [ESP + 0x5],0x2d
006c22b4  MOV byte ptr [ESP + 0x6],0x60
006c22b9  MOV byte ptr [ESP + 0x7],0x3d
006c22be  MOV byte ptr [ESP + 0x8],0x5b
006c22c3  MOV byte ptr [ESP + 0x9],0x5d
006c22c8  MOV byte ptr [ESP + 0xa],0x5c
006c22cd  MOV byte ptr [ESP + 0xb],0x3b
006c22d2  MOV byte ptr [ESP + 0xc],0x27
006c22d7  MOV byte ptr [ESP + 0xd],0x2f
006c22dc  MOV byte ptr [ESP + 0xe],0x3c
006c22e1  MOV byte ptr [ESP + 0xf],0x3e
006c22e6  MOV byte ptr [ESP + 0x10],0x3f
006c22eb  MOV byte ptr [ESP + 0x11],0x3a
006c22f0  MOV byte ptr [ESP + 0x12],0x22
006c22f5  MOV byte ptr [ESP + 0x13],0x7b
006c22fa  MOV byte ptr [ESP + 0x14],0x7d
006c22ff  MOV byte ptr [ESP + 0x15],0x7c
006c2304  MOV byte ptr [ESP + 0x16],0x2b
006c2309  MOV byte ptr [ESP + 0x17],0x28
006c230e  MOV byte ptr [ESP + 0x18],0x29
006c2313  MOV byte ptr [ESP + 0x19],0x2a
006c2318  MOV byte ptr [ESP + 0x1a],0x26
006c231d  MOV byte ptr [ESP + 0x1b],0x25
006c2322  MOV byte ptr [ESP + 0x1c],0x23
006c2327  MOV byte ptr [ESP + 0x1d],0x21
006c232c  MOV byte ptr [ESP + 0x1e],0x7e
006c2331  MOV byte ptr [ESP + 0x1f],0xe5
006c2336  MOV byte ptr [ESP + 0x20],0xe4
006c233b  MOV byte ptr [ESP + 0x21],0xe0
006c2340  MOV byte ptr [ESP + 0x22],0xe2
006c2345  MOV byte ptr [ESP + 0x23],0xeb
006c234a  MOV byte ptr [ESP + 0x24],0xe8
006c234f  MOV byte ptr [ESP + 0x25],0xe9
006c2354  MOV byte ptr [ESP + 0x26],0xea
006c2359  MOV byte ptr [ESP + 0x27],0xef
006c235e  MOV byte ptr [ESP + 0x28],0xee
006c2363  MOV byte ptr [ESP + 0x29],0xf6
006c2368  MOV byte ptr [ESP + 0x2a],0xf4
006c236d  MOV byte ptr [ESP + 0x2b],0xfc
006c2372  MOV byte ptr [ESP + 0x2c],0xf9
006c2377  MOV byte ptr [ESP + 0x2d],0xfb
006c237c  MOV byte ptr [ESP + 0x2e],0xe7
006c2381  MOV byte ptr [ESP + 0x2f],0x9c
006c2386  MOV byte ptr [ESP + 0x30],0xf2
006c238b  MOV byte ptr [ESP + 0x31],0xec
006c2390  MOV byte ptr [ESP + 0x32],0xc5
006c2395  MOV byte ptr [ESP + 0x33],0xc4
006c239a  MOV byte ptr [ESP + 0x34],0xd6
006c239f  MOV byte ptr [ESP + 0x35],0xdc
006c23a4  MOV byte ptr [ESP + 0x36],0xa7
006c23a9  XOR EAX,EAX
006c23ab  JMP 0x006c23b0
006c23b0  CMP byte ptr [ESP + EAX*0x1],CL
006c23b3  JZ 0x006c23c1
006c23b5  INC EAX
006c23b6  CMP EAX,0x37
006c23b9  JL 0x006c23b0
006c23bb  XOR AL,AL
006c23bd  ADD ESP,0x38
006c23c0  RET
006c23c1  MOV AL,0x1
006c23c3  ADD ESP,0x38
006c23c6  RET
