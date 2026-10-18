0041a2c0  SUB ESP,0x88
0041a2c6  MOV EAX,dword ptr [ESP + 0x8c]
0041a2cd  MOV ECX,dword ptr [EAX]
0041a2cf  MOV EDX,dword ptr [EAX + 0x8]
0041a2d2  MOV EAX,dword ptr [ESP + 0x98]
0041a2d9  MOV dword ptr [ESP + 0x14],ECX
0041a2dd  MOV ECX,dword ptr [EAX]
0041a2df  MOV dword ptr [ESP + 0x1c],EDX
0041a2e3  MOV EDX,dword ptr [EAX + 0x8]
0041a2e6  MOV EAX,dword ptr [ESP + 0x90]
0041a2ed  MOV dword ptr [ESP + 0x38],ECX
0041a2f1  MOV ECX,dword ptr [EAX]
0041a2f3  MOV dword ptr [ESP + 0x40],EDX
0041a2f7  MOV EDX,dword ptr [EAX + 0x8]
0041a2fa  MOV EAX,dword ptr [ESP + 0x9c]
0041a301  MOV dword ptr [ESP + 0x2c],ECX
0041a305  MOV ECX,dword ptr [EAX]
0041a307  MOV dword ptr [ESP + 0x34],EDX
0041a30b  MOV EDX,dword ptr [EAX + 0x8]
0041a30e  LEA EAX,[ESP + 0x20]
0041a312  PUSH EAX
0041a313  MOV dword ptr [ESP + 0x24],ECX
0041a317  LEA ECX,[ESP + 0x3c]
0041a31b  MOV dword ptr [ESP + 0x2c],EDX
0041a31f  PUSH ECX
0041a320  LEA EDX,[ESP + 0x34]
0041a324  PUSH EDX
0041a325  LEA EAX,[ESP + 0x20]
0041a329  PUSH EAX
0041a32a  MOV dword ptr [ESP + 0x28],0x0
0041a332  MOV dword ptr [ESP + 0x4c],0x0
0041a33a  MOV dword ptr [ESP + 0x40],0x0
0041a342  MOV dword ptr [ESP + 0x34],0x0
0041a34a  CALL 0x0041a230
0041a34f  FSTP float ptr [ESP + 0x10]
0041a353  FLD float ptr [0x00890968]
0041a359  ADD ESP,0x10
0041a35c  FLD float ptr [ESP]
0041a35f  FCOMP
0041a361  FNSTSW AX
0041a363  TEST AH,0x41
0041a366  JNP 0x0041a479
0041a36c  FST float ptr [ESP + 0x8]
0041a370  MOV ECX,dword ptr [ESP + 0x14]
0041a374  FLD float ptr [ESP + 0x2c]
0041a378  MOV EDX,dword ptr [ESP + 0x1c]
0041a37c  FSUB float ptr [ESP + 0x20]
0041a380  MOV EAX,ECX
0041a382  FLD float ptr [ESP + 0x34]
0041a386  MOV dword ptr [ESP + 0x4],ECX
0041a38a  FSUB float ptr [ESP + 0x28]
0041a38e  MOV ECX,dword ptr [ESP + 0x8]
0041a392  FXCH
0041a394  MOV dword ptr [ESP + 0x58],EAX
0041a398  FMUL float ptr [ESP]
0041a39b  MOV dword ptr [ESP + 0x5c],ECX
0041a39f  MOV ECX,dword ptr [ESP + 0x38]
0041a3a3  MOV dword ptr [ESP + 0x10],0x3f800000
0041a3ab  MOV EAX,dword ptr [ESP + 0x10]
0041a3af  FADD float ptr [ESP + 0x14]
0041a3b3  MOV dword ptr [ESP + 0x64],EAX
0041a3b7  MOV EAX,ECX
0041a3b9  FSTP float ptr [ESP + 0x68]
0041a3bd  MOV dword ptr [ESP + 0x4],ECX
0041a3c1  FLD float ptr [ESP]
0041a3c4  MOV dword ptr [ESP + 0xc],EDX
0041a3c8  FMUL ST2
0041a3ca  MOV dword ptr [ESP + 0x60],EDX
0041a3ce  MOV EDX,dword ptr [ESP + 0x40]
0041a3d2  MOV dword ptr [ESP + 0x48],EAX
0041a3d6  FSTP float ptr [ESP + 0x6c]
0041a3da  MOV dword ptr [ESP + 0xc],EDX
0041a3de  FMUL float ptr [ESP]
0041a3e1  MOV dword ptr [ESP + 0x10],0x3f800000
0041a3e9  MOV EAX,dword ptr [ESP + 0x10]
0041a3ed  MOV dword ptr [ESP + 0x50],EDX
0041a3f1  FADD float ptr [ESP + 0x1c]
0041a3f5  LEA EDX,[ESP + 0x58]
0041a3f9  MOV dword ptr [ESP + 0x54],EAX
0041a3fd  FSTP float ptr [ESP + 0x70]
0041a401  LEA EAX,[ESP + 0x48]
0041a405  FSTP float ptr [ESP + 0x8]
0041a409  MOV ECX,dword ptr [ESP + 0x8]
0041a40d  MOV dword ptr [ESP + 0x4c],ECX
0041a411  LEA ECX,[ESP + 0x78]
0041a415  PUSH ECX
0041a416  PUSH EDX
0041a417  PUSH EAX
0041a418  CALL 0x007675c0
0041a41d  FLD float ptr [ESP + 0x54]
0041a421  FSUB float ptr [ESP + 0x84]
0041a428  FLD float ptr [ESP + 0x5c]
0041a42c  FSUB float ptr [ESP + 0x8c]
0041a433  FLD ST0
0041a435  FMUL ST1
0041a437  FLD ST2
0041a439  FMUL ST3
0041a43b  FADDP
0041a43d  FSTP float ptr [ESP + 0x50]
0041a441  MOV ECX,dword ptr [ESP + 0x50]
0041a445  FSTP ST0
0041a447  PUSH ECX
0041a448  FSTP ST0
0041a44a  CALL 0x005c5e80
0041a44f  FLD float ptr [ESP + 0xa4]
0041a456  FADD float ptr [ESP + 0xb0]
0041a45d  ADD ESP,0x10
0041a460  FCOMPP
0041a462  FNSTSW AX
0041a464  TEST AH,0x5
0041a467  JP 0x0041a476
0041a469  FLD float ptr [0x00890968]
0041a46f  ADD ESP,0x88
0041a475  RET
0041a476  FLD float ptr [ESP]
0041a479  ADD ESP,0x88
0041a47f  RET
