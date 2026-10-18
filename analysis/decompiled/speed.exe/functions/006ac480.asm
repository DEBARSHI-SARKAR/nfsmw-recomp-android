006ac480  SUB ESP,0x130
006ac486  PUSH EBX
006ac487  PUSH EBP
006ac488  PUSH ESI
006ac489  MOV ESI,dword ptr [ESP + 0x140]
006ac490  MOV EAX,dword ptr [ESI + 0xc0]
006ac496  PUSH EDI
006ac497  MOV EDI,ECX
006ac499  LEA ECX,[ESP + 0x68]
006ac49d  PUSH ECX
006ac49e  XOR EBP,EBP
006ac4a0  LEA EDX,[ESP + 0x18]
006ac4a4  PUSH EDX
006ac4a5  PUSH ESI
006ac4a6  MOV ECX,EDI
006ac4a8  MOV dword ptr [ESP + 0x70],EDI
006ac4ac  MOV dword ptr [ESP + 0x9c],EAX
006ac4b3  MOV dword ptr [ESP + 0x20],EBP
006ac4b7  MOV dword ptr [ESP + 0x24],EBP
006ac4bb  MOV dword ptr [ESP + 0x28],EBP
006ac4bf  MOV dword ptr [ESP + 0x74],EBP
006ac4c3  MOV dword ptr [ESP + 0x78],EBP
006ac4c7  MOV dword ptr [ESP + 0x7c],EBP
006ac4cb  CALL 0x0069fb20
006ac4d0  MOV EAX,dword ptr [EDI + 0x134]
006ac4d6  MOV ECX,dword ptr [ESI + 0x7c]
006ac4d9  MOV dword ptr [EAX + 0xcc],ECX
006ac4df  MOV EDX,dword ptr [EDI + 0x138]
006ac4e5  MOV EAX,dword ptr [ESI + 0x7c]
006ac4e8  MOV dword ptr [EDX + 0xcc],EAX
006ac4ee  MOV ECX,dword ptr [EDI + 0x12c]
006ac4f4  MOV EDX,dword ptr [ESI + 0x5c]
006ac4f7  LEA EBX,[EDI + 0x12c]
006ac4fd  MOV dword ptr [ECX + 0xc8],EDX
006ac503  MOV EAX,dword ptr [EDI + 0x130]
006ac509  MOV ECX,dword ptr [ESI + 0x5c]
006ac50c  MOV dword ptr [EAX + 0xc8],ECX
006ac512  FLD float ptr [ESI + 0x4c]
006ac515  FCOMP float ptr [0x0089119c]
006ac51b  FNSTSW AX
006ac51d  TEST AH,0x41
006ac520  JNZ 0x006ac559
006ac522  FLD float ptr [ESI + 0x5c]
006ac525  FCOMP float ptr [0x008933d4]
006ac52b  FNSTSW AX
006ac52d  TEST AH,0x41
006ac530  JNZ 0x006ac559
006ac532  FLD float ptr [ESI + 0x48]
006ac535  FMUL float ptr [0x008967e0]
006ac53b  FCOMP float ptr [0x008aac84]
006ac541  FNSTSW AX
006ac543  TEST AH,0x5
006ac546  JP 0x006ac559
006ac548  MOV EDX,dword ptr [EDI + 0x134]
006ac54e  MOV EAX,dword ptr [ESI + 0x5c]
006ac551  MOV dword ptr [EDX + 0xc8],EAX
006ac557  JMP 0x006ac568
006ac559  MOV ECX,dword ptr [EDI + 0x134]
006ac55f  MOV EDX,dword ptr [ESI + 0x5c]
006ac562  MOV dword ptr [ECX + 0xc8],EDX
006ac568  FLD float ptr [ESI + 0x4c]
006ac56b  FCOMP float ptr [0x0089119c]
006ac571  FNSTSW AX
006ac573  TEST AH,0x41
006ac576  JNZ 0x006ac5af
006ac578  FLD float ptr [ESI + 0x5c]
006ac57b  FCOMP float ptr [0x008933d4]
006ac581  FNSTSW AX
006ac583  TEST AH,0x41
006ac586  JNZ 0x006ac5af
006ac588  FLD float ptr [ESI + 0x48]
006ac58b  FMUL float ptr [0x008967e0]
006ac591  FCOMP float ptr [0x008aac84]
006ac597  FNSTSW AX
006ac599  TEST AH,0x5
006ac59c  JP 0x006ac5af
006ac59e  MOV EAX,dword ptr [EDI + 0x138]
006ac5a4  MOV ECX,dword ptr [ESI + 0x5c]
006ac5a7  MOV dword ptr [EAX + 0xc8],ECX
006ac5ad  JMP 0x006ac5be
006ac5af  MOV EDX,dword ptr [EDI + 0x138]
006ac5b5  MOV EAX,dword ptr [ESI + 0x5c]
006ac5b8  MOV dword ptr [EDX + 0xc8],EAX
006ac5be  CMP word ptr [ESI + 0xca],0x3
006ac5c6  MOV dword ptr [ESP + 0xa8],0x3f000000
006ac5d1  JNZ 0x006ac607
006ac5d3  CMP word ptr [ESI + 0xc8],0x1
006ac5db  JZ 0x006ac607
006ac5dd  MOV ECX,dword ptr [EDI + 0xf8]
006ac5e3  CMP ECX,EBP
006ac5e5  JZ 0x006ac5ee
006ac5e7  MOV EDX,dword ptr [ECX]
006ac5e9  CALL dword ptr [EDX + 0x4]
006ac5ec  JMP 0x006ac5f4
006ac5ee  FLD float ptr [0x00890968]
006ac5f4  FMUL float ptr [0x008abcd8]
006ac5fa  FADD float ptr [0x008aadc0]
006ac600  FSTP float ptr [ESP + 0xa8]
006ac607  MOV EAX,dword ptr [ESI + 0xac]
006ac60d  MOV dword ptr [ESP + 0xac],EAX
006ac614  MOV EAX,dword ptr [EDI + 0xc8]
006ac61a  FLD float ptr [EAX + 0x30]
006ac61d  MOV ECX,dword ptr [EAX + 0x8]
006ac620  FMUL float ptr [0x008aae8c]
006ac626  MOV EDX,dword ptr [EAX + 0xc]
006ac629  MOV dword ptr [ESP + 0xf8],ECX
006ac630  MOV ECX,dword ptr [EDI + 0x130]
006ac636  FSTP float ptr [ESP + 0x74]
006ac63a  FLD float ptr [EAX + 0x28]
006ac63d  MOV dword ptr [ESP + 0xfc],EDX
006ac644  FMUL float ptr [0x008aae8c]
006ac64a  MOV EDX,dword ptr [EDI + 0x134]
006ac650  MOV dword ptr [ESP + 0x80],EBP
006ac657  MOV dword ptr [ESP + 0x20],0x0
006ac65f  FSTP float ptr [ESP + 0x48]
006ac663  FLD float ptr [EAX + 0x40]
006ac666  FMUL float ptr [0x008a9388]
006ac66c  FSTP float ptr [ESP + 0xb0]
006ac673  FLD float ptr [0x0089096c]
006ac679  FSUB float ptr [EAX]
006ac67b  FSTP float ptr [ESP + 0xcc]
006ac682  FLD float ptr [EAX + 0x38]
006ac685  FMUL float ptr [0x008aae8c]
006ac68b  FSTP float ptr [ESP + 0xe8]
006ac692  FLD float ptr [EAX + 0x48]
006ac695  FMUL float ptr [0x008aae8c]
006ac69b  FLD float ptr [EAX + 0x10]
006ac69e  FMUL float ptr [0x008a9388]
006ac6a4  FSTP float ptr [ESP + 0xf0]
006ac6ab  FLD float ptr [EAX + 0x18]
006ac6ae  FMUL float ptr [0x008a9388]
006ac6b4  FSTP float ptr [ESP + 0xb8]
006ac6bb  FLD float ptr [EAX + 0x34]
006ac6be  FMUL float ptr [0x008aae8c]
006ac6c4  FSTP float ptr [ESP + 0x78]
006ac6c8  FLD float ptr [EAX + 0x2c]
006ac6cb  FMUL float ptr [0x008aae8c]
006ac6d1  FSTP float ptr [ESP + 0x4c]
006ac6d5  FLD float ptr [EAX + 0x44]
006ac6d8  FMUL float ptr [0x008a9388]
006ac6de  FSTP float ptr [ESP + 0xb4]
006ac6e5  FLD float ptr [0x0089096c]
006ac6eb  FSUB float ptr [EAX + 0x4]
006ac6ee  FSTP float ptr [ESP + 0xd0]
006ac6f5  FLD float ptr [EAX + 0x3c]
006ac6f8  FMUL float ptr [0x008aae8c]
006ac6fe  FSTP float ptr [ESP + 0xec]
006ac705  FLD float ptr [EAX + 0x4c]
006ac708  FMUL float ptr [0x008aae8c]
006ac70e  FLD float ptr [EAX + 0x14]
006ac711  FMUL float ptr [0x008a9388]
006ac717  FSTP float ptr [ESP + 0xf4]
006ac71e  FLD float ptr [EAX + 0x1c]
006ac721  MOV EAX,dword ptr [EBX]
006ac723  FMUL float ptr [0x008a9388]
006ac729  FSTP float ptr [ESP + 0xbc]
006ac730  FLD float ptr [EAX + 0x78]
006ac733  MOV EAX,dword ptr [EDI + 0x138]
006ac739  FSUB float ptr [ECX + 0x78]
006ac73c  FMUL ST2
006ac73e  FST float ptr [ESP + 0xd8]
006ac745  FCHS
006ac747  FSTP float ptr [ESP + 0xdc]
006ac74e  FLD float ptr [EDX + 0x78]
006ac751  FSUB float ptr [EAX + 0x78]
006ac754  MOV ECX,dword ptr [ESP + 0x68]
006ac758  MOV EDX,dword ptr [ESP + 0x6c]
006ac75c  MOV EAX,dword ptr [ESP + 0x70]
006ac760  MOV dword ptr [ESP + 0x28],ECX
006ac764  MOV dword ptr [ESP + 0x100],ECX
006ac76b  MOV dword ptr [ESP + 0x2c],EDX
006ac76f  MOV dword ptr [ESP + 0x30],EAX
006ac773  MOV dword ptr [ESP + 0x34],0x3f800000
006ac77b  MOV ECX,dword ptr [ESP + 0x34]
006ac77f  FMUL ST1
006ac781  MOV dword ptr [ESP + 0x104],EDX
006ac788  MOV EDX,dword ptr [ESP + 0x14]
006ac78c  MOV dword ptr [ESP + 0x108],EAX
006ac793  FSTP float ptr [ESP + 0xe0]
006ac79a  MOV EAX,dword ptr [ESP + 0x18]
006ac79e  MOV dword ptr [ESP + 0x10c],ECX
006ac7a5  FSTP ST0
006ac7a7  MOV ECX,dword ptr [ESP + 0x1c]
006ac7ab  FSTP ST0
006ac7ad  FLD float ptr [ESP + 0xe0]
006ac7b4  MOV dword ptr [ESP + 0x28],EDX
006ac7b8  MOV dword ptr [ESP + 0x2c],EAX
006ac7bc  FCHS
006ac7be  MOV dword ptr [ESP + 0x30],ECX
006ac7c2  FSTP float ptr [ESP + 0xe4]
006ac7c9  MOV dword ptr [ESP + 0x110],EDX
006ac7d0  MOV dword ptr [ESP + 0x114],EAX
006ac7d7  MOV EAX,dword ptr [ESI + 0x20]
006ac7da  MOV dword ptr [ESP + 0x118],ECX
006ac7e1  MOV ECX,dword ptr [ESI + 0x24]
006ac7e4  MOV dword ptr [ESP + 0x34],0x3f800000
006ac7ec  MOV EDX,dword ptr [ESP + 0x34]
006ac7f0  MOV dword ptr [ESP + 0x28],EAX
006ac7f4  MOV dword ptr [ESP + 0x2c],ECX
006ac7f8  MOV dword ptr [ESP + 0x11c],EDX
006ac7ff  MOV EDX,dword ptr [ESI + 0x28]
006ac802  MOV dword ptr [ESP + 0x34],0x3f800000
006ac80a  MOV dword ptr [ESP + 0x120],EAX
006ac811  MOV EAX,dword ptr [ESP + 0x34]
006ac815  MOV dword ptr [ESP + 0x124],ECX
006ac81c  MOV ECX,dword ptr [ESI + 0x20]
006ac81f  MOV dword ptr [ESP + 0x30],EDX
006ac823  MOV dword ptr [ESP + 0x128],EDX
006ac82a  MOV EDX,dword ptr [ESI + 0x24]
006ac82d  MOV dword ptr [ESP + 0x12c],EAX
006ac834  MOV EAX,dword ptr [ESI + 0x28]
006ac837  MOV dword ptr [ESP + 0x28],ECX
006ac83b  MOV dword ptr [ESP + 0x34],0x3f800000
006ac843  MOV dword ptr [ESP + 0x130],ECX
006ac84a  MOV ECX,dword ptr [ESP + 0x34]
006ac84e  MOV dword ptr [ESP + 0x60],EBP
006ac852  MOV dword ptr [ESP + 0x2c],EDX
006ac856  MOV dword ptr [ESP + 0x30],EAX
006ac85a  MOV dword ptr [ESP + 0x134],EDX
006ac861  MOV dword ptr [ESP + 0x138],EAX
006ac868  MOV dword ptr [ESP + 0x13c],ECX
006ac86f  MOV byte ptr [ESP + 0x27],0x0
006ac874  LEA EBP,[ESP + 0x104]
006ac87b  MOV dword ptr [ESP + 0x98],EBX
006ac882  FLD float ptr [ESI + 0x84]
006ac888  MOV EAX,dword ptr [ESI + 0xd8]
006ac88e  MOV EDX,dword ptr [ESP + 0x98]
006ac895  FADD ST0,ST0
006ac897  MOV EDI,dword ptr [EDX]
006ac899  MOV EDX,dword ptr [ESI + 0xc0]
006ac89f  MOV EBX,dword ptr [ESP + 0x60]
006ac8a3  PUSH ECX
006ac8a4  MOV ECX,dword ptr [EDI + 0xc4]
006ac8aa  FSTP float ptr [ESP]
006ac8ad  PUSH EAX
006ac8ae  PUSH 0x1
006ac8b0  PUSH ECX
006ac8b1  PUSH EDX
006ac8b2  LEA EAX,[ESI + 0xb0]
006ac8b8  PUSH EAX
006ac8b9  PUSH ESI
006ac8ba  LEA EAX,[ESI + 0x50]
006ac8bd  PUSH EAX
006ac8be  LEA EAX,[ESI + 0x60]
006ac8c1  PUSH EAX
006ac8c2  MOV ECX,EDI
006ac8c4  SHR EBX,0x1
006ac8c6  CALL 0x00671530
006ac8cb  FLD float ptr [EBP + 0x4]
006ac8ce  FMUL float ptr [EDI + 0x40]
006ac8d1  FLD float ptr [EBP]
006ac8d4  FMUL float ptr [EDI + 0x44]
006ac8d7  FSUBP
006ac8d9  FSTP float ptr [ESP + 0xc0]
006ac8e0  MOV EAX,dword ptr [ESP + 0xc0]
006ac8e7  FLD float ptr [EBP + -0x4]
006ac8ea  MOV dword ptr [ESP + 0x38],EAX
006ac8ee  FMUL float ptr [EDI + 0x44]
006ac8f1  LEA EAX,[ESP + 0x38]
006ac8f5  FLD float ptr [EDI + 0x3c]
006ac8f8  PUSH EAX
006ac8f9  FMUL float ptr [EBP + 0x4]
006ac8fc  FSUBP
006ac8fe  FSTP float ptr [ESP + 0xc8]
006ac905  MOV ECX,dword ptr [ESP + 0xc8]
006ac90c  FLD float ptr [EDI + 0x3c]
006ac90f  MOV dword ptr [ESP + 0x40],ECX
006ac913  FMUL float ptr [EBP]
006ac916  MOV ECX,EAX
006ac918  FLD float ptr [EBP + -0x4]
006ac91b  PUSH ECX
006ac91c  FMUL float ptr [EDI + 0x40]
006ac91f  FSUBP
006ac921  FSTP float ptr [ESP + 0xd0]
006ac928  MOV EDX,dword ptr [ESP + 0xd0]
006ac92f  MOV dword ptr [ESP + 0x48],EDX
006ac933  CALL 0x0040fe20
006ac938  FLD float ptr [EDI + 0x3c]
006ac93b  FMUL float ptr [ESI + 0x10]
006ac93e  MOV EDX,dword ptr [EDI + 0x48]
006ac941  FLD float ptr [ESI + 0x18]
006ac944  ADD ESP,0x8
006ac947  FMUL float ptr [EDI + 0x44]
006ac94a  MOV dword ptr [ESP + 0xd4],EDX
006ac951  FADDP
006ac953  FLD float ptr [EDI + 0x40]
006ac956  FMUL float ptr [ESI + 0x14]
006ac959  FADDP
006ac95b  FST float ptr [ESP + 0x10]
006ac95f  FCOMP float ptr [0x0089096c]
006ac965  FNSTSW AX
006ac967  TEST AH,0x5
006ac96a  JP 0x006aca20
006ac970  FLD float ptr [ESP + 0x10]
006ac974  FLD float ptr [0x00890968]
006ac97a  FCOMP float ptr [ESP + 0x10]
006ac97e  FNSTSW AX
006ac980  TEST AH,0x41
006ac983  JNZ 0x006ac98d
006ac985  FSTP ST0
006ac987  FLD float ptr [0x00890968]
006ac98d  FLD ST0
006ac98f  FMUL float ptr [ESP + EBX*0x4 + 0xb8]
006ac996  FADD float ptr [ESP + 0xd4]
006ac99d  FLD float ptr [ESP + EBX*0x4 + 0xf0]
006ac9a4  FSTP float ptr [ESP + 0x10]
006ac9a8  FLD float ptr [0x00890968]
006ac9ae  FLD float ptr [EDI + 0x78]
006ac9b1  FUCOMPP
006ac9b3  FNSTSW AX
006ac9b5  TEST AH,0x44
006ac9b8  JP 0x006ac9d7
006ac9ba  FLD float ptr [ESP + 0x10]
006ac9be  FSUBR ST0,ST1
006ac9c0  FLD float ptr [ESP + 0x20]
006ac9c4  FCOMP
006ac9c6  FNSTSW AX
006ac9c8  TEST AH,0x41
006ac9cb  JNZ 0x006ac9d3
006ac9cd  FSTP ST0
006ac9cf  FLD float ptr [ESP + 0x20]
006ac9d3  FSTP float ptr [ESP + 0x20]
006ac9d7  FCOM float ptr [0x00890968]
006ac9dd  FNSTSW AX
006ac9df  TEST AH,0x41
006ac9e2  JZ 0x006ac9ec
006ac9e4  FSTP ST0
006ac9e6  FLD float ptr [0x00890968]
006ac9ec  FCOM float ptr [ESP + 0x10]
006ac9f0  FST float ptr [ESP + 0x44]
006ac9f4  FNSTSW AX
006ac9f6  TEST AH,0x41
006ac9f9  JNZ 0x006aca2b
006ac9fb  FSUB float ptr [ESP + 0x10]
006ac9ff  FLD float ptr [ESP + 0x20]
006aca03  FCOMP
006aca05  FNSTSW AX
006aca07  TEST AH,0x41
006aca0a  JNZ 0x006aca12
006aca0c  FSTP ST0
006aca0e  FLD float ptr [ESP + 0x20]
006aca12  MOV EAX,dword ptr [ESP + 0x10]
006aca16  FSTP float ptr [ESP + 0x20]
006aca1a  MOV dword ptr [ESP + 0x44],EAX
006aca1e  JMP 0x006aca2d
006aca20  FLD float ptr [0x0089096c]
006aca26  JMP 0x006ac98d
006aca2b  FSTP ST0
006aca2d  FLD float ptr [ESP + 0x44]
006aca31  FCOMP float ptr [0x008aabe0]
006aca37  FNSTSW AX
006aca39  TEST AH,0x41
006aca3c  JNZ 0x006acd84
006aca42  FCOMP float ptr [0x008f8760]
006aca48  FNSTSW AX
006aca4a  TEST AH,0x41
006aca4d  JNZ 0x006acd86
006aca53  FLD float ptr [0x0089096c]
006aca59  MOV EAX,dword ptr [ESP + 0x80]
006aca60  FDIV float ptr [ESP + 0x90]
006aca67  INC EAX
006aca68  MOV dword ptr [ESP + 0x80],EAX
006aca6f  FSTP float ptr [ESP + 0x58]
006aca73  FLD float ptr [ESP + 0x44]
006aca77  FSUB float ptr [EDI + 0x78]
006aca7a  FMUL float ptr [ESP + 0x58]
006aca7e  FST float ptr [ESP + 0x54]
006aca82  FLD float ptr [ESP + EBX*0x4 + 0xb0]
006aca89  FCOMP float ptr [0x008aabe0]
006aca8f  FNSTSW AX
006aca91  TEST AH,0x41
006aca94  JNZ 0x006acb0e
006aca96  FLD float ptr [ESP + EBX*0x4 + 0xcc]
006aca9d  FCOMP float ptr [0x0089096c]
006acaa3  FNSTSW AX
006acaa5  TEST AH,0x5
006acaa8  JP 0x006acb0e
006acaaa  FCOM float ptr [0x00890968]
006acab0  FLD ST0
006acab2  FNSTSW AX
006acab4  TEST AH,0x5
006acab7  JP 0x006acabb
006acab9  FCHS
006acabb  MOV ECX,dword ptr [ESP + EBX*0x4 + 0xb0]
006acac2  FST float ptr [ESP + 0x10]
006acac6  MOV dword ptr [ESP + 0x94],ECX
006acacd  FCOMP float ptr [ESP + 0x94]
006acad4  FNSTSW AX
006acad6  TEST AH,0x41
006acad9  JNZ 0x006acb0e
006acadb  FSTP ST0
006acadd  FLD float ptr [ESP + 0x10]
006acae1  FDIV float ptr [ESP + 0x94]
006acae8  FLD float ptr [ESP + EBX*0x4 + 0xcc]
006acaef  CALL 0x007c45f0
006acaf4  FMUL float ptr [ESP + 0x94]
006acafb  FLD float ptr [ESP + 0x54]
006acaff  FCOMP float ptr [0x00890968]
006acb05  FNSTSW AX
006acb07  TEST AH,0x41
006acb0a  JZ 0x006acb0e
006acb0c  FCHS
006acb0e  FLD float ptr [ESP + 0x44]
006acb12  FMUL float ptr [ESP + EBX*0x4 + 0xf8]
006acb19  FADD float ptr [0x0089096c]
006acb1f  FMUL float ptr [ESP + EBX*0x4 + 0xe8]
006acb26  FMUL float ptr [ESP + 0x44]
006acb2a  FSTP float ptr [ESP + 0x54]
006acb2e  FCOM float ptr [0x00890968]
006acb34  FNSTSW AX
006acb36  TEST AH,0x41
006acb39  JNZ 0x006acb41
006acb3b  FLD float ptr [ESP + EBX*0x4 + 0x74]
006acb3f  JMP 0x006acb45
006acb41  FLD float ptr [ESP + EBX*0x4 + 0x48]
006acb45  MOV EDX,dword ptr [ESP + 0x64]
006acb49  FMULP
006acb4b  MOV EAX,dword ptr [EDX + 0xc8]
006acb51  FLD float ptr [ESP + 0xac]
006acb58  FMUL float ptr [EAX + 0x58]
006acb5b  FMUL float ptr [0x00891608]
006acb61  FLD ST1
006acb63  FCOMPP
006acb65  FNSTSW AX
006acb67  TEST AH,0x41
006acb6a  JNZ 0x006acb74
006acb6c  FSTP ST0
006acb6e  FLD float ptr [0x00890968]
006acb74  MOV ECX,dword ptr [ESP + 0x60]
006acb78  FADD float ptr [ESP + ECX*0x4 + 0xd8]
006acb7f  FADD float ptr [ESP + 0x54]
006acb83  FCOM float ptr [0x00890968]
006acb89  FNSTSW AX
006acb8b  TEST AH,0x41
006acb8e  JNZ 0x006acb96
006acb90  FSTP float ptr [ESP + 0x5c]
006acb94  JMP 0x006acba0
006acb96  FSTP ST0
006acb98  MOV dword ptr [ESP + 0x5c],0x0
006acba0  FLD float ptr [ESP + 0x40]
006acba4  MOV EDX,dword ptr [ESP + 0xa8]
006acbab  FMUL float ptr [EDI + 0x94]
006acbb1  MOV EAX,dword ptr [ESI + 0xc0]
006acbb7  FLD float ptr [ESP + 0x3c]
006acbbb  MOV ECX,dword ptr [ESP + 0x5c]
006acbbf  FMUL float ptr [EDI + 0x90]
006acbc5  PUSH EDX
006acbc6  MOV EDX,dword ptr [ESI + 0x48]
006acbc9  FADDP
006acbcb  FLD float ptr [ESP + 0x3c]
006acbcf  PUSH EAX
006acbd0  FMUL float ptr [EDI + 0x8c]
006acbd6  PUSH ECX
006acbd7  PUSH EDX
006acbd8  MOV EAX,EDX
006acbda  FADDP
006acbdc  PUSH EAX
006acbdd  FSTP float ptr [ESP + 0x24]
006acbe1  MOV ECX,dword ptr [ESP + 0x24]
006acbe5  PUSH ECX
006acbe6  MOV ECX,EDI
006acbe8  CALL 0x0069f020
006acbed  FSTP float ptr [ESP + 0x54]
006acbf1  FLD float ptr [ESP + 0x58]
006acbf5  FMUL float ptr [ESP + 0x10]
006acbf9  FLD float ptr [ESP + 0xac]
006acc00  FMUL float ptr [0x008910f0]
006acc06  FMULP
006acc08  FCOM float ptr [0x00890968]
006acc0e  FNSTSW AX
006acc10  TEST AH,0x5
006acc13  JP 0x006acc17
006acc15  FCHS
006acc17  FLD ST0
006acc19  FCHS
006acc1b  FSTP float ptr [ESP + 0x58]
006acc1f  FLD float ptr [ESP + 0x54]
006acc23  FCOMP
006acc25  FNSTSW AX
006acc27  TEST AH,0x5
006acc2a  JP 0x006acc32
006acc2c  FSTP ST0
006acc2e  FLD float ptr [ESP + 0x54]
006acc32  FLD float ptr [ESP + 0x58]
006acc36  FCOMP
006acc38  FNSTSW AX
006acc3a  TEST AH,0x41
006acc3d  JNZ 0x006acc45
006acc3f  FSTP ST0
006acc41  FLD float ptr [ESP + 0x58]
006acc45  FLD float ptr [ESP + 0x38]
006acc49  FMUL ST1
006acc4b  FSTP float ptr [ESP + 0x84]
006acc52  FLD float ptr [ESP + 0x3c]
006acc56  FMUL ST1
006acc58  FSTP float ptr [ESP + 0x88]
006acc5f  FLD float ptr [ESP + 0x40]
006acc63  FMUL ST1
006acc65  FSTP float ptr [ESP + 0x8c]
006acc6c  FSTP ST0
006acc6e  FLD float ptr [ESP + 0x3c]
006acc72  FMUL float ptr [EDI + 0x44]
006acc75  FLD float ptr [ESP + 0x40]
006acc79  FMUL float ptr [EDI + 0x40]
006acc7c  FSUBP
006acc7e  FSTP float ptr [ESP + 0x9c]
006acc85  MOV EDX,dword ptr [ESP + 0x9c]
006acc8c  FLD float ptr [ESP + 0x40]
006acc90  MOV dword ptr [ESP + 0x14],EDX
006acc94  FMUL float ptr [EDI + 0x3c]
006acc97  LEA EDX,[ESP + 0x14]
006acc9b  FLD float ptr [ESP + 0x38]
006acc9f  PUSH EDX
006acca0  FMUL float ptr [EDI + 0x44]
006acca3  FSUBP
006acca5  FSTP float ptr [ESP + 0xa4]
006accac  MOV EAX,dword ptr [ESP + 0xa4]
006accb3  FLD float ptr [ESP + 0x3c]
006accb7  MOV dword ptr [ESP + 0x1c],EAX
006accbb  FMUL float ptr [EDI + 0x40]
006accbe  MOV EAX,EDX
006accc0  FLD float ptr [ESP + 0x40]
006accc4  PUSH EAX
006accc5  FMUL float ptr [EDI + 0x3c]
006accc8  FSUBP
006accca  FSTP float ptr [ESP + 0xac]
006accd1  MOV ECX,dword ptr [ESP + 0xac]
006accd8  MOV dword ptr [ESP + 0x24],ECX
006accdc  CALL 0x0040fe20
006acce1  FLD float ptr [EDI + 0xdc]
006acce7  FLD float ptr [ESP + 0x1c]
006acceb  ADD ESP,0x8
006accee  FMUL ST1
006accf0  LEA ECX,[EDI + 0x5c]
006accf3  FLD float ptr [ESP + 0x18]
006accf7  FMUL ST2
006accf9  FSTP float ptr [ESP + 0x18]
006accfd  FLD float ptr [ESP + 0x1c]
006acd01  FMUL ST2
006acd03  FSTP float ptr [ESP + 0x1c]
006acd07  FLD float ptr [ESP + 0x5c]
006acd0b  FMUL float ptr [ESI + 0x10]
006acd0e  FSTP float ptr [ESP + 0x28]
006acd12  FLD float ptr [ESP + 0x5c]
006acd16  FMUL float ptr [ESI + 0x14]
006acd19  FSTP float ptr [ESP + 0x2c]
006acd1d  FLD float ptr [ESP + 0x5c]
006acd21  FMUL float ptr [ESI + 0x18]
006acd24  FSTP float ptr [ESP + 0x30]
006acd28  FADD float ptr [ESP + 0x84]
006acd2f  FSTP ST1
006acd31  FLD float ptr [ESP + 0x18]
006acd35  FADD float ptr [ESP + 0x88]
006acd3c  FLD float ptr [ESP + 0x1c]
006acd40  FADD float ptr [ESP + 0x8c]
006acd47  FSTP float ptr [ESP + 0x70]
006acd4b  FXCH
006acd4d  FADD float ptr [ESP + 0x28]
006acd51  FSTP float ptr [ESP + 0x68]
006acd55  MOV EDX,dword ptr [ESP + 0x68]
006acd59  FADD float ptr [ESP + 0x2c]
006acd5d  FSTP float ptr [ESP + 0x6c]
006acd61  FLD float ptr [ESP + 0x70]
006acd65  FADD float ptr [ESP + 0x30]
006acd69  FSTP float ptr [ESP + 0x70]
006acd6d  MOV EAX,dword ptr [ESP + 0x6c]
006acd71  MOV dword ptr [ECX],EDX
006acd73  MOV EDX,dword ptr [ESP + 0x70]
006acd77  MOV dword ptr [ECX + 0x4],EAX
006acd7a  MOV dword ptr [ECX + 0x8],EDX
006acd7d  MOV byte ptr [ESP + 0x27],0x1
006acd82  JMP 0x006acdb2
006acd84  FSTP ST0
006acd86  MOV ECX,dword ptr [0x008a2fb4]
006acd8c  LEA EAX,[EDI + 0x5c]
006acd8f  MOV dword ptr [EAX],ECX
006acd91  MOV EDX,dword ptr [0x008a2fb8]
006acd97  MOV dword ptr [EAX + 0x4],EDX
006acd9a  MOV ECX,dword ptr [0x008a2fbc]
006acda0  MOV EDX,dword ptr [ESP + 0x90]
006acda7  MOV dword ptr [EAX + 0x8],ECX
006acdaa  PUSH EDX
006acdab  MOV ECX,EDI
006acdad  CALL 0x00690050
006acdb2  FLD float ptr [0x00890968]
006acdb8  FLD float ptr [ESP + 0x44]
006acdbc  FUCOMPP
006acdbe  FNSTSW AX
006acdc0  TEST AH,0x44
006acdc3  JP 0x006acdd4
006acdc5  FLD float ptr [ESP + 0x90]
006acdcc  FADD float ptr [EDI + 0x68]
006acdcf  FSTP float ptr [EDI + 0x68]
006acdd2  JMP 0x006acddb
006acdd4  MOV dword ptr [EDI + 0x68],0x0
006acddb  FLD float ptr [ESP + 0x44]
006acddf  FCOMP float ptr [0x00890968]
006acde5  FNSTSW AX
006acde7  TEST AH,0x41
006acdea  JNZ 0x006acdf2
006acdec  FLD float ptr [ESP + 0x44]
006acdf0  JMP 0x006acdf8
006acdf2  FLD float ptr [0x00890968]
006acdf8  MOV EAX,dword ptr [ESP + 0x60]
006acdfc  FSTP float ptr [EDI + 0x78]
006acdff  MOV EDX,dword ptr [ESP + 0x98]
006ace06  INC EAX
006ace07  ADD EDX,0x4
006ace0a  ADD EBP,0x10
006ace0d  CMP EAX,0x4
006ace10  MOV dword ptr [ESP + 0x60],EAX
006ace14  MOV dword ptr [ESP + 0x98],EDX
006ace1b  JC 0x006ac882
006ace21  MOV AL,byte ptr [ESP + 0x27]
006ace25  TEST AL,AL
006ace27  JZ 0x006ad070
006ace2d  MOV EDX,dword ptr [0x008a2fbc]
006ace33  MOV ECX,dword ptr [0x008a2fb8]
006ace39  MOV EAX,[0x008a2fb4]
006ace3e  MOV dword ptr [ESP + 0x50],EDX
006ace42  MOV dword ptr [ESP + 0x7c],EDX
006ace46  MOV EDX,dword ptr [ESP + 0x64]
006ace4a  MOV dword ptr [ESP + 0x4c],ECX
006ace4e  MOV dword ptr [ESP + 0x78],ECX
006ace52  XOR ECX,ECX
006ace54  MOV dword ptr [ESP + 0x48],EAX
006ace58  MOV dword ptr [ESP + 0x74],EAX
006ace5c  ADD EDX,0x12c
006ace62  MOV EAX,dword ptr [EDX]
006ace64  MOV EDI,dword ptr [EAX + 0x6c]
006ace67  FLD float ptr [EAX + 0x70]
006ace6a  FADD float ptr [EAX + 0x78]
006ace6d  MOV dword ptr [ESP + 0x38],EDI
006ace71  MOV EDI,dword ptr [EAX + 0x74]
006ace74  MOV dword ptr [ESP + 0x40],EDI
006ace78  MOV EDI,ECX
006ace7a  SHR EDI,0x1
006ace7c  FSUB float ptr [ESP + EDI*0x4 + 0xb8]
006ace83  MOV EDI,dword ptr [ESP + 0x38]
006ace87  MOV dword ptr [ESP + 0x14],EDI
006ace8b  FSTP float ptr [ESP + 0x3c]
006ace8f  MOV EDI,dword ptr [ESP + 0x3c]
006ace93  MOV dword ptr [ESP + 0x18],EDI
006ace97  FLD float ptr [ESP + 0x18]
006ace9b  FMUL float ptr [ESI + 0x10]
006ace9e  MOV EDI,dword ptr [ESP + 0x40]
006acea2  FLD float ptr [ESP + 0x14]
006acea6  MOV dword ptr [ESP + 0x1c],EDI
006aceaa  FMUL float ptr [ESI]
006aceac  LEA EDI,[EAX + 0x4c]
006aceaf  FADDP
006aceb1  FLD float ptr [ESP + 0x1c]
006aceb5  FMUL float ptr [ESI + 0x20]
006aceb8  FADDP
006aceba  FADD float ptr [ESI + 0x30]
006acebd  FSTP float ptr [ESP + 0x38]
006acec1  MOV EBX,dword ptr [ESP + 0x38]
006acec5  FLD float ptr [ESP + 0x18]
006acec9  FMUL float ptr [ESI + 0x14]
006acecc  FLD float ptr [ESP + 0x14]
006aced0  FMUL float ptr [ESI + 0x4]
006aced3  FADDP
006aced5  FLD float ptr [ESP + 0x1c]
006aced9  FMUL float ptr [ESI + 0x24]
006acedc  FADDP
006acede  FADD float ptr [ESI + 0x34]
006acee1  FSTP float ptr [ESP + 0x3c]
006acee5  FLD float ptr [ESP + 0x1c]
006acee9  FMUL float ptr [ESI + 0x28]
006aceec  FLD float ptr [ESP + 0x14]
006acef0  FMUL float ptr [ESI + 0x8]
006acef3  FADDP
006acef5  FLD float ptr [ESP + 0x18]
006acef9  FMUL float ptr [ESI + 0x18]
006acefc  FADDP
006acefe  FADD float ptr [ESI + 0x38]
006acf01  MOV dword ptr [EDI],EBX
006acf03  MOV EBX,dword ptr [ESP + 0x3c]
006acf07  MOV dword ptr [EDI + 0x4],EBX
006acf0a  FSTP float ptr [ESP + 0x40]
006acf0e  MOV EBX,dword ptr [ESP + 0x40]
006acf12  FLD float ptr [ESP + 0x38]
006acf16  MOV dword ptr [EDI + 0x8],EBX
006acf19  FSUB float ptr [ESI + 0xb0]
006acf1f  FLD float ptr [ESP + 0x3c]
006acf23  FSUB float ptr [ESI + 0xb4]
006acf29  FLD float ptr [ESP + 0x40]
006acf2d  FSUB float ptr [ESI + 0xb8]
006acf33  FSTP float ptr [ESP + 0xa4]
006acf3a  FXCH
006acf3c  FSUB float ptr [ESI + 0x30]
006acf3f  FSTP float ptr [ESP + 0x9c]
006acf46  FSUB float ptr [ESI + 0x34]
006acf49  FLD float ptr [ESP + 0xa4]
006acf50  FSUB float ptr [ESI + 0x38]
006acf53  FLD ST1
006acf55  FMUL float ptr [EAX + 0x64]
006acf58  FLD ST1
006acf5a  FMUL float ptr [EAX + 0x60]
006acf5d  INC ECX
006acf5e  ADD EDX,0x4
006acf61  CMP ECX,0x4
006acf64  FSUBP
006acf66  FSTP float ptr [ESP + 0x28]
006acf6a  MOV EDI,dword ptr [ESP + 0x28]
006acf6e  MOV dword ptr [ESP + 0x84],EDI
006acf75  FMUL float ptr [EAX + 0x5c]
006acf78  FLD float ptr [ESP + 0x9c]
006acf7f  FMUL float ptr [EAX + 0x64]
006acf82  FSUBP
006acf84  FSTP float ptr [ESP + 0x2c]
006acf88  MOV EDI,dword ptr [ESP + 0x2c]
006acf8c  FLD float ptr [ESP + 0x9c]
006acf93  MOV dword ptr [ESP + 0x88],EDI
006acf9a  FMUL float ptr [EAX + 0x60]
006acf9d  FXCH
006acf9f  FMUL float ptr [EAX + 0x5c]
006acfa2  FSUBP
006acfa4  FSTP float ptr [ESP + 0x30]
006acfa8  MOV EDI,dword ptr [ESP + 0x30]
006acfac  FLD float ptr [ESP + 0x74]
006acfb0  MOV dword ptr [ESP + 0x8c],EDI
006acfb7  FADD float ptr [EAX + 0x5c]
006acfba  FSTP float ptr [ESP + 0x74]
006acfbe  FLD float ptr [ESP + 0x78]
006acfc2  FADD float ptr [EAX + 0x60]
006acfc5  FSTP float ptr [ESP + 0x78]
006acfc9  FLD float ptr [ESP + 0x7c]
006acfcd  FADD float ptr [EAX + 0x64]
006acfd0  FSTP float ptr [ESP + 0x7c]
006acfd4  FLD float ptr [ESP + 0x84]
006acfdb  FADD float ptr [ESP + 0x48]
006acfdf  FSTP float ptr [ESP + 0x48]
006acfe3  FLD float ptr [ESP + 0x88]
006acfea  FADD float ptr [ESP + 0x4c]
006acfee  FSTP float ptr [ESP + 0x4c]
006acff2  FLD float ptr [ESP + 0x8c]
006acff9  FADD float ptr [ESP + 0x50]
006acffd  FSTP float ptr [ESP + 0x50]
006ad001  JC 0x006ace62
006ad007  FLD float ptr [ESP + 0x50]
006ad00b  MOV EDI,dword ptr [ESP + 0x64]
006ad00f  FMUL float ptr [ESI + 0x18]
006ad012  MOV EAX,dword ptr [EDI + 0xb4]
006ad018  FLD float ptr [ESP + 0x4c]
006ad01c  MOV ECX,dword ptr [EDI + 0xe8]
006ad022  FMUL float ptr [ESI + 0x14]
006ad025  FADDP
006ad027  FLD float ptr [ESP + 0x48]
006ad02b  FMUL float ptr [ESI + 0x10]
006ad02e  FADDP
006ad030  FLD ST0
006ad032  FMUL float ptr [EAX + 0x4c]
006ad035  LEA EAX,[ESP + 0x48]
006ad039  PUSH EAX
006ad03a  LEA EAX,[ESP + 0x78]
006ad03e  FSUBRP
006ad040  PUSH EAX
006ad041  FLD ST0
006ad043  FMUL float ptr [ESI + 0x10]
006ad046  FADD float ptr [ESP + 0x50]
006ad04a  FSTP float ptr [ESP + 0x50]
006ad04e  FLD ST0
006ad050  FMUL float ptr [ESI + 0x14]
006ad053  FADD float ptr [ESP + 0x54]
006ad057  FSTP float ptr [ESP + 0x54]
006ad05b  FMUL float ptr [ESI + 0x18]
006ad05e  FADD float ptr [ESP + 0x58]
006ad062  FSTP float ptr [ESP + 0x58]
006ad066  MOV EDX,dword ptr [ECX]
006ad068  CALL dword ptr [EDX + 0x84]
006ad06e  JMP 0x006ad074
006ad070  MOV EDI,dword ptr [ESP + 0x64]
006ad074  FLD float ptr [ESP + 0x20]
006ad078  FCOMP float ptr [0x00890968]
006ad07e  FNSTSW AX
006ad080  TEST AH,0x41
006ad083  JNZ 0x006ad0d5
006ad085  MOV EAX,dword ptr [EDI + 0x12c]
006ad08b  FLD float ptr [ESP + 0x20]
006ad08f  FADD float ptr [EAX + 0x50]
006ad092  FSTP float ptr [EAX + 0x50]
006ad095  MOV EAX,dword ptr [EDI + 0x130]
006ad09b  FLD float ptr [ESP + 0x20]
006ad09f  FADD float ptr [EAX + 0x50]
006ad0a2  FSTP float ptr [EAX + 0x50]
006ad0a5  MOV EAX,dword ptr [EDI + 0x134]
006ad0ab  FLD float ptr [ESP + 0x20]
006ad0af  FADD float ptr [EAX + 0x50]
006ad0b2  FSTP float ptr [EAX + 0x50]
006ad0b5  MOV EAX,dword ptr [EDI + 0x138]
006ad0bb  FLD float ptr [ESP + 0x20]
006ad0bf  FADD float ptr [EAX + 0x50]
006ad0c2  FSTP float ptr [EAX + 0x50]
006ad0c5  MOV ECX,dword ptr [EDI + 0xe8]
006ad0cb  MOV EAX,dword ptr [ESP + 0x20]
006ad0cf  MOV EDX,dword ptr [ECX]
006ad0d1  PUSH EAX
006ad0d2  CALL dword ptr [EDX + 0x7c]
006ad0d5  MOV EBX,dword ptr [ESP + 0x80]
006ad0dc  TEST EBX,EBX
006ad0de  JZ 0x006ad17f
006ad0e4  MOV EAX,dword ptr [EDI + 0x114]
006ad0ea  TEST EAX,EAX
006ad0ec  JNZ 0x006ad17f
006ad0f2  FLD float ptr [ESI + 0x94]
006ad0f8  LEA ECX,[ESI + 0x90]
006ad0fe  FMUL float ptr [0x008933d4]
006ad104  FSTP float ptr [ESI + 0x94]
006ad10a  MOV EDX,dword ptr [ECX]
006ad10c  MOV EAX,dword ptr [ECX + 0x4]
006ad10f  MOV ECX,dword ptr [ECX + 0x8]
006ad112  MOV dword ptr [ESP + 0x1c],ECX
006ad116  FLD float ptr [ESP + 0x1c]
006ad11a  FMUL float ptr [ESI + 0x20]
006ad11d  MOV dword ptr [ESP + 0x18],EAX
006ad121  FLD float ptr [ESP + 0x18]
006ad125  MOV dword ptr [ESP + 0x14],EDX
006ad129  FMUL float ptr [ESI + 0x10]
006ad12c  LEA EAX,[ESI + 0x60]
006ad12f  PUSH EAX
006ad130  FADDP
006ad132  FLD float ptr [ESP + 0x18]
006ad136  FMUL float ptr [ESI]
006ad138  FADDP
006ad13a  FSTP float ptr [EAX]
006ad13c  FLD float ptr [ESP + 0x20]
006ad140  FMUL float ptr [ESI + 0x24]
006ad143  FLD float ptr [ESP + 0x1c]
006ad147  FMUL float ptr [ESI + 0x14]
006ad14a  FADDP
006ad14c  FLD float ptr [ESP + 0x18]
006ad150  FMUL float ptr [ESI + 0x4]
006ad153  FADDP
006ad155  FSTP float ptr [EAX + 0x4]
006ad158  FLD float ptr [ESP + 0x20]
006ad15c  FMUL float ptr [ESI + 0x28]
006ad15f  FLD float ptr [ESP + 0x1c]
006ad163  FMUL float ptr [ESI + 0x18]
006ad166  FADDP
006ad168  FLD float ptr [ESP + 0x18]
006ad16c  FMUL float ptr [ESI + 0x8]
006ad16f  FADDP
006ad171  FSTP float ptr [EAX + 0x8]
006ad174  MOV ECX,dword ptr [EDI + 0xe8]
006ad17a  MOV EDX,dword ptr [ECX]
006ad17c  CALL dword ptr [EDX + 0x64]
006ad17f  MOV dword ptr [EDI + 0x114],EBX
006ad185  POP EDI
006ad186  POP ESI
006ad187  POP EBP
006ad188  POP EBX
006ad189  ADD ESP,0x130
006ad18f  RET 0x4
