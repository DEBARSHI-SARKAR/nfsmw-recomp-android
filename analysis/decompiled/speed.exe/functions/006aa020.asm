006aa020  SUB ESP,0x1a4
006aa026  PUSH EBX
006aa027  PUSH ESI
006aa028  MOV ESI,dword ptr [ESP + 0x1b0]
006aa02f  MOV EAX,dword ptr [ESI + 0xc0]
006aa035  PUSH EDI
006aa036  MOV EBX,ECX
006aa038  LEA ECX,[ESP + 0x78]
006aa03c  PUSH ECX
006aa03d  XOR EDI,EDI
006aa03f  LEA EDX,[ESP + 0x10]
006aa043  PUSH EDX
006aa044  PUSH ESI
006aa045  MOV ECX,EBX
006aa047  MOV dword ptr [ESP + 0x94],EAX
006aa04e  MOV dword ptr [ESP + 0x18],EDI
006aa052  MOV dword ptr [ESP + 0x1c],EDI
006aa056  MOV dword ptr [ESP + 0x20],EDI
006aa05a  MOV dword ptr [ESP + 0x84],EDI
006aa061  MOV dword ptr [ESP + 0x88],EDI
006aa068  MOV dword ptr [ESP + 0x8c],EDI
006aa06f  CALL 0x0069e9e0
006aa074  PUSH ESI
006aa075  MOV ECX,EBX
006aa077  CALL 0x006a9b40
006aa07c  MOV ECX,dword ptr [EBX + 0x48]
006aa07f  MOV EAX,dword ptr [ESI + 0xac]
006aa085  MOV EDX,dword ptr [ECX]
006aa087  MOV dword ptr [ESP + 0x9c],EDI
006aa08e  MOV dword ptr [ESP + 0x3c],EDI
006aa092  MOV dword ptr [ESP + 0xc8],EAX
006aa099  MOV dword ptr [ESP + 0x2c],EDI
006aa09d  CALL dword ptr [EDX + 0xcc]
006aa0a3  CMP EAX,EDI
006aa0a5  JZ 0x006aa0ae
006aa0a7  MOV EAX,dword ptr [EAX + 0xc]
006aa0aa  MOV dword ptr [ESP + 0x2c],EAX
006aa0ae  CALL 0x006e8de0
006aa0b3  FSTP float ptr [ESP + 0x120]
006aa0ba  MOV EAX,dword ptr [EBX + 0xc8]
006aa0c0  FLD float ptr [EAX + 0x30]
006aa0c3  MOV ECX,dword ptr [EAX + 0x8]
006aa0c6  FMUL float ptr [0x008aae8c]
006aa0cc  MOV EDX,dword ptr [EAX + 0xc]
006aa0cf  MOV dword ptr [ESP + 0x13c],ECX
006aa0d6  MOV ECX,dword ptr [EBX + 0x1b4]
006aa0dc  FSTP float ptr [ESP + 0x144]
006aa0e3  FLD float ptr [EAX + 0x28]
006aa0e6  MOV dword ptr [ESP + 0x140],EDX
006aa0ed  FMUL float ptr [0x008aae8c]
006aa0f3  MOV EDX,dword ptr [EBX + 0x1b8]
006aa0f9  FSTP float ptr [ESP + 0x15c]
006aa100  FLD float ptr [EAX + 0x40]
006aa103  FMUL float ptr [0x008a9388]
006aa109  FSTP float ptr [ESP + 0xfc]
006aa110  FLD float ptr [0x0089096c]
006aa116  FSUB float ptr [EAX]
006aa118  FSTP float ptr [ESP + 0xd8]
006aa11f  FLD float ptr [EAX + 0x38]
006aa122  FMUL float ptr [0x008aae8c]
006aa128  FSTP float ptr [ESP + 0x14c]
006aa12f  FLD float ptr [EAX + 0x48]
006aa132  FMUL float ptr [0x008aae8c]
006aa138  FLD float ptr [EAX + 0x10]
006aa13b  FMUL float ptr [0x008a9388]
006aa141  FSTP float ptr [ESP + 0x154]
006aa148  FLD float ptr [ESP + 0x2c]
006aa14c  FMUL float ptr [0x008a9388]
006aa152  FLD float ptr [EAX + 0x18]
006aa155  FMUL float ptr [0x008a9388]
006aa15b  FADD ST0,ST1
006aa15d  FSTP float ptr [ESP + 0x124]
006aa164  FLD float ptr [EAX + 0x34]
006aa167  FMUL float ptr [0x008aae8c]
006aa16d  FSTP float ptr [ESP + 0x148]
006aa174  FLD float ptr [EAX + 0x2c]
006aa177  FMUL float ptr [0x008aae8c]
006aa17d  FSTP float ptr [ESP + 0x160]
006aa184  FLD float ptr [EAX + 0x44]
006aa187  FMUL float ptr [0x008a9388]
006aa18d  FSTP float ptr [ESP + 0x100]
006aa194  FLD float ptr [0x0089096c]
006aa19a  FSUB float ptr [EAX + 0x4]
006aa19d  FSTP float ptr [ESP + 0xdc]
006aa1a4  FLD float ptr [EAX + 0x3c]
006aa1a7  FMUL float ptr [0x008aae8c]
006aa1ad  FSTP float ptr [ESP + 0x150]
006aa1b4  FLD float ptr [EAX + 0x4c]
006aa1b7  FMUL float ptr [0x008aae8c]
006aa1bd  FSTP float ptr [ESP + 0xb4]
006aa1c4  FLD float ptr [EAX + 0x14]
006aa1c7  FMUL float ptr [0x008a9388]
006aa1cd  FSTP float ptr [ESP + 0x158]
006aa1d4  FLD float ptr [EAX + 0x1c]
006aa1d7  LEA EAX,[EBX + 0x1b4]
006aa1dd  FMUL float ptr [0x008a9388]
006aa1e3  FADD ST0,ST1
006aa1e5  FSTP float ptr [ESP + 0x128]
006aa1ec  FSTP ST0
006aa1ee  FLD float ptr [ECX + 0x78]
006aa1f1  FSUB float ptr [EDX + 0x78]
006aa1f4  FMUL ST1
006aa1f6  FSTP float ptr [ESP + 0x12c]
006aa1fd  MOV ECX,dword ptr [EBX + 0x1bc]
006aa203  FSTP ST0
006aa205  FLD float ptr [ESP + 0x12c]
006aa20c  MOV EDX,dword ptr [EBX + 0x1c0]
006aa212  FCHS
006aa214  MOV dword ptr [ESP + 0x5c],0x3f800000
006aa21c  FSTP float ptr [ESP + 0x130]
006aa223  MOV byte ptr [ESP + 0x2b],0x0
006aa228  FLD float ptr [ECX + 0x78]
006aa22b  MOV ECX,dword ptr [ESP + 0x78]
006aa22f  FSUB float ptr [EDX + 0x78]
006aa232  MOV EDX,dword ptr [ESP + 0x7c]
006aa236  MOV dword ptr [ESP + 0x50],ECX
006aa23a  MOV ECX,dword ptr [ESP + 0x80]
006aa241  MOV dword ptr [ESP + 0x54],EDX
006aa245  MOV EDX,dword ptr [ESP + 0x50]
006aa249  MOV dword ptr [ESP + 0x58],ECX
006aa24d  MOV ECX,dword ptr [ESP + 0x54]
006aa251  MOV dword ptr [ESP + 0x170],EDX
006aa258  MOV EDX,dword ptr [ESP + 0x58]
006aa25c  MOV dword ptr [ESP + 0x174],ECX
006aa263  MOV ECX,dword ptr [ESP + 0x5c]
006aa267  MOV dword ptr [ESP + 0x178],EDX
006aa26e  MOV EDX,dword ptr [ESP + 0xc]
006aa272  MOV dword ptr [ESP + 0x17c],ECX
006aa279  MOV ECX,dword ptr [ESP + 0x10]
006aa27d  MOV dword ptr [ESP + 0x50],EDX
006aa281  MOV EDX,dword ptr [ESP + 0x14]
006aa285  MOV dword ptr [ESP + 0x54],ECX
006aa289  MOV ECX,dword ptr [ESP + 0x50]
006aa28d  MOV dword ptr [ESP + 0x58],EDX
006aa291  MOV EDX,dword ptr [ESP + 0x54]
006aa295  MOV dword ptr [ESP + 0x180],ECX
006aa29c  MOV ECX,dword ptr [ESP + 0x58]
006aa2a0  MOV dword ptr [ESP + 0x184],EDX
006aa2a7  MOV dword ptr [ESP + 0x188],ECX
006aa2ae  MOV ECX,dword ptr [ESI + 0x20]
006aa2b1  MOV dword ptr [ESP + 0x50],ECX
006aa2b5  MOV ECX,dword ptr [ESI + 0x28]
006aa2b8  MOV dword ptr [ESP + 0x5c],0x3f800000
006aa2c0  MOV EDX,dword ptr [ESP + 0x5c]
006aa2c4  MOV dword ptr [ESP + 0x18c],EDX
006aa2cb  MOV EDX,dword ptr [ESI + 0x24]
006aa2ce  MOV dword ptr [ESP + 0x54],EDX
006aa2d2  MOV EDX,dword ptr [ESP + 0x50]
006aa2d6  MOV dword ptr [ESP + 0x58],ECX
006aa2da  MOV ECX,dword ptr [ESP + 0x54]
006aa2de  MOV dword ptr [ESP + 0x190],EDX
006aa2e5  MOV EDX,dword ptr [ESP + 0x58]
006aa2e9  MOV dword ptr [ESP + 0x194],ECX
006aa2f0  MOV dword ptr [ESP + 0x5c],0x3f800000
006aa2f8  MOV ECX,dword ptr [ESP + 0x5c]
006aa2fc  MOV dword ptr [ESP + 0x198],EDX
006aa303  MOV EDX,dword ptr [ESI + 0x20]
006aa306  MOV dword ptr [ESP + 0x19c],ECX
006aa30d  MOV ECX,dword ptr [ESI + 0x24]
006aa310  MOV dword ptr [ESP + 0x50],EDX
006aa314  MOV EDX,dword ptr [ESI + 0x28]
006aa317  MOV dword ptr [ESP + 0x54],ECX
006aa31b  MOV ECX,dword ptr [ESP + 0x50]
006aa31f  FMUL float ptr [ESP + 0xb4]
006aa326  MOV dword ptr [ESP + 0x58],EDX
006aa32a  MOV EDX,dword ptr [ESP + 0x54]
006aa32e  MOV dword ptr [ESP + 0x1a0],ECX
006aa335  FST float ptr [ESP + 0x134]
006aa33c  MOV ECX,dword ptr [ESP + 0x58]
006aa340  FCHS
006aa342  MOV dword ptr [ESP + 0x5c],0x3f800000
006aa34a  FSTP float ptr [ESP + 0x138]
006aa351  MOV dword ptr [ESP + 0x1a4],EDX
006aa358  MOV EDX,dword ptr [ESP + 0x5c]
006aa35c  MOV dword ptr [ESP + 0x1a8],ECX
006aa363  LEA ECX,[ESP + 0x178]
006aa36a  MOV dword ptr [ESP + 0x1ac],EDX
006aa371  MOV dword ptr [ESP + 0x84],EDI
006aa378  MOV dword ptr [ESP + 0xa0],ECX
006aa37f  MOV dword ptr [ESP + 0x2c],EAX
006aa383  PUSH EBP
006aa384  JMP 0x006aa390
006aa390  FLD float ptr [ESI + 0x84]
006aa396  MOV EAX,dword ptr [ESI + 0xd8]
006aa39c  MOV EDX,dword ptr [ESP + 0x30]
006aa3a0  FADD ST0,ST0
006aa3a2  MOV EDI,dword ptr [EDX]
006aa3a4  MOV EDX,dword ptr [ESI + 0xc0]
006aa3aa  MOV EBP,dword ptr [ESP + 0x88]
006aa3b1  PUSH ECX
006aa3b2  MOV ECX,dword ptr [EDI + 0xc4]
006aa3b8  FSTP float ptr [ESP]
006aa3bb  PUSH EAX
006aa3bc  PUSH 0x1
006aa3be  PUSH ECX
006aa3bf  PUSH EDX
006aa3c0  LEA EAX,[ESI + 0xb0]
006aa3c6  PUSH EAX
006aa3c7  PUSH ESI
006aa3c8  LEA EAX,[ESI + 0x50]
006aa3cb  PUSH EAX
006aa3cc  LEA EAX,[ESI + 0x60]
006aa3cf  PUSH EAX
006aa3d0  MOV ECX,EDI
006aa3d2  SHR EBP,0x1
006aa3d4  CALL 0x00671530
006aa3d9  MOV EAX,dword ptr [EDI + 0x3c]
006aa3dc  MOV ECX,dword ptr [EDI + 0x40]
006aa3df  MOV EDX,dword ptr [EDI + 0x44]
006aa3e2  MOV dword ptr [ESP + 0x1c],EAX
006aa3e6  MOV EAX,dword ptr [ESP + 0xa4]
006aa3ed  MOV dword ptr [ESP + 0x20],ECX
006aa3f1  MOV ECX,dword ptr [EAX + -0x8]
006aa3f4  MOV dword ptr [ESP + 0x24],EDX
006aa3f8  MOV EDX,dword ptr [EAX + -0x4]
006aa3fb  MOV EAX,dword ptr [EAX]
006aa3fd  MOV dword ptr [ESP + 0x74],EAX
006aa401  FLD float ptr [ESP + 0x74]
006aa405  FMUL float ptr [ESP + 0x20]
006aa409  MOV dword ptr [ESP + 0x70],EDX
006aa40d  MOV dword ptr [ESP + 0x6c],ECX
006aa411  FSTP float ptr [ESP + 0xd0]
006aa418  FLD float ptr [ESP + 0x70]
006aa41c  FMUL float ptr [ESP + 0x24]
006aa420  FSTP float ptr [ESP + 0xd8]
006aa427  FLD float ptr [ESP + 0xd0]
006aa42e  FSUB float ptr [ESP + 0xd8]
006aa435  FSTP float ptr [ESP + 0x118]
006aa43c  MOV ECX,dword ptr [ESP + 0x118]
006aa443  FLD float ptr [ESP + 0x24]
006aa447  MOV dword ptr [ESP + 0x48],ECX
006aa44b  FMUL float ptr [ESP + 0x6c]
006aa44f  LEA ECX,[ESP + 0x48]
006aa453  PUSH ECX
006aa454  FSTP float ptr [ESP + 0xd8]
006aa45b  FLD float ptr [ESP + 0x78]
006aa45f  FMUL float ptr [ESP + 0x20]
006aa463  FSTP float ptr [ESP + 0xcc]
006aa46a  FLD float ptr [ESP + 0xd8]
006aa471  FSUB float ptr [ESP + 0xcc]
006aa478  FSTP float ptr [ESP + 0x120]
006aa47f  MOV EDX,dword ptr [ESP + 0x120]
006aa486  FLD float ptr [ESP + 0x74]
006aa48a  MOV dword ptr [ESP + 0x50],EDX
006aa48e  FMUL float ptr [ESP + 0x20]
006aa492  MOV EDX,ECX
006aa494  PUSH EDX
006aa495  FSTP float ptr [ESP + 0x80]
006aa49c  FLD float ptr [ESP + 0x28]
006aa4a0  FMUL float ptr [ESP + 0x74]
006aa4a4  FSTP float ptr [ESP + 0x6c]
006aa4a8  FLD float ptr [ESP + 0x80]
006aa4af  FSUB float ptr [ESP + 0x6c]
006aa4b3  FSTP float ptr [ESP + 0x128]
006aa4ba  MOV EAX,dword ptr [ESP + 0x128]
006aa4c1  MOV dword ptr [ESP + 0x58],EAX
006aa4c5  CALL 0x0040fe20
006aa4ca  FLD float ptr [ESP + 0x28]
006aa4ce  FMUL float ptr [ESI + 0x14]
006aa4d1  MOV EAX,dword ptr [EDI + 0x48]
006aa4d4  ADD ESP,0x8
006aa4d7  MOV dword ptr [ESP + 0x114],EAX
006aa4de  FLD float ptr [ESP + 0x24]
006aa4e2  FMUL float ptr [ESI + 0x18]
006aa4e5  FADDP
006aa4e7  FLD float ptr [ESP + 0x1c]
006aa4eb  FMUL float ptr [ESI + 0x10]
006aa4ee  FADDP
006aa4f0  FST float ptr [ESP + 0x28]
006aa4f4  FCOMP float ptr [0x0089096c]
006aa4fa  FNSTSW AX
006aa4fc  TEST AH,0x5
006aa4ff  JP 0x006aa5c2
006aa505  FLD float ptr [ESP + 0x28]
006aa509  FLD float ptr [0x00890968]
006aa50f  FCOMP float ptr [ESP + 0x28]
006aa513  FNSTSW AX
006aa515  TEST AH,0x41
006aa518  JNZ 0x006aa522
006aa51a  FSTP ST0
006aa51c  FLD float ptr [0x00890968]
006aa522  FLD ST0
006aa524  FMUL float ptr [ESP + EBP*0x4 + 0x128]
006aa52b  FADD float ptr [ESP + 0x114]
006aa532  FLD float ptr [ESP + EBP*0x4 + 0x158]
006aa539  FSTP float ptr [ESP + 0x28]
006aa53d  FLD float ptr [0x00890968]
006aa543  FLD float ptr [EDI + 0x78]
006aa546  FUCOMPP
006aa548  FNSTSW AX
006aa54a  TEST AH,0x44
006aa54d  JP 0x006aa56c
006aa54f  FLD float ptr [ESP + 0x28]
006aa553  FSUBR ST0,ST1
006aa555  FLD float ptr [ESP + 0x40]
006aa559  FCOMP
006aa55b  FNSTSW AX
006aa55d  TEST AH,0x41
006aa560  JNZ 0x006aa568
006aa562  FSTP ST0
006aa564  FLD float ptr [ESP + 0x40]
006aa568  FSTP float ptr [ESP + 0x40]
006aa56c  FCOM float ptr [0x00890968]
006aa572  FNSTSW AX
006aa574  TEST AH,0x41
006aa577  JZ 0x006aa581
006aa579  FSTP ST0
006aa57b  FLD float ptr [0x00890968]
006aa581  FCOM float ptr [ESP + 0x28]
006aa585  FST float ptr [ESP + 0x44]
006aa589  FNSTSW AX
006aa58b  TEST AH,0x41
006aa58e  JNZ 0x006aa5cd
006aa590  FSUB float ptr [ESP + 0x28]
006aa594  FLD float ptr [ESP + 0x40]
006aa598  FCOMP
006aa59a  FNSTSW AX
006aa59c  TEST AH,0x41
006aa59f  JNZ 0x006aa5a7
006aa5a1  FSTP ST0
006aa5a3  FLD float ptr [ESP + 0x40]
006aa5a7  MOV ECX,dword ptr [ESP + 0x28]
006aa5ab  FSTP float ptr [ESP + 0x40]
006aa5af  MOV EDX,dword ptr [ESP + 0x124]
006aa5b6  MOV dword ptr [ESP + 0x44],ECX
006aa5ba  MOV dword ptr [EDI + 0x114],EDX
006aa5c0  JMP 0x006aa5cf
006aa5c2  FLD float ptr [0x0089096c]
006aa5c8  JMP 0x006aa522
006aa5cd  FSTP ST0
006aa5cf  FLD float ptr [ESP + 0x44]
006aa5d3  FCOMP float ptr [0x00890968]
006aa5d9  FNSTSW AX
006aa5db  TEST AH,0x41
006aa5de  JNZ 0x006aaacc
006aa5e4  FCOMP float ptr [0x008f8760]
006aa5ea  FNSTSW AX
006aa5ec  TEST AH,0x41
006aa5ef  JNZ 0x006aaace
006aa5f5  FLD float ptr [0x0089096c]
006aa5fb  MOV EAX,dword ptr [ESP + 0xa0]
006aa602  FDIV float ptr [ESP + 0x8c]
006aa609  INC EAX
006aa60a  MOV dword ptr [ESP + 0xa0],EAX
006aa611  FSTP float ptr [ESP + 0x68]
006aa615  FLD float ptr [ESP + 0x44]
006aa619  FSUB float ptr [EDI + 0x78]
006aa61c  FMUL float ptr [ESP + 0x68]
006aa620  FST float ptr [ESP + 0xf0]
006aa627  FLD float ptr [ESP + 0x44]
006aa62b  FMUL float ptr [ESP + EBP*0x4 + 0x140]
006aa632  FADD float ptr [0x0089096c]
006aa638  FMUL float ptr [ESP + EBP*0x4 + 0x150]
006aa63f  FMUL float ptr [ESP + 0x44]
006aa643  FSTP float ptr [ESP + 0xb4]
006aa64a  FLD float ptr [ESP + EBP*0x4 + 0x100]
006aa651  FCOMP float ptr [0x008aabe0]
006aa657  FNSTSW AX
006aa659  TEST AH,0x41
006aa65c  JNZ 0x006aa6d9
006aa65e  FLD float ptr [ESP + EBP*0x4 + 0xdc]
006aa665  FCOMP float ptr [0x0089096c]
006aa66b  FNSTSW AX
006aa66d  TEST AH,0x5
006aa670  JP 0x006aa6d9
006aa672  FCOM float ptr [0x00890968]
006aa678  FLD ST0
006aa67a  FNSTSW AX
006aa67c  TEST AH,0x5
006aa67f  JP 0x006aa683
006aa681  FCHS
006aa683  MOV EAX,dword ptr [ESP + EBP*0x4 + 0x100]
006aa68a  FST float ptr [ESP + 0x28]
006aa68e  MOV dword ptr [ESP + 0x90],EAX
006aa695  FCOMP float ptr [ESP + 0x90]
006aa69c  FNSTSW AX
006aa69e  TEST AH,0x41
006aa6a1  JNZ 0x006aa6d9
006aa6a3  FSTP ST0
006aa6a5  FLD float ptr [ESP + 0x28]
006aa6a9  FDIV float ptr [ESP + 0x90]
006aa6b0  FLD float ptr [ESP + EBP*0x4 + 0xdc]
006aa6b7  CALL 0x007c45f0
006aa6bc  FMUL float ptr [ESP + 0x90]
006aa6c3  FLD float ptr [ESP + 0xf0]
006aa6ca  FCOMP float ptr [0x00890968]
006aa6d0  FNSTSW AX
006aa6d2  TEST AH,0x41
006aa6d5  JZ 0x006aa6d9
006aa6d7  FCHS
006aa6d9  FCOM float ptr [0x00890968]
006aa6df  FNSTSW AX
006aa6e1  TEST AH,0x41
006aa6e4  JNZ 0x006aa6ef
006aa6e6  FLD float ptr [ESP + EBP*0x4 + 0x148]
006aa6ed  JMP 0x006aa6f6
006aa6ef  FLD float ptr [ESP + EBP*0x4 + 0x160]
006aa6f6  MOV ECX,dword ptr [EBX + 0xc8]
006aa6fc  FMULP
006aa6fe  FLD float ptr [ESP + 0xcc]
006aa705  FMUL float ptr [ECX + 0x58]
006aa708  FMUL float ptr [0x00891608]
006aa70e  FLD ST1
006aa710  FCOMPP
006aa712  FNSTSW AX
006aa714  TEST AH,0x41
006aa717  JNZ 0x006aa721
006aa719  FSTP ST0
006aa71b  FLD float ptr [0x00890968]
006aa721  MOV EDX,dword ptr [ESP + 0x88]
006aa728  FADD float ptr [ESP + EDX*0x4 + 0x130]
006aa72f  FADD float ptr [ESP + 0xb4]
006aa736  FCOM float ptr [0x00890968]
006aa73c  FNSTSW AX
006aa73e  TEST AH,0x41
006aa741  JZ 0x006aa74b
006aa743  FSTP ST0
006aa745  FLD float ptr [0x00890968]
006aa74b  FLD float ptr [ESI + 0x10]
006aa74e  MOV EAX,dword ptr [ESI + 0x18]
006aa751  FLD float ptr [ESI + 0x14]
006aa754  MOV dword ptr [ESP + 0x5c],EAX
006aa758  FXCH
006aa75a  FMUL ST2
006aa75c  FSTP float ptr [ESP + 0x94]
006aa763  FMUL ST1
006aa765  FSTP float ptr [ESP + 0x98]
006aa76c  FLD float ptr [ESP + 0x5c]
006aa770  FMUL ST1
006aa772  FSTP float ptr [ESP + 0x9c]
006aa779  FLD float ptr [ESP + 0xd8]
006aa780  FSUB float ptr [ESP + 0xd0]
006aa787  FSTP float ptr [ESP + 0x108]
006aa78e  MOV ECX,dword ptr [ESP + 0x108]
006aa795  FLD float ptr [ESP + 0xc8]
006aa79c  MOV dword ptr [ESP + 0x34],ECX
006aa7a0  FSUB float ptr [ESP + 0xd4]
006aa7a7  FSTP float ptr [ESP + 0x10c]
006aa7ae  MOV EDX,dword ptr [ESP + 0x10c]
006aa7b5  FLD float ptr [ESP + 0x64]
006aa7b9  MOV dword ptr [ESP + 0x38],EDX
006aa7bd  FSUB float ptr [ESP + 0x78]
006aa7c1  FSTP float ptr [ESP + 0x110]
006aa7c8  MOV EAX,dword ptr [ESP + 0x110]
006aa7cf  FLD float ptr [ESP + 0x38]
006aa7d3  MOV dword ptr [ESP + 0x3c],EAX
006aa7d7  FMUL float ptr [ESP + 0x74]
006aa7db  FLD float ptr [ESP + 0x3c]
006aa7df  FMUL float ptr [ESP + 0x70]
006aa7e3  FSUBP
006aa7e5  FSTP float ptr [ESP + 0xe4]
006aa7ec  MOV ECX,dword ptr [ESP + 0xe4]
006aa7f3  FLD float ptr [ESP + 0x3c]
006aa7f7  FMUL float ptr [ESP + 0x6c]
006aa7fb  FLD float ptr [ESP + 0x74]
006aa7ff  FMUL float ptr [ESP + 0x34]
006aa803  FSUBP
006aa805  FSTP float ptr [ESP + 0xe8]
006aa80c  MOV EDX,dword ptr [ESP + 0xe8]
006aa813  FLD float ptr [ESP + 0x70]
006aa817  FMUL float ptr [ESP + 0x34]
006aa81b  MOV dword ptr [ESP + 0x34],ECX
006aa81f  FLD float ptr [ESP + 0x38]
006aa823  MOV dword ptr [ESP + 0x38],EDX
006aa827  FMUL float ptr [ESP + 0x6c]
006aa82b  FSUBP
006aa82d  FSTP float ptr [ESP + 0xec]
006aa834  MOV EAX,dword ptr [ESP + 0xec]
006aa83b  MOV dword ptr [ESP + 0x3c],EAX
006aa83f  FLD float ptr [ESP + 0x3c]
006aa843  FMUL float ptr [ESP + 0x24]
006aa847  FLD float ptr [ESP + 0x38]
006aa84b  FMUL float ptr [ESP + 0x20]
006aa84f  FADDP
006aa851  FLD float ptr [ESP + 0x34]
006aa855  FMUL float ptr [ESP + 0x1c]
006aa859  FADDP
006aa85b  FMUL float ptr [0x00890e98]
006aa861  FSUB float ptr [0x008aac70]
006aa867  FCOM float ptr [0x00894b58]
006aa86d  FNSTSW AX
006aa86f  TEST AH,0x41
006aa872  JZ 0x006aa87c
006aa874  FSTP ST0
006aa876  FLD float ptr [0x00894b58]
006aa87c  FLD float ptr [ESP + 0x4c]
006aa880  MOV ECX,dword ptr [ESI + 0xc0]
006aa886  FMUL float ptr [EDI + 0x90]
006aa88c  MOV EDX,dword ptr [ESI + 0xbc]
006aa892  FLD float ptr [ESP + 0x48]
006aa896  PUSH ECX
006aa897  FMUL float ptr [EDI + 0x8c]
006aa89d  PUSH ECX
006aa89e  FADDP
006aa8a0  FLD float ptr [ESP + 0x58]
006aa8a4  FMUL float ptr [EDI + 0x94]
006aa8aa  FADDP
006aa8ac  FSTP float ptr [ESP + 0x80]
006aa8b3  FLD float ptr [ESP + 0x7c]
006aa8b7  MOV ECX,dword ptr [ESP + 0x80]
006aa8be  FMUL float ptr [EDI + 0x94]
006aa8c4  FLD float ptr [ESP + 0x74]
006aa8c8  FMUL float ptr [EDI + 0x8c]
006aa8ce  FADDP
006aa8d0  FLD float ptr [ESP + 0x78]
006aa8d4  FMUL float ptr [EDI + 0x90]
006aa8da  FADDP
006aa8dc  FSTP float ptr [ESP + 0xbc]
006aa8e3  MOV EAX,dword ptr [ESP + 0xbc]
006aa8ea  FXCH
006aa8ec  FMUL ST1
006aa8ee  FSTP float ptr [ESP]
006aa8f1  PUSH EDX
006aa8f2  PUSH EAX
006aa8f3  PUSH ECX
006aa8f4  FSTP ST0
006aa8f6  MOV ECX,EDI
006aa8f8  CALL 0x0069da90
006aa8fd  FSTP float ptr [ESP + 0x64]
006aa901  FLD float ptr [ESP + 0x68]
006aa905  FMUL float ptr [ESP + 0x78]
006aa909  FLD float ptr [ESP + 0xcc]
006aa910  FMUL float ptr [0x008910f0]
006aa916  FMULP
006aa918  FCOM float ptr [0x00890968]
006aa91e  FNSTSW AX
006aa920  TEST AH,0x5
006aa923  JP 0x006aa927
006aa925  FCHS
006aa927  FLD ST0
006aa929  FCHS
006aa92b  FSTP float ptr [ESP + 0x68]
006aa92f  FLD float ptr [ESP + 0x64]
006aa933  FCOMP
006aa935  FNSTSW AX
006aa937  TEST AH,0x5
006aa93a  JP 0x006aa942
006aa93c  FSTP ST0
006aa93e  FLD float ptr [ESP + 0x64]
006aa942  FLD float ptr [ESP + 0x68]
006aa946  FCOMP
006aa948  FNSTSW AX
006aa94a  TEST AH,0x41
006aa94d  JNZ 0x006aa955
006aa94f  FSTP ST0
006aa951  FLD float ptr [ESP + 0x68]
006aa955  FLD float ptr [ESP + 0x48]
006aa959  FMUL ST1
006aa95b  FLD float ptr [ESP + 0x4c]
006aa95f  FMUL ST2
006aa961  FSTP float ptr [ESP + 0x16c]
006aa968  MOV EDX,dword ptr [ESP + 0x16c]
006aa96f  FLD float ptr [ESP + 0x50]
006aa973  MOV dword ptr [ESP + 0xf8],EDX
006aa97a  FMUL ST2
006aa97c  MOV dword ptr [ESP + 0xac],EDX
006aa983  FSTP float ptr [ESP + 0x170]
006aa98a  MOV EAX,dword ptr [ESP + 0x170]
006aa991  MOV dword ptr [ESP + 0xfc],EAX
006aa998  FSTP float ptr [ESP + 0xf4]
006aa99f  MOV ECX,dword ptr [ESP + 0xf4]
006aa9a6  MOV dword ptr [ESP + 0xa8],ECX
006aa9ad  FSTP ST0
006aa9af  MOV dword ptr [ESP + 0xb0],EAX
006aa9b6  FLD float ptr [ESP + 0x4c]
006aa9ba  FMUL float ptr [ESP + 0x24]
006aa9be  FLD float ptr [ESP + 0x50]
006aa9c2  FMUL float ptr [ESP + 0x20]
006aa9c6  FSUBP
006aa9c8  FSTP float ptr [ESP + 0xbc]
006aa9cf  MOV ECX,dword ptr [ESP + 0xbc]
006aa9d6  FLD float ptr [ESP + 0x50]
006aa9da  MOV dword ptr [ESP + 0x10],ECX
006aa9de  FMUL float ptr [ESP + 0x1c]
006aa9e2  LEA ECX,[ESP + 0x10]
006aa9e6  FLD float ptr [ESP + 0x24]
006aa9ea  PUSH ECX
006aa9eb  FMUL float ptr [ESP + 0x4c]
006aa9ef  FSUBP
006aa9f1  FSTP float ptr [ESP + 0xc4]
006aa9f8  MOV EDX,dword ptr [ESP + 0xc4]
006aa9ff  FLD float ptr [ESP + 0x24]
006aaa03  MOV dword ptr [ESP + 0x18],EDX
006aaa07  FMUL float ptr [ESP + 0x4c]
006aaa0b  MOV EDX,ECX
006aaa0d  FLD float ptr [ESP + 0x50]
006aaa11  PUSH EDX
006aaa12  FMUL float ptr [ESP + 0x24]
006aaa16  FSUBP
006aaa18  FSTP float ptr [ESP + 0xcc]
006aaa1f  MOV EAX,dword ptr [ESP + 0xcc]
006aaa26  MOV dword ptr [ESP + 0x20],EAX
006aaa2a  CALL 0x0040fe20
006aaa2f  FLD float ptr [EDI + 0xdc]
006aaa35  FLD float ptr [ESP + 0x18]
006aaa39  LEA EAX,[EDI + 0x5c]
006aaa3c  FMUL ST1
006aaa3e  ADD ESP,0x8
006aaa41  FLD float ptr [ESP + 0x14]
006aaa45  FMUL ST2
006aaa47  FSTP float ptr [ESP + 0x14]
006aaa4b  FLD float ptr [ESP + 0x18]
006aaa4f  FMUL ST2
006aaa51  FSTP float ptr [ESP + 0x18]
006aaa55  FADD float ptr [ESP + 0xa8]
006aaa5c  FSTP ST1
006aaa5e  FLD float ptr [ESP + 0xac]
006aaa65  FADD float ptr [ESP + 0x14]
006aaa69  FLD float ptr [ESP + 0xb0]
006aaa70  FADD float ptr [ESP + 0x18]
006aaa74  FSTP float ptr [ESP + 0x84]
006aaa7b  FXCH
006aaa7d  FADD float ptr [ESP + 0x94]
006aaa84  FSTP float ptr [ESP + 0x7c]
006aaa88  MOV ECX,dword ptr [ESP + 0x7c]
006aaa8c  MOV dword ptr [EAX],ECX
006aaa8e  FADD float ptr [ESP + 0x98]
006aaa95  FSTP float ptr [ESP + 0x80]
006aaa9c  FLD float ptr [ESP + 0x84]
006aaaa3  FADD float ptr [ESP + 0x9c]
006aaaaa  FSTP float ptr [ESP + 0x84]
006aaab1  MOV EDX,dword ptr [ESP + 0x80]
006aaab8  MOV ECX,dword ptr [ESP + 0x84]
006aaabf  MOV dword ptr [EAX + 0x4],EDX
006aaac2  MOV dword ptr [EAX + 0x8],ECX
006aaac5  MOV byte ptr [ESP + 0x2f],0x1
006aaaca  JMP 0x006aaaf8
006aaacc  FSTP ST0
006aaace  MOV EAX,[0x008a2fb4]
006aaad3  LEA EDX,[EDI + 0x5c]
006aaad6  MOV dword ptr [EDX],EAX
006aaad8  MOV ECX,dword ptr [0x008a2fb8]
006aaade  MOV dword ptr [EDX + 0x4],ECX
006aaae1  MOV ECX,dword ptr [ESP + 0x8c]
006aaae8  MOV EAX,[0x008a2fbc]
006aaaed  PUSH ECX
006aaaee  MOV ECX,EDI
006aaaf0  MOV dword ptr [EDX + 0x8],EAX
006aaaf3  CALL 0x0068e370
006aaaf8  FLD float ptr [0x00890968]
006aaafe  FLD float ptr [ESP + 0x44]
006aab02  FUCOMPP
006aab04  FNSTSW AX
006aab06  TEST AH,0x44
006aab09  JP 0x006aab1a
006aab0b  FLD float ptr [ESP + 0x8c]
006aab12  FADD float ptr [EDI + 0x68]
006aab15  FSTP float ptr [EDI + 0x68]
006aab18  JMP 0x006aab21
006aab1a  MOV dword ptr [EDI + 0x68],0x0
006aab21  FLD float ptr [ESP + 0x44]
006aab25  FCOMP float ptr [0x00890968]
006aab2b  FNSTSW AX
006aab2d  TEST AH,0x41
006aab30  JNZ 0x006aab38
006aab32  FLD float ptr [ESP + 0x44]
006aab36  JMP 0x006aab3e
006aab38  FLD float ptr [0x00890968]
006aab3e  MOV EAX,dword ptr [ESP + 0x88]
006aab45  FSTP float ptr [EDI + 0x78]
006aab48  MOV EDI,dword ptr [ESP + 0xa4]
006aab4f  MOV EDX,dword ptr [ESP + 0x30]
006aab53  INC EAX
006aab54  ADD EDI,0x10
006aab57  ADD EDX,0x4
006aab5a  CMP EAX,0x4
006aab5d  MOV dword ptr [ESP + 0x88],EAX
006aab64  MOV dword ptr [ESP + 0xa4],EDI
006aab6b  MOV dword ptr [ESP + 0x30],EDX
006aab6f  JC 0x006aa390
006aab75  MOV AL,byte ptr [ESP + 0x2f]
006aab79  TEST AL,AL
006aab7b  JZ 0x006aae0d
006aab81  MOV ECX,dword ptr [0x008a2fb8]
006aab87  MOV EDX,dword ptr [0x008a2fbc]
006aab8d  MOV EAX,[0x008a2fb4]
006aab92  LEA EBP,[EBX + 0x4c]
006aab95  MOV dword ptr [ESP + 0x20],ECX
006aab99  MOV dword ptr [ESP + 0x24],EDX
006aab9d  MOV dword ptr [ESP + 0x4c],ECX
006aaba1  MOV dword ptr [ESP + 0x50],EDX
006aaba5  MOV EDX,dword ptr [EBP]
006aaba8  MOV ECX,EBP
006aabaa  MOV dword ptr [ESP + 0x1c],EAX
006aabae  MOV dword ptr [ESP + 0x48],EAX
006aabb2  XOR EDI,EDI
006aabb4  CALL dword ptr [EDX + 0x8]
006aabb7  TEST EAX,EAX
006aabb9  JBE 0x006aad9a
006aabbf  LEA EAX,[EBX + 0x1b4]
006aabc5  MOV dword ptr [ESP + 0x30],EAX
006aabc9  LEA ESP,[ESP]
006aabd0  MOV EAX,dword ptr [ESP + 0x30]
006aabd4  MOV EAX,dword ptr [EAX]
006aabd6  MOV ECX,dword ptr [EAX + 0x6c]
006aabd9  FLD float ptr [EAX + 0x70]
006aabdc  FADD float ptr [EAX + 0x78]
006aabdf  MOV EDX,dword ptr [EAX + 0x74]
006aabe2  MOV dword ptr [ESP + 0x34],ECX
006aabe6  MOV dword ptr [ESP + 0x3c],EDX
006aabea  MOV EDX,dword ptr [ESP + 0x34]
006aabee  MOV dword ptr [ESP + 0x10],EDX
006aabf2  MOV EDX,dword ptr [ESP + 0x3c]
006aabf6  MOV ECX,EDI
006aabf8  SHR ECX,0x1
006aabfa  FSUB float ptr [ESP + ECX*0x4 + 0x128]
006aac01  MOV dword ptr [ESP + 0x18],EDX
006aac05  FSTP float ptr [ESP + 0x38]
006aac09  MOV ECX,dword ptr [ESP + 0x38]
006aac0d  FLD float ptr [ESP + 0x18]
006aac11  MOV dword ptr [ESP + 0x14],ECX
006aac15  FMUL float ptr [ESI + 0x20]
006aac18  LEA ECX,[EAX + 0x4c]
006aac1b  FLD float ptr [ESP + 0x14]
006aac1f  FMUL float ptr [ESI + 0x10]
006aac22  FADDP
006aac24  FLD float ptr [ESP + 0x10]
006aac28  FMUL float ptr [ESI]
006aac2a  FADDP
006aac2c  FADD float ptr [ESI + 0x30]
006aac2f  FSTP float ptr [ESP + 0x34]
006aac33  MOV EDX,dword ptr [ESP + 0x34]
006aac37  FLD float ptr [ESP + 0x14]
006aac3b  FMUL float ptr [ESI + 0x14]
006aac3e  FLD float ptr [ESP + 0x18]
006aac42  FMUL float ptr [ESI + 0x24]
006aac45  FADDP
006aac47  FLD float ptr [ESP + 0x10]
006aac4b  FMUL float ptr [ESI + 0x4]
006aac4e  FADDP
006aac50  FADD float ptr [ESI + 0x34]
006aac53  FSTP float ptr [ESP + 0x38]
006aac57  FLD float ptr [ESP + 0x18]
006aac5b  FMUL float ptr [ESI + 0x28]
006aac5e  FLD float ptr [ESP + 0x14]
006aac62  FMUL float ptr [ESI + 0x18]
006aac65  FADDP
006aac67  FLD float ptr [ESP + 0x10]
006aac6b  FMUL float ptr [ESI + 0x8]
006aac6e  FADDP
006aac70  FADD float ptr [ESI + 0x38]
006aac73  MOV dword ptr [ECX],EDX
006aac75  MOV EDX,dword ptr [ESP + 0x38]
006aac79  MOV dword ptr [ECX + 0x4],EDX
006aac7c  FSTP float ptr [ESP + 0x3c]
006aac80  MOV EDX,dword ptr [ESP + 0x3c]
006aac84  FLD float ptr [ESP + 0x34]
006aac88  MOV dword ptr [ECX + 0x8],EDX
006aac8b  FSUB float ptr [ESI + 0xb0]
006aac91  FLD float ptr [ESP + 0x38]
006aac95  FSUB float ptr [ESI + 0xb4]
006aac9b  FLD float ptr [ESP + 0x3c]
006aac9f  FSUB float ptr [ESI + 0xb8]
006aaca5  FSTP float ptr [ESP + 0xc4]
006aacac  FXCH
006aacae  FSUB float ptr [ESI + 0x30]
006aacb1  FSTP float ptr [ESP + 0xbc]
006aacb8  FSUB float ptr [ESI + 0x34]
006aacbb  FLD float ptr [ESP + 0xc4]
006aacc2  FSUB float ptr [ESI + 0x38]
006aacc5  FLD ST1
006aacc7  FMUL float ptr [EAX + 0x64]
006aacca  FLD ST1
006aaccc  INC EDI
006aaccd  FMUL float ptr [EAX + 0x60]
006aacd0  FSUBP
006aacd2  FSTP float ptr [ESP + 0x94]
006aacd9  MOV ECX,dword ptr [ESP + 0x94]
006aace0  MOV dword ptr [ESP + 0xa8],ECX
006aace7  FMUL float ptr [EAX + 0x5c]
006aacea  FLD float ptr [ESP + 0xbc]
006aacf1  FMUL float ptr [EAX + 0x64]
006aacf4  FSUBP
006aacf6  FSTP float ptr [ESP + 0x98]
006aacfd  MOV EDX,dword ptr [ESP + 0x98]
006aad04  FLD float ptr [ESP + 0xbc]
006aad0b  MOV dword ptr [ESP + 0xac],EDX
006aad12  FMUL float ptr [EAX + 0x60]
006aad15  MOV EDX,dword ptr [ESP + 0x30]
006aad19  FXCH
006aad1b  ADD EDX,0x4
006aad1e  FMUL float ptr [EAX + 0x5c]
006aad21  MOV dword ptr [ESP + 0x30],EDX
006aad25  MOV EDX,dword ptr [EBP]
006aad28  FSUBP
006aad2a  FSTP float ptr [ESP + 0x9c]
006aad31  MOV ECX,dword ptr [ESP + 0x9c]
006aad38  FLD float ptr [ESP + 0x48]
006aad3c  MOV dword ptr [ESP + 0xb0],ECX
006aad43  FADD float ptr [EAX + 0x5c]
006aad46  MOV ECX,EBP
006aad48  FSTP float ptr [ESP + 0x48]
006aad4c  FLD float ptr [ESP + 0x4c]
006aad50  FADD float ptr [EAX + 0x60]
006aad53  FSTP float ptr [ESP + 0x4c]
006aad57  FLD float ptr [ESP + 0x50]
006aad5b  FADD float ptr [EAX + 0x64]
006aad5e  FSTP float ptr [ESP + 0x50]
006aad62  FLD float ptr [ESP + 0xa8]
006aad69  FADD float ptr [ESP + 0x1c]
006aad6d  FSTP float ptr [ESP + 0x1c]
006aad71  FLD float ptr [ESP + 0xac]
006aad78  FADD float ptr [ESP + 0x20]
006aad7c  FSTP float ptr [ESP + 0x20]
006aad80  FLD float ptr [ESP + 0xb0]
006aad87  FADD float ptr [ESP + 0x24]
006aad8b  FSTP float ptr [ESP + 0x24]
006aad8f  CALL dword ptr [EDX + 0x8]
006aad92  CMP EDI,EAX
006aad94  JC 0x006aabd0
006aad9a  CMP word ptr [ESI + 0xc8],0x1
006aada2  FLD float ptr [ESP + 0x24]
006aada6  FMUL float ptr [ESI + 0x18]
006aada9  MOV EAX,dword ptr [EBX + 0xa0]
006aadaf  FLD float ptr [ESP + 0x20]
006aadb3  FMUL float ptr [ESI + 0x14]
006aadb6  FADDP
006aadb8  FLD float ptr [ESP + 0x1c]
006aadbc  FMUL float ptr [ESI + 0x10]
006aadbf  FADDP
006aadc1  FLD ST0
006aadc3  FMUL float ptr [EAX + 0x4c]
006aadc6  JNZ 0x006aadce
006aadc8  FMUL float ptr [0x008aad98]
006aadce  FSUBRP
006aadd0  MOV ECX,dword ptr [EBX + 0xe8]
006aadd6  LEA EAX,[ESP + 0x1c]
006aadda  PUSH EAX
006aaddb  FLD ST0
006aaddd  LEA EAX,[ESP + 0x4c]
006aade1  FMUL float ptr [ESI + 0x10]
006aade4  PUSH EAX
006aade5  FADD float ptr [ESP + 0x24]
006aade9  FSTP float ptr [ESP + 0x24]
006aaded  FLD ST0
006aadef  FMUL float ptr [ESI + 0x14]
006aadf2  FADD float ptr [ESP + 0x28]
006aadf6  FSTP float ptr [ESP + 0x28]
006aadfa  FMUL float ptr [ESI + 0x18]
006aadfd  FADD float ptr [ESP + 0x2c]
006aae01  FSTP float ptr [ESP + 0x2c]
006aae05  MOV EDX,dword ptr [ECX]
006aae07  CALL dword ptr [EDX + 0x84]
006aae0d  FLD float ptr [ESP + 0x40]
006aae11  FCOMP float ptr [0x00890968]
006aae17  FNSTSW AX
006aae19  TEST AH,0x41
006aae1c  JNZ 0x006aae72
006aae1e  MOV EDX,dword ptr [EBX + 0x4c]
006aae21  LEA EDI,[EBX + 0x4c]
006aae24  MOV ECX,EDI
006aae26  XOR EBP,EBP
006aae28  CALL dword ptr [EDX + 0x8]
006aae2b  TEST EAX,EAX
006aae2d  JBE 0x006aae62
006aae2f  LEA ECX,[EBX + 0x1b4]
006aae35  JMP 0x006aae40
006aae37  MOV ECX,dword ptr [ESP + 0xb4]
006aae3e  MOV EDI,EDI
006aae40  MOV EAX,dword ptr [ECX]
006aae42  FLD float ptr [ESP + 0x40]
006aae46  FADD float ptr [EAX + 0x50]
006aae49  ADD ECX,0x4
006aae4c  MOV dword ptr [ESP + 0xb4],ECX
006aae53  MOV ECX,EDI
006aae55  FSTP float ptr [EAX + 0x50]
006aae58  MOV EAX,dword ptr [EDI]
006aae5a  INC EBP
006aae5b  CALL dword ptr [EAX + 0x8]
006aae5e  CMP EBP,EAX
006aae60  JC 0x006aae37
006aae62  MOV ECX,dword ptr [EBX + 0xe8]
006aae68  MOV EAX,dword ptr [ESP + 0x40]
006aae6c  MOV EDX,dword ptr [ECX]
006aae6e  PUSH EAX
006aae6f  CALL dword ptr [EDX + 0x7c]
006aae72  MOV EDI,dword ptr [ESP + 0xa0]
006aae79  TEST EDI,EDI
006aae7b  POP EBP
006aae7c  JZ 0x006aaf2f
006aae82  MOV EAX,dword ptr [EBX + 0xfc]
006aae88  TEST EAX,EAX
006aae8a  JNZ 0x006aaf2f
006aae90  FLD float ptr [ESI + 0x98]
006aae96  LEA ECX,[ESI + 0x90]
006aae9c  FMUL float ptr [0x008933d4]
006aaea2  FSTP float ptr [ESI + 0x98]
006aaea8  FLD float ptr [ESI + 0x94]
006aaeae  FMUL float ptr [0x008933d4]
006aaeb4  FSTP float ptr [ESI + 0x94]
006aaeba  MOV EDX,dword ptr [ECX]
006aaebc  MOV EAX,dword ptr [ECX + 0x4]
006aaebf  MOV ECX,dword ptr [ECX + 0x8]
006aaec2  MOV dword ptr [ESP + 0x14],ECX
006aaec6  FLD float ptr [ESP + 0x14]
006aaeca  FMUL float ptr [ESI + 0x20]
006aaecd  MOV dword ptr [ESP + 0x10],EAX
006aaed1  FLD float ptr [ESP + 0x10]
006aaed5  MOV dword ptr [ESP + 0xc],EDX
006aaed9  FMUL float ptr [ESI + 0x10]
006aaedc  LEA EAX,[ESI + 0x60]
006aaedf  PUSH EAX
006aaee0  FADDP
006aaee2  FLD float ptr [ESP + 0x10]
006aaee6  FMUL float ptr [ESI]
006aaee8  FADDP
006aaeea  FSTP float ptr [EAX]
006aaeec  FLD float ptr [ESP + 0x18]
006aaef0  FMUL float ptr [ESI + 0x24]
006aaef3  FLD float ptr [ESP + 0x14]
006aaef7  FMUL float ptr [ESI + 0x14]
006aaefa  FADDP
006aaefc  FLD float ptr [ESP + 0x10]
006aaf00  FMUL float ptr [ESI + 0x4]
006aaf03  FADDP
006aaf05  FSTP float ptr [EAX + 0x4]
006aaf08  FLD float ptr [ESP + 0x18]
006aaf0c  FMUL float ptr [ESI + 0x28]
006aaf0f  FLD float ptr [ESP + 0x14]
006aaf13  FMUL float ptr [ESI + 0x18]
006aaf16  FADDP
006aaf18  FLD float ptr [ESP + 0x10]
006aaf1c  FMUL float ptr [ESI + 0x8]
006aaf1f  FADDP
006aaf21  FSTP float ptr [EAX + 0x8]
006aaf24  MOV ECX,dword ptr [EBX + 0xe8]
006aaf2a  MOV EDX,dword ptr [ECX]
006aaf2c  CALL dword ptr [EDX + 0x64]
006aaf2f  MOV dword ptr [EBX + 0xfc],EDI
006aaf35  POP EDI
006aaf36  POP ESI
006aaf37  POP EBX
006aaf38  ADD ESP,0x1a4
006aaf3e  RET 0x4
