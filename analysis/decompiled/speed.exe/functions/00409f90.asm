00409f90  SUB ESP,0x44
00409f93  MOV EAX,dword ptr [ESP + 0x50]
00409f97  MOV ECX,dword ptr [EAX + 0x4]
00409f9a  FLD float ptr [EAX]
00409f9c  MOV EDX,dword ptr [EAX + 0x8]
00409f9f  MOV EAX,dword ptr [ESP + 0x4c]
00409fa3  FSUB float ptr [EAX]
00409fa5  MOV dword ptr [ESP + 0x3c],ECX
00409fa9  FLD float ptr [ESP + 0x3c]
00409fad  MOV dword ptr [ESP + 0x40],EDX
00409fb1  FSUB float ptr [EAX + 0x4]
00409fb4  FLD float ptr [ESP + 0x40]
00409fb8  FSUB float ptr [EAX + 0x8]
00409fbb  FSTP float ptr [ESP + 0x40]
00409fbf  MOV ECX,dword ptr [ESP + 0x40]
00409fc3  FXCH
00409fc5  MOV dword ptr [ESP + 0x34],ECX
00409fc9  FSTP float ptr [ESP + 0x2c]
00409fcd  MOV EDX,dword ptr [ESP + 0x2c]
00409fd1  MOV dword ptr [ESP + 0x20],EDX
00409fd5  MOV EDX,dword ptr [ESP + 0x34]
00409fd9  FSTP float ptr [ESP + 0x30]
00409fdd  MOV ECX,dword ptr [ESP + 0x30]
00409fe1  MOV dword ptr [ESP + 0x28],EDX
00409fe5  MOV dword ptr [ESP + 0x24],ECX
00409fe9  MOV ECX,dword ptr [ESP + 0x58]
00409fed  MOV EDX,dword ptr [ECX + 0x4]
00409ff0  FLD float ptr [ECX]
00409ff2  MOV ECX,dword ptr [ECX + 0x8]
00409ff5  MOV dword ptr [ESP + 0x3c],EDX
00409ff9  MOV dword ptr [ESP + 0x40],ECX
00409ffd  MOV ECX,dword ptr [ESP + 0x54]
0040a001  FSUB float ptr [ECX]
0040a003  FLD float ptr [ESP + 0x3c]
0040a007  FSUB float ptr [ECX + 0x4]
0040a00a  FLD float ptr [ESP + 0x40]
0040a00e  FSUB float ptr [ECX + 0x8]
0040a011  FSTP float ptr [ESP + 0x40]
0040a015  MOV EDX,dword ptr [ESP + 0x40]
0040a019  MOV dword ptr [ESP + 0x34],EDX
0040a01d  FXCH
0040a01f  FSTP float ptr [ESP + 0x2c]
0040a023  MOV EDX,dword ptr [ESP + 0x2c]
0040a027  MOV dword ptr [ESP + 0x14],EDX
0040a02b  FSTP float ptr [ESP + 0x30]
0040a02f  MOV EDX,dword ptr [ESP + 0x30]
0040a033  FLD float ptr [EAX]
0040a035  MOV dword ptr [ESP + 0x18],EDX
0040a039  FSUB float ptr [ECX]
0040a03b  MOV EDX,dword ptr [ESP + 0x34]
0040a03f  MOV dword ptr [ESP + 0x1c],EDX
0040a043  MOV EDX,dword ptr [EAX + 0x4]
0040a046  MOV EAX,dword ptr [EAX + 0x8]
0040a049  MOV dword ptr [ESP + 0x3c],EDX
0040a04d  FLD float ptr [ESP + 0x3c]
0040a051  FSUB float ptr [ECX + 0x4]
0040a054  MOV dword ptr [ESP + 0x40],EAX
0040a058  FLD float ptr [ESP + 0x40]
0040a05c  FSUB float ptr [ECX + 0x8]
0040a05f  FSTP float ptr [ESP + 0x34]
0040a063  MOV ECX,dword ptr [ESP + 0x34]
0040a067  FXCH
0040a069  MOV dword ptr [ESP + 0x40],ECX
0040a06d  FSTP float ptr [ESP + 0x38]
0040a071  MOV EDX,dword ptr [ESP + 0x38]
0040a075  MOV dword ptr [ESP + 0x2c],EDX
0040a079  FSTP float ptr [ESP + 0x3c]
0040a07d  MOV EAX,dword ptr [ESP + 0x3c]
0040a081  FLD float ptr [ESP + 0x28]
0040a085  MOV dword ptr [ESP + 0x30],EAX
0040a089  FMUL float ptr [ESP + 0x28]
0040a08d  MOV dword ptr [ESP + 0x34],ECX
0040a091  FLD float ptr [ESP + 0x24]
0040a095  FMUL float ptr [ESP + 0x24]
0040a099  FADDP
0040a09b  FLD float ptr [ESP + 0x20]
0040a09f  FMUL float ptr [ESP + 0x20]
0040a0a3  FADDP
0040a0a5  FSTP float ptr [ESP + 0x58]
0040a0a9  FLD float ptr [ESP + 0x1c]
0040a0ad  FMUL float ptr [ESP + 0x28]
0040a0b1  FLD float ptr [ESP + 0x18]
0040a0b5  FMUL float ptr [ESP + 0x24]
0040a0b9  FADDP
0040a0bb  FLD float ptr [ESP + 0x14]
0040a0bf  FMUL float ptr [ESP + 0x20]
0040a0c3  FADDP
0040a0c5  FSTP float ptr [ESP + 0x4c]
0040a0c9  FLD float ptr [ESP + 0x1c]
0040a0cd  FMUL float ptr [ESP + 0x1c]
0040a0d1  FLD float ptr [ESP + 0x18]
0040a0d5  FMUL float ptr [ESP + 0x18]
0040a0d9  FADDP
0040a0db  FLD float ptr [ESP + 0x14]
0040a0df  FMUL float ptr [ESP + 0x14]
0040a0e3  FADDP
0040a0e5  FSTP float ptr [ESP + 0xc]
0040a0e9  FLD float ptr [ESP + 0x34]
0040a0ed  FMUL float ptr [ESP + 0x28]
0040a0f1  FLD float ptr [ESP + 0x30]
0040a0f5  FMUL float ptr [ESP + 0x24]
0040a0f9  FADDP
0040a0fb  FLD float ptr [ESP + 0x2c]
0040a0ff  FMUL float ptr [ESP + 0x20]
0040a103  FADDP
0040a105  FSTP float ptr [ESP + 0x10]
0040a109  FLD float ptr [ESP + 0x34]
0040a10d  FMUL float ptr [ESP + 0x1c]
0040a111  FLD float ptr [ESP + 0x30]
0040a115  FMUL float ptr [ESP + 0x18]
0040a119  FADDP
0040a11b  FLD float ptr [ESP + 0x14]
0040a11f  FMUL float ptr [ESP + 0x2c]
0040a123  FADDP
0040a125  FSTP float ptr [ESP + 0x8]
0040a129  FLD float ptr [ESP + 0xc]
0040a12d  FMUL float ptr [ESP + 0x58]
0040a131  FLD float ptr [ESP + 0x4c]
0040a135  FMUL float ptr [ESP + 0x4c]
0040a139  FSUBP
0040a13b  FSTP float ptr [ESP + 0x4]
0040a13f  FLD float ptr [ESP + 0x4]
0040a143  MOV EDX,dword ptr [ESP + 0x4]
0040a147  FCOMP float ptr [0x00890dfc]
0040a14d  MOV EAX,EDX
0040a14f  MOV dword ptr [ESP],EAX
0040a152  MOV dword ptr [ESP + 0x54],EDX
0040a156  FNSTSW AX
0040a158  TEST AH,0x5
0040a15b  JP 0x0040a175
0040a15d  MOV ECX,dword ptr [ESP + 0x8]
0040a161  FLD float ptr [0x00890968]
0040a167  MOV dword ptr [ESP + 0x54],0x3f800000
0040a16f  MOV dword ptr [ESP + 0x50],ECX
0040a173  JMP 0x0040a1e0
0040a175  FLD float ptr [ESP + 0x8]
0040a179  FMUL float ptr [ESP + 0x4c]
0040a17d  FLD float ptr [ESP + 0x10]
0040a181  FMUL float ptr [ESP + 0xc]
0040a185  FSUBP
0040a187  FLD float ptr [ESP + 0x8]
0040a18b  FMUL float ptr [ESP + 0x58]
0040a18f  FLD float ptr [ESP + 0x10]
0040a193  FMUL float ptr [ESP + 0x4c]
0040a197  FSUBP
0040a199  FSTP float ptr [ESP + 0x50]
0040a19d  FCOM float ptr [0x00890968]
0040a1a3  FNSTSW AX
0040a1a5  TEST AH,0x5
0040a1a8  JP 0x0040a1c3
0040a1aa  MOV EAX,dword ptr [ESP + 0x8]
0040a1ae  FSTP ST0
0040a1b0  MOV ECX,dword ptr [ESP + 0xc]
0040a1b4  FLD float ptr [0x00890968]
0040a1ba  MOV dword ptr [ESP + 0x50],EAX
0040a1be  MOV dword ptr [ESP],ECX
0040a1c1  JMP 0x0040a1e7
0040a1c3  FCOM float ptr [ESP + 0x4]
0040a1c7  FNSTSW AX
0040a1c9  TEST AH,0x41
0040a1cc  JNZ 0x0040a1e7
0040a1ce  FSTP ST0
0040a1d0  FLD float ptr [ESP + 0x4]
0040a1d4  FLD float ptr [ESP + 0x8]
0040a1d8  FADD float ptr [ESP + 0x4c]
0040a1dc  FSTP float ptr [ESP + 0x50]
0040a1e0  MOV EDX,dword ptr [ESP + 0xc]
0040a1e4  MOV dword ptr [ESP],EDX
0040a1e7  FLD float ptr [ESP + 0x50]
0040a1eb  FCOMP float ptr [0x00890968]
0040a1f1  FNSTSW AX
0040a1f3  TEST AH,0x5
0040a1f6  JP 0x0040a232
0040a1f8  FSTP ST0
0040a1fa  MOV dword ptr [ESP + 0x50],0x0
0040a202  FLD float ptr [ESP + 0x10]
0040a206  FCHS
0040a208  FCOM float ptr [0x00890968]
0040a20e  FNSTSW AX
0040a210  TEST AH,0x5
0040a213  JNP 0x0040a28c
0040a215  FCOM float ptr [ESP + 0x58]
0040a219  FNSTSW AX
0040a21b  TEST AH,0x41
0040a21e  JNZ 0x0040a228
0040a220  FSTP ST0
0040a222  FLD float ptr [ESP + 0x54]
0040a226  JMP 0x0040a279
0040a228  MOV EAX,dword ptr [ESP + 0x58]
0040a22c  MOV dword ptr [ESP + 0x54],EAX
0040a230  JMP 0x0040a279
0040a232  FLD float ptr [ESP + 0x50]
0040a236  FCOMP float ptr [ESP]
0040a239  FNSTSW AX
0040a23b  TEST AH,0x41
0040a23e  JNZ 0x0040a279
0040a240  MOV ECX,dword ptr [ESP]
0040a243  FSTP ST0
0040a245  FLD float ptr [ESP + 0x4c]
0040a249  MOV dword ptr [ESP + 0x50],ECX
0040a24d  FSUB float ptr [ESP + 0x10]
0040a251  FCOM float ptr [0x00890968]
0040a257  FNSTSW AX
0040a259  TEST AH,0x5
0040a25c  JNP 0x0040a28c
0040a25e  FCOM float ptr [ESP + 0x58]
0040a262  FNSTSW AX
0040a264  TEST AH,0x41
0040a267  JNZ 0x0040a271
0040a269  FSTP ST0
0040a26b  FLD float ptr [ESP + 0x54]
0040a26f  JMP 0x0040a279
0040a271  MOV EDX,dword ptr [ESP + 0x58]
0040a275  MOV dword ptr [ESP + 0x54],EDX
0040a279  FCOM float ptr [0x00890968]
0040a27f  FNSTSW AX
0040a281  TEST AH,0x5
0040a284  JP 0x0040a294
0040a286  FLD ST0
0040a288  FCHS
0040a28a  JMP 0x0040a296
0040a28c  FSTP ST0
0040a28e  FLD float ptr [0x00890968]
0040a294  FLD ST0
0040a296  FCOMP float ptr [0x00890dfc]
0040a29c  FNSTSW AX
0040a29e  TEST AH,0x5
0040a2a1  JP 0x0040a2ad
0040a2a3  FSTP ST0
0040a2a5  FLD float ptr [0x00890968]
0040a2ab  JMP 0x0040a2b1
0040a2ad  FDIV float ptr [ESP + 0x54]
0040a2b1  FLD float ptr [ESP + 0x50]
0040a2b5  FCOMP float ptr [0x00890968]
0040a2bb  FLD float ptr [ESP + 0x50]
0040a2bf  FNSTSW AX
0040a2c1  TEST AH,0x5
0040a2c4  JP 0x0040a2c8
0040a2c6  FCHS
0040a2c8  FCOMP float ptr [0x00890dfc]
0040a2ce  FNSTSW AX
0040a2d0  TEST AH,0x5
0040a2d3  JP 0x0040a2dd
0040a2d5  FLD float ptr [0x00890968]
0040a2db  JMP 0x0040a2e4
0040a2dd  FLD float ptr [ESP + 0x50]
0040a2e1  FDIV float ptr [ESP]
0040a2e4  FLD float ptr [ESP + 0x14]
0040a2e8  MOV ECX,dword ptr [ESP + 0x48]
0040a2ec  FMUL ST1
0040a2ee  FSTP float ptr [ESP + 0x38]
0040a2f2  FLD float ptr [ESP + 0x18]
0040a2f6  FMUL ST1
0040a2f8  FSTP float ptr [ESP + 0x3c]
0040a2fc  FLD float ptr [ESP + 0x1c]
0040a300  FMUL ST1
0040a302  FSTP float ptr [ESP + 0x40]
0040a306  FSTP ST0
0040a308  FLD float ptr [ESP + 0x20]
0040a30c  FMUL ST1
0040a30e  FLD float ptr [ESP + 0x24]
0040a312  FMUL ST2
0040a314  FSTP float ptr [ESP + 0x18]
0040a318  FLD float ptr [ESP + 0x28]
0040a31c  FMUL ST2
0040a31e  FSTP float ptr [ESP + 0x1c]
0040a322  FADD float ptr [ESP + 0x2c]
0040a326  FSTP ST1
0040a328  FLD float ptr [ESP + 0x18]
0040a32c  FADD float ptr [ESP + 0x30]
0040a330  FSTP float ptr [ESP + 0x24]
0040a334  FLD float ptr [ESP + 0x1c]
0040a338  FADD float ptr [ESP + 0x34]
0040a33c  FSTP float ptr [ESP + 0x28]
0040a340  FSUB float ptr [ESP + 0x38]
0040a344  FLD float ptr [ESP + 0x24]
0040a348  FSUB float ptr [ESP + 0x3c]
0040a34c  FLD float ptr [ESP + 0x28]
0040a350  FSUB float ptr [ESP + 0x40]
0040a354  FSTP float ptr [ESP + 0x34]
0040a358  MOV EAX,dword ptr [ESP + 0x34]
0040a35c  FXCH
0040a35e  MOV dword ptr [ESP + 0x40],EAX
0040a362  FSTP float ptr [ESP + 0x38]
0040a366  MOV EDX,dword ptr [ESP + 0x38]
0040a36a  MOV dword ptr [ECX],EDX
0040a36c  MOV EDX,dword ptr [ESP + 0x40]
0040a370  FSTP float ptr [ESP + 0x3c]
0040a374  MOV EAX,dword ptr [ESP + 0x3c]
0040a378  MOV dword ptr [ECX + 0x4],EAX
0040a37b  MOV dword ptr [ECX + 0x8],EDX
0040a37e  ADD ESP,0x44
0040a381  RET
