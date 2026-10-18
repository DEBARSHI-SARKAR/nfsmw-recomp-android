004dad70  SUB ESP,0x10
004dad73  PUSH ESI
004dad74  MOV ESI,ECX
004dad76  MOV EAX,dword ptr [ESI + 0x14]
004dad79  MOV EAX,dword ptr [EAX + 0x34]
004dad7c  FLD float ptr [EAX + 0x58]
004dad7f  ADD EAX,0x50
004dad82  FLD float ptr [EAX + 0x4]
004dad85  PUSH EDI
004dad86  FLD float ptr [EAX]
004dad88  MOV ECX,0x91492c
004dad8d  FLD ST0
004dad8f  FMUL ST1
004dad91  FLD ST2
004dad93  FMUL ST3
004dad95  FADDP
004dad97  FLD ST3
004dad99  FMUL ST4
004dad9b  FADDP
004dad9d  FSQRT
004dad9f  FSTP ST3
004dada1  FSTP ST0
004dada3  FSTP ST0
004dada5  FMUL float ptr [0x008967e0]
004dadab  FSTP float ptr [ESP + 0x10]
004dadaf  MOV EDI,dword ptr [ESP + 0x10]
004dadb3  PUSH EDI
004dadb4  CALL 0x00653790
004dadb9  CALL 0x007c4b80
004dadbe  IMUL EAX,EAX,0x7fff
004dadc4  MOV ECX,dword ptr [ESI + 0x28]
004dadc7  SAR EAX,0xf
004dadca  MOV dword ptr [ESP + 0x10],EAX
004dadce  FILD dword ptr [ESP + 0x10]
004dadd2  FLD float ptr [ECX + 0x48]
004dadd5  FLD float ptr [ECX + 0x4c]
004dadd8  FLD ST0
004dadda  FMUL ST1
004daddc  FLD ST2
004dadde  FMUL ST3
004dade0  FADDP
004dade2  FSQRT
004dade4  FSTP ST2
004dade6  FSTP ST0
004dade8  FMUL float ptr [0x00890dc4]
004dadee  FCOM float ptr [0x00897db4]
004dadf4  FNSTSW AX
004dadf6  TEST AH,0x41
004dadf9  JNZ 0x004dae03
004dadfb  FSTP ST0
004dadfd  FLD float ptr [0x00897db4]
004dae03  FADD float ptr [0x0089096c]
004dae09  FMUL ST1
004dae0b  FMUL float ptr [0x008910c4]
004dae11  FSTP float ptr [ESP + 0x8]
004dae15  FLD float ptr [ECX + 0x50]
004dae18  FLD float ptr [ECX + 0x54]
004dae1b  FLD ST0
004dae1d  FMUL ST1
004dae1f  FLD ST2
004dae21  FMUL ST3
004dae23  FADDP
004dae25  FSQRT
004dae27  FSTP ST2
004dae29  FSTP ST0
004dae2b  FMUL float ptr [0x00890dc4]
004dae31  FCOM float ptr [0x00897db4]
004dae37  FNSTSW AX
004dae39  TEST AH,0x41
004dae3c  JNZ 0x004dae46
004dae3e  FSTP ST0
004dae40  FLD float ptr [0x00897db4]
004dae46  FADD float ptr [0x0089096c]
004dae4c  FMULP
004dae4e  FLD float ptr [ECX + 0x64]
004dae51  FADD float ptr [ECX + 0x58]
004dae54  FMUL float ptr [0x008933d4]
004dae5a  FMUL float ptr [0x00897db8]
004dae60  FCOM float ptr [0x00897db8]
004dae66  FNSTSW AX
004dae68  TEST AH,0x41
004dae6b  JNZ 0x004dae75
004dae6d  FSTP ST0
004dae6f  FLD float ptr [0x00897db8]
004dae75  FADD float ptr [0x0089096c]
004dae7b  FMULP
004dae7d  FST float ptr [ESP + 0xc]
004dae81  FCOMP float ptr [0x00898770]
004dae87  FNSTSW AX
004dae89  TEST AH,0x41
004dae8c  JNZ 0x004dae96
004dae8e  MOV dword ptr [ESP + 0xc],0x46fa0000
004dae96  FLD float ptr [ESP + 0x8]
004dae9a  FCOMP float ptr [0x00898770]
004daea0  FNSTSW AX
004daea2  TEST AH,0x41
004daea5  JNZ 0x004daeaf
004daea7  MOV dword ptr [ESP + 0x8],0x46fa0000
004daeaf  PUSH EDI
004daeb0  MOV ECX,0x914644
004daeb5  CALL 0x004ba590
004daeba  FST float ptr [ESP + 0x14]
004daebe  MOV ECX,dword ptr [ESI + 0x28]
004daec1  FLD float ptr [ECX + 0x50]
004daec4  FLD float ptr [ECX + 0x54]
004daec7  FLD ST0
004daec9  FMUL ST1
004daecb  FLD ST2
004daecd  FMUL ST3
004daecf  FADDP
004daed1  FSQRT
004daed3  FSTP ST2
004daed5  FSTP ST0
004daed7  FMUL float ptr [0x00890dc4]
004daedd  FCOM float ptr [0x00897dc4]
004daee3  FNSTSW AX
004daee5  TEST AH,0x41
004daee8  JNZ 0x004daef2
004daeea  FSTP ST0
004daeec  FLD float ptr [0x00897dc4]
004daef2  FADD float ptr [0x0089096c]
004daef8  FMULP
004daefa  FLD float ptr [ECX + 0x64]
004daefd  FADD float ptr [ECX + 0x58]
004daf00  FMUL float ptr [0x008933d4]
004daf06  FMUL float ptr [0x00897db4]
004daf0c  FCOM float ptr [0x00897db4]
004daf12  FNSTSW AX
004daf14  TEST AH,0x41
004daf17  JNZ 0x004daf21
004daf19  FSTP ST0
004daf1b  FLD float ptr [0x00897db4]
004daf21  FADD float ptr [0x0089096c]
004daf27  FMULP
004daf29  FST float ptr [ESP + 0x10]
004daf2d  FCOMP float ptr [0x00896cb8]
004daf33  FNSTSW AX
004daf35  TEST AH,0x41
004daf38  JNZ 0x004daf42
004daf3a  MOV dword ptr [ESP + 0x10],0x45bb8000
004daf42  FLD float ptr [ECX + 0x48]
004daf45  FLD float ptr [ECX + 0x4c]
004daf48  FLD ST0
004daf4a  FMUL ST1
004daf4c  FLD ST2
004daf4e  FMUL ST3
004daf50  FADDP
004daf52  FSQRT
004daf54  FSTP ST2
004daf56  FSTP ST0
004daf58  FMUL float ptr [0x00890dc4]
004daf5e  FCOM float ptr [0x00897dc4]
004daf64  FNSTSW AX
004daf66  TEST AH,0x41
004daf69  JNZ 0x004daf73
004daf6b  FSTP ST0
004daf6d  FLD float ptr [0x00897dc4]
004daf73  FADD float ptr [0x0089096c]
004daf79  FMUL float ptr [ESP + 0x14]
004daf7d  FLD float ptr [ECX + 0x60]
004daf80  FADD float ptr [ECX + 0x5c]
004daf83  FMUL float ptr [0x008933d4]
004daf89  FMUL float ptr [0x00897db4]
004daf8f  FCOM float ptr [0x00897db4]
004daf95  FNSTSW AX
004daf97  TEST AH,0x41
004daf9a  JNZ 0x004dafa4
004daf9c  FSTP ST0
004daf9e  FLD float ptr [0x00897db4]
004dafa4  FADD float ptr [0x0089096c]
004dafaa  FMULP
004dafac  FCOM float ptr [0x00896cb8]
004dafb2  FNSTSW AX
004dafb4  TEST AH,0x41
004dafb7  JNZ 0x004dafc1
004dafb9  FSTP ST0
004dafbb  FLD float ptr [0x00896cb8]
004dafc1  FLD float ptr [ESP + 0xc]
004dafc5  CALL 0x007c4b80
004dafca  FLD float ptr [ESP + 0x8]
004dafce  MOV dword ptr [ESI + 0x74],EAX
004dafd1  CALL 0x007c4b80
004dafd6  FLD float ptr [ESP + 0x10]
004dafda  MOV dword ptr [ESI + 0x70],EAX
004dafdd  CALL 0x007c4b80
004dafe2  MOV dword ptr [ESI + 0x7c],EAX
004dafe5  CALL 0x007c4b80
004dafea  POP EDI
004dafeb  MOV dword ptr [ESI + 0x78],EAX
004dafee  POP ESI
004dafef  ADD ESP,0x10
004daff2  RET
