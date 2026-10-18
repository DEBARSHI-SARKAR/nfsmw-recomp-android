006ba510  SUB ESP,0x530
006ba516  PUSH EBX
006ba517  MOV EBX,ECX
006ba519  MOV EAX,dword ptr [EBX + 0x78]
006ba51c  PUSH EBP
006ba51d  MOV EBP,dword ptr [EAX]
006ba51f  MOV byte ptr [EBP + 0x5c],0x0
006ba523  FLD float ptr [EBP + 0x28]
006ba526  FLD float ptr [EBP + 0x20]
006ba529  MOV EDX,dword ptr [0x008a2fc4]
006ba52f  MOV ECX,dword ptr [0x008a2fc0]
006ba535  FLD ST0
006ba537  MOV EAX,[0x008a2fc8]
006ba53c  FMUL ST1
006ba53e  FLD ST2
006ba540  PUSH ESI
006ba541  FMUL ST3
006ba543  MOV dword ptr [ESP + 0x34],EDX
006ba547  MOV dword ptr [ESP + 0x30],ECX
006ba54b  MOV ECX,dword ptr [0x008a2fcc]
006ba551  FADDP
006ba553  PUSH EDI
006ba554  MOV dword ptr [ESP + 0x20],EBX
006ba558  FSTP float ptr [ESP + 0x1c]
006ba55c  MOV dword ptr [ESP + 0x3c],EAX
006ba560  MOV EDX,dword ptr [ESP + 0x1c]
006ba564  FSTP ST0
006ba566  PUSH EDX
006ba567  MOV dword ptr [ESP + 0x44],ECX
006ba56b  FSTP ST0
006ba56d  CALL 0x005c5e80
006ba572  FSTP float ptr [ESP + 0x58]
006ba576  LEA ECX,[ESP + 0x7c]
006ba57a  PUSH ECX
006ba57b  LEA EAX,[EBP + 0x70]
006ba57e  PUSH EAX
006ba57f  LEA EDX,[EBX + 0xf0]
006ba585  PUSH EDX
006ba586  CALL 0x00401670
006ba58b  MOV ECX,dword ptr [EBX + 0x34]
006ba58e  MOV EAX,dword ptr [ECX]
006ba590  ADD ESP,0x10
006ba593  CALL dword ptr [EAX + 0x4c]
006ba596  FLD float ptr [EBX + 0xe0]
006ba59c  MOV ESI,EAX
006ba59e  MOV ECX,0xf
006ba5a3  LEA EDI,[ESP + 0xc4]
006ba5aa  MOVSD.REP ES:EDI,ESI
006ba5ac  LEA ECX,[EBX + 0xd0]
006ba5b2  MOV EDX,dword ptr [ECX]
006ba5b4  MOV EAX,dword ptr [ECX + 0x4]
006ba5b7  MOV dword ptr [ESP + 0x24],EDX
006ba5bb  MOV EDX,dword ptr [ECX + 0x8]
006ba5be  MOV dword ptr [ESP + 0x28],EAX
006ba5c2  MOV EAX,dword ptr [ECX + 0xc]
006ba5c5  MOV dword ptr [ESP + 0x2c],EDX
006ba5c9  MOV dword ptr [ESP + 0x30],EAX
006ba5cd  PUSH ECX
006ba5ce  FMUL float ptr [EBP + 0x74]
006ba5d1  MOV dword ptr [ESP + 0x18],0x0
006ba5d9  FLD float ptr [EBX + 0xe4]
006ba5df  FMUL float ptr [EBP + 0x84]
006ba5e5  FLD float ptr [EBX + 0xe8]
006ba5eb  FMUL float ptr [EBP + 0x94]
006ba5f1  FLD ST0
006ba5f3  FMUL ST1
006ba5f5  FLD ST2
006ba5f7  FMUL ST3
006ba5f9  FADDP
006ba5fb  FLD ST3
006ba5fd  FMUL ST4
006ba5ff  FADDP
006ba601  FSTP float ptr [ESP]
006ba604  FSTP ST0
006ba606  FSTP ST0
006ba608  FSTP ST0
006ba60a  CALL 0x005c5e80
006ba60f  FSTP float ptr [ESP + 0x48]
006ba613  LEA EAX,[EBX + 0x110]
006ba619  FLD float ptr [ESP + 0x48]
006ba61d  MOV EBX,dword ptr [EAX]
006ba61f  FADD float ptr [EBP + 0x14]
006ba622  ADD ESP,0x4
006ba625  CMP EBX,EAX
006ba627  LEA ESI,[ESP + 0x240]
006ba62e  FSTP float ptr [ESP + 0x58]
006ba632  JZ 0x006ba984
006ba638  MOV EAX,dword ptr [EBX + 0x44]
006ba63b  MOV ECX,EAX
006ba63d  SHR ECX,0x3
006ba640  NOT CL
006ba642  TEST CL,0x1
006ba645  JZ 0x006ba971
006ba64b  TEST AL,0x4
006ba64d  JZ 0x006ba971
006ba653  CMP dword ptr [EBX + 0x24],0x1
006ba657  JNZ 0x006ba971
006ba65d  MOV EDX,dword ptr [EBX + 0x48]
006ba660  LEA EAX,[ESP + 0x84]
006ba667  PUSH EAX
006ba668  LEA ECX,[EBX + 0x8]
006ba66b  PUSH ECX
006ba66c  MOV dword ptr [ESP + 0x24],EDX
006ba670  CALL 0x005ca910
006ba675  FLD float ptr [EBX + 0x18]
006ba678  FLD float ptr [ESP + 0x8c]
006ba67f  MOV EAX,dword ptr [EBX + 0x2c]
006ba682  FMUL ST1
006ba684  MOV ECX,dword ptr [EBX + 0x30]
006ba687  MOV EDX,dword ptr [EBX + 0x28]
006ba68a  MOV dword ptr [ESP + 0x74],EAX
006ba68e  FSTP float ptr [ESP + 0x8c]
006ba695  MOV dword ptr [ESP + 0xc0],EAX
006ba69c  FLD float ptr [ESP + 0x90]
006ba6a3  LEA EAX,[ESP + 0x208]
006ba6aa  FMUL ST1
006ba6ac  PUSH EAX
006ba6ad  LEA EAX,[EBP + 0x70]
006ba6b0  MOV dword ptr [ESP + 0x7c],ECX
006ba6b4  FSTP float ptr [ESP + 0x94]
006ba6bb  MOV dword ptr [ESP + 0xc8],ECX
006ba6c2  FLD float ptr [ESP + 0x98]
006ba6c9  MOV dword ptr [ESP + 0x74],EDX
006ba6cd  FMUL ST1
006ba6cf  MOV dword ptr [ESP + 0xc0],EDX
006ba6d6  PUSH EAX
006ba6d7  LEA ECX,[ESP + 0x94]
006ba6de  FSTP float ptr [ESP + 0x9c]
006ba6e5  MOV dword ptr [ESP + 0x84],0x3f800000
006ba6f0  MOV EDX,dword ptr [ESP + 0x84]
006ba6f7  FSTP ST0
006ba6f9  PUSH ECX
006ba6fa  FLD float ptr [EBX + 0x1c]
006ba6fd  MOV dword ptr [ESP + 0xd4],EDX
006ba704  FLD float ptr [ESP + 0xa8]
006ba70b  FMUL ST1
006ba70d  FSTP float ptr [ESP + 0xa8]
006ba714  FLD float ptr [ESP + 0xac]
006ba71b  FMUL ST1
006ba71d  FSTP float ptr [ESP + 0xac]
006ba724  FLD float ptr [ESP + 0xb0]
006ba72b  FMUL ST1
006ba72d  FSTP float ptr [ESP + 0xb0]
006ba734  FSTP ST0
006ba736  FLD float ptr [EBX + 0x20]
006ba739  FLD float ptr [ESP + 0xb8]
006ba740  FMUL ST1
006ba742  FSTP float ptr [ESP + 0xb8]
006ba749  FLD float ptr [ESP + 0xbc]
006ba750  FMUL ST1
006ba752  FSTP float ptr [ESP + 0xbc]
006ba759  FLD float ptr [ESP + 0xc0]
006ba760  FMUL ST1
006ba762  FSTP float ptr [ESP + 0xc0]
006ba769  FSTP ST0
006ba76b  CALL 0x005cab00
006ba770  PUSH 0x8
006ba772  LEA EDX,[ESP + 0x118]
006ba779  PUSH EDX
006ba77a  LEA EAX,[ESP + 0x21c]
006ba781  PUSH EAX
006ba782  PUSH 0x8ad6f8
006ba787  CALL 0x00689d10
006ba78c  ADD ESP,0x24
006ba78f  XOR EAX,EAX
006ba791  LEA EDI,[ESI + 0x10]
006ba794  MOV dword ptr [ESP + 0x10],EAX
006ba798  JMP 0x006ba7a0
006ba79a  MOV EAX,dword ptr [ESP + 0x10]
006ba79e  MOV EDI,EDI
006ba7a0  CMP dword ptr [ESP + 0x14],0x10
006ba7a5  JNC 0x006ba971
006ba7ab  FLD float ptr [EBP + 0x10]
006ba7ae  FADD float ptr [ESP + EAX*0x1 + 0x100]
006ba7b5  FSTP float ptr [ESP + 0x48]
006ba7b9  FLD float ptr [ESP + EAX*0x1 + 0x104]
006ba7c0  FADD float ptr [EBP + 0x14]
006ba7c3  FSTP float ptr [ESP + 0x4c]
006ba7c7  FLD float ptr [EBP + 0x18]
006ba7ca  FADD float ptr [ESP + EAX*0x1 + 0x108]
006ba7d1  FSTP float ptr [ESP + 0x50]
006ba7d5  FLD float ptr [ESP + EAX*0x1 + 0x100]
006ba7dc  FSUB float ptr [ESP + 0x78]
006ba7e0  FMUL float ptr [EBP + 0x38]
006ba7e3  FADD float ptr [EBP + 0x24]
006ba7e6  FLD float ptr [ESP + EAX*0x1 + 0x108]
006ba7ed  FSUB float ptr [ESP + 0x80]
006ba7f4  FMUL float ptr [EBP + 0x30]
006ba7f7  FSUBP
006ba7f9  FMUL float ptr [ESP + 0x544]
006ba800  FCHS
006ba802  FCOM float ptr [0x00890968]
006ba808  FNSTSW AX
006ba80a  TEST AH,0x41
006ba80d  JZ 0x006ba817
006ba80f  FSTP ST0
006ba811  FLD float ptr [0x00890968]
006ba817  FLD float ptr [ESP + 0x54]
006ba81b  FMUL float ptr [ESP + 0x544]
006ba822  FADDP
006ba824  FADD float ptr [ESP + 0x44]
006ba828  FLD float ptr [ESP + 0x58]
006ba82c  FSUB float ptr [ESP + 0x4c]
006ba830  FSTP float ptr [ESP + 0x18]
006ba834  FCOM float ptr [ESP + 0x18]
006ba838  FNSTSW AX
006ba83a  TEST AH,0x5
006ba83d  JNP 0x006ba845
006ba83f  FSTP ST0
006ba841  FLD float ptr [ESP + 0x18]
006ba845  FLD float ptr [0x008910f0]
006ba84b  FCOMP
006ba84d  FNSTSW AX
006ba84f  TEST AH,0x41
006ba852  JNZ 0x006ba85c
006ba854  FSTP ST0
006ba856  FLD float ptr [0x008910f0]
006ba85c  MOV ECX,dword ptr [ESP + 0x20]
006ba860  FSTP float ptr [ESP + 0xf8]
006ba867  MOV EDX,dword ptr [ECX + 0xec]
006ba86d  PUSH 0x1
006ba86f  PUSH EDX
006ba870  PUSH 0x1
006ba872  LEA EAX,[ESP + 0x30]
006ba876  PUSH EAX
006ba877  LEA ECX,[ESP + 0x58]
006ba87b  PUSH ECX
006ba87c  LEA ECX,[ESP + 0xd8]
006ba883  CALL 0x00789cc0
006ba888  TEST byte ptr [ESP + 0xf4],0x1
006ba890  JZ 0x006ba95b
006ba896  FLD float ptr [ESP + 0x30]
006ba89a  FCOMP float ptr [0x008aabe0]
006ba8a0  FNSTSW AX
006ba8a2  TEST AH,0x41
006ba8a5  JNP 0x006ba95b
006ba8ab  FLD float ptr [ESP + 0x30]
006ba8af  FCOMP float ptr [ESP + 0x40]
006ba8b3  FNSTSW AX
006ba8b5  TEST AH,0x41
006ba8b8  JNZ 0x006ba8da
006ba8ba  MOV EDX,dword ptr [ESP + 0x24]
006ba8be  MOV EAX,dword ptr [ESP + 0x28]
006ba8c2  MOV ECX,dword ptr [ESP + 0x2c]
006ba8c6  MOV dword ptr [ESP + 0x34],EDX
006ba8ca  MOV EDX,dword ptr [ESP + 0x30]
006ba8ce  MOV dword ptr [ESP + 0x38],EAX
006ba8d2  MOV dword ptr [ESP + 0x3c],ECX
006ba8d6  MOV dword ptr [ESP + 0x40],EDX
006ba8da  MOV EDX,dword ptr [ESP + 0x10]
006ba8de  LEA EAX,[EDI + 0x10]
006ba8e1  PUSH EAX
006ba8e2  LEA ECX,[ESP + 0x88]
006ba8e9  PUSH ECX
006ba8ea  LEA EAX,[EDX + 0x8ad6f8]
006ba8f0  PUSH EAX
006ba8f1  CALL 0x00486610
006ba8f6  MOV EAX,dword ptr [ESP + 0x1c]
006ba8fa  MOV EDX,dword ptr [ESP + EAX*0x1 + 0x10c]
006ba901  MOV ECX,ESI
006ba903  MOV dword ptr [ECX],EDX
006ba905  MOV EDX,dword ptr [ESP + EAX*0x1 + 0x110]
006ba90c  MOV dword ptr [ECX + 0x4],EDX
006ba90f  MOV EDX,dword ptr [ESP + EAX*0x1 + 0x114]
006ba916  MOV dword ptr [ECX + 0x8],EDX
006ba919  MOV EDX,dword ptr [ESP + 0x30]
006ba91d  MOV ECX,EDI
006ba91f  MOV dword ptr [ECX],EDX
006ba921  MOV EDX,dword ptr [ESP + 0x34]
006ba925  MOV dword ptr [ECX + 0x4],EDX
006ba928  MOV EDX,dword ptr [ESP + 0x38]
006ba92c  MOV dword ptr [ECX + 0x8],EDX
006ba92f  MOV ECX,dword ptr [ESP + 0x3c]
006ba933  MOV EDX,dword ptr [ESP + 0x108]
006ba93a  MOV dword ptr [EDI + 0xc],ECX
006ba93d  MOV ECX,dword ptr [ESP + 0x28]
006ba941  MOV dword ptr [EDI + -0x4],ECX
006ba944  MOV ECX,dword ptr [ESP + 0x20]
006ba948  MOV dword ptr [EDI + 0x1c],EDX
006ba94b  ADD ESP,0xc
006ba94e  ADD ESI,0x30
006ba951  ADD EDI,0x30
006ba954  INC ECX
006ba955  MOV dword ptr [ESP + 0x14],ECX
006ba959  JMP 0x006ba95f
006ba95b  MOV EAX,dword ptr [ESP + 0x10]
006ba95f  ADD EAX,0x10
006ba962  CMP EAX,0x80
006ba967  MOV dword ptr [ESP + 0x10],EAX
006ba96b  JC 0x006ba79a
006ba971  MOV EAX,dword ptr [ESP + 0x20]
006ba975  MOV EBX,dword ptr [EBX]
006ba977  ADD EAX,0x110
006ba97c  CMP EBX,EAX
006ba97e  JNZ 0x006ba638
006ba984  MOV EAX,dword ptr [ESP + 0x20]
006ba988  MOV EDI,dword ptr [EAX + 0x120]
006ba98e  ADD EAX,0x120
006ba993  CMP EDI,EAX
006ba995  MOV dword ptr [ESP + 0x18],EDI
006ba999  JZ 0x006babe7
006ba99f  JMP 0x006ba9a5
006ba9a1  MOV EDI,dword ptr [ESP + 0x18]
006ba9a5  CMP dword ptr [ESP + 0x14],0x10
006ba9aa  JNC 0x006babe7
006ba9b0  MOV DL,byte ptr [EDI + 0xe]
006ba9b3  NOT DL
006ba9b5  TEST DL,0x1
006ba9b8  JZ 0x006babd0
006ba9be  MOVZX EBX,word ptr [EDI + 0xc]
006ba9c2  MOV EAX,dword ptr [EDI + 0x10]
006ba9c5  MOV EDX,dword ptr [EDI + 0x8]
006ba9c8  PUSH EBX
006ba9c9  LEA ECX,[ESP + 0x104]
006ba9d0  MOV dword ptr [ESP + 0x68],EAX
006ba9d4  PUSH ECX
006ba9d5  LEA EAX,[EBP + 0x70]
006ba9d8  PUSH EAX
006ba9d9  PUSH EDX
006ba9da  MOV dword ptr [ESP + 0x70],EBX
006ba9de  CALL 0x00689d10
006ba9e3  ADD ESP,0x10
006ba9e6  TEST EBX,EBX
006ba9e8  MOV dword ptr [ESP + 0x1c],0x0
006ba9f0  JLE 0x006babd0
006ba9f6  XOR EBX,EBX
006ba9f8  MOV dword ptr [ESP + 0x10],EBX
006ba9fc  LEA ESP,[ESP]
006baa00  CMP dword ptr [ESP + 0x14],0x10
006baa05  JNC 0x006babd0
006baa0b  FLD float ptr [EBP + 0x10]
006baa0e  MOV EDI,dword ptr [EDI + 0x8]
006baa11  FADD float ptr [ESP + EBX*0x1 + 0x100]
006baa18  ADD EDI,EBX
006baa1a  FSTP float ptr [ESP + 0x48]
006baa1e  FLD float ptr [ESP + EBX*0x1 + 0x104]
006baa25  FADD float ptr [EBP + 0x14]
006baa28  FSTP float ptr [ESP + 0x4c]
006baa2c  FLD float ptr [EBP + 0x18]
006baa2f  FADD float ptr [ESP + EBX*0x1 + 0x108]
006baa36  FSTP float ptr [ESP + 0x50]
006baa3a  FLD float ptr [ESP + EBX*0x1 + 0x100]
006baa41  FSUB float ptr [ESP + 0x78]
006baa45  FMUL float ptr [EBP + 0x38]
006baa48  FADD float ptr [EBP + 0x24]
006baa4b  FLD float ptr [ESP + EBX*0x1 + 0x108]
006baa52  FSUB float ptr [ESP + 0x80]
006baa59  FMUL float ptr [EBP + 0x30]
006baa5c  FSUBP
006baa5e  FMUL float ptr [ESP + 0x544]
006baa65  FCHS
006baa67  FCOM float ptr [0x00890968]
006baa6d  FNSTSW AX
006baa6f  TEST AH,0x41
006baa72  JZ 0x006baa7c
006baa74  FSTP ST0
006baa76  FLD float ptr [0x00890968]
006baa7c  FLD float ptr [ESP + 0x54]
006baa80  FMUL float ptr [ESP + 0x544]
006baa87  FADDP
006baa89  FADD float ptr [ESP + 0x44]
006baa8d  FLD float ptr [ESP + 0x58]
006baa91  FSUB float ptr [ESP + 0x4c]
006baa95  FSTP float ptr [ESP + 0x5c]
006baa99  FCOM float ptr [ESP + 0x5c]
006baa9d  FNSTSW AX
006baa9f  TEST AH,0x5
006baaa2  JNP 0x006baaaa
006baaa4  FSTP ST0
006baaa6  FLD float ptr [ESP + 0x5c]
006baaaa  FLD float ptr [0x008910f0]
006baab0  FCOMP
006baab2  FNSTSW AX
006baab4  TEST AH,0x41
006baab7  JNZ 0x006baac1
006baab9  FSTP ST0
006baabb  FLD float ptr [0x008910f0]
006baac1  MOV EAX,dword ptr [ESP + 0x20]
006baac5  FSTP float ptr [ESP + 0xf8]
006baacc  MOV ECX,dword ptr [EAX + 0xec]
006baad2  PUSH 0x1
006baad4  PUSH ECX
006baad5  PUSH 0x1
006baad7  LEA EDX,[ESP + 0x30]
006baadb  PUSH EDX
006baadc  LEA EAX,[ESP + 0x58]
006baae0  PUSH EAX
006baae1  LEA ECX,[ESP + 0xd8]
006baae8  CALL 0x00789cc0
006baaed  TEST byte ptr [ESP + 0xf4],0x1
006baaf5  JZ 0x006babb0
006baafb  FLD float ptr [ESP + 0x30]
006baaff  FCOMP float ptr [0x008aabe0]
006bab05  FNSTSW AX
006bab07  TEST AH,0x41
006bab0a  JNP 0x006babb0
006bab10  FLD float ptr [ESP + 0x30]
006bab14  MOV ECX,dword ptr [ESP + 0x28]
006bab18  FCOMP float ptr [ESP + 0x40]
006bab1c  FNSTSW AX
006bab1e  TEST AH,0x41
006bab21  MOV EAX,dword ptr [ESP + 0x2c]
006bab25  JNZ 0x006bab3f
006bab27  MOV EDX,dword ptr [ESP + 0x24]
006bab2b  MOV dword ptr [ESP + 0x34],EDX
006bab2f  MOV EDX,dword ptr [ESP + 0x30]
006bab33  MOV dword ptr [ESP + 0x38],ECX
006bab37  MOV dword ptr [ESP + 0x3c],EAX
006bab3b  MOV dword ptr [ESP + 0x40],EDX
006bab3f  MOV EBX,dword ptr [ESP + EBX*0x1 + 0x100]
006bab46  MOV EDX,ESI
006bab48  MOV dword ptr [EDX],EBX
006bab4a  MOV EBX,dword ptr [ESP + 0x10]
006bab4e  MOV EBX,dword ptr [ESP + EBX*0x1 + 0x104]
006bab55  MOV dword ptr [EDX + 0x4],EBX
006bab58  MOV EBX,dword ptr [ESP + 0x10]
006bab5c  MOV EBX,dword ptr [ESP + EBX*0x1 + 0x108]
006bab63  MOV dword ptr [EDX + 0x8],EBX
006bab66  MOV EBX,dword ptr [ESP + 0x24]
006bab6a  LEA EDX,[ESI + 0x10]
006bab6d  MOV dword ptr [EDX],EBX
006bab6f  MOV EBX,dword ptr [ESP + 0x10]
006bab73  MOV dword ptr [EDX + 0x4],ECX
006bab76  MOV dword ptr [EDX + 0x8],EAX
006bab79  MOV EAX,dword ptr [ESP + 0x30]
006bab7d  MOV dword ptr [ESI + 0x1c],EAX
006bab80  MOV EDX,dword ptr [EDI]
006bab82  LEA ECX,[ESI + 0x20]
006bab85  MOV dword ptr [ECX],EDX
006bab87  MOV EAX,dword ptr [EDI + 0x4]
006bab8a  MOV dword ptr [ECX + 0x4],EAX
006bab8d  MOV EDX,dword ptr [EDI + 0x8]
006bab90  MOV EAX,dword ptr [ESP + 0xfc]
006bab97  MOV dword ptr [ECX + 0x8],EDX
006bab9a  MOV ECX,dword ptr [ESP + 0x64]
006bab9e  MOV dword ptr [ESI + 0x2c],EAX
006baba1  MOV EAX,dword ptr [ESP + 0x14]
006baba5  MOV dword ptr [ESI + 0xc],ECX
006baba8  ADD ESI,0x30
006babab  INC EAX
006babac  MOV dword ptr [ESP + 0x14],EAX
006babb0  MOV EAX,dword ptr [ESP + 0x1c]
006babb4  MOV ECX,dword ptr [ESP + 0x60]
006babb8  MOV EDI,dword ptr [ESP + 0x18]
006babbc  INC EAX
006babbd  ADD EBX,0x10
006babc0  CMP EAX,ECX
006babc2  MOV dword ptr [ESP + 0x1c],EAX
006babc6  MOV dword ptr [ESP + 0x10],EBX
006babca  JL 0x006baa00
006babd0  MOV EAX,dword ptr [ESP + 0x20]
006babd4  MOV EDI,dword ptr [EDI]
006babd6  ADD EAX,0x120
006babdb  CMP EDI,EAX
006babdd  MOV dword ptr [ESP + 0x18],EDI
006babe1  JNZ 0x006ba9a1
006babe7  MOV EBX,dword ptr [ESP + 0x14]
006babeb  TEST EBX,EBX
006babed  JZ 0x006bac8f
006babf3  CMP EBX,0x1
006babf6  MOV byte ptr [EBP + 0x5c],BL
006babf9  JBE 0x006bac36
006babfb  LEA ESI,[EBX + EBX*0x2]
006babfe  SHL ESI,0x4
006bac01  LEA ESI,[ESP + ESI*0x1 + 0x240]
006bac08  LEA EDX,[ESP + 0x240]
006bac0f  MOV ECX,ESI
006bac11  SUB ECX,EDX
006bac13  MOV EAX,0x2aaaaaab
006bac18  IMUL ECX
006bac1a  SAR EDX,0x3
006bac1d  MOV EAX,EDX
006bac1f  SHR EAX,0x1f
006bac22  ADD EAX,EDX
006bac24  PUSH EAX
006bac25  LEA ECX,[ESP + 0x244]
006bac2c  PUSH ESI
006bac2d  PUSH ECX
006bac2e  CALL 0x006b9260
006bac33  ADD ESP,0xc
006bac36  CMP EBX,0x10
006bac39  MOV EAX,EBX
006bac3b  JC 0x006bac42
006bac3d  MOV EAX,0x10
006bac42  MOV ECX,dword ptr [ESP + 0x20]
006bac46  PUSH EAX
006bac47  LEA EDX,[ESP + 0x244]
006bac4e  PUSH EDX
006bac4f  CALL 0x00697ce0
006bac54  FLD float ptr [ESP + 0x40]
006bac58  FCOMP float ptr [0x00890968]
006bac5e  FNSTSW AX
006bac60  TEST AH,0x41
006bac63  JNZ 0x006bac8f
006bac65  FLD float ptr [ESP + 0x34]
006bac69  FMUL float ptr [ESP + 0x40]
006bac6d  FADD float ptr [EBP + 0x10]
006bac70  FSTP float ptr [EBP + 0x10]
006bac73  FLD float ptr [ESP + 0x38]
006bac77  FMUL float ptr [ESP + 0x40]
006bac7b  FADD float ptr [EBP + 0x14]
006bac7e  FSTP float ptr [EBP + 0x14]
006bac81  FLD float ptr [ESP + 0x3c]
006bac85  FMUL float ptr [ESP + 0x40]
006bac89  FADD float ptr [EBP + 0x18]
006bac8c  FSTP float ptr [EBP + 0x18]
006bac8f  POP EDI
006bac90  POP ESI
006bac91  POP EBP
006bac92  POP EBX
006bac93  ADD ESP,0x530
006bac99  RET 0x4
