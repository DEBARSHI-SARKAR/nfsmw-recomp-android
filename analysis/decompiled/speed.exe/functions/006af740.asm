006af740  SUB ESP,0x3c
006af743  PUSH EBP
006af744  PUSH ESI
006af745  MOV ESI,ECX
006af747  MOV EBP,dword ptr [ESI + 0x110]
006af74d  TEST EBP,EBP
006af74f  JZ 0x006b00e3
006af755  MOV ECX,dword ptr [ESI + 0x114]
006af75b  TEST ECX,ECX
006af75d  JZ 0x006b00e3
006af763  MOV EAX,dword ptr [ECX]
006af765  CALL dword ptr [EAX + 0x8]
006af768  CMP EAX,0x4
006af76b  JNZ 0x006b00e3
006af771  MOV ECX,dword ptr [ESI + 0x48]
006af774  MOV EDX,dword ptr [ECX]
006af776  PUSH EBX
006af777  PUSH EDI
006af778  CALL dword ptr [EDX + 0xcc]
006af77e  MOV ECX,dword ptr [ESI + 0x48]
006af781  MOV EDI,EAX
006af783  MOV EAX,dword ptr [ECX]
006af785  CALL dword ptr [EAX + 0x20]
006af788  MOV EDX,dword ptr [ESI]
006af78a  MOV ECX,ESI
006af78c  MOV byte ptr [ESP + 0x13],AL
006af790  CALL dword ptr [EDX + 0x3c]
006af793  FSTP float ptr [ESI + 0x8c]
006af799  MOV EAX,dword ptr [ESI]
006af79b  MOV EDX,dword ptr [EBP]
006af79e  MOV ECX,EBP
006af7a0  MOV dword ptr [ESP + 0x44],EAX
006af7a4  CALL dword ptr [EDX + 0x8]
006af7a7  MOVZX EAX,byte ptr [EAX + 0x21]
006af7ab  MOV EBX,dword ptr [ESP + 0x50]
006af7af  PUSH EAX
006af7b0  MOV EAX,dword ptr [ESP + 0x48]
006af7b4  PUSH EBX
006af7b5  PUSH EDI
006af7b6  MOV ECX,ESI
006af7b8  CALL dword ptr [EAX + 0x44]
006af7bb  MOV EDX,dword ptr [ESI]
006af7bd  MOV ECX,ESI
006af7bf  FSTP float ptr [ESI + 0xfc]
006af7c5  CALL dword ptr [EDX + 0x38]
006af7c8  MOV EAX,dword ptr [ESI]
006af7ca  PUSH EBX
006af7cb  PUSH EDI
006af7cc  MOV ECX,ESI
006af7ce  CALL dword ptr [EAX + 0x40]
006af7d1  MOV EDX,dword ptr [ESI]
006af7d3  PUSH EBX
006af7d4  MOV ECX,ESI
006af7d6  CALL dword ptr [EDX + 0x48]
006af7d9  MOV EAX,dword ptr [ESI]
006af7db  MOV ECX,ESI
006af7dd  CALL dword ptr [EAX + 0x34]
006af7e0  TEST AL,AL
006af7e2  MOV EAX,dword ptr [ESI + 0x14c]
006af7e8  JZ 0x006af7ef
006af7ea  FLD float ptr [EAX + 0x58]
006af7ed  JMP 0x006af7f2
006af7ef  FLD float ptr [EAX + 0x54]
006af7f2  MOV ECX,dword ptr [ESI + 0x84]
006af7f8  FMUL float ptr [0x008a9398]
006af7fe  MOV EDI,0x1
006af803  CMP ECX,EDI
006af805  SETNZ CL
006af808  FSTP float ptr [ESP + 0x24]
006af80c  FLD float ptr [EAX + 0x5c]
006af80f  LEA EDX,[ESI + 0x144]
006af815  FMUL float ptr [0x008a9398]
006af81b  FSTP float ptr [ESP + 0x34]
006af81f  PUSH ECX
006af820  PUSH EDX
006af821  CALL 0x0066bb00
006af826  FSTP float ptr [ESP + 0x40]
006af82a  ADD ESP,0x8
006af82d  PUSH 0x0
006af82f  MOV ECX,ESI
006af831  CALL 0x00692140
006af836  FSTP float ptr [ESP + 0x14]
006af83a  PUSH EDI
006af83b  MOV ECX,ESI
006af83d  CALL 0x00692140
006af842  FSTP float ptr [ESP + 0x1c]
006af846  MOV ECX,dword ptr [ESI + 0x114]
006af84c  MOV EAX,dword ptr [ECX]
006af84e  CALL dword ptr [EAX + 0x4c]
006af851  MOV dword ptr [ESP + 0x40],EAX
006af855  FILD dword ptr [ESP + 0x40]
006af859  FMUL float ptr [0x008910f0]
006af85f  FLD float ptr [0x008910f0]
006af865  FCOMP
006af867  FNSTSW AX
006af869  TEST AH,0x41
006af86c  JNZ 0x006af87a
006af86e  FSTP ST0
006af870  MOV dword ptr [ESP + 0x2c],0x3e800000
006af878  JMP 0x006af87e
006af87a  FSTP float ptr [ESP + 0x2c]
006af87e  LEA EBP,[ESI + 0x198]
006af884  PUSH EBX
006af885  MOV ECX,EBP
006af887  CALL 0x00691a10
006af88c  FSTP float ptr [ESP + 0x3c]
006af890  MOV EAX,dword ptr [ESI + 0x84]
006af896  TEST EAX,EAX
006af898  MOV dword ptr [ESP + 0x30],0xbf800000
006af8a0  JZ 0x006af8aa
006af8a2  MOV dword ptr [ESP + 0x30],0x3f800000
006af8aa  PUSH EAX
006af8ab  MOV ECX,ESI
006af8ad  CALL 0x00691ac0
006af8b2  FSTP ST0
006af8b4  MOV ECX,dword ptr [ESI + 0x160]
006af8ba  MOV EDX,dword ptr [ECX + 0x80]
006af8c0  MOV EAX,dword ptr [ESI + 0x84]
006af8c6  PUSH EAX
006af8c7  MOV ECX,ESI
006af8c9  MOV dword ptr [ESP + 0x48],EDX
006af8cd  CALL 0x00691ac0
006af8d2  FMUL float ptr [ESP + 0x44]
006af8d6  MOV ECX,dword ptr [ESI + 0x160]
006af8dc  FMUL float ptr [ESP + 0x30]
006af8e0  FSTP float ptr [ESP + 0x18]
006af8e4  FLD float ptr [ESI + 0xec]
006af8ea  FMUL float ptr [0x008a9394]
006af8f0  FSTP float ptr [ESP + 0x44]
006af8f4  FLD float ptr [ECX + 0x6c]
006af8f7  MOV EBX,dword ptr [ESP + 0x44]
006af8fb  FST float ptr [ESP + 0x28]
006af8ff  FCOMP float ptr [0x00890968]
006af905  FNSTSW AX
006af907  TEST AH,0x41
006af90a  JNZ 0x006af95d
006af90c  MOV EDX,dword ptr [ESI + 0x190]
006af912  MOV EAX,dword ptr [ESI + 0x14c]
006af918  MOV ECX,dword ptr [EAX + 0x5c]
006af91b  PUSH EDX
006af91c  PUSH ECX
006af91d  PUSH EBX
006af91e  CALL 0x00401ae0
006af923  FSUBR float ptr [0x0089096c]
006af929  MOV EDX,dword ptr [ESI + 0x4c]
006af92c  LEA ECX,[ESI + 0x4c]
006af92f  FMUL float ptr [ESP + 0x34]
006af933  ADD ESP,0xc
006af936  FMUL float ptr [ESI + 0x8c]
006af93c  FSTP float ptr [ESP + 0x28]
006af940  CALL dword ptr [EDX + 0x10]
006af943  TEST AL,AL
006af945  FLD float ptr [ESP + 0x28]
006af949  JZ 0x006af94f
006af94b  FMUL float ptr [ESP + 0x3c]
006af94f  FADD float ptr [0x0089096c]
006af955  FMUL float ptr [ESP + 0x18]
006af959  FSTP float ptr [ESP + 0x18]
006af95d  FLD float ptr [0x00890968]
006af963  FLD float ptr [ESP + 0x18]
006af967  FUCOMPP
006af969  FNSTSW AX
006af96b  TEST AH,0x44
006af96e  JP 0x006af97c
006af970  CMP dword ptr [ESI + 0x84],EDI
006af976  JNZ 0x006b00e1
006af97c  MOV EAX,dword ptr [ESI + 0x84]
006af982  TEST EAX,EAX
006af984  JZ 0x006af9a5
006af986  CMP EAX,0x2
006af989  JZ 0x006af9a5
006af98b  CMP EAX,EDI
006af98d  JNZ 0x006af99e
006af98f  CMP dword ptr [EBP],0x0
006af993  JNZ 0x006af9fe
006af995  MOV dword ptr [EBP],0x2
006af99c  JMP 0x006af9fe
006af99e  PUSH 0x3e800000
006af9a3  JMP 0x006af9f7
006af9a5  TEST EAX,EAX
006af9a7  FLD float ptr [0x008aae24]
006af9ad  JNZ 0x006af9b7
006af9af  FSTP ST0
006af9b1  FLD float ptr [0x008abe70]
006af9b7  FMUL float ptr [0x008a9398]
006af9bd  FADD float ptr [ESP + 0x34]
006af9c1  FCOM float ptr [ESI + 0xec]
006af9c7  FNSTSW AX
006af9c9  TEST AH,0x1
006af9cc  JNZ 0x006af9f0
006af9ce  FCOMP float ptr [ESI + 0xf4]
006af9d4  FNSTSW AX
006af9d6  TEST AH,0x1
006af9d9  JNZ 0x006af9f2
006af9db  FLD float ptr [ESI + 0x8c]
006af9e1  FCOMP float ptr [0x00890cd4]
006af9e7  FNSTSW AX
006af9e9  TEST AH,0x5
006af9ec  JP 0x006af9f2
006af9ee  JMP 0x006af98f
006af9f0  FSTP ST0
006af9f2  PUSH 0x3d4ccccd
006af9f7  MOV ECX,EBP
006af9f9  CALL 0x006919c0
006af9fe  MOV EAX,dword ptr [ESI]
006afa00  PUSH EBX
006afa01  MOV ECX,ESI
006afa03  CALL dword ptr [EAX + 0x50]
006afa06  FSTP float ptr [ESP + 0x20]
006afa0a  MOV ECX,dword ptr [ESP + 0x20]
006afa0e  PUSH EBX
006afa0f  PUSH ECX
006afa10  MOV ECX,ESI
006afa12  CALL 0x006a0910
006afa17  FST float ptr [ESP + 0x28]
006afa1b  MOV AL,byte ptr [ESP + 0x13]
006afa1f  TEST AL,AL
006afa21  JNZ 0x006afa73
006afa23  MOV ECX,dword ptr [ESI + 0x48]
006afa26  FSTP ST0
006afa28  MOV EDX,dword ptr [ECX]
006afa2a  CALL dword ptr [EDX + 0x28]
006afa2d  FCOMP float ptr [0x00890968]
006afa33  FNSTSW AX
006afa35  TEST AH,0x41
006afa38  JNZ 0x006afa6f
006afa3a  FLD float ptr [ESI + 0x8c]
006afa40  FCOMP float ptr [0x00890968]
006afa46  FNSTSW AX
006afa48  TEST AH,0x41
006afa4b  JNZ 0x006afa6f
006afa4d  FLD float ptr [ESI + 0x18c]
006afa53  MOV dword ptr [ESI + 0x8c],0x3f800000
006afa5d  FMUL float ptr [ESI + 0xfc]
006afa63  FSTP float ptr [ESP + 0x20]
006afa67  FLD float ptr [0x00890968]
006afa6d  JMP 0x006afa73
006afa6f  FLD float ptr [ESP + 0x28]
006afa73  FLD float ptr [ESI + 0xf4]
006afa79  MOV EBX,dword ptr [ESI + 0x84]
006afa7f  CMP EBX,0x1
006afa82  FLD float ptr [ESP + 0x24]
006afa86  FSUB float ptr [ESP + 0x34]
006afa8a  FDIV float ptr [ESP + 0x24]
006afa8e  FMUL float ptr [ESP + 0x18]
006afa92  FMUL float ptr [ESP + 0x1c]
006afa96  FADD float ptr [ESP + 0x34]
006afa9a  FSTP float ptr [ESP + 0x28]
006afa9e  FLD float ptr [ESP + 0x28]
006afaa2  MOV EAX,dword ptr [ESP + 0x28]
006afaa6  FSUB ST0,ST1
006afaa8  MOV dword ptr [ESI + 0xf4],EAX
006afaae  FDIV float ptr [ESP + 0x50]
006afab2  FSTP float ptr [ESP + 0x48]
006afab6  FSTP ST0
006afab8  JZ 0x006afadd
006afaba  CMP dword ptr [EBP],0x0
006afabe  JNZ 0x006afadd
006afac0  FLD float ptr [ESP + 0x30]
006afac4  FMUL ST1
006afac6  FMUL float ptr [ESP + 0x14]
006afaca  FCOMP float ptr [0x00890968]
006afad0  FNSTSW AX
006afad2  TEST AH,0x41
006afad5  JNZ 0x006afadd
006afad7  FMUL float ptr [0x008aac20]
006afadd  FLD float ptr [0x0089096c]
006afae3  MOV dword ptr [ESP + 0x1c],0x0
006afaeb  FSUB float ptr [ESI + 0x8c]
006afaf1  MOV dword ptr [ESP + 0x14],0x0
006afaf9  FMUL ST1
006afafb  FLD float ptr [ESP + 0x20]
006afaff  FMUL float ptr [ESI + 0x8c]
006afb05  FADDP
006afb07  FSTP float ptr [ESP + 0x20]
006afb0b  FSTP ST0
006afb0d  FLD float ptr [ESP + 0x20]
006afb11  FCOMP float ptr [0x00890968]
006afb17  FNSTSW AX
006afb19  TEST AH,0x5
006afb1c  JP 0x006afb25
006afb1e  MOV EAX,0x1
006afb23  JMP 0x006afb27
006afb25  XOR EAX,EAX
006afb27  CMP EBX,0x1
006afb2a  MOV byte ptr [ESI + 0x108],AL
006afb30  JZ 0x006afe47
006afb36  MOV EAX,dword ptr [EBP]
006afb39  XOR ECX,ECX
006afb3b  SUB EAX,ECX
006afb3d  JZ 0x006afc18
006afb43  DEC EAX
006afb44  JZ 0x006afb58
006afb46  DEC EAX
006afb47  JNZ 0x006afc34
006afb4d  MOV dword ptr [ESI + 0x104],ECX
006afb53  JMP 0x006afc34
006afb58  FLD float ptr [ESI + 0xec]
006afb5e  FSUB float ptr [ESP + 0x28]
006afb62  FCOM float ptr [0x008f8dc8]
006afb68  FNSTSW AX
006afb6a  TEST AH,0x41
006afb6d  JNZ 0x006afb79
006afb6f  FSTP ST0
006afb71  FLD float ptr [0x008f8dc8]
006afb77  JMP 0x006afb96
006afb79  FLD float ptr [0x008f8dc8]
006afb7f  FCHS
006afb81  FSTP float ptr [ESP + 0x1c]
006afb85  FCOM float ptr [ESP + 0x1c]
006afb89  FNSTSW AX
006afb8b  TEST AH,0x5
006afb8e  JP 0x006afb96
006afb90  FSTP ST0
006afb92  FLD float ptr [ESP + 0x1c]
006afb96  FLD float ptr [0x008f8d9c]
006afb9c  FLD float ptr [ESP + 0x28]
006afba0  FSUB float ptr [ESI + 0xec]
006afba6  FMUL float ptr [0x008a9394]
006afbac  FLD float ptr [0x00890968]
006afbb2  FLD float ptr [ESI + 0x104]
006afbb8  FUCOMPP
006afbba  FNSTSW AX
006afbbc  TEST AH,0x44
006afbbf  JNP 0x006afc06
006afbc1  FLD ST0
006afbc3  FMUL float ptr [ESI + 0x104]
006afbc9  FCOMP float ptr [0x00890968]
006afbcf  FNSTSW AX
006afbd1  TEST AH,0x5
006afbd4  JP 0x006afc06
006afbd6  FLD ST0
006afbd8  FABS
006afbda  FCOMP float ptr [0x008aac54]
006afbe0  FNSTSW AX
006afbe2  TEST AH,0x41
006afbe5  JNZ 0x006afc06
006afbe7  FLD float ptr [ESI + 0x104]
006afbed  FABS
006afbef  FCOMP float ptr [0x008aac54]
006afbf5  FNSTSW AX
006afbf7  TEST AH,0x41
006afbfa  JNZ 0x006afc06
006afbfc  FXCH
006afbfe  FMUL float ptr [0x008933d4]
006afc04  FXCH
006afc06  FSTP float ptr [ESI + 0x104]
006afc0c  FMULP
006afc0e  FMUL float ptr [ESP + 0x3c]
006afc12  FST float ptr [ESP + 0x1c]
006afc16  JMP 0x006afc2a
006afc18  FLD float ptr [ESP + 0x20]
006afc1c  MOV dword ptr [ESI + 0x104],ECX
006afc22  MOV ECX,dword ptr [ESP + 0x20]
006afc26  MOV dword ptr [ESP + 0x1c],ECX
006afc2a  FMUL float ptr [ESP + 0x2c]
006afc2e  FCHS
006afc30  FSTP float ptr [ESP + 0x14]
006afc34  CMP EBX,0x1
006afc37  JZ 0x006afe47
006afc3d  CMP dword ptr [EBP],0x0
006afc41  JNZ 0x006afd0f
006afc47  FLD float ptr [0x0089096c]
006afc4d  MOV EDX,dword ptr [ESI + 0x160]
006afc53  FDIV float ptr [ESP + 0x38]
006afc57  MOV ECX,ESI
006afc59  FLD float ptr [ESP + 0x14]
006afc5d  FADD float ptr [ESP + 0x20]
006afc61  FMUL ST1
006afc63  FSUB float ptr [ESP + 0x48]
006afc67  FSTP float ptr [ESP + 0x48]
006afc6b  FSTP float ptr [ESP + 0x28]
006afc6f  FLD float ptr [0x0089096c]
006afc75  FSUB float ptr [EDX + 0x70]
006afc78  FSTP float ptr [ESP + 0x3c]
006afc7c  CALL 0x00691c30
006afc81  TEST AL,AL
006afc83  MOV EDI,dword ptr [ESP + 0x18]
006afc87  JZ 0x006afcb0
006afc89  PUSH EDI
006afc8a  CALL 0x00401d10
006afc8f  FLD float ptr [0x0089096c]
006afc95  FSUB float ptr [ESP + 0x40]
006afc99  ADD ESP,0x4
006afc9c  FMUL ST1
006afc9e  FMUL ST1
006afca0  FMUL float ptr [0x00890ea8]
006afca6  FADD float ptr [ESP + 0x28]
006afcaa  FSTP float ptr [ESP + 0x28]
006afcae  FSTP ST0
006afcb0  MOV ECX,ESI
006afcb2  CALL 0x00691c10
006afcb7  TEST AL,AL
006afcb9  JZ 0x006afcd8
006afcbb  PUSH EDI
006afcbc  CALL 0x00401d10
006afcc1  FLD ST0
006afcc3  FMULP
006afcc5  ADD ESP,0x4
006afcc8  FMUL float ptr [ESP + 0x3c]
006afccc  FMUL float ptr [0x00890ea8]
006afcd2  FADD float ptr [ESP + 0x28]
006afcd6  JMP 0x006afcdc
006afcd8  FLD float ptr [ESP + 0x28]
006afcdc  FLD float ptr [ESP + 0x48]
006afce0  PUSH 0x0
006afce2  FDIV ST0,ST1
006afce4  FSTP float ptr [ESP + 0x40]
006afce8  MOV EAX,dword ptr [ESP + 0x40]
006afcec  PUSH EAX
006afced  FSTP ST0
006afcef  CALL 0x00401da0
006afcf4  FADD float ptr [ESP + 0x24]
006afcf8  ADD ESP,0x8
006afcfb  FSTP float ptr [ESP + 0x1c]
006afcff  FLD float ptr [ESP + 0x3c]
006afd03  FMUL float ptr [ESP + 0x2c]
006afd07  FSUBR float ptr [ESP + 0x14]
006afd0b  FSTP float ptr [ESP + 0x14]
006afd0f  CMP EBX,0x1
006afd12  JZ 0x006afe47
006afd18  CMP dword ptr [EBP],0x0
006afd1c  JNZ 0x006afddf
006afd22  MOV EAX,dword ptr [ESP + 0x40]
006afd26  TEST EAX,EAX
006afd28  JLE 0x006afddf
006afd2e  MOV ECX,ESI
006afd30  CALL 0x006922c0
006afd35  FLD float ptr [ESI + 0xf4]
006afd3b  FSUB float ptr [ESI + 0xec]
006afd41  FSTP float ptr [ESP + 0x3c]
006afd45  FLD float ptr [ESI + 0x8c]
006afd4b  FCOMP float ptr [0x00895074]
006afd51  FNSTSW AX
006afd53  TEST AH,0x41
006afd56  JNZ 0x006afda4
006afd58  FLD float ptr [ESP + 0x30]
006afd5c  FMUL ST1
006afd5e  FCOMP float ptr [0x00890cd4]
006afd64  FNSTSW AX
006afd66  FSTP ST0
006afd68  TEST AH,0x41
006afd6b  JNZ 0x006afda6
006afd6d  CMP dword ptr [ESI + 0x84],0x2
006afd74  JG 0x006afda6
006afd76  FLD float ptr [ESP + 0x3c]
006afd7a  FCOMP float ptr [0x00890968]
006afd80  FNSTSW AX
006afd82  TEST AH,0x5
006afd85  JP 0x006afda6
006afd87  FLD float ptr [ESI + 0xec]
006afd8d  PUSH ECX
006afd8e  FST float ptr [ESI + 0xf4]
006afd94  MOV ECX,ESI
006afd96  FDIV float ptr [ESP + 0x1c]
006afd9a  FSTP float ptr [ESP]
006afd9d  CALL 0x00692380
006afda2  JMP 0x006afddf
006afda4  FSTP ST0
006afda6  FLD float ptr [ESP + 0x20]
006afdaa  FABS
006afdac  FSTP float ptr [ESP + 0x40]
006afdb0  MOV ECX,dword ptr [ESP + 0x40]
006afdb4  FLD float ptr [ESP + 0x40]
006afdb8  FCHS
006afdba  PUSH ECX
006afdbb  SUB ESP,0x8
006afdbe  FSTP float ptr [ESP + 0x4]
006afdc2  FLD float ptr [ESP + 0x48]
006afdc6  FMUL float ptr [0x008f8d9c]
006afdcc  FSTP float ptr [ESP]
006afdcf  CALL 0x00402060
006afdd4  FADD float ptr [ESP + 0x20]
006afdd8  ADD ESP,0xc
006afddb  FSTP float ptr [ESP + 0x14]
006afddf  MOV EAX,dword ptr [ESI + 0x84]
006afde5  CMP EAX,0x2
006afde8  JZ 0x006afdee
006afdea  TEST EAX,EAX
006afdec  JNZ 0x006afe47
006afdee  FLD float ptr [ESP + 0x14]
006afdf2  FADD float ptr [ESP + 0x20]
006afdf6  FSTP float ptr [ESP + 0x30]
006afdfa  FLD float ptr [ESP + 0x14]
006afdfe  FCOMP float ptr [ESP + 0x20]
006afe02  FNSTSW AX
006afe04  TEST AH,0x5
006afe07  JP 0x006afe47
006afe09  FLD float ptr [ESP + 0x30]
006afe0d  FCOMP float ptr [0x00890968]
006afe13  FNSTSW AX
006afe15  TEST AH,0x5
006afe18  JP 0x006afe47
006afe1a  FLD float ptr [ESP + 0x30]
006afe1e  PUSH ECX
006afe1f  FMUL float ptr [0x00894200]
006afe25  MOV ECX,0x8f8fd8
006afe2a  FSTP float ptr [ESP]
006afe2d  CALL 0x00478d00
006afe32  MOV EDX,dword ptr [ESI + 0x160]
006afe38  FMUL float ptr [EDX + 0x74]
006afe3b  FMUL float ptr [ESP + 0x30]
006afe3f  FADD float ptr [ESP + 0x14]
006afe43  FSTP float ptr [ESP + 0x14]
006afe47  FLD float ptr [ESI + 0x1a8]
006afe4d  FCOMP float ptr [0x00890968]
006afe53  FNSTSW AX
006afe55  TEST AH,0x41
006afe58  JNZ 0x006afea9
006afe5a  CALL 0x006e8de0
006afe5f  FSUBR float ptr [ESI + 0x1a8]
006afe65  FCOM float ptr [0x00890968]
006afe6b  FNSTSW AX
006afe6d  TEST AH,0x41
006afe70  JP 0x006afe89
006afe72  MOV EAX,dword ptr [ESI + 0x78]
006afe75  FSTP ST0
006afe77  LEA ECX,[ESI + 0x78]
006afe7a  MOV dword ptr [ESI + 0x1a8],0x0
006afe84  CALL dword ptr [EAX + 0x8]
006afe87  JMP 0x006afea9
006afe89  FMUL float ptr [0x008abe6c]
006afe8f  FSIN
006afe91  FMUL float ptr [0x008933d4]
006afe97  FADD float ptr [0x0089096c]
006afe9d  FMUL float ptr [ESI + 0xec]
006afea3  FSTP float ptr [ESI + 0xec]
006afea9  MOV ECX,dword ptr [ESI + 0x84]
006afeaf  CMP ECX,0x1
006afeb2  JZ 0x006aff3a
006afeb8  FLD float ptr [ESI + 0x8c]
006afebe  FCOMP float ptr [0x00890968]
006afec4  FNSTSW AX
006afec6  TEST AH,0x41
006afec9  JNZ 0x006aff3a
006afecb  CMP ECX,0x2
006afece  JG 0x006aff3a
006afed0  CMP dword ptr [EBP],0x0
006afed4  JNZ 0x006aff3a
006afed6  FLD float ptr [ESP + 0x14]
006afeda  FMUL float ptr [ESP + 0x20]
006afede  FCOMP float ptr [0x00890968]
006afee4  FNSTSW AX
006afee6  TEST AH,0x5
006afee9  JP 0x006aff3a
006afeeb  MOV ECX,dword ptr [ESI + 0x190]
006afef1  MOV EDX,dword ptr [ESI + 0x14c]
006afef7  MOV EAX,dword ptr [EDX + 0x5c]
006afefa  PUSH ECX
006afefb  MOV ECX,dword ptr [ESP + 0x48]
006afeff  PUSH EAX
006aff00  PUSH ECX
006aff01  CALL 0x00401ae0
006aff06  FMUL float ptr [ESI + 0x8c]
006aff0c  MOV EDX,dword ptr [ESI + 0x160]
006aff12  ADD ESP,0xc
006aff15  FSUBR float ptr [0x0089096c]
006aff1b  FLD float ptr [EDX + 0x74]
006aff1e  FMUL float ptr [ESI + 0x8c]
006aff24  FMULP
006aff26  FSUBR float ptr [0x0089096c]
006aff2c  FLD ST0
006aff2e  FMUL ST1
006aff30  FMUL float ptr [ESP + 0x14]
006aff34  FSTP float ptr [ESP + 0x14]
006aff38  FSTP ST0
006aff3a  FLD float ptr [ESP + 0x14]
006aff3e  MOV EAX,dword ptr [ESP + 0x24]
006aff42  FADD float ptr [ESP + 0x20]
006aff46  MOV ECX,dword ptr [ESP + 0x34]
006aff4a  PUSH EAX
006aff4b  PUSH ECX
006aff4c  FDIV float ptr [ESP + 0x40]
006aff50  PUSH ECX
006aff51  FST float ptr [ESI + 0xf0]
006aff57  FMUL float ptr [ESP + 0x5c]
006aff5b  FADD float ptr [ESI + 0xec]
006aff61  FSTP float ptr [ESP]
006aff64  CALL 0x00401d70
006aff69  FSTP float ptr [ESI + 0xec]
006aff6f  ADD ESP,0xc
006aff72  FLD float ptr [0x00890968]
006aff78  FLD float ptr [ESP + 0x18]
006aff7c  FUCOMPP
006aff7e  FNSTSW AX
006aff80  TEST AH,0x44
006aff83  JNP 0x006aff98
006aff85  FLD float ptr [ESP + 0x24]
006aff89  PUSH ECX
006aff8a  FDIV float ptr [ESP + 0x1c]
006aff8e  MOV ECX,ESI
006aff90  FSTP float ptr [ESP]
006aff93  CALL 0x00692690
006aff98  FLD float ptr [ESI + 0xf4]
006aff9e  FCOMP float ptr [ESP + 0x24]
006affa2  FNSTSW AX
006affa4  TEST AH,0x41
006affa7  JNZ 0x006afff6
006affa9  FLD float ptr [0x00890968]
006affaf  FLD float ptr [ESP + 0x18]
006affb3  FUCOMPP
006affb5  FNSTSW AX
006affb7  TEST AH,0x44
006affba  JNP 0x006afff6
006affbc  FLD float ptr [ESP + 0x1c]
006affc0  FMUL float ptr [ESP + 0x18]
006affc4  FCOMP float ptr [0x00890968]
006affca  FNSTSW AX
006affcc  TEST AH,0x41
006affcf  JNZ 0x006affd9
006affd1  MOV dword ptr [ESP + 0x1c],0x0
006affd9  FLD float ptr [ESP + 0x24]
006affdd  MOV EDX,dword ptr [ESP + 0x24]
006affe1  FDIV float ptr [ESP + 0x18]
006affe5  PUSH ECX
006affe6  MOV ECX,ESI
006affe8  MOV dword ptr [ESI + 0xf4],EDX
006affee  FSTP float ptr [ESP]
006afff1  CALL 0x00692380
006afff6  FLD float ptr [ESP + 0x1c]
006afffa  FCOMP float ptr [0x00890968]
006b0000  FNSTSW AX
006b0002  TEST AH,0x41
006b0005  JNZ 0x006b002a
006b0007  MOV ECX,dword ptr [ESI + 0x118]
006b000d  TEST ECX,ECX
006b000f  JZ 0x006b002a
006b0011  MOV EAX,dword ptr [ECX]
006b0013  CALL dword ptr [EAX + 0x4]
006b0016  FMUL float ptr [0x008933d4]
006b001c  FADD float ptr [0x0089096c]
006b0022  FMUL float ptr [ESP + 0x1c]
006b0026  FSTP float ptr [ESP + 0x1c]
006b002a  MOV ECX,dword ptr [ESI + 0x84]
006b0030  PUSH ECX
006b0031  MOV ECX,ESI
006b0033  CALL 0x00691af0
006b0038  FMUL float ptr [ESP + 0x1c]
006b003c  MOV EDX,dword ptr [ESI]
006b003e  MOV ECX,ESI
006b0040  FMUL float ptr [ESP + 0x18]
006b0044  FSTP float ptr [ESI + 0x80]
006b004a  CALL dword ptr [EDX + 0x2c]
006b004d  TEST AL,AL
006b004f  JNZ 0x006b005b
006b0051  CMP dword ptr [EBP],0x2
006b0055  JZ 0x006b005b
006b0057  XOR BL,BL
006b0059  JMP 0x006b005d
006b005b  MOV BL,0x1
006b005d  MOV EAX,dword ptr [ESP + 0x38]
006b0061  FLD float ptr [ESI + 0xec]
006b0067  FMUL float ptr [0x008a9394]
006b006d  MOV EDX,dword ptr [ESI + 0x180]
006b0073  PUSH EAX
006b0074  MOV EAX,dword ptr [ESP + 0x54]
006b0078  LEA ECX,[ESI + 0x4c]
006b007b  PUSH ECX
006b007c  FSTP float ptr [ESP]
006b007f  PUSH EDX
006b0080  MOV EDX,dword ptr [ECX]
006b0082  PUSH EAX
006b0083  CALL dword ptr [EDX + 0x4]
006b0086  PUSH EAX
006b0087  PUSH EBX
006b0088  CALL 0x006927a0
006b008d  FSTP float ptr [ESI + 0x180]
006b0093  MOV EAX,dword ptr [EBP]
006b0096  ADD ESP,0x18
006b0099  TEST EAX,EAX
006b009b  JNZ 0x006b00d7
006b009d  MOV ECX,dword ptr [ESI + 0x48]
006b00a0  MOV EAX,dword ptr [ECX]
006b00a2  CALL dword ptr [EAX + 0x20]
006b00a5  TEST AL,AL
006b00a7  JNZ 0x006b00d7
006b00a9  FLD float ptr [ESI + 0xf4]
006b00af  MOV EAX,dword ptr [ESI + 0x84]
006b00b5  FMUL float ptr [0x008a9394]
006b00bb  MOV EDX,dword ptr [ESI]
006b00bd  PUSH ECX
006b00be  MOV ECX,ESI
006b00c0  FSTP float ptr [ESP]
006b00c3  PUSH EAX
006b00c4  CALL dword ptr [EDX + 0x4c]
006b00c7  POP EDI
006b00c8  POP EBX
006b00c9  MOV dword ptr [ESI + 0x188],EAX
006b00cf  POP ESI
006b00d0  POP EBP
006b00d1  ADD ESP,0x3c
006b00d4  RET 0x4
006b00d7  MOV dword ptr [ESI + 0x188],0x0
006b00e1  POP EDI
006b00e2  POP EBX
006b00e3  POP ESI
006b00e4  POP EBP
006b00e5  ADD ESP,0x3c
006b00e8  RET 0x4
