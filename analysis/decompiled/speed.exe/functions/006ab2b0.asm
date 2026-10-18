006ab2b0  SUB ESP,0x18c
006ab2b6  PUSH EBX
006ab2b7  PUSH EBP
006ab2b8  PUSH ESI
006ab2b9  MOV ESI,dword ptr [ESP + 0x19c]
006ab2c0  MOV EAX,dword ptr [ESI + 0xc0]
006ab2c6  PUSH EDI
006ab2c7  MOV EBP,ECX
006ab2c9  XOR EDI,EDI
006ab2cb  LEA ECX,[ESP + 0x7c]
006ab2cf  PUSH ECX
006ab2d0  LEA EDX,[ESP + 0x14]
006ab2d4  PUSH EDX
006ab2d5  PUSH ESI
006ab2d6  MOV ECX,EBP
006ab2d8  MOV dword ptr [ESP + 0xb4],EAX
006ab2df  MOV dword ptr [ESP + 0x1c],EDI
006ab2e3  MOV dword ptr [ESP + 0x20],EDI
006ab2e7  MOV dword ptr [ESP + 0x24],EDI
006ab2eb  MOV dword ptr [ESP + 0x88],EDI
006ab2f2  MOV dword ptr [ESP + 0x8c],EDI
006ab2f9  MOV dword ptr [ESP + 0x90],EDI
006ab300  CALL 0x0068fd00
006ab305  MOV EAX,dword ptr [EBP + 0xfc]
006ab30b  MOV EDX,dword ptr [ESI + 0x5c]
006ab30e  MOV dword ptr [EAX + 0xc8],EDX
006ab314  MOV EAX,dword ptr [EBP + 0x100]
006ab31a  MOV EDX,dword ptr [ESI + 0x5c]
006ab31d  MOV dword ptr [EAX + 0xc8],EDX
006ab323  MOV EAX,dword ptr [EBP + 0x104]
006ab329  MOV EDX,dword ptr [ESI + 0x5c]
006ab32c  MOV dword ptr [EAX + 0xc8],EDX
006ab332  MOV EAX,dword ptr [EBP + 0x104]
006ab338  MOV EDX,dword ptr [ESI + 0x7c]
006ab33b  MOV dword ptr [EAX + 0xcc],EDX
006ab341  MOV EAX,dword ptr [EBP + 0x108]
006ab347  MOV EDX,dword ptr [ESI + 0x5c]
006ab34a  MOV dword ptr [EAX + 0xc8],EDX
006ab350  MOV EAX,dword ptr [EBP + 0x108]
006ab356  MOV EDX,dword ptr [ESI + 0x7c]
006ab359  LEA ECX,[EBP + 0xfc]
006ab35f  MOV dword ptr [EAX + 0xcc],EDX
006ab365  MOV EAX,dword ptr [ESI + 0xac]
006ab36b  MOV dword ptr [ESP + 0xc0],EAX
006ab372  LEA EAX,[ESI + 0x70]
006ab375  MOV EDX,dword ptr [EAX]
006ab377  MOV dword ptr [ESP + 0x1c],EDX
006ab37b  MOV EDX,dword ptr [EAX + 0x4]
006ab37e  MOV EAX,dword ptr [EAX + 0x8]
006ab381  MOV dword ptr [ESP + 0x24],EAX
006ab385  FLD float ptr [ESP + 0x24]
006ab389  FMUL float ptr [ESI + 0x20]
006ab38c  MOV dword ptr [ESP + 0x20],EDX
006ab390  FLD float ptr [ESP + 0x1c]
006ab394  MOV dword ptr [ESP + 0x88],EDI
006ab39b  FMUL float ptr [ESI]
006ab39d  MOV dword ptr [ESP + 0x30],EDI
006ab3a1  FADDP
006ab3a3  FLD float ptr [ESP + 0x20]
006ab3a7  FMUL float ptr [ESI + 0x10]
006ab3aa  FADDP
006ab3ac  FSTP float ptr [ESP + 0x150]
006ab3b3  FLD float ptr [ESP + 0x1c]
006ab3b7  FMUL float ptr [ESI + 0x4]
006ab3ba  FLD float ptr [ESP + 0x20]
006ab3be  FMUL float ptr [ESI + 0x14]
006ab3c1  FADDP
006ab3c3  FLD float ptr [ESP + 0x24]
006ab3c7  FMUL float ptr [ESI + 0x24]
006ab3ca  FADDP
006ab3cc  FSTP float ptr [ESP + 0x154]
006ab3d3  FLD float ptr [ESP + 0x24]
006ab3d7  FMUL float ptr [ESI + 0x28]
006ab3da  FLD float ptr [ESP + 0x20]
006ab3de  FMUL float ptr [ESI + 0x18]
006ab3e1  MOV EAX,dword ptr [EBP + 0xc0]
006ab3e7  FADDP
006ab3e9  FLD float ptr [ESP + 0x1c]
006ab3ed  MOV dword ptr [ESP + 0x48],0x3f800000
006ab3f5  FMUL float ptr [ESI + 0x8]
006ab3f8  FADDP
006ab3fa  FSTP float ptr [ESP + 0x158]
006ab401  MOV EDX,dword ptr [EAX + 0x8]
006ab404  FLD float ptr [EAX + 0x30]
006ab407  MOV dword ptr [ESP + 0x140],EDX
006ab40e  FMUL float ptr [0x008aae8c]
006ab414  MOV EDX,dword ptr [ECX]
006ab416  FSTP float ptr [ESP + 0x138]
006ab41d  FLD float ptr [EAX + 0x38]
006ab420  FMUL float ptr [0x008aae8c]
006ab426  FSTP float ptr [ESP + 0x148]
006ab42d  FLD float ptr [EAX + 0x48]
006ab430  FMUL float ptr [0x008aae8c]
006ab436  FLD float ptr [EAX + 0x10]
006ab439  FMUL float ptr [0x008a9388]
006ab43f  FSTP float ptr [ESP + 0x130]
006ab446  FLD float ptr [EAX + 0x18]
006ab449  FMUL float ptr [0x008a9388]
006ab44f  FSTP float ptr [ESP + 0x108]
006ab456  FLD float ptr [EAX + 0x34]
006ab459  FMUL float ptr [0x008aae8c]
006ab45f  FSTP float ptr [ESP + 0x13c]
006ab466  FLD float ptr [EAX + 0x3c]
006ab469  FMUL float ptr [0x008aae8c]
006ab46f  FSTP float ptr [ESP + 0x14c]
006ab476  FLD float ptr [EAX + 0x4c]
006ab479  FMUL float ptr [0x008aae8c]
006ab47f  FLD float ptr [EAX + 0x14]
006ab482  FMUL float ptr [0x008a9388]
006ab488  FSTP float ptr [ESP + 0x134]
006ab48f  FLD float ptr [EAX + 0x1c]
006ab492  MOV EAX,dword ptr [EAX + 0xc]
006ab495  FMUL float ptr [0x008a9388]
006ab49b  MOV dword ptr [ESP + 0x144],EAX
006ab4a2  MOV EAX,dword ptr [EBP + 0x100]
006ab4a8  FSTP float ptr [ESP + 0x10c]
006ab4af  FLD float ptr [EDX + 0x78]
006ab4b2  MOV EDX,dword ptr [EBP + 0x104]
006ab4b8  FSUB float ptr [EAX + 0x78]
006ab4bb  MOV EAX,dword ptr [EBP + 0x108]
006ab4c1  FMUL ST2
006ab4c3  FST float ptr [ESP + 0x120]
006ab4ca  FCHS
006ab4cc  FSTP float ptr [ESP + 0x124]
006ab4d3  FLD float ptr [EDX + 0x78]
006ab4d6  MOV EDX,dword ptr [ESP + 0x7c]
006ab4da  FSUB float ptr [EAX + 0x78]
006ab4dd  MOV EAX,dword ptr [ESP + 0x80]
006ab4e4  MOV dword ptr [ESP + 0x3c],EDX
006ab4e8  MOV EDX,dword ptr [ESP + 0x84]
006ab4ef  FMUL ST1
006ab4f1  MOV dword ptr [ESP + 0x40],EAX
006ab4f5  MOV EAX,dword ptr [ESP + 0x3c]
006ab4f9  FSTP float ptr [ESP + 0x128]
006ab500  MOV dword ptr [ESP + 0x44],EDX
006ab504  MOV EDX,dword ptr [ESP + 0x40]
006ab508  FSTP ST0
006ab50a  MOV dword ptr [ESP + 0x15c],EAX
006ab511  FSTP ST0
006ab513  FLD float ptr [ESP + 0x128]
006ab51a  FCHS
006ab51c  FSTP float ptr [ESP + 0x12c]
006ab523  MOV EAX,dword ptr [ESP + 0x44]
006ab527  MOV dword ptr [ESP + 0x160],EDX
006ab52e  MOV EDX,dword ptr [ESP + 0x48]
006ab532  MOV dword ptr [ESP + 0x164],EAX
006ab539  MOV EAX,dword ptr [ESP + 0x10]
006ab53d  MOV dword ptr [ESP + 0x168],EDX
006ab544  MOV EDX,dword ptr [ESP + 0x14]
006ab548  MOV dword ptr [ESP + 0x3c],EAX
006ab54c  MOV EAX,dword ptr [ESP + 0x18]
006ab550  MOV dword ptr [ESP + 0x40],EDX
006ab554  MOV EDX,dword ptr [ESP + 0x3c]
006ab558  MOV dword ptr [ESP + 0x44],EAX
006ab55c  MOV EAX,dword ptr [ESP + 0x40]
006ab560  MOV dword ptr [ESP + 0x16c],EDX
006ab567  MOV EDX,dword ptr [ESP + 0x44]
006ab56b  MOV dword ptr [ESP + 0x170],EAX
006ab572  MOV dword ptr [ESP + 0x174],EDX
006ab579  MOV EDX,dword ptr [ESI + 0x20]
006ab57c  MOV dword ptr [ESP + 0x3c],EDX
006ab580  MOV EDX,dword ptr [ESI + 0x28]
006ab583  MOV dword ptr [ESP + 0x48],0x3f800000
006ab58b  MOV EAX,dword ptr [ESP + 0x48]
006ab58f  MOV dword ptr [ESP + 0x178],EAX
006ab596  MOV EAX,dword ptr [ESI + 0x24]
006ab599  MOV dword ptr [ESP + 0x40],EAX
006ab59d  MOV EAX,dword ptr [ESP + 0x3c]
006ab5a1  MOV dword ptr [ESP + 0x44],EDX
006ab5a5  MOV EDX,dword ptr [ESP + 0x40]
006ab5a9  MOV dword ptr [ESP + 0x17c],EAX
006ab5b0  MOV EAX,dword ptr [ESP + 0x44]
006ab5b4  MOV dword ptr [ESP + 0x180],EDX
006ab5bb  MOV dword ptr [ESP + 0x48],0x3f800000
006ab5c3  MOV EDX,dword ptr [ESP + 0x48]
006ab5c7  MOV dword ptr [ESP + 0x184],EAX
006ab5ce  MOV EAX,dword ptr [ESI + 0x20]
006ab5d1  MOV dword ptr [ESP + 0x188],EDX
006ab5d8  MOV EDX,dword ptr [ESI + 0x24]
006ab5db  MOV dword ptr [ESP + 0x3c],EAX
006ab5df  MOV EAX,dword ptr [ESI + 0x28]
006ab5e2  MOV dword ptr [ESP + 0x40],EDX
006ab5e6  MOV EDX,dword ptr [ESP + 0x3c]
006ab5ea  MOV dword ptr [ESP + 0x44],EAX
006ab5ee  MOV EAX,dword ptr [ESP + 0x40]
006ab5f2  MOV dword ptr [ESP + 0x18c],EDX
006ab5f9  MOV EDX,dword ptr [ESP + 0x44]
006ab5fd  MOV dword ptr [ESP + 0x48],0x3f800000
006ab605  MOV dword ptr [ESP + 0x190],EAX
006ab60c  MOV EAX,dword ptr [ESP + 0x48]
006ab610  MOV dword ptr [ESP + 0x194],EDX
006ab617  LEA EDX,[ESP + 0x164]
006ab61e  MOV dword ptr [ESP + 0x198],EAX
006ab625  MOV byte ptr [ESP + 0x2f],0x0
006ab62a  MOV dword ptr [ESP + 0x78],EDI
006ab62e  MOV dword ptr [ESP + 0x8c],EDX
006ab635  MOV dword ptr [ESP + 0x4c],ECX
006ab639  LEA ESP,[ESP]
006ab640  FLD float ptr [ESI + 0x84]
006ab646  MOV EAX,dword ptr [ESP + 0x4c]
006ab64a  MOV EDI,dword ptr [EAX]
006ab64c  FADD ST0,ST0
006ab64e  MOV EDX,dword ptr [EDI + 0xc4]
006ab654  MOV EAX,dword ptr [ESI + 0xc0]
006ab65a  MOV EBX,dword ptr [ESP + 0x78]
006ab65e  PUSH ECX
006ab65f  MOV ECX,dword ptr [ESI + 0xd8]
006ab665  FSTP float ptr [ESP]
006ab668  PUSH ECX
006ab669  PUSH 0x1
006ab66b  PUSH EDX
006ab66c  PUSH EAX
006ab66d  LEA ECX,[ESP + 0x164]
006ab674  PUSH ECX
006ab675  PUSH ESI
006ab676  LEA EAX,[ESI + 0x50]
006ab679  PUSH EAX
006ab67a  LEA EAX,[ESI + 0x60]
006ab67d  PUSH EAX
006ab67e  MOV ECX,EDI
006ab680  SHR EBX,0x1
006ab682  CALL 0x00671530
006ab687  MOV EAX,dword ptr [EDI + 0x40]
006ab68a  MOV EDX,dword ptr [EDI + 0x3c]
006ab68d  MOV ECX,dword ptr [EDI + 0x44]
006ab690  MOV dword ptr [ESP + 0x54],EAX
006ab694  MOV EAX,dword ptr [ESP + 0x8c]
006ab69b  MOV dword ptr [ESP + 0x50],EDX
006ab69f  MOV EDX,dword ptr [EAX + -0x8]
006ab6a2  MOV dword ptr [ESP + 0x5c],EDX
006ab6a6  MOV EDX,dword ptr [EAX]
006ab6a8  MOV dword ptr [ESP + 0x64],EDX
006ab6ac  FLD float ptr [ESP + 0x64]
006ab6b0  FMUL float ptr [ESP + 0x54]
006ab6b4  MOV dword ptr [ESP + 0x58],ECX
006ab6b8  MOV ECX,dword ptr [EAX + -0x4]
006ab6bb  MOV dword ptr [ESP + 0x60],ECX
006ab6bf  FSTP float ptr [ESP + 0xb4]
006ab6c6  FLD float ptr [ESP + 0x60]
006ab6ca  FMUL float ptr [ESP + 0x58]
006ab6ce  FSTP float ptr [ESP + 0xb0]
006ab6d5  FLD float ptr [ESP + 0xb4]
006ab6dc  FSUB float ptr [ESP + 0xb0]
006ab6e3  FSTP float ptr [ESP + 0xe4]
006ab6ea  MOV EAX,dword ptr [ESP + 0xe4]
006ab6f1  FLD float ptr [ESP + 0x58]
006ab6f5  MOV dword ptr [ESP + 0x6c],EAX
006ab6f9  FMUL float ptr [ESP + 0x5c]
006ab6fd  LEA EAX,[ESP + 0x6c]
006ab701  PUSH EAX
006ab702  FSTP float ptr [ESP + 0xc0]
006ab709  FLD float ptr [ESP + 0x68]
006ab70d  FMUL float ptr [ESP + 0x54]
006ab711  FSTP float ptr [ESP + 0xc8]
006ab718  FLD float ptr [ESP + 0xc0]
006ab71f  FSUB float ptr [ESP + 0xc8]
006ab726  FSTP float ptr [ESP + 0xec]
006ab72d  MOV ECX,dword ptr [ESP + 0xec]
006ab734  FLD float ptr [ESP + 0x64]
006ab738  MOV dword ptr [ESP + 0x74],ECX
006ab73c  FMUL float ptr [ESP + 0x54]
006ab740  MOV ECX,EAX
006ab742  PUSH ECX
006ab743  FSTP float ptr [ESP + 0x3c]
006ab747  FLD float ptr [ESP + 0x5c]
006ab74b  FMUL float ptr [ESP + 0x64]
006ab74f  FSTP float ptr [ESP + 0xb4]
006ab756  FLD float ptr [ESP + 0x3c]
006ab75a  FSUB float ptr [ESP + 0xb4]
006ab761  FSTP float ptr [ESP + 0xf4]
006ab768  MOV EDX,dword ptr [ESP + 0xf4]
006ab76f  MOV dword ptr [ESP + 0x7c],EDX
006ab773  CALL 0x0040fe20
006ab778  FLD float ptr [ESP + 0x5c]
006ab77c  FMUL float ptr [ESI + 0x14]
006ab77f  MOV EDX,dword ptr [EDI + 0x48]
006ab782  ADD ESP,0x8
006ab785  MOV dword ptr [ESP + 0x110],EDX
006ab78c  FLD float ptr [ESP + 0x50]
006ab790  FMUL float ptr [ESI + 0x10]
006ab793  FADDP
006ab795  FLD float ptr [ESP + 0x58]
006ab799  FMUL float ptr [ESI + 0x18]
006ab79c  FADDP
006ab79e  FST float ptr [ESP + 0x28]
006ab7a2  FCOMP float ptr [0x0089096c]
006ab7a8  FNSTSW AX
006ab7aa  TEST AH,0x5
006ab7ad  JP 0x006ab863
006ab7b3  FLD float ptr [ESP + 0x28]
006ab7b7  FLD float ptr [0x00890968]
006ab7bd  FCOMP float ptr [ESP + 0x28]
006ab7c1  FNSTSW AX
006ab7c3  TEST AH,0x41
006ab7c6  JNZ 0x006ab7d0
006ab7c8  FSTP ST0
006ab7ca  FLD float ptr [0x00890968]
006ab7d0  FLD ST0
006ab7d2  FMUL float ptr [ESP + EBX*0x4 + 0x108]
006ab7d9  FADD float ptr [ESP + 0x110]
006ab7e0  FLD float ptr [ESP + EBX*0x4 + 0x130]
006ab7e7  FSTP float ptr [ESP + 0x28]
006ab7eb  FLD float ptr [0x00890968]
006ab7f1  FLD float ptr [EDI + 0x78]
006ab7f4  FUCOMPP
006ab7f6  FNSTSW AX
006ab7f8  TEST AH,0x44
006ab7fb  JP 0x006ab81a
006ab7fd  FLD float ptr [ESP + 0x28]
006ab801  FSUBR ST0,ST1
006ab803  FLD float ptr [ESP + 0x30]
006ab807  FCOMP
006ab809  FNSTSW AX
006ab80b  TEST AH,0x41
006ab80e  JNZ 0x006ab816
006ab810  FSTP ST0
006ab812  FLD float ptr [ESP + 0x30]
006ab816  FSTP float ptr [ESP + 0x30]
006ab81a  FCOM float ptr [0x00890968]
006ab820  FNSTSW AX
006ab822  TEST AH,0x41
006ab825  JZ 0x006ab82f
006ab827  FSTP ST0
006ab829  FLD float ptr [0x00890968]
006ab82f  FCOM float ptr [ESP + 0x28]
006ab833  FST float ptr [ESP + 0x38]
006ab837  FNSTSW AX
006ab839  TEST AH,0x41
006ab83c  JNZ 0x006ab86e
006ab83e  FSUB float ptr [ESP + 0x28]
006ab842  FLD float ptr [ESP + 0x30]
006ab846  FCOMP
006ab848  FNSTSW AX
006ab84a  TEST AH,0x41
006ab84d  JNZ 0x006ab855
006ab84f  FSTP ST0
006ab851  FLD float ptr [ESP + 0x30]
006ab855  MOV EAX,dword ptr [ESP + 0x28]
006ab859  FSTP float ptr [ESP + 0x30]
006ab85d  MOV dword ptr [ESP + 0x38],EAX
006ab861  JMP 0x006ab870
006ab863  FLD float ptr [0x0089096c]
006ab869  JMP 0x006ab7d0
006ab86e  FSTP ST0
006ab870  FLD float ptr [ESP + 0x38]
006ab874  FCOMP float ptr [0x00890968]
006ab87a  FNSTSW AX
006ab87c  TEST AH,0x41
006ab87f  JNZ 0x006abd0a
006ab885  FCOMP float ptr [0x008f8760]
006ab88b  FNSTSW AX
006ab88d  TEST AH,0x41
006ab890  JNZ 0x006abd0c
006ab896  FLD float ptr [ESP + 0x38]
006ab89a  MOV ECX,dword ptr [EBP + 0xc0]
006ab8a0  FMUL float ptr [ESP + EBX*0x4 + 0x140]
006ab8a7  MOV EAX,dword ptr [ESP + 0x88]
006ab8ae  INC EAX
006ab8af  MOV dword ptr [ESP + 0x88],EAX
006ab8b6  FADD float ptr [0x0089096c]
006ab8bc  FMUL float ptr [ESP + EBX*0x4 + 0x148]
006ab8c3  FMUL float ptr [ESP + 0x38]
006ab8c7  FLD float ptr [0x0089096c]
006ab8cd  FDIV float ptr [ESP + 0xa8]
006ab8d4  FSTP float ptr [ESP + 0x28]
006ab8d8  FLD float ptr [ESP + 0x38]
006ab8dc  FSUB float ptr [EDI + 0x78]
006ab8df  FMUL float ptr [ESP + 0x28]
006ab8e3  FMUL float ptr [ESP + EBX*0x4 + 0x138]
006ab8ea  FLD float ptr [ESP + 0xc0]
006ab8f1  FMUL float ptr [ECX + 0x58]
006ab8f4  FMUL float ptr [0x00891608]
006ab8fa  FLD ST1
006ab8fc  FCOMPP
006ab8fe  FNSTSW AX
006ab900  TEST AH,0x41
006ab903  JNZ 0x006ab90d
006ab905  FSTP ST0
006ab907  FLD float ptr [0x00890968]
006ab90d  MOV EDX,dword ptr [ESP + 0x78]
006ab911  FADD float ptr [ESP + EDX*0x4 + 0x120]
006ab918  FADDP
006ab91a  FCOM float ptr [0x00890968]
006ab920  FNSTSW AX
006ab922  TEST AH,0x41
006ab925  JNZ 0x006ab92d
006ab927  FSTP float ptr [ESP + 0x68]
006ab92b  JMP 0x006ab937
006ab92d  FSTP ST0
006ab92f  MOV dword ptr [ESP + 0x68],0x0
006ab937  FLD float ptr [ESI + 0x10]
006ab93a  MOV EAX,dword ptr [ESI + 0x18]
006ab93d  FLD float ptr [ESI + 0x14]
006ab940  MOV dword ptr [ESP + 0x44],EAX
006ab944  FLD float ptr [ESP + 0x68]
006ab948  FMUL ST2
006ab94a  FSTP float ptr [ESP + 0x9c]
006ab951  FMUL float ptr [ESP + 0x68]
006ab955  FSTP float ptr [ESP + 0xa0]
006ab95c  FSTP ST0
006ab95e  FLD float ptr [ESP + 0x44]
006ab962  FMUL float ptr [ESP + 0x68]
006ab966  FSTP float ptr [ESP + 0xa4]
006ab96d  FLD float ptr [ESP + 0xb0]
006ab974  FSUB float ptr [ESP + 0xb4]
006ab97b  FSTP float ptr [ESP + 0xf0]
006ab982  MOV ECX,dword ptr [ESP + 0xf0]
006ab989  FLD float ptr [ESP + 0xc4]
006ab990  MOV dword ptr [ESP + 0x1c],ECX
006ab994  FSUB float ptr [ESP + 0xbc]
006ab99b  FSTP float ptr [ESP + 0xf4]
006ab9a2  MOV EDX,dword ptr [ESP + 0xf4]
006ab9a9  FLD float ptr [ESP + 0xac]
006ab9b0  MOV dword ptr [ESP + 0x20],EDX
006ab9b4  FSUB float ptr [ESP + 0x34]
006ab9b8  FSTP float ptr [ESP + 0xf8]
006ab9bf  MOV EAX,dword ptr [ESP + 0xf8]
006ab9c6  FLD float ptr [ESP + 0x20]
006ab9ca  MOV dword ptr [ESP + 0x24],EAX
006ab9ce  FMUL float ptr [ESP + 0x64]
006ab9d2  FLD float ptr [ESP + 0x24]
006ab9d6  FMUL float ptr [ESP + 0x60]
006ab9da  FSUBP
006ab9dc  FSTP float ptr [ESP + 0x114]
006ab9e3  MOV ECX,dword ptr [ESP + 0x114]
006ab9ea  FLD float ptr [ESP + 0x24]
006ab9ee  FMUL float ptr [ESP + 0x5c]
006ab9f2  FLD float ptr [ESP + 0x64]
006ab9f6  FMUL float ptr [ESP + 0x1c]
006ab9fa  FSUBP
006ab9fc  FSTP float ptr [ESP + 0x118]
006aba03  MOV EDX,dword ptr [ESP + 0x118]
006aba0a  FLD float ptr [ESP + 0x60]
006aba0e  FMUL float ptr [ESP + 0x1c]
006aba12  MOV dword ptr [ESP + 0x1c],ECX
006aba16  FLD float ptr [ESP + 0x20]
006aba1a  MOV dword ptr [ESP + 0x20],EDX
006aba1e  FMUL float ptr [ESP + 0x5c]
006aba22  FSUBP
006aba24  FSTP float ptr [ESP + 0x11c]
006aba2b  MOV EAX,dword ptr [ESP + 0x11c]
006aba32  FLD float ptr [ESP + 0x20]
006aba36  MOV dword ptr [ESP + 0x24],EAX
006aba3a  FMUL float ptr [ESP + 0x54]
006aba3e  FLD float ptr [ESP + 0x1c]
006aba42  FMUL float ptr [ESP + 0x50]
006aba46  FADDP
006aba48  FLD float ptr [ESP + 0x24]
006aba4c  FMUL float ptr [ESP + 0x58]
006aba50  FADDP
006aba52  FMUL float ptr [0x00890e98]
006aba58  FSUB float ptr [0x008aac70]
006aba5e  FCOM float ptr [0x00894b58]
006aba64  FNSTSW AX
006aba66  TEST AH,0x41
006aba69  JNZ 0x006aba74
006aba6b  FSTP float ptr [ESP + 0xb8]
006aba72  JMP 0x006aba81
006aba74  FSTP ST0
006aba76  MOV dword ptr [ESP + 0xb8],0x3e99999a
006aba81  FLD float ptr [EDI + 0x8c]
006aba87  PUSH ECX
006aba88  FLD float ptr [EDI + 0x90]
006aba8e  FLD float ptr [EDI + 0x94]
006aba94  FLD ST2
006aba96  FMUL ST3
006aba98  FLD ST1
006aba9a  FMUL ST2
006aba9c  FADDP
006aba9e  FLD ST2
006abaa0  FMUL ST3
006abaa2  FADDP
006abaa4  FSTP float ptr [ESP]
006abaa7  FSTP ST0
006abaa9  FSTP ST0
006abaab  FSTP ST0
006abaad  CALL 0x005c5e80
006abab2  FSTP ST0
006abab4  MOV ECX,dword ptr [ESI + 0xc0]
006ababa  FLD float ptr [ESP + 0x70]
006ababe  ADD ESP,0x4
006abac1  FMUL float ptr [EDI + 0x8c]
006abac7  PUSH ECX
006abac8  FLD float ptr [ESP + 0x74]
006abacc  SUB ESP,0x8
006abacf  FMUL float ptr [EDI + 0x90]
006abad5  MOV ECX,EDI
006abad7  FADDP
006abad9  FLD float ptr [ESP + 0x80]
006abae0  FMUL float ptr [EDI + 0x94]
006abae6  FADDP
006abae8  FSTP float ptr [ESP + 0x40]
006abaec  FLD float ptr [ESP + 0x74]
006abaf0  MOV EDX,dword ptr [ESP + 0x40]
006abaf4  FMUL float ptr [ESP + 0xc4]
006abafb  FSTP float ptr [ESP + 0x4]
006abaff  FLD float ptr [ESP + 0x68]
006abb03  FMUL float ptr [EDI + 0x8c]
006abb09  FLD float ptr [ESP + 0x6c]
006abb0d  FMUL float ptr [EDI + 0x90]
006abb13  FADDP
006abb15  FLD float ptr [ESP + 0x70]
006abb19  FMUL float ptr [EDI + 0x94]
006abb1f  FADDP
006abb21  FSTP float ptr [ESP]
006abb24  PUSH EDX
006abb25  CALL 0x0068f7b0
006abb2a  FLD float ptr [ESP + 0x28]
006abb2e  FMUL float ptr [ESP + 0x34]
006abb32  MOV EAX,dword ptr [EDI + 0xd8]
006abb38  FLD float ptr [ESP + 0xc0]
006abb3f  MOV dword ptr [ESP + 0xd4],EAX
006abb46  FMUL float ptr [0x008910f0]
006abb4c  FMULP
006abb4e  FCOM float ptr [0x00890968]
006abb54  FNSTSW AX
006abb56  TEST AH,0x5
006abb59  JP 0x006abb5d
006abb5b  FCHS
006abb5d  FLD ST0
006abb5f  FCHS
006abb61  FSTP float ptr [ESP + 0x34]
006abb65  FLD float ptr [ESP + 0xd4]
006abb6c  FCOMP
006abb6e  FNSTSW AX
006abb70  TEST AH,0x5
006abb73  JP 0x006abb7e
006abb75  FSTP ST0
006abb77  FLD float ptr [ESP + 0xd4]
006abb7e  FLD float ptr [ESP + 0x34]
006abb82  FCOMP
006abb84  FNSTSW AX
006abb86  TEST AH,0x41
006abb89  JNZ 0x006abb91
006abb8b  FSTP ST0
006abb8d  FLD float ptr [ESP + 0x34]
006abb91  FLD float ptr [ESP + 0x6c]
006abb95  FMUL ST1
006abb97  FLD float ptr [ESP + 0x70]
006abb9b  FMUL ST2
006abb9d  FSTP float ptr [ESP + 0xdc]
006abba4  MOV ECX,dword ptr [ESP + 0xdc]
006abbab  FLD float ptr [ESP + 0x74]
006abbaf  MOV dword ptr [ESP + 0x100],ECX
006abbb6  FMUL ST2
006abbb8  MOV dword ptr [ESP + 0x94],ECX
006abbbf  FSTP float ptr [ESP + 0xe0]
006abbc6  MOV EDX,dword ptr [ESP + 0xe0]
006abbcd  MOV dword ptr [ESP + 0x104],EDX
006abbd4  FSTP float ptr [ESP + 0xfc]
006abbdb  MOV EAX,dword ptr [ESP + 0xfc]
006abbe2  MOV dword ptr [ESP + 0x90],EAX
006abbe9  FSTP ST0
006abbeb  MOV dword ptr [ESP + 0x98],EDX
006abbf2  FLD float ptr [ESP + 0x70]
006abbf6  FMUL float ptr [ESP + 0x58]
006abbfa  FLD float ptr [ESP + 0x74]
006abbfe  FMUL float ptr [ESP + 0x54]
006abc02  FSUBP
006abc04  FSTP float ptr [ESP + 0xc8]
006abc0b  MOV EAX,dword ptr [ESP + 0xc8]
006abc12  FLD float ptr [ESP + 0x74]
006abc16  MOV dword ptr [ESP + 0x10],EAX
006abc1a  FMUL float ptr [ESP + 0x50]
006abc1e  LEA EAX,[ESP + 0x10]
006abc22  FLD float ptr [ESP + 0x58]
006abc26  PUSH EAX
006abc27  FMUL float ptr [ESP + 0x70]
006abc2b  FSUBP
006abc2d  FSTP float ptr [ESP + 0xd0]
006abc34  MOV ECX,dword ptr [ESP + 0xd0]
006abc3b  FLD float ptr [ESP + 0x58]
006abc3f  MOV dword ptr [ESP + 0x18],ECX
006abc43  FMUL float ptr [ESP + 0x70]
006abc47  MOV ECX,EAX
006abc49  FLD float ptr [ESP + 0x74]
006abc4d  PUSH ECX
006abc4e  FMUL float ptr [ESP + 0x58]
006abc52  FSUBP
006abc54  FSTP float ptr [ESP + 0xd8]
006abc5b  MOV EDX,dword ptr [ESP + 0xd8]
006abc62  MOV dword ptr [ESP + 0x20],EDX
006abc66  CALL 0x0040fe20
006abc6b  FLD float ptr [EDI + 0xdc]
006abc71  FLD float ptr [ESP + 0x18]
006abc75  LEA EDX,[EDI + 0x5c]
006abc78  FMUL ST1
006abc7a  ADD ESP,0x8
006abc7d  FLD float ptr [ESP + 0x14]
006abc81  FMUL ST2
006abc83  FSTP float ptr [ESP + 0x14]
006abc87  FLD float ptr [ESP + 0x18]
006abc8b  FMUL ST2
006abc8d  FSTP float ptr [ESP + 0x18]
006abc91  FADD float ptr [ESP + 0x90]
006abc98  FSTP ST1
006abc9a  FLD float ptr [ESP + 0x94]
006abca1  FADD float ptr [ESP + 0x14]
006abca5  FLD float ptr [ESP + 0x98]
006abcac  FADD float ptr [ESP + 0x18]
006abcb0  FSTP float ptr [ESP + 0x84]
006abcb7  FXCH
006abcb9  FADD float ptr [ESP + 0x9c]
006abcc0  FSTP float ptr [ESP + 0x7c]
006abcc4  MOV EAX,dword ptr [ESP + 0x7c]
006abcc8  MOV dword ptr [EDX],EAX
006abcca  FADD float ptr [ESP + 0xa0]
006abcd1  FSTP float ptr [ESP + 0x80]
006abcd8  FLD float ptr [ESP + 0x84]
006abcdf  FADD float ptr [ESP + 0xa4]
006abce6  FSTP float ptr [ESP + 0x84]
006abced  MOV ECX,dword ptr [ESP + 0x80]
006abcf4  MOV EAX,dword ptr [ESP + 0x84]
006abcfb  MOV dword ptr [EDX + 0x4],ECX
006abcfe  MOV dword ptr [EDX + 0x8],EAX
006abd01  MOV byte ptr [ESP + 0x2f],0x1
006abd06  XOR ECX,ECX
006abd08  JMP 0x006abd7a
006abd0a  FSTP ST0
006abd0c  MOV EDX,dword ptr [0x008a2fb4]
006abd12  FLD float ptr [EDI + 0xcc]
006abd18  FCOMP float ptr [0x00890968]
006abd1e  LEA ECX,[EDI + 0x5c]
006abd21  MOV dword ptr [ECX],EDX
006abd23  MOV EAX,[0x008a2fb8]
006abd28  MOV dword ptr [ECX + 0x4],EAX
006abd2b  MOV EDX,dword ptr [0x008a2fbc]
006abd31  FNSTSW AX
006abd33  MOV dword ptr [ECX + 0x8],EDX
006abd36  XOR ECX,ECX
006abd38  TEST AH,0x41
006abd3b  MOV dword ptr [EDI + 0xd4],ECX
006abd41  MOV dword ptr [EDI + 0xe4],ECX
006abd47  MOV byte ptr [EDI + 0x104],CL
006abd4d  MOV dword ptr [EDI + 0xfc],ECX
006abd53  JZ 0x006abd68
006abd55  FLD float ptr [EDI + 0xc8]
006abd5b  FCOMP float ptr [0x00890968]
006abd61  FNSTSW AX
006abd63  TEST AH,0x41
006abd66  JNZ 0x006abd6e
006abd68  MOV dword ptr [EDI + 0xd0],ECX
006abd6e  MOV dword ptr [EDI + 0xd8],ECX
006abd74  MOV dword ptr [EDI + 0xdc],ECX
006abd7a  FLD float ptr [0x00890968]
006abd80  FLD float ptr [ESP + 0x38]
006abd84  FUCOMPP
006abd86  FNSTSW AX
006abd88  TEST AH,0x44
006abd8b  JP 0x006abd9c
006abd8d  FLD float ptr [ESP + 0xa8]
006abd94  FADD float ptr [EDI + 0x68]
006abd97  FSTP float ptr [EDI + 0x68]
006abd9a  JMP 0x006abd9f
006abd9c  MOV dword ptr [EDI + 0x68],ECX
006abd9f  FLD float ptr [ESP + 0x38]
006abda3  FCOMP float ptr [0x00890968]
006abda9  FNSTSW AX
006abdab  TEST AH,0x41
006abdae  JNZ 0x006abdb6
006abdb0  FLD float ptr [ESP + 0x38]
006abdb4  JMP 0x006abdbc
006abdb6  FLD float ptr [0x00890968]
006abdbc  MOV EAX,dword ptr [ESP + 0x78]
006abdc0  FSTP float ptr [EDI + 0x78]
006abdc3  MOV EDI,dword ptr [ESP + 0x8c]
006abdca  MOV EDX,dword ptr [ESP + 0x4c]
006abdce  INC EAX
006abdcf  ADD EDI,0x10
006abdd2  ADD EDX,0x4
006abdd5  CMP EAX,0x4
006abdd8  MOV dword ptr [ESP + 0x78],EAX
006abddc  MOV dword ptr [ESP + 0x8c],EDI
006abde3  MOV dword ptr [ESP + 0x4c],EDX
006abde7  JC 0x006ab640
006abded  MOV AL,byte ptr [ESP + 0x2f]
006abdf1  TEST AL,AL
006abdf3  JZ 0x006ac011
006abdf9  MOV ECX,dword ptr [ESI + 0x74]
006abdfc  MOV EDX,dword ptr [ESI + 0x78]
006abdff  MOV EAX,dword ptr [ESI + 0x70]
006abe02  MOV dword ptr [ESP + 0x14],ECX
006abe06  FLD float ptr [ESP + 0x14]
006abe0a  FMUL float ptr [ESI + 0x10]
006abe0d  MOV dword ptr [ESP + 0x18],EDX
006abe11  FLD float ptr [ESP + 0x18]
006abe15  MOV dword ptr [ESP + 0x10],EAX
006abe19  FMUL float ptr [ESI + 0x20]
006abe1c  MOV EAX,dword ptr [EBP + 0x4c]
006abe1f  LEA ECX,[EBP + 0x4c]
006abe22  FADDP
006abe24  FLD float ptr [ESP + 0x10]
006abe28  XOR EDI,EDI
006abe2a  FMUL float ptr [ESI]
006abe2c  FADDP
006abe2e  FADD float ptr [ESI + 0x30]
006abe31  FSTP float ptr [ESP + 0x9c]
006abe38  FLD float ptr [ESP + 0x14]
006abe3c  FMUL float ptr [ESI + 0x14]
006abe3f  FLD float ptr [ESP + 0x18]
006abe43  FMUL float ptr [ESI + 0x24]
006abe46  FADDP
006abe48  FLD float ptr [ESP + 0x10]
006abe4c  FMUL float ptr [ESI + 0x4]
006abe4f  FADDP
006abe51  FADD float ptr [ESI + 0x34]
006abe54  FSTP float ptr [ESP + 0xa0]
006abe5b  FLD float ptr [ESP + 0x18]
006abe5f  FMUL float ptr [ESI + 0x28]
006abe62  FLD float ptr [ESP + 0x14]
006abe66  FMUL float ptr [ESI + 0x18]
006abe69  FADDP
006abe6b  FLD float ptr [ESP + 0x10]
006abe6f  FMUL float ptr [ESI + 0x8]
006abe72  FADDP
006abe74  FADD float ptr [ESI + 0x38]
006abe77  FSTP float ptr [ESP + 0xa4]
006abe7e  CALL dword ptr [EAX + 0x8]
006abe81  TEST EAX,EAX
006abe83  JBE 0x006ac011
006abe89  LEA EAX,[EBP + 0xfc]
006abe8f  MOV dword ptr [ESP + 0x4c],EAX
006abe93  MOV ECX,dword ptr [ESP + 0x4c]
006abe97  MOV ECX,dword ptr [ECX]
006abe99  MOV EDX,dword ptr [ECX + 0x6c]
006abe9c  FLD float ptr [ECX + 0x70]
006abe9f  FADD float ptr [ECX + 0x78]
006abea2  MOV EAX,dword ptr [ECX + 0x74]
006abea5  MOV dword ptr [ESP + 0x1c],EDX
006abea9  MOV EDX,EDI
006abeab  SHR EDX,0x1
006abead  FSUB float ptr [ESP + EDX*0x4 + 0x108]
006abeb4  MOV EDX,dword ptr [ESP + 0x1c]
006abeb8  MOV dword ptr [ESP + 0x10],EDX
006abebc  FSTP float ptr [ESP + 0x20]
006abec0  MOV EDX,dword ptr [ESP + 0x20]
006abec4  MOV dword ptr [ESP + 0x14],EDX
006abec8  FLD float ptr [ESP + 0x14]
006abecc  FMUL float ptr [ESI + 0x10]
006abecf  MOV dword ptr [ESP + 0x24],EAX
006abed3  MOV EDX,dword ptr [ESP + 0x24]
006abed7  MOV dword ptr [ESP + 0x18],EDX
006abedb  FLD float ptr [ESP + 0x18]
006abedf  FMUL float ptr [ESI + 0x20]
006abee2  LEA EAX,[ECX + 0x5c]
006abee5  ADD ECX,0x4c
006abee8  FADDP
006abeea  FLD float ptr [ESP + 0x10]
006abeee  FMUL float ptr [ESI]
006abef0  FADDP
006abef2  FADD float ptr [ESI + 0x30]
006abef5  FSTP float ptr [ESP + 0x1c]
006abef9  MOV EDX,dword ptr [ESP + 0x1c]
006abefd  FLD float ptr [ESP + 0x14]
006abf01  FMUL float ptr [ESI + 0x14]
006abf04  FLD float ptr [ESP + 0x18]
006abf08  FMUL float ptr [ESI + 0x24]
006abf0b  FADDP
006abf0d  FLD float ptr [ESP + 0x10]
006abf11  FMUL float ptr [ESI + 0x4]
006abf14  FADDP
006abf16  FADD float ptr [ESI + 0x34]
006abf19  FSTP float ptr [ESP + 0x20]
006abf1d  FLD float ptr [ESP + 0x18]
006abf21  FMUL float ptr [ESI + 0x28]
006abf24  FLD float ptr [ESP + 0x14]
006abf28  FMUL float ptr [ESI + 0x18]
006abf2b  FADDP
006abf2d  FLD float ptr [ESP + 0x10]
006abf31  FMUL float ptr [ESI + 0x8]
006abf34  FADDP
006abf36  FADD float ptr [ESI + 0x38]
006abf39  MOV dword ptr [ECX],EDX
006abf3b  MOV EDX,dword ptr [ESP + 0x20]
006abf3f  MOV dword ptr [ECX + 0x4],EDX
006abf42  FSTP float ptr [ESP + 0x24]
006abf46  MOV EDX,dword ptr [ESP + 0x24]
006abf4a  FLD float ptr [ESP + 0x1c]
006abf4e  MOV dword ptr [ECX + 0x8],EDX
006abf51  FSUB float ptr [ESP + 0x9c]
006abf58  FLD float ptr [ESP + 0x20]
006abf5c  FSUB float ptr [ESP + 0xa0]
006abf63  FLD float ptr [ESP + 0x24]
006abf67  FSUB float ptr [ESP + 0xa4]
006abf6e  FXCH
006abf70  FMUL float ptr [0x008933d4]
006abf76  FST float ptr [ESP + 0xcc]
006abf7d  FMUL float ptr [EAX + 0x8]
006abf80  FLD ST1
006abf82  FMUL float ptr [EAX + 0x4]
006abf85  FSUBP
006abf87  FSTP float ptr [ESP + 0x90]
006abf8e  MOV ECX,dword ptr [ESP + 0x90]
006abf95  LEA EBX,[ESP + 0xd8]
006abf9c  FMUL float ptr [EAX]
006abf9e  PUSH EBX
006abf9f  FLD ST1
006abfa1  PUSH EAX
006abfa2  FMUL float ptr [EAX + 0x8]
006abfa5  FSUBP
006abfa7  FSTP float ptr [ESP + 0x9c]
006abfae  MOV EDX,dword ptr [ESP + 0x9c]
006abfb5  FMUL float ptr [EAX + 0x4]
006abfb8  FLD float ptr [ESP + 0xd4]
006abfbf  FMUL float ptr [EAX]
006abfc1  MOV dword ptr [ESP + 0xe0],ECX
006abfc8  MOV dword ptr [ESP + 0xe4],EDX
006abfcf  FSUBP
006abfd1  FSTP float ptr [ESP + 0xa0]
006abfd8  MOV ECX,dword ptr [ESP + 0xa0]
006abfdf  MOV dword ptr [ESP + 0xe8],ECX
006abfe6  MOV ECX,dword ptr [EBP + 0xe0]
006abfec  MOV EDX,dword ptr [ECX]
006abfee  CALL dword ptr [EDX + 0x84]
006abff4  MOV EDX,dword ptr [ESP + 0x4c]
006abff8  MOV EAX,dword ptr [EBP + 0x4c]
006abffb  LEA ECX,[EBP + 0x4c]
006abffe  ADD EDX,0x4
006ac001  INC EDI
006ac002  MOV dword ptr [ESP + 0x4c],EDX
006ac006  CALL dword ptr [EAX + 0x8]
006ac009  CMP EDI,EAX
006ac00b  JC 0x006abe93
006ac011  FLD float ptr [ESP + 0x30]
006ac015  FCOMP float ptr [0x00890968]
006ac01b  FNSTSW AX
006ac01d  TEST AH,0x41
006ac020  JNZ 0x006ac085
006ac022  MOV EDX,dword ptr [EBP + 0x4c]
006ac025  LEA ESI,[EBP + 0x4c]
006ac028  MOV ECX,ESI
006ac02a  XOR EDI,EDI
006ac02c  CALL dword ptr [EDX + 0x8]
006ac02f  TEST EAX,EAX
006ac031  JBE 0x006ac05b
006ac033  LEA EBX,[EBP + 0xfc]
006ac039  LEA ESP,[ESP]
006ac040  MOV EAX,dword ptr [EBX]
006ac042  FLD float ptr [ESP + 0x30]
006ac046  FADD float ptr [EAX + 0x50]
006ac049  MOV ECX,ESI
006ac04b  INC EDI
006ac04c  ADD EBX,0x4
006ac04f  FSTP float ptr [EAX + 0x50]
006ac052  MOV EAX,dword ptr [ESI]
006ac054  CALL dword ptr [EAX + 0x8]
006ac057  CMP EDI,EAX
006ac059  JC 0x006ac040
006ac05b  MOV ECX,dword ptr [EBP + 0xe0]
006ac061  MOV EAX,dword ptr [ESP + 0x30]
006ac065  MOV EDX,dword ptr [ECX]
006ac067  PUSH EAX
006ac068  CALL dword ptr [EDX + 0x7c]
006ac06b  MOV ECX,dword ptr [ESP + 0x88]
006ac072  POP EDI
006ac073  POP ESI
006ac074  MOV dword ptr [EBP + 0xf4],ECX
006ac07a  POP EBP
006ac07b  POP EBX
006ac07c  ADD ESP,0x18c
006ac082  RET 0x4
006ac085  MOV EDX,dword ptr [ESP + 0x88]
006ac08c  POP EDI
006ac08d  POP ESI
006ac08e  MOV dword ptr [EBP + 0xf4],EDX
006ac094  POP EBP
006ac095  POP EBX
006ac096  ADD ESP,0x18c
006ac09c  RET 0x4
