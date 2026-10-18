006ad4f0  SUB ESP,0x10c
006ad4f6  PUSH EBX
006ad4f7  PUSH EBP
006ad4f8  MOV EBP,ECX
006ad4fa  MOV EDX,dword ptr [EBP + 0xf4]
006ad500  PUSH ESI
006ad501  MOV ESI,dword ptr [ESP + 0x11c]
006ad508  MOV EAX,dword ptr [ESI + 0xc0]
006ad50e  MOV dword ptr [ESP + 0x84],EAX
006ad515  MOV EAX,dword ptr [ESI + 0x5c]
006ad518  MOV dword ptr [EDX + 0xc8],EAX
006ad51e  MOV EDX,dword ptr [EBP + 0xf4]
006ad524  MOV EAX,dword ptr [ESI + 0x7c]
006ad527  MOV dword ptr [EDX + 0xcc],EAX
006ad52d  MOV EDX,dword ptr [EBP + 0xf8]
006ad533  MOV EAX,dword ptr [ESI + 0x5c]
006ad536  MOV dword ptr [EDX + 0xc8],EAX
006ad53c  MOV EDX,dword ptr [EBP + 0xf8]
006ad542  MOV EAX,dword ptr [ESI + 0x7c]
006ad545  MOV dword ptr [EDX + 0xcc],EAX
006ad54b  MOV EDX,dword ptr [EBP + 0xfc]
006ad551  MOV EAX,dword ptr [ESI + 0x5c]
006ad554  MOV dword ptr [EDX + 0xc8],EAX
006ad55a  MOV EDX,dword ptr [EBP + 0xfc]
006ad560  MOV EAX,dword ptr [ESI + 0x7c]
006ad563  MOV dword ptr [EDX + 0xcc],EAX
006ad569  MOV EDX,dword ptr [EBP + 0x100]
006ad56f  MOV EAX,dword ptr [ESI + 0x5c]
006ad572  LEA ECX,[EBP + 0xf4]
006ad578  MOV dword ptr [EDX + 0xc8],EAX
006ad57e  MOV EDX,dword ptr [EBP + 0x100]
006ad584  MOV EAX,dword ptr [ESI + 0x7c]
006ad587  MOV dword ptr [EDX + 0xcc],EAX
006ad58d  MOV EAX,dword ptr [ESI + 0xac]
006ad593  MOV dword ptr [ESP + 0x78],EAX
006ad597  LEA EAX,[ESI + 0x70]
006ad59a  PUSH EDI
006ad59b  MOV EDI,dword ptr [EAX]
006ad59d  MOV dword ptr [ESP + 0x10],EDI
006ad5a1  MOV EDI,dword ptr [EAX + 0x4]
006ad5a4  MOV EAX,dword ptr [EAX + 0x8]
006ad5a7  MOV dword ptr [ESP + 0x18],EAX
006ad5ab  FLD float ptr [ESP + 0x18]
006ad5af  FMUL float ptr [ESI + 0x20]
006ad5b2  MOV dword ptr [ESP + 0x14],EDI
006ad5b6  FLD float ptr [ESP + 0x10]
006ad5ba  XOR EDX,EDX
006ad5bc  FMUL float ptr [ESI]
006ad5be  MOV dword ptr [ESP + 0x54],EDX
006ad5c2  MOV dword ptr [ESP + 0x30],EDX
006ad5c6  FADDP
006ad5c8  FLD float ptr [ESP + 0x14]
006ad5cc  FMUL float ptr [ESI + 0x10]
006ad5cf  FADDP
006ad5d1  FSTP float ptr [ESP + 0x104]
006ad5d8  FLD float ptr [ESP + 0x10]
006ad5dc  FMUL float ptr [ESI + 0x4]
006ad5df  FLD float ptr [ESP + 0x14]
006ad5e3  FMUL float ptr [ESI + 0x14]
006ad5e6  FADDP
006ad5e8  FLD float ptr [ESP + 0x18]
006ad5ec  FMUL float ptr [ESI + 0x24]
006ad5ef  FADDP
006ad5f1  FSTP float ptr [ESP + 0x108]
006ad5f8  FLD float ptr [ESP + 0x14]
006ad5fc  FMUL float ptr [ESI + 0x18]
006ad5ff  FLD float ptr [ESP + 0x18]
006ad603  FMUL float ptr [ESI + 0x28]
006ad606  FADDP
006ad608  FLD float ptr [ESP + 0x10]
006ad60c  FMUL float ptr [ESI + 0x8]
006ad60f  FADDP
006ad611  FSTP float ptr [ESP + 0x10c]
006ad618  MOV EAX,dword ptr [EBP + 0xc0]
006ad61e  FLD float ptr [EAX + 0x30]
006ad621  MOV EDI,dword ptr [EAX + 0x8]
006ad624  FMUL float ptr [0x008aae8c]
006ad62a  MOV dword ptr [ESP + 0xe4],EDI
006ad631  MOV EDI,dword ptr [EBP + 0xf8]
006ad637  MOV byte ptr [ESP + 0x2f],DL
006ad63b  FSTP float ptr [ESP + 0xfc]
006ad642  FLD float ptr [EAX + 0x38]
006ad645  MOV dword ptr [ESP + 0x50],EDX
006ad649  FMUL float ptr [0x008aae8c]
006ad64f  MOV dword ptr [ESP + 0x38],ECX
006ad653  FSTP float ptr [ESP + 0xec]
006ad65a  FLD float ptr [EAX + 0x48]
006ad65d  FMUL float ptr [0x008aae8c]
006ad663  FLD float ptr [EAX + 0x10]
006ad666  FMUL float ptr [0x008a9388]
006ad66c  FSTP float ptr [ESP + 0xf4]
006ad673  FLD float ptr [EAX + 0x18]
006ad676  FMUL float ptr [0x008a9388]
006ad67c  FSTP float ptr [ESP + 0xcc]
006ad683  FLD float ptr [EAX + 0x34]
006ad686  FMUL float ptr [0x008aae8c]
006ad68c  FSTP float ptr [ESP + 0x100]
006ad693  FLD float ptr [EAX + 0x3c]
006ad696  FMUL float ptr [0x008aae8c]
006ad69c  FSTP float ptr [ESP + 0xf0]
006ad6a3  FLD float ptr [EAX + 0x4c]
006ad6a6  FMUL float ptr [0x008aae8c]
006ad6ac  FLD float ptr [EAX + 0x14]
006ad6af  FMUL float ptr [0x008a9388]
006ad6b5  FSTP float ptr [ESP + 0xf8]
006ad6bc  FLD float ptr [EAX + 0x1c]
006ad6bf  MOV EAX,dword ptr [EAX + 0xc]
006ad6c2  FMUL float ptr [0x008a9388]
006ad6c8  MOV dword ptr [ESP + 0xe8],EAX
006ad6cf  MOV EAX,dword ptr [ECX]
006ad6d1  FSTP float ptr [ESP + 0xd0]
006ad6d8  FLD float ptr [EAX + 0x78]
006ad6db  MOV EAX,dword ptr [EBP + 0xfc]
006ad6e1  FSUB float ptr [EDI + 0x78]
006ad6e4  MOV EDI,dword ptr [EBP + 0x100]
006ad6ea  FMUL ST2
006ad6ec  FST float ptr [ESP + 0xd4]
006ad6f3  FCHS
006ad6f5  FSTP float ptr [ESP + 0xd8]
006ad6fc  FLD float ptr [EAX + 0x78]
006ad6ff  FSUB float ptr [EDI + 0x78]
006ad702  FMUL ST1
006ad704  FSTP float ptr [ESP + 0xdc]
006ad70b  FSTP ST0
006ad70d  FSTP ST0
006ad70f  FLD float ptr [ESP + 0xdc]
006ad716  FCHS
006ad718  FSTP float ptr [ESP + 0xe0]
006ad71f  NOP
006ad720  FLD float ptr [ESI + 0x84]
006ad726  MOV ECX,dword ptr [ESP + 0x38]
006ad72a  MOV EDX,dword ptr [ESI + 0xd8]
006ad730  FADD ST0,ST0
006ad732  MOV EDI,dword ptr [ECX]
006ad734  MOV EAX,dword ptr [EDI + 0xc4]
006ad73a  MOV EBX,dword ptr [ESP + 0x50]
006ad73e  PUSH ECX
006ad73f  MOV ECX,dword ptr [ESI + 0xc0]
006ad745  FSTP float ptr [ESP]
006ad748  PUSH EDX
006ad749  PUSH 0x1
006ad74b  PUSH EAX
006ad74c  PUSH ECX
006ad74d  LEA EDX,[ESP + 0x118]
006ad754  PUSH EDX
006ad755  PUSH ESI
006ad756  LEA EAX,[ESI + 0x50]
006ad759  PUSH EAX
006ad75a  LEA EAX,[ESI + 0x60]
006ad75d  PUSH EAX
006ad75e  MOV ECX,EDI
006ad760  SHR EBX,0x1
006ad762  CALL 0x00671530
006ad767  MOV EDX,dword ptr [EDI + 0x44]
006ad76a  MOV ECX,dword ptr [EDI + 0x40]
006ad76d  MOV EAX,dword ptr [EDI + 0x3c]
006ad770  MOV dword ptr [ESP + 0x44],EDX
006ad774  MOV EDX,dword ptr [ESI + 0x28]
006ad777  MOV dword ptr [ESP + 0x40],ECX
006ad77b  MOV ECX,dword ptr [ESI + 0x24]
006ad77e  MOV dword ptr [ESP + 0x60],EDX
006ad782  FLD float ptr [ESP + 0x60]
006ad786  FMUL float ptr [ESP + 0x40]
006ad78a  MOV dword ptr [ESP + 0x5c],ECX
006ad78e  FLD float ptr [ESP + 0x5c]
006ad792  MOV dword ptr [ESP + 0x3c],EAX
006ad796  FMUL float ptr [ESP + 0x44]
006ad79a  MOV EAX,dword ptr [ESI + 0x20]
006ad79d  MOV dword ptr [ESP + 0x58],EAX
006ad7a1  FSUBP
006ad7a3  FSTP float ptr [ESP + 0xc0]
006ad7aa  MOV EAX,dword ptr [ESP + 0xc0]
006ad7b1  FLD float ptr [ESP + 0x44]
006ad7b5  MOV dword ptr [ESP + 0x10],EAX
006ad7b9  FMUL float ptr [ESP + 0x58]
006ad7bd  LEA EAX,[ESP + 0x10]
006ad7c1  FLD float ptr [ESP + 0x60]
006ad7c5  PUSH EAX
006ad7c6  FMUL float ptr [ESP + 0x40]
006ad7ca  FSUBP
006ad7cc  FSTP float ptr [ESP + 0xc8]
006ad7d3  MOV ECX,dword ptr [ESP + 0xc8]
006ad7da  FLD float ptr [ESP + 0x60]
006ad7de  MOV dword ptr [ESP + 0x18],ECX
006ad7e2  FMUL float ptr [ESP + 0x40]
006ad7e6  MOV ECX,EAX
006ad7e8  FLD float ptr [ESP + 0x44]
006ad7ec  PUSH ECX
006ad7ed  FMUL float ptr [ESP + 0x60]
006ad7f1  FSUBP
006ad7f3  FSTP float ptr [ESP + 0xd0]
006ad7fa  MOV EDX,dword ptr [ESP + 0xd0]
006ad801  MOV dword ptr [ESP + 0x20],EDX
006ad805  CALL 0x0040fe20
006ad80a  FLD float ptr [ESP + 0x48]
006ad80e  FMUL float ptr [ESI + 0x14]
006ad811  MOV EDX,dword ptr [EDI + 0x48]
006ad814  FLD float ptr [ESP + 0x4c]
006ad818  ADD ESP,0x8
006ad81b  FMUL float ptr [ESI + 0x18]
006ad81e  MOV dword ptr [ESP + 0xa4],EDX
006ad825  FADDP
006ad827  FLD float ptr [ESP + 0x3c]
006ad82b  FMUL float ptr [ESI + 0x10]
006ad82e  FADDP
006ad830  FST float ptr [ESP + 0x28]
006ad834  FCOMP float ptr [0x0089096c]
006ad83a  FNSTSW AX
006ad83c  TEST AH,0x5
006ad83f  JP 0x006ad8f5
006ad845  FLD float ptr [ESP + 0x28]
006ad849  FLD float ptr [0x00890968]
006ad84f  FCOMP float ptr [ESP + 0x28]
006ad853  FNSTSW AX
006ad855  TEST AH,0x41
006ad858  JNZ 0x006ad862
006ad85a  FSTP ST0
006ad85c  FLD float ptr [0x00890968]
006ad862  FLD ST0
006ad864  FMUL float ptr [ESP + EBX*0x4 + 0xcc]
006ad86b  FADD float ptr [ESP + 0xa4]
006ad872  FLD float ptr [ESP + EBX*0x4 + 0xf4]
006ad879  FSTP float ptr [ESP + 0x28]
006ad87d  FLD float ptr [0x00890968]
006ad883  FLD float ptr [EDI + 0x78]
006ad886  FUCOMPP
006ad888  FNSTSW AX
006ad88a  TEST AH,0x44
006ad88d  JP 0x006ad8ac
006ad88f  FLD float ptr [ESP + 0x28]
006ad893  FSUBR ST0,ST1
006ad895  FLD float ptr [ESP + 0x30]
006ad899  FCOMP
006ad89b  FNSTSW AX
006ad89d  TEST AH,0x41
006ad8a0  JNZ 0x006ad8a8
006ad8a2  FSTP ST0
006ad8a4  FLD float ptr [ESP + 0x30]
006ad8a8  FSTP float ptr [ESP + 0x30]
006ad8ac  FCOM float ptr [0x00890968]
006ad8b2  FNSTSW AX
006ad8b4  TEST AH,0x41
006ad8b7  JZ 0x006ad8c1
006ad8b9  FSTP ST0
006ad8bb  FLD float ptr [0x00890968]
006ad8c1  FCOM float ptr [ESP + 0x28]
006ad8c5  FST float ptr [ESP + 0x34]
006ad8c9  FNSTSW AX
006ad8cb  TEST AH,0x41
006ad8ce  JNZ 0x006ad900
006ad8d0  FSUB float ptr [ESP + 0x28]
006ad8d4  FLD float ptr [ESP + 0x30]
006ad8d8  FCOMP
006ad8da  FNSTSW AX
006ad8dc  TEST AH,0x41
006ad8df  JNZ 0x006ad8e7
006ad8e1  FSTP ST0
006ad8e3  FLD float ptr [ESP + 0x30]
006ad8e7  MOV EAX,dword ptr [ESP + 0x28]
006ad8eb  FSTP float ptr [ESP + 0x30]
006ad8ef  MOV dword ptr [ESP + 0x34],EAX
006ad8f3  JMP 0x006ad902
006ad8f5  FLD float ptr [0x0089096c]
006ad8fb  JMP 0x006ad862
006ad900  FSTP ST0
006ad902  FLD float ptr [ESP + 0x34]
006ad906  FCOMP float ptr [0x00890968]
006ad90c  FNSTSW AX
006ad90e  TEST AH,0x41
006ad911  JNZ 0x006adc90
006ad917  FCOM float ptr [0x008f8760]
006ad91d  FNSTSW AX
006ad91f  TEST AH,0x41
006ad922  JNZ 0x006adc90
006ad928  FLD float ptr [ESP + 0x34]
006ad92c  MOV ECX,dword ptr [EBP + 0xc0]
006ad932  FMUL float ptr [ESP + EBX*0x4 + 0xe4]
006ad939  MOV EAX,dword ptr [ESP + 0x54]
006ad93d  INC EAX
006ad93e  MOV dword ptr [ESP + 0x54],EAX
006ad942  FADD float ptr [0x0089096c]
006ad948  FMUL float ptr [ESP + EBX*0x4 + 0xec]
006ad94f  FMUL float ptr [ESP + 0x34]
006ad953  FLD float ptr [0x0089096c]
006ad959  FDIV float ptr [ESP + 0x88]
006ad960  FSTP float ptr [ESP + 0x28]
006ad964  FLD float ptr [ESP + 0x34]
006ad968  FSUB float ptr [EDI + 0x78]
006ad96b  FMUL float ptr [ESP + 0x28]
006ad96f  FMUL float ptr [ESP + EBX*0x4 + 0xfc]
006ad976  FLD float ptr [ESP + 0x7c]
006ad97a  FMUL float ptr [ECX + 0x58]
006ad97d  FMUL float ptr [0x00891608]
006ad983  FLD ST1
006ad985  FCOMPP
006ad987  FNSTSW AX
006ad989  TEST AH,0x41
006ad98c  JNZ 0x006ad996
006ad98e  FSTP ST0
006ad990  FLD float ptr [0x00890968]
006ad996  MOV EDX,dword ptr [ESP + 0x50]
006ad99a  FADD float ptr [ESP + EDX*0x4 + 0xd4]
006ad9a1  FADDP
006ad9a3  FCOM float ptr [0x00890968]
006ad9a9  FNSTSW AX
006ad9ab  TEST AH,0x41
006ad9ae  JNZ 0x006ad9b6
006ad9b0  FSTP float ptr [ESP + 0x4c]
006ad9b4  JMP 0x006ad9c0
006ad9b6  FSTP ST0
006ad9b8  MOV dword ptr [ESP + 0x4c],0x0
006ad9c0  FLD float ptr [ESI + 0x10]
006ad9c3  MOV EAX,dword ptr [ESI + 0x18]
006ad9c6  FLD float ptr [ESI + 0x14]
006ad9c9  MOV dword ptr [ESP + 0x118],EAX
006ad9d0  FLD float ptr [ESP + 0x4c]
006ad9d4  FMUL ST2
006ad9d6  FSTP float ptr [ESP + 0x64]
006ad9da  FMUL float ptr [ESP + 0x4c]
006ad9de  FSTP float ptr [ESP + 0x68]
006ad9e2  FSTP ST0
006ad9e4  FLD float ptr [ESP + 0x118]
006ad9eb  FMUL float ptr [ESP + 0x4c]
006ad9ef  FSTP float ptr [ESP + 0x6c]
006ad9f3  FMUL float ptr [0x00890e98]
006ad9f9  FSUB float ptr [0x008aac70]
006ad9ff  FCOM float ptr [0x00894b58]
006ada05  FNSTSW AX
006ada07  TEST AH,0x41
006ada0a  JNZ 0x006ada15
006ada0c  FSTP float ptr [ESP + 0x80]
006ada13  JMP 0x006ada22
006ada15  FSTP ST0
006ada17  MOV dword ptr [ESP + 0x80],0x3e99999a
006ada22  FLD float ptr [EDI + 0x8c]
006ada28  PUSH ECX
006ada29  FLD float ptr [EDI + 0x90]
006ada2f  FLD float ptr [EDI + 0x94]
006ada35  FLD ST0
006ada37  FMUL ST1
006ada39  FLD ST2
006ada3b  FMUL ST3
006ada3d  FADDP
006ada3f  FLD ST3
006ada41  FMUL ST4
006ada43  FADDP
006ada45  FSTP float ptr [ESP]
006ada48  FSTP ST0
006ada4a  FSTP ST0
006ada4c  FSTP ST0
006ada4e  CALL 0x005c5e80
006ada53  FSTP ST0
006ada55  MOV ECX,dword ptr [ESI + 0xc0]
006ada5b  FLD float ptr [ESP + 0x18]
006ada5f  ADD ESP,0x4
006ada62  FMUL float ptr [EDI + 0x90]
006ada68  PUSH ECX
006ada69  FLD float ptr [ESP + 0x14]
006ada6d  SUB ESP,0x8
006ada70  FMUL float ptr [EDI + 0x8c]
006ada76  MOV ECX,EDI
006ada78  FADDP
006ada7a  FLD float ptr [ESP + 0x24]
006ada7e  FMUL float ptr [EDI + 0x94]
006ada84  FADDP
006ada86  FSTP float ptr [ESP + 0x54]
006ada8a  FLD float ptr [ESP + 0x8c]
006ada91  MOV EDX,dword ptr [ESP + 0x54]
006ada95  FMUL float ptr [ESP + 0x58]
006ada99  FSTP float ptr [ESP + 0x4]
006ada9d  FLD float ptr [ESP + 0x68]
006adaa1  FMUL float ptr [EDI + 0x90]
006adaa7  FLD float ptr [ESP + 0x6c]
006adaab  FMUL float ptr [EDI + 0x94]
006adab1  FADDP
006adab3  FLD float ptr [ESP + 0x64]
006adab7  FMUL float ptr [EDI + 0x8c]
006adabd  FADDP
006adabf  FSTP float ptr [ESP]
006adac2  PUSH EDX
006adac3  CALL 0x006906b0
006adac8  FLD float ptr [ESP + 0x28]
006adacc  FMUL float ptr [ESP + 0x48]
006adad0  MOV EAX,dword ptr [EDI + 0xd8]
006adad6  FLD float ptr [ESP + 0x7c]
006adada  MOV dword ptr [ESP + 0x84],EAX
006adae1  FMUL float ptr [0x008910f0]
006adae7  FMULP
006adae9  FCOM float ptr [0x00890968]
006adaef  FNSTSW AX
006adaf1  TEST AH,0x5
006adaf4  JP 0x006adaf8
006adaf6  FCHS
006adaf8  FLD ST0
006adafa  FCHS
006adafc  FSTP float ptr [ESP + 0x48]
006adb00  FLD float ptr [ESP + 0x84]
006adb07  FCOMP
006adb09  FNSTSW AX
006adb0b  TEST AH,0x5
006adb0e  JP 0x006adb19
006adb10  FSTP ST0
006adb12  FLD float ptr [ESP + 0x84]
006adb19  FLD float ptr [ESP + 0x48]
006adb1d  FCOMP
006adb1f  FNSTSW AX
006adb21  TEST AH,0x41
006adb24  JNZ 0x006adb2c
006adb26  FSTP ST0
006adb28  FLD float ptr [ESP + 0x48]
006adb2c  FLD float ptr [ESP + 0x10]
006adb30  FMUL ST1
006adb32  FLD float ptr [ESP + 0x14]
006adb36  FMUL ST2
006adb38  FSTP float ptr [ESP + 0x9c]
006adb3f  MOV ECX,dword ptr [ESP + 0x9c]
006adb46  FLD float ptr [ESP + 0x18]
006adb4a  MOV dword ptr [ESP + 0xb8],ECX
006adb51  FMUL ST2
006adb53  MOV dword ptr [ESP + 0x74],ECX
006adb57  FSTP float ptr [ESP + 0xa0]
006adb5e  MOV EDX,dword ptr [ESP + 0xa0]
006adb65  MOV dword ptr [ESP + 0xbc],EDX
006adb6c  FSTP float ptr [ESP + 0xb4]
006adb73  MOV EAX,dword ptr [ESP + 0xb4]
006adb7a  MOV dword ptr [ESP + 0x70],EAX
006adb7e  FSTP ST0
006adb80  MOV dword ptr [ESP + 0x78],EDX
006adb84  FLD float ptr [ESP + 0x14]
006adb88  FMUL float ptr [ESP + 0x44]
006adb8c  FLD float ptr [ESP + 0x18]
006adb90  FMUL float ptr [ESP + 0x40]
006adb94  FSUBP
006adb96  FSTP float ptr [ESP + 0xa8]
006adb9d  MOV EAX,dword ptr [ESP + 0xa8]
006adba4  FLD float ptr [ESP + 0x18]
006adba8  MOV dword ptr [ESP + 0x1c],EAX
006adbac  FMUL float ptr [ESP + 0x3c]
006adbb0  LEA EAX,[ESP + 0x1c]
006adbb4  FLD float ptr [ESP + 0x44]
006adbb8  PUSH EAX
006adbb9  FMUL float ptr [ESP + 0x14]
006adbbd  FSUBP
006adbbf  FSTP float ptr [ESP + 0xb0]
006adbc6  MOV ECX,dword ptr [ESP + 0xb0]
006adbcd  FLD float ptr [ESP + 0x44]
006adbd1  MOV dword ptr [ESP + 0x24],ECX
006adbd5  FMUL float ptr [ESP + 0x14]
006adbd9  MOV ECX,EAX
006adbdb  FLD float ptr [ESP + 0x18]
006adbdf  PUSH ECX
006adbe0  FMUL float ptr [ESP + 0x44]
006adbe4  FSUBP
006adbe6  FSTP float ptr [ESP + 0xb8]
006adbed  MOV EDX,dword ptr [ESP + 0xb8]
006adbf4  MOV dword ptr [ESP + 0x2c],EDX
006adbf8  CALL 0x0040fe20
006adbfd  FLD float ptr [EDI + 0xdc]
006adc03  FLD float ptr [ESP + 0x24]
006adc07  LEA EDX,[EDI + 0x5c]
006adc0a  FMUL ST1
006adc0c  ADD ESP,0x8
006adc0f  FLD float ptr [ESP + 0x20]
006adc13  FMUL ST2
006adc15  FSTP float ptr [ESP + 0x20]
006adc19  FLD float ptr [ESP + 0x24]
006adc1d  FMUL ST2
006adc1f  FSTP float ptr [ESP + 0x24]
006adc23  FADD float ptr [ESP + 0x70]
006adc27  FSTP ST1
006adc29  FLD float ptr [ESP + 0x74]
006adc2d  FADD float ptr [ESP + 0x20]
006adc31  FLD float ptr [ESP + 0x78]
006adc35  FADD float ptr [ESP + 0x24]
006adc39  FSTP float ptr [ESP + 0x94]
006adc40  FXCH
006adc42  FADD float ptr [ESP + 0x64]
006adc46  FSTP float ptr [ESP + 0x8c]
006adc4d  MOV EAX,dword ptr [ESP + 0x8c]
006adc54  MOV dword ptr [EDX],EAX
006adc56  FADD float ptr [ESP + 0x68]
006adc5a  FSTP float ptr [ESP + 0x90]
006adc61  FLD float ptr [ESP + 0x94]
006adc68  FADD float ptr [ESP + 0x6c]
006adc6c  FSTP float ptr [ESP + 0x94]
006adc73  MOV ECX,dword ptr [ESP + 0x90]
006adc7a  MOV EAX,dword ptr [ESP + 0x94]
006adc81  MOV dword ptr [EDX + 0x4],ECX
006adc84  MOV dword ptr [EDX + 0x8],EAX
006adc87  MOV byte ptr [ESP + 0x2f],0x1
006adc8c  XOR ECX,ECX
006adc8e  JMP 0x006adcfa
006adc90  MOV EDX,dword ptr [0x008a2fb4]
006adc96  FSTP ST0
006adc98  FLD float ptr [EDI + 0xcc]
006adc9e  LEA ECX,[EDI + 0x5c]
006adca1  FCOMP float ptr [0x00890968]
006adca7  MOV dword ptr [ECX],EDX
006adca9  MOV EAX,[0x008a2fb8]
006adcae  MOV dword ptr [ECX + 0x4],EAX
006adcb1  MOV EDX,dword ptr [0x008a2fbc]
006adcb7  FNSTSW AX
006adcb9  MOV dword ptr [ECX + 0x8],EDX
006adcbc  XOR ECX,ECX
006adcbe  TEST AH,0x41
006adcc1  MOV dword ptr [EDI + 0xd4],ECX
006adcc7  MOV dword ptr [EDI + 0xe4],ECX
006adccd  MOV byte ptr [EDI + 0x100],CL
006adcd3  JZ 0x006adce8
006adcd5  FLD float ptr [EDI + 0xc8]
006adcdb  FCOMP float ptr [0x00890968]
006adce1  FNSTSW AX
006adce3  TEST AH,0x41
006adce6  JNZ 0x006adcee
006adce8  MOV dword ptr [EDI + 0xd0],ECX
006adcee  MOV dword ptr [EDI + 0xd8],ECX
006adcf4  MOV dword ptr [EDI + 0xdc],ECX
006adcfa  FLD float ptr [0x00890968]
006add00  FLD float ptr [ESP + 0x34]
006add04  FUCOMPP
006add06  FNSTSW AX
006add08  TEST AH,0x44
006add0b  JP 0x006add1c
006add0d  FLD float ptr [ESP + 0x88]
006add14  FADD float ptr [EDI + 0x68]
006add17  FSTP float ptr [EDI + 0x68]
006add1a  JMP 0x006add1f
006add1c  MOV dword ptr [EDI + 0x68],ECX
006add1f  FLD float ptr [ESP + 0x34]
006add23  FCOMP float ptr [0x00890968]
006add29  FNSTSW AX
006add2b  TEST AH,0x41
006add2e  JNZ 0x006add36
006add30  FLD float ptr [ESP + 0x34]
006add34  JMP 0x006add3c
006add36  FLD float ptr [0x00890968]
006add3c  MOV EAX,dword ptr [ESP + 0x50]
006add40  FSTP float ptr [EDI + 0x78]
006add43  MOV EDX,dword ptr [ESP + 0x38]
006add47  INC EAX
006add48  ADD EDX,0x4
006add4b  CMP EAX,0x4
006add4e  MOV dword ptr [ESP + 0x50],EAX
006add52  MOV dword ptr [ESP + 0x38],EDX
006add56  JC 0x006ad720
006add5c  MOV AL,byte ptr [ESP + 0x2f]
006add60  TEST AL,AL
006add62  JZ 0x006adf59
006add68  MOV EAX,dword ptr [ESI + 0x70]
006add6b  MOV ECX,dword ptr [ESI + 0x74]
006add6e  MOV EDX,dword ptr [ESI + 0x78]
006add71  MOV dword ptr [ESP + 0x1c],EAX
006add75  FLD float ptr [ESP + 0x1c]
006add79  FMUL float ptr [ESI]
006add7b  MOV dword ptr [ESP + 0x20],ECX
006add7f  FLD float ptr [ESP + 0x20]
006add83  MOV dword ptr [ESP + 0x24],EDX
006add87  FMUL float ptr [ESI + 0x10]
006add8a  MOV EAX,dword ptr [EBP + 0x4c]
006add8d  LEA ECX,[EBP + 0x4c]
006add90  FADDP
006add92  FLD float ptr [ESP + 0x24]
006add96  XOR EDI,EDI
006add98  FMUL float ptr [ESI + 0x20]
006add9b  FADDP
006add9d  FADD float ptr [ESI + 0x30]
006adda0  FSTP float ptr [ESP + 0x64]
006adda4  FLD float ptr [ESP + 0x24]
006adda8  FMUL float ptr [ESI + 0x24]
006addab  FLD float ptr [ESP + 0x20]
006addaf  FMUL float ptr [ESI + 0x14]
006addb2  FADDP
006addb4  FLD float ptr [ESP + 0x1c]
006addb8  FMUL float ptr [ESI + 0x4]
006addbb  FADDP
006addbd  FADD float ptr [ESI + 0x34]
006addc0  FSTP float ptr [ESP + 0x68]
006addc4  FLD float ptr [ESP + 0x20]
006addc8  FMUL float ptr [ESI + 0x18]
006addcb  FLD float ptr [ESP + 0x1c]
006addcf  FMUL float ptr [ESI + 0x8]
006addd2  FADDP
006addd4  FLD float ptr [ESP + 0x24]
006addd8  FMUL float ptr [ESI + 0x28]
006adddb  FADDP
006adddd  FADD float ptr [ESI + 0x38]
006adde0  FSTP float ptr [ESP + 0x6c]
006adde4  CALL dword ptr [EAX + 0x8]
006adde7  TEST EAX,EAX
006adde9  JBE 0x006adf59
006addef  LEA EAX,[EBP + 0xf4]
006addf5  MOV dword ptr [ESP + 0x38],EAX
006addf9  LEA ESP,[ESP]
006ade00  MOV ECX,dword ptr [ESP + 0x38]
006ade04  MOV ECX,dword ptr [ECX]
006ade06  MOV EDX,dword ptr [ECX + 0x6c]
006ade09  FLD float ptr [ECX + 0x70]
006ade0c  FADD float ptr [ECX + 0x78]
006ade0f  MOV EAX,dword ptr [ECX + 0x74]
006ade12  MOV dword ptr [ESP + 0x10],EDX
006ade16  MOV EDX,EDI
006ade18  SHR EDX,0x1
006ade1a  FSUB float ptr [ESP + EDX*0x4 + 0xcc]
006ade21  MOV EDX,dword ptr [ESP + 0x10]
006ade25  MOV dword ptr [ESP + 0x1c],EDX
006ade29  FSTP float ptr [ESP + 0x14]
006ade2d  MOV EDX,dword ptr [ESP + 0x14]
006ade31  FLD float ptr [ESP + 0x1c]
006ade35  MOV dword ptr [ESP + 0x20],EDX
006ade39  FMUL float ptr [ESI]
006ade3b  MOV dword ptr [ESP + 0x18],EAX
006ade3f  FLD float ptr [ESP + 0x20]
006ade43  MOV EDX,dword ptr [ESP + 0x18]
006ade47  FMUL float ptr [ESI + 0x10]
006ade4a  MOV dword ptr [ESP + 0x24],EDX
006ade4e  LEA EAX,[ECX + 0x5c]
006ade51  FADDP
006ade53  FLD float ptr [ESP + 0x24]
006ade57  ADD ECX,0x4c
006ade5a  FMUL float ptr [ESI + 0x20]
006ade5d  FADDP
006ade5f  FADD float ptr [ESI + 0x30]
006ade62  FSTP float ptr [ESP + 0x10]
006ade66  MOV EDX,dword ptr [ESP + 0x10]
006ade6a  FLD float ptr [ESP + 0x24]
006ade6e  FMUL float ptr [ESI + 0x24]
006ade71  FLD float ptr [ESP + 0x20]
006ade75  FMUL float ptr [ESI + 0x14]
006ade78  FADDP
006ade7a  FLD float ptr [ESP + 0x1c]
006ade7e  FMUL float ptr [ESI + 0x4]
006ade81  FADDP
006ade83  FADD float ptr [ESI + 0x34]
006ade86  FSTP float ptr [ESP + 0x14]
006ade8a  FLD float ptr [ESP + 0x20]
006ade8e  FMUL float ptr [ESI + 0x18]
006ade91  FLD float ptr [ESP + 0x1c]
006ade95  FMUL float ptr [ESI + 0x8]
006ade98  FADDP
006ade9a  FLD float ptr [ESP + 0x24]
006ade9e  FMUL float ptr [ESI + 0x28]
006adea1  FADDP
006adea3  FADD float ptr [ESI + 0x38]
006adea6  MOV dword ptr [ECX],EDX
006adea8  MOV EDX,dword ptr [ESP + 0x14]
006adeac  MOV dword ptr [ECX + 0x4],EDX
006adeaf  FSTP float ptr [ESP + 0x18]
006adeb3  MOV EDX,dword ptr [ESP + 0x18]
006adeb7  FLD float ptr [ESP + 0x10]
006adebb  MOV dword ptr [ECX + 0x8],EDX
006adebe  FSUB float ptr [ESP + 0x64]
006adec2  FLD float ptr [ESP + 0x14]
006adec6  FSUB float ptr [ESP + 0x68]
006adeca  FLD float ptr [ESP + 0x18]
006adece  FSUB float ptr [ESP + 0x6c]
006aded2  FLD ST1
006aded4  FMUL float ptr [EAX + 0x8]
006aded7  FLD ST1
006aded9  FMUL float ptr [EAX + 0x4]
006adedc  FSUBP
006adede  FSTP float ptr [ESP + 0x70]
006adee2  FMUL float ptr [EAX]
006adee4  MOV ECX,dword ptr [ESP + 0x70]
006adee8  FLD ST2
006adeea  FMUL float ptr [EAX + 0x8]
006adeed  LEA EBX,[ESP + 0x98]
006adef4  PUSH EBX
006adef5  FSUBP
006adef7  PUSH EAX
006adef8  FSTP float ptr [ESP + 0x7c]
006adefc  MOV EDX,dword ptr [ESP + 0x7c]
006adf00  FXCH
006adf02  FMUL float ptr [EAX + 0x4]
006adf05  FXCH
006adf07  FMUL float ptr [EAX]
006adf09  MOV dword ptr [ESP + 0xa0],ECX
006adf10  MOV dword ptr [ESP + 0xa4],EDX
006adf17  FSUBP
006adf19  FSTP float ptr [ESP + 0x80]
006adf20  MOV ECX,dword ptr [ESP + 0x80]
006adf27  MOV dword ptr [ESP + 0xa8],ECX
006adf2e  MOV ECX,dword ptr [EBP + 0xcc]
006adf34  MOV EDX,dword ptr [ECX]
006adf36  CALL dword ptr [EDX + 0x84]
006adf3c  MOV EDX,dword ptr [ESP + 0x38]
006adf40  MOV EAX,dword ptr [EBP + 0x4c]
006adf43  LEA ECX,[EBP + 0x4c]
006adf46  ADD EDX,0x4
006adf49  INC EDI
006adf4a  MOV dword ptr [ESP + 0x38],EDX
006adf4e  CALL dword ptr [EAX + 0x8]
006adf51  CMP EDI,EAX
006adf53  JC 0x006ade00
006adf59  FLD float ptr [ESP + 0x30]
006adf5d  FCOMP float ptr [0x00890968]
006adf63  FNSTSW AX
006adf65  TEST AH,0x41
006adf68  JNZ 0x006adfc3
006adf6a  MOV EDX,dword ptr [EBP + 0x4c]
006adf6d  LEA ESI,[EBP + 0x4c]
006adf70  MOV ECX,ESI
006adf72  XOR EDI,EDI
006adf74  CALL dword ptr [EDX + 0x8]
006adf77  TEST EAX,EAX
006adf79  JBE 0x006adf9c
006adf7b  LEA EBX,[EBP + 0xf4]
006adf81  MOV EAX,dword ptr [EBX]
006adf83  FLD float ptr [ESP + 0x30]
006adf87  FADD float ptr [EAX + 0x50]
006adf8a  MOV ECX,ESI
006adf8c  INC EDI
006adf8d  ADD EBX,0x4
006adf90  FSTP float ptr [EAX + 0x50]
006adf93  MOV EAX,dword ptr [ESI]
006adf95  CALL dword ptr [EAX + 0x8]
006adf98  CMP EDI,EAX
006adf9a  JC 0x006adf81
006adf9c  MOV ECX,dword ptr [EBP + 0xcc]
006adfa2  MOV EAX,dword ptr [ESP + 0x30]
006adfa6  MOV EDX,dword ptr [ECX]
006adfa8  PUSH EAX
006adfa9  CALL dword ptr [EDX + 0x7c]
006adfac  MOV ECX,dword ptr [ESP + 0x54]
006adfb0  POP EDI
006adfb1  POP ESI
006adfb2  MOV dword ptr [EBP + 0xe0],ECX
006adfb8  POP EBP
006adfb9  POP EBX
006adfba  ADD ESP,0x10c
006adfc0  RET 0x4
006adfc3  MOV EDX,dword ptr [ESP + 0x54]
006adfc7  POP EDI
006adfc8  POP ESI
006adfc9  MOV dword ptr [EBP + 0xe0],EDX
006adfcf  POP EBP
006adfd0  POP EBX
006adfd1  ADD ESP,0x10c
006adfd7  RET 0x4
