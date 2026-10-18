0069f020  SUB ESP,0x14
0069f023  PUSH ESI
0069f024  MOV ESI,ECX
0069f026  FLD float ptr [ESI + 0xd4]
0069f02c  FCOMP float ptr [0x00890968]
0069f032  FNSTSW AX
0069f034  TEST AH,0x41
0069f037  JP 0x0069f053
0069f039  MOV AL,byte ptr [ESI + 0x10c]
0069f03f  TEST AL,AL
0069f041  JNZ 0x0069f053
0069f043  FLD float ptr [ESP + 0x20]
0069f047  FDIV float ptr [ESI + 0xc4]
0069f04d  FSTP float ptr [ESI + 0xd0]
0069f053  FLD float ptr [ESP + 0x20]
0069f057  MOV EAX,dword ptr [ESP + 0x20]
0069f05b  FSUB float ptr [ESI + 0xf4]
0069f061  MOV ECX,dword ptr [ESP + 0x1c]
0069f065  MOV dword ptr [ESI + 0xf4],EAX
0069f06b  MOV dword ptr [ESI + 0xec],ECX
0069f071  FDIV float ptr [ESP + 0x2c]
0069f075  FSTP float ptr [ESP + 0x14]
0069f079  FLD float ptr [ESP + 0x28]
0069f07d  FCOMP float ptr [0x00890968]
0069f083  FNSTSW AX
0069f085  TEST AH,0x41
0069f088  JNZ 0x0069f090
0069f08a  FLD float ptr [ESP + 0x28]
0069f08e  JMP 0x0069f096
0069f090  FLD float ptr [0x00890968]
0069f096  FSTP float ptr [ESI + 0xd4]
0069f09c  MOV dword ptr [ESI + 0x108],0x3f800000
0069f0a6  FLD float ptr [ESI + 0xcc]
0069f0ac  FCOMP float ptr [0x00890968]
0069f0b2  FNSTSW AX
0069f0b4  TEST AH,0x41
0069f0b7  JNZ 0x0069f0c8
0069f0b9  MOV ECX,dword ptr [ESI + 0x104]
0069f0bf  MOV EAX,0x1
0069f0c4  CMP ECX,EAX
0069f0c6  JZ 0x0069f0ca
0069f0c8  XOR EAX,EAX
0069f0ca  FLD float ptr [ESI + 0xcc]
0069f0d0  MOV byte ptr [ESI + 0x10c],AL
0069f0d6  FADD float ptr [ESI + 0xc8]
0069f0dc  FCOMP float ptr [0x00890968]
0069f0e2  FNSTSW AX
0069f0e4  TEST AH,0x41
0069f0e7  JNZ 0x0069f142
0069f0e9  FLD float ptr [ESP + 0x20]
0069f0ed  MOV byte ptr [ESP + 0x7],0x1
0069f0f2  FCOMP float ptr [0x00890968]
0069f0f8  FLD float ptr [ESP + 0x20]
0069f0fc  FNSTSW AX
0069f0fe  TEST AH,0x5
0069f101  JP 0x0069f105
0069f103  FCHS
0069f105  FCOMP float ptr [0x0089096c]
0069f10b  FNSTSW AX
0069f10d  TEST AH,0x5
0069f110  JP 0x0069f149
0069f112  FLD float ptr [0x008aac20]
0069f118  FDIV float ptr [ESI + 0xc4]
0069f11e  FLD ST0
0069f120  FMUL float ptr [ESI + 0xcc]
0069f126  FMUL float ptr [ESP + 0x20]
0069f12a  FMUL float ptr [ESP + 0x28]
0069f12e  FXCH
0069f130  FMUL float ptr [ESI + 0xc8]
0069f136  FMUL float ptr [ESP + 0x20]
0069f13a  FMUL float ptr [ESP + 0x28]
0069f13e  FADDP
0069f140  JMP 0x0069f19a
0069f142  MOV byte ptr [ESP + 0x7],0x0
0069f147  JMP 0x0069f1a6
0069f149  MOV EDX,dword ptr [ESI + 0xfc]
0069f14f  MOV EAX,dword ptr [EDX + 0x8]
0069f152  MOV ECX,dword ptr [ESI + 0x104]
0069f158  FLD float ptr [EAX + ECX*0x4 + 0x8]
0069f15c  FMUL float ptr [0x008a938c]
0069f162  FMUL float ptr [ESI + 0xc8]
0069f168  FMUL float ptr [0x008aac84]
0069f16e  FLD float ptr [EAX + 0x10]
0069f171  FMUL float ptr [0x008a938c]
0069f177  FMUL float ptr [ESI + 0xcc]
0069f17d  FMUL float ptr [0x008aac84]
0069f183  FADDP
0069f185  FLD float ptr [ESI + 0xd0]
0069f18b  FCOMP float ptr [0x00890968]
0069f191  FNSTSW AX
0069f193  TEST AH,0x41
0069f196  JNZ 0x0069f19a
0069f198  FCHS
0069f19a  FADD float ptr [ESI + 0xe0]
0069f1a0  FSTP float ptr [ESI + 0xe0]
0069f1a6  FLD float ptr [ESP + 0x20]
0069f1aa  FCOMP float ptr [0x00890968]
0069f1b0  FNSTSW AX
0069f1b2  TEST AH,0x5
0069f1b5  JP 0x0069f1c3
0069f1b7  FLD float ptr [ESP + 0x20]
0069f1bb  FCHS
0069f1bd  FSTP float ptr [ESP + 0x28]
0069f1c1  JMP 0x0069f1cb
0069f1c3  MOV EDX,dword ptr [ESP + 0x20]
0069f1c7  MOV dword ptr [ESP + 0x28],EDX
0069f1cb  MOV EAX,dword ptr [ESP + 0x28]
0069f1cf  MOV ECX,dword ptr [ESP + 0x1c]
0069f1d3  PUSH EAX
0069f1d4  PUSH ECX
0069f1d5  CALL 0x005cb5d0
0069f1da  FSTP float ptr [ESI + 0x100]
0069f1e0  MOV AL,byte ptr [ESI + 0x10c]
0069f1e6  ADD ESP,0x8
0069f1e9  TEST AL,AL
0069f1eb  JNZ 0x0069f203
0069f1ed  MOV AL,byte ptr [ESI + 0x10d]
0069f1f3  TEST AL,AL
0069f1f5  JNZ 0x0069f203
0069f1f7  MOV dword ptr [ESI + 0xe8],0x0
0069f201  JMP 0x0069f219
0069f203  FLD float ptr [ESI + 0xd0]
0069f209  FMUL float ptr [ESI + 0xc4]
0069f20f  FSUB float ptr [ESP + 0x20]
0069f213  FSTP float ptr [ESI + 0xe8]
0069f219  FLD float ptr [ESI + 0xe8]
0069f21f  MOV byte ptr [ESP + 0x28],0x0
0069f224  FCOM float ptr [0x00890968]
0069f22a  MOV dword ptr [ESP + 0x8],0x3f800000
0069f232  FNSTSW AX
0069f234  TEST AH,0x5
0069f237  JP 0x0069f23b
0069f239  FCHS
0069f23b  MOV AL,byte ptr [ESI + 0x10d]
0069f241  TEST AL,AL
0069f243  JZ 0x0069f277
0069f245  FCOM float ptr [ESI + 0x118]
0069f24b  FNSTSW AX
0069f24d  TEST AH,0x41
0069f250  JNZ 0x0069f277
0069f252  FLD float ptr [ESI + 0x118]
0069f258  MOV byte ptr [ESP + 0x28],0x1
0069f25d  FDIV ST0,ST1
0069f25f  FSTP float ptr [ESP + 0x8]
0069f263  FSTP ST0
0069f265  FLD float ptr [ESP + 0x8]
0069f269  FMUL float ptr [ESI + 0x108]
0069f26f  FSTP float ptr [ESI + 0x108]
0069f275  JMP 0x0069f279
0069f277  FSTP ST0
0069f279  FLD float ptr [ESI + 0xe8]
0069f27f  FLD ST0
0069f281  FMUL ST1
0069f283  FLD float ptr [ESP + 0x1c]
0069f287  FMUL float ptr [ESP + 0x1c]
0069f28b  FADDP
0069f28d  FSTP float ptr [ESP + 0x10]
0069f291  MOV EDX,dword ptr [ESP + 0x10]
0069f295  PUSH EDX
0069f296  FSTP ST0
0069f298  CALL 0x005c5e80
0069f29d  FSTP float ptr [ESP + 0x10]
0069f2a1  FLD float ptr [ESI + 0x100]
0069f2a7  ADD ESP,0x4
0069f2aa  FCOM float ptr [0x00890968]
0069f2b0  FNSTSW AX
0069f2b2  TEST AH,0x5
0069f2b5  JP 0x0069f2b9
0069f2b7  FCHS
0069f2b9  PUSH EBX
0069f2ba  FSTP float ptr [ESP + 0x14]
0069f2be  MOV EAX,dword ptr [ESP + 0x14]
0069f2c2  PUSH EBP
0069f2c3  MOV EBP,dword ptr [ESI + 0xf8]
0069f2c9  PUSH EDI
0069f2ca  MOV EDI,dword ptr [ESI + 0x104]
0069f2d0  PUSH 0x3d088889
0069f2d5  PUSH 0x0
0069f2d7  PUSH EAX
0069f2d8  CALL 0x00401ae0
0069f2dd  MOV ECX,dword ptr [EBP + 0x8]
0069f2e0  FMUL float ptr [ECX + EDI*0x4 + 0x18]
0069f2e4  ADD ESP,0xc
0069f2e7  FMUL float ptr [ESI + 0x11c]
0069f2ed  FMUL float ptr [ESI + 0xe4]
0069f2f3  FMUL float ptr [ESI + 0xd4]
0069f2f9  FMUL float ptr [0x008aada8]
0069f2ff  FST float ptr [ESI + 0xd8]
0069f305  FLD float ptr [ESI + 0x100]
0069f30b  FCOMP float ptr [0x00890968]
0069f311  FNSTSW AX
0069f313  TEST AH,0x41
0069f316  JNZ 0x0069f322
0069f318  FCHS
0069f31a  FSTP float ptr [ESI + 0xd8]
0069f320  JMP 0x0069f324
0069f322  FSTP ST0
0069f324  MOV BL,byte ptr [ESI + 0x10c]
0069f32a  TEST BL,BL
0069f32c  JZ 0x0069f392
0069f32e  FLD float ptr [ESP + 0x18]
0069f332  FCOMP float ptr [0x0089096c]
0069f338  FNSTSW AX
0069f33a  TEST AH,0x41
0069f33d  JNZ 0x0069f392
0069f33f  MOV EDX,dword ptr [EBP + 0x8]
0069f342  FLD float ptr [EDX + EDI*0x4 + 0x20]
0069f346  FLD ST0
0069f348  FMUL float ptr [ESI + 0xe4]
0069f34e  FMUL float ptr [ESI + 0xe8]
0069f354  FMUL float ptr [ESI + 0xd4]
0069f35a  FLD float ptr [ESP + 0x18]
0069f35e  FMUL float ptr [0x008aac78]
0069f364  FDIVP
0069f366  FSTP float ptr [ESI + 0xdc]
0069f36c  FLD float ptr [ESI + 0xe4]
0069f372  FDIV float ptr [ESP + 0x18]
0069f376  FMUL ST1
0069f378  FMUL float ptr [ESP + 0x28]
0069f37c  FMUL float ptr [ESI + 0xd4]
0069f382  FMUL float ptr [0x008ab69c]
0069f388  FSTP float ptr [ESI + 0xd8]
0069f38e  FSTP ST0
0069f390  JMP 0x0069f3fb
0069f392  MOV AL,byte ptr [ESP + 0x34]
0069f396  FLD float ptr [ESI + 0xe0]
0069f39c  TEST AL,AL
0069f39e  FDIV float ptr [ESI + 0xc4]
0069f3a4  JZ 0x0069f3f5
0069f3a6  MOV EAX,dword ptr [ESP + 0x30]
0069f3aa  PUSH ECX
0069f3ab  FSTP float ptr [ESP]
0069f3ae  PUSH 0x41b2cfdf
0069f3b3  PUSH 0x4156930c
0069f3b8  PUSH EAX
0069f3b9  CALL 0x00401ae0
0069f3be  MOV ECX,dword ptr [EBP + 0x8]
0069f3c1  FMUL float ptr [0x008ab230]
0069f3c7  ADD ESP,0x8
0069f3ca  FADD float ptr [0x008ab22c]
0069f3d0  FMUL float ptr [ECX + EDI*0x4 + 0x20]
0069f3d4  FMUL float ptr [ESI + 0xe4]
0069f3da  FDIV float ptr [ESP + 0x20]
0069f3de  FMUL float ptr [ESI + 0xd4]
0069f3e4  FMUL float ptr [ESI + 0xe8]
0069f3ea  FSTP float ptr [ESP]
0069f3ed  CALL 0x00695870
0069f3f2  ADD ESP,0x8
0069f3f5  FSTP float ptr [ESI + 0xdc]
0069f3fb  MOV AL,byte ptr [ESI + 0x10d]
0069f401  TEST AL,AL
0069f403  JZ 0x0069f439
0069f405  MOV AL,byte ptr [ESP + 0x34]
0069f409  TEST AL,AL
0069f40b  JNZ 0x0069f439
0069f40d  TEST BL,BL
0069f40f  JNZ 0x0069f439
0069f411  FLD float ptr [ESI + 0x114]
0069f417  FMUL float ptr [ESI + 0xc4]
0069f41d  FSUB float ptr [ESP + 0x20]
0069f421  FDIV float ptr [ESI + 0xc4]
0069f427  FMUL float ptr [0x008aac84]
0069f42d  FADD float ptr [ESI + 0xdc]
0069f433  FSTP float ptr [ESI + 0xdc]
0069f439  FLD float ptr [ESI + 0xdc]
0069f43f  MOV EDX,dword ptr [EBP + 0x8]
0069f442  FLD float ptr [ESI + 0xd8]
0069f448  FLD ST1
0069f44a  FMUL ST2
0069f44c  FLD ST1
0069f44e  FMUL ST2
0069f450  FADDP
0069f452  FSTP float ptr [ESP + 0x34]
0069f456  FSTP ST0
0069f458  FSTP ST0
0069f45a  FLD float ptr [ESI + 0xc8]
0069f460  FMUL float ptr [0x008aacec]
0069f466  FADD float ptr [0x0089096c]
0069f46c  FMUL float ptr [EDX + EDI*0x4 + 0x38]
0069f470  POP EDI
0069f471  POP EBP
0069f472  FMUL float ptr [ESI + 0xe4]
0069f478  POP EBX
0069f479  FMUL float ptr [ESI + 0xd4]
0069f47f  FST float ptr [ESP + 0x24]
0069f483  FMUL float ptr [ESP + 0x24]
0069f487  FCOMP float ptr [ESP + 0x28]
0069f48b  FNSTSW AX
0069f48d  TEST AH,0x5
0069f490  JP 0x0069f4ec
0069f492  FLD float ptr [ESP + 0x28]
0069f496  FCOMP float ptr [0x008aabe0]
0069f49c  FNSTSW AX
0069f49e  TEST AH,0x41
0069f4a1  JNZ 0x0069f4ec
0069f4a3  MOV EAX,dword ptr [ESP + 0x28]
0069f4a7  PUSH EAX
0069f4a8  CALL 0x005c5e80
0069f4ad  FDIVR float ptr [ESP + 0x28]
0069f4b1  ADD ESP,0x4
0069f4b4  FLD ST0
0069f4b6  FMUL float ptr [ESI + 0x108]
0069f4bc  FSTP float ptr [ESI + 0x108]
0069f4c2  FLD ST0
0069f4c4  FMUL float ptr [ESI + 0xd8]
0069f4ca  FSTP float ptr [ESI + 0xd8]
0069f4d0  FLD ST0
0069f4d2  FMUL float ptr [ESI + 0xdc]
0069f4d8  FSTP float ptr [ESI + 0xdc]
0069f4de  FLD ST0
0069f4e0  FMUL ST1
0069f4e2  FMUL float ptr [ESP + 0x8]
0069f4e6  FSTP float ptr [ESP + 0x8]
0069f4ea  FSTP ST0
0069f4ec  FLD float ptr [ESP + 0x20]
0069f4f0  FCOMP float ptr [0x00890968]
0069f4f6  FLD float ptr [ESP + 0x20]
0069f4fa  FNSTSW AX
0069f4fc  TEST AH,0x5
0069f4ff  JP 0x0069f503
0069f501  FCHS
0069f503  FCOMP float ptr [0x0089096c]
0069f509  FNSTSW AX
0069f50b  TEST AH,0x41
0069f50e  JNZ 0x0069f549
0069f510  FLD float ptr [ESI + 0x100]
0069f516  MOV EDX,dword ptr [ESI + 0xf8]
0069f51c  FMUL float ptr [0x008aabd8]
0069f522  MOV EAX,dword ptr [EDX + 0x8]
0069f525  MOV ECX,dword ptr [ESI + 0x104]
0069f52b  FSIN
0069f52d  FDIV float ptr [EAX + ECX*0x4 + 0x18]
0069f531  FMUL float ptr [ESI + 0xd8]
0069f537  FMUL float ptr [ESP + 0x30]
0069f53b  FSUBR float ptr [ESI + 0xdc]
0069f541  FSTP float ptr [ESI + 0xdc]
0069f547  JMP 0x0069f581
0069f549  FLD float ptr [ESP + 0x1c]
0069f54d  FCOMP float ptr [0x00890968]
0069f553  FLD float ptr [ESP + 0x1c]
0069f557  FNSTSW AX
0069f559  TEST AH,0x5
0069f55c  JP 0x0069f560
0069f55e  FCHS
0069f560  FCOM float ptr [0x0089096c]
0069f566  FNSTSW AX
0069f568  TEST AH,0x5
0069f56b  JNP 0x0069f575
0069f56d  FSTP ST0
0069f56f  FLD float ptr [0x0089096c]
0069f575  FMUL float ptr [ESI + 0xd8]
0069f57b  FSTP float ptr [ESI + 0xd8]
0069f581  MOV AL,byte ptr [ESP + 0x7]
0069f585  TEST AL,AL
0069f587  JNZ 0x0069f5bc
0069f589  CMP dword ptr [ESI + 0xf0],0x1
0069f590  JBE 0x0069f5bc
0069f592  MOV EAX,dword ptr [ESI + 0xa4]
0069f598  FLD float ptr [EAX + 0xec]
0069f59e  FMUL float ptr [ESI + 0xdc]
0069f5a4  FSTP float ptr [ESI + 0xdc]
0069f5aa  FLD float ptr [EAX + 0xf0]
0069f5b0  FMUL float ptr [ESI + 0xd8]
0069f5b6  FSTP float ptr [ESI + 0xd8]
0069f5bc  MOV AL,byte ptr [ESI + 0x10c]
0069f5c2  TEST AL,AL
0069f5c4  JZ 0x0069f5e1
0069f5c6  FLD float ptr [ESI + 0xd8]
0069f5cc  XOR EAX,EAX
0069f5ce  MOV dword ptr [ESI + 0x114],EAX
0069f5d4  MOV dword ptr [ESI + 0xd0],EAX
0069f5da  POP ESI
0069f5db  ADD ESP,0x14
0069f5de  RET 0x18
0069f5e1  MOV AL,byte ptr [ESI + 0x10d]
0069f5e7  TEST AL,AL
0069f5e9  JZ 0x0069f69b
0069f5ef  FLD float ptr [ESP + 0x8]
0069f5f3  FCOMP float ptr [0x0089096c]
0069f5f9  FNSTSW AX
0069f5fb  TEST AH,0x5
0069f5fe  JP 0x0069f69b
0069f604  FLD float ptr [ESI + 0xdc]
0069f60a  MOV ECX,dword ptr [ESI + 0xa4]
0069f610  FMUL float ptr [ESI + 0xc4]
0069f616  FSUBR float ptr [ESI + 0xe0]
0069f61c  FADD float ptr [ESI + 0x110]
0069f622  FMUL float ptr [0x008933d4]
0069f628  FST float ptr [ESI + 0x110]
0069f62e  FLD float ptr [ECX + 0xe4]
0069f634  FMUL float ptr [ESI + 0xd0]
0069f63a  FMUL float ptr [0x008aac78]
0069f640  FSUBP
0069f642  FMUL float ptr [0x00890cd4]
0069f648  FLD float ptr [ESP + 0x8]
0069f64c  FMUL float ptr [ESI + 0xe8]
0069f652  FLD float ptr [ESP + 0x2c]
0069f656  FMUL float ptr [ESI + 0xc4]
0069f65c  FDIVP
0069f65e  FSUBP
0069f660  FST float ptr [ESI + 0x114]
0069f666  FLD float ptr [ESP + 0x14]
0069f66a  FDIV float ptr [ESI + 0xc4]
0069f670  FSUB ST0,ST1
0069f672  FMUL float ptr [ESP + 0x8]
0069f676  FADDP
0069f678  FST float ptr [ESI + 0x114]
0069f67e  FMUL float ptr [ESP + 0x2c]
0069f682  FADD float ptr [ESI + 0xd0]
0069f688  FSTP float ptr [ESI + 0xd0]
0069f68e  FLD float ptr [ESI + 0xd8]
0069f694  POP ESI
0069f695  ADD ESP,0x14
0069f698  RET 0x18
0069f69b  FLD float ptr [ESI + 0xf4]
0069f6a1  FDIV float ptr [ESI + 0xc4]
0069f6a7  FSTP float ptr [ESI + 0xd0]
0069f6ad  FLD float ptr [ESI + 0xd8]
0069f6b3  POP ESI
0069f6b4  ADD ESP,0x14
0069f6b7  RET 0x18
