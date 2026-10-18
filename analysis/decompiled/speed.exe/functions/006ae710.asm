006ae710  SUB ESP,0x1c8
006ae716  PUSH EBX
006ae717  PUSH EBP
006ae718  PUSH ESI
006ae719  MOV ESI,dword ptr [ESP + 0x1d8]
006ae720  MOV EAX,dword ptr [ESI + 0xc0]
006ae726  PUSH EDI
006ae727  MOV EBP,ECX
006ae729  LEA ECX,[ESP + 0x44]
006ae72d  PUSH ECX
006ae72e  XOR EBX,EBX
006ae730  LEA EDX,[ESP + 0x54]
006ae734  PUSH EDX
006ae735  PUSH ESI
006ae736  MOV ECX,EBP
006ae738  MOV dword ptr [ESP + 0xe0],EAX
006ae73f  MOV dword ptr [ESP + 0x5c],EBX
006ae743  MOV dword ptr [ESP + 0x60],EBX
006ae747  MOV dword ptr [ESP + 0x64],EBX
006ae74b  MOV dword ptr [ESP + 0x50],EBX
006ae74f  MOV dword ptr [ESP + 0x54],EBX
006ae753  MOV dword ptr [ESP + 0x58],EBX
006ae757  CALL 0x00691860
006ae75c  MOV EAX,dword ptr [ESI + 0xac]
006ae762  LEA ECX,[ESP + 0x1cc]
006ae769  PUSH ECX
006ae76a  LEA EDI,[ESI + 0x70]
006ae76d  PUSH ESI
006ae76e  PUSH EDI
006ae76f  MOV dword ptr [ESP + 0x68],EBX
006ae773  MOV dword ptr [ESP + 0x24],EBX
006ae777  MOV dword ptr [ESP + 0x13c],EAX
006ae77e  CALL 0x00401670
006ae783  CALL 0x006e8de0
006ae788  FSTP ST0
006ae78a  MOV EAX,dword ptr [EBP + 0xb4]
006ae790  FLD float ptr [EAX + 0x30]
006ae793  MOV EDX,dword ptr [EAX + 0x8]
006ae796  FMUL float ptr [0x008aae8c]
006ae79c  MOV dword ptr [ESP + 0x150],EDX
006ae7a3  FSTP float ptr [ESP + 0x170]
006ae7aa  FLD float ptr [EAX + 0x28]
006ae7ad  FMUL float ptr [0x008aae8c]
006ae7b3  FSTP float ptr [ESP + 0x158]
006ae7ba  FLD float ptr [EAX + 0x40]
006ae7bd  FMUL float ptr [0x008a9388]
006ae7c3  FSTP float ptr [ESP + 0x104]
006ae7ca  FLD float ptr [0x0089096c]
006ae7d0  FSUB float ptr [EAX]
006ae7d2  FSTP float ptr [ESP + 0x128]
006ae7d9  FLD float ptr [EAX + 0x38]
006ae7dc  FMUL float ptr [0x008aae8c]
006ae7e2  FSTP float ptr [ESP + 0x168]
006ae7e9  FLD float ptr [EAX + 0x48]
006ae7ec  FMUL float ptr [0x008aae8c]
006ae7f2  FLD float ptr [EAX + 0x10]
006ae7f5  FMUL float ptr [0x008a9388]
006ae7fb  FSTP float ptr [ESP + 0x178]
006ae802  FLD float ptr [EAX + 0x18]
006ae805  FMUL float ptr [0x008a9388]
006ae80b  FSTP float ptr [ESP + 0x160]
006ae812  FLD float ptr [EAX + 0x34]
006ae815  FMUL float ptr [0x008aae8c]
006ae81b  FSTP float ptr [ESP + 0x174]
006ae822  FLD float ptr [EAX + 0x2c]
006ae825  FMUL float ptr [0x008aae8c]
006ae82b  FSTP float ptr [ESP + 0x15c]
006ae832  FLD float ptr [EAX + 0x44]
006ae835  FMUL float ptr [0x008a9388]
006ae83b  FSTP float ptr [ESP + 0x108]
006ae842  FLD float ptr [0x0089096c]
006ae848  FSUB float ptr [EAX + 0x4]
006ae84b  FSTP float ptr [ESP + 0x12c]
006ae852  MOV ECX,dword ptr [EBP + 0x180]
006ae858  FLD float ptr [EAX + 0x3c]
006ae85b  MOV EDX,dword ptr [EBP + 0x184]
006ae861  FMUL float ptr [0x008aae8c]
006ae867  MOV dword ptr [ESP + 0x38],0x3f800000
006ae86f  FSTP float ptr [ESP + 0x16c]
006ae876  FLD float ptr [EAX + 0x4c]
006ae879  FMUL float ptr [0x008aae8c]
006ae87f  FLD float ptr [EAX + 0x14]
006ae882  FMUL float ptr [0x008a9388]
006ae888  FSTP float ptr [ESP + 0x17c]
006ae88f  FLD float ptr [EAX + 0x1c]
006ae892  MOV EAX,dword ptr [EAX + 0xc]
006ae895  FMUL float ptr [0x008a9388]
006ae89b  MOV dword ptr [ESP + 0x154],EAX
006ae8a2  MOV EAX,dword ptr [EBP + 0x188]
006ae8a8  FSTP float ptr [ESP + 0x164]
006ae8af  FLD float ptr [ECX + 0x78]
006ae8b2  MOV ECX,dword ptr [EBP + 0x18c]
006ae8b8  FSUB float ptr [EDX + 0x78]
006ae8bb  MOV EDX,dword ptr [ESP + 0x50]
006ae8bf  MOV dword ptr [ESP + 0x2c],EDX
006ae8c3  MOV dword ptr [ESP + 0x198],EDX
006ae8ca  MOV EDX,dword ptr [ESP + 0x38]
006ae8ce  FMUL ST2
006ae8d0  MOV dword ptr [ESP + 0x1a4],EDX
006ae8d7  MOV EDX,dword ptr [ESP + 0x64]
006ae8db  FST float ptr [ESP + 0x140]
006ae8e2  MOV dword ptr [ESP + 0x38],0x3f800000
006ae8ea  FCHS
006ae8ec  MOV dword ptr [ESP + 0x1b0],EDX
006ae8f3  FSTP float ptr [ESP + 0x144]
006ae8fa  FLD float ptr [EAX + 0x78]
006ae8fd  MOV EAX,dword ptr [ESP + 0x54]
006ae901  FSUB float ptr [ECX + 0x78]
006ae904  MOV ECX,dword ptr [ESP + 0x58]
006ae908  MOV dword ptr [ESP + 0x30],EAX
006ae90c  MOV dword ptr [ESP + 0x34],ECX
006ae910  FMUL ST1
006ae912  MOV dword ptr [ESP + 0x19c],EAX
006ae919  MOV EAX,dword ptr [ESP + 0x5c]
006ae91d  MOV dword ptr [ESP + 0x1a0],ECX
006ae924  FSTP float ptr [ESP + 0x148]
006ae92b  MOV ECX,dword ptr [ESP + 0x60]
006ae92f  MOV dword ptr [ESP + 0x2c],EAX
006ae933  FSTP ST0
006ae935  MOV dword ptr [ESP + 0x30],ECX
006ae939  FSTP ST0
006ae93b  FLD float ptr [ESP + 0x148]
006ae942  MOV dword ptr [ESP + 0x1a8],EAX
006ae949  MOV EAX,dword ptr [ESP + 0x38]
006ae94d  FCHS
006ae94f  MOV dword ptr [ESP + 0x1ac],ECX
006ae956  FSTP float ptr [ESP + 0x14c]
006ae95d  MOV ECX,dword ptr [ESI + 0x20]
006ae960  MOV dword ptr [ESP + 0x34],EDX
006ae964  MOV EDX,dword ptr [ESI + 0x24]
006ae967  MOV dword ptr [ESP + 0x2c],ECX
006ae96b  MOV dword ptr [ESP + 0x1b4],EAX
006ae972  MOV EAX,dword ptr [ESI + 0x28]
006ae975  MOV dword ptr [ESP + 0x1b8],ECX
006ae97c  MOV dword ptr [ESP + 0x38],0x3f800000
006ae984  MOV ECX,dword ptr [ESP + 0x38]
006ae988  MOV dword ptr [ESP + 0x30],EDX
006ae98c  MOV dword ptr [ESP + 0x34],EAX
006ae990  MOV dword ptr [ESP + 0x1bc],EDX
006ae997  MOV EDX,dword ptr [ESI + 0x20]
006ae99a  MOV dword ptr [ESP + 0x1c0],EAX
006ae9a1  MOV EAX,dword ptr [ESI + 0x24]
006ae9a4  MOV dword ptr [ESP + 0x1c4],ECX
006ae9ab  MOV ECX,dword ptr [ESI + 0x28]
006ae9ae  MOV dword ptr [ESP + 0x2c],EDX
006ae9b2  MOV dword ptr [ESP + 0x30],EAX
006ae9b6  MOV dword ptr [ESP + 0x34],ECX
006ae9ba  MOV dword ptr [ESP + 0x1cc],EAX
006ae9c1  LEA EAX,[ESP + 0x180]
006ae9c8  PUSH EAX
006ae9c9  MOV dword ptr [ESP + 0x1cc],EDX
006ae9d0  MOV dword ptr [ESP + 0x3c],0x3f800000
006ae9d8  MOV EDX,dword ptr [ESP + 0x3c]
006ae9dc  PUSH ESI
006ae9dd  PUSH EDI
006ae9de  MOV dword ptr [ESP + 0x1dc],ECX
006ae9e5  MOV dword ptr [ESP + 0x1e0],EDX
006ae9ec  CALL 0x00486610
006ae9f1  MOV EAX,[0x008a2fb4]
006ae9f6  MOV ECX,dword ptr [0x008a2fb8]
006ae9fc  MOV EDX,dword ptr [0x008a2fbc]
006aea02  MOV dword ptr [ESP + 0xa0],EAX
006aea09  MOV dword ptr [ESP + 0xa4],ECX
006aea10  MOV dword ptr [ESP + 0xac],EAX
006aea17  MOV dword ptr [ESP + 0xb0],ECX
006aea1e  LEA ECX,[ESP + 0x1ac]
006aea25  LEA EAX,[EBP + 0x180]
006aea2b  ADD ESP,0x18
006aea2e  MOV dword ptr [ESP + 0x90],EDX
006aea35  MOV dword ptr [ESP + 0x9c],EDX
006aea3c  MOV byte ptr [ESP + 0x17],BL
006aea40  MOV dword ptr [ESP + 0x78],EBX
006aea44  MOV dword ptr [ESP + 0xa4],ECX
006aea4b  MOV dword ptr [ESP + 0xa8],EAX
006aea52  FLD float ptr [ESI + 0x84]
006aea58  MOV EAX,dword ptr [ESI + 0xd8]
006aea5e  MOV EDX,dword ptr [ESP + 0xa8]
006aea65  FADD ST0,ST0
006aea67  MOV EDI,dword ptr [EDX]
006aea69  MOV EDX,dword ptr [ESI + 0xc0]
006aea6f  MOV EBX,dword ptr [ESP + 0x78]
006aea73  PUSH ECX
006aea74  MOV ECX,dword ptr [EDI + 0xcc]
006aea7a  FSTP float ptr [ESP]
006aea7d  PUSH EAX
006aea7e  PUSH 0x1
006aea80  PUSH ECX
006aea81  PUSH EDX
006aea82  LEA EAX,[ESP + 0x1e0]
006aea89  PUSH EAX
006aea8a  PUSH ESI
006aea8b  LEA EAX,[ESI + 0x50]
006aea8e  PUSH EAX
006aea8f  LEA EAX,[ESI + 0x60]
006aea92  PUSH EAX
006aea93  MOV ECX,EDI
006aea95  SHR EBX,0x1
006aea97  CALL 0x00671530
006aea9c  MOV EAX,dword ptr [EDI + 0x44]
006aea9f  MOV ECX,dword ptr [EDI + 0x3c]
006aeaa2  MOV EDX,dword ptr [EDI + 0x40]
006aeaa5  MOV dword ptr [ESP + 0x74],EAX
006aeaa9  MOV EAX,dword ptr [ESP + 0xa4]
006aeab0  MOV dword ptr [ESP + 0x6c],ECX
006aeab4  MOV ECX,dword ptr [EAX + -0x8]
006aeab7  MOV dword ptr [ESP + 0x70],EDX
006aeabb  MOV EDX,dword ptr [EAX + -0x4]
006aeabe  MOV EAX,dword ptr [EAX]
006aeac0  MOV dword ptr [ESP + 0x38],EAX
006aeac4  FLD float ptr [ESP + 0x38]
006aeac8  FMUL float ptr [ESP + 0x70]
006aeacc  MOV dword ptr [ESP + 0x34],EDX
006aead0  MOV dword ptr [ESP + 0x30],ECX
006aead4  FSTP float ptr [ESP + 0xd8]
006aeadb  FLD float ptr [ESP + 0x34]
006aeadf  FMUL float ptr [ESP + 0x74]
006aeae3  FSTP float ptr [ESP + 0xd0]
006aeaea  FLD float ptr [ESP + 0xd8]
006aeaf1  FSUB float ptr [ESP + 0xd0]
006aeaf8  FSTP float ptr [ESP + 0xe0]
006aeaff  MOV ECX,dword ptr [ESP + 0xe0]
006aeb06  FLD float ptr [ESP + 0x74]
006aeb0a  MOV dword ptr [ESP + 0xbc],ECX
006aeb11  FMUL float ptr [ESP + 0x30]
006aeb15  LEA ECX,[ESP + 0xbc]
006aeb1c  PUSH ECX
006aeb1d  FSTP float ptr [ESP + 0xd0]
006aeb24  FLD float ptr [ESP + 0x3c]
006aeb28  FMUL float ptr [ESP + 0x70]
006aeb2c  FSTP float ptr [ESP + 0xcc]
006aeb33  FLD float ptr [ESP + 0xd0]
006aeb3a  FSUB float ptr [ESP + 0xcc]
006aeb41  FSTP float ptr [ESP + 0xe8]
006aeb48  MOV EDX,dword ptr [ESP + 0xe8]
006aeb4f  FLD float ptr [ESP + 0x38]
006aeb53  MOV dword ptr [ESP + 0xc4],EDX
006aeb5a  FMUL float ptr [ESP + 0x70]
006aeb5e  MOV EDX,ECX
006aeb60  PUSH EDX
006aeb61  FSTP float ptr [ESP + 0x48]
006aeb65  FLD float ptr [ESP + 0x78]
006aeb69  FMUL float ptr [ESP + 0x38]
006aeb6d  FSTP float ptr [ESP + 0x44]
006aeb71  FLD float ptr [ESP + 0x48]
006aeb75  FSUB float ptr [ESP + 0x44]
006aeb79  FSTP float ptr [ESP + 0xf0]
006aeb80  MOV EAX,dword ptr [ESP + 0xf0]
006aeb87  MOV dword ptr [ESP + 0xcc],EAX
006aeb8e  CALL 0x0040fe20
006aeb93  FLD float ptr [ESP + 0x78]
006aeb97  FMUL float ptr [ESI + 0x14]
006aeb9a  MOV EAX,dword ptr [EDI + 0x48]
006aeb9d  ADD ESP,0x8
006aeba0  MOV dword ptr [ESP + 0x10c],EAX
006aeba7  FLD float ptr [ESP + 0x74]
006aebab  FMUL float ptr [ESI + 0x18]
006aebae  FADDP
006aebb0  FLD float ptr [ESP + 0x6c]
006aebb4  FMUL float ptr [ESI + 0x10]
006aebb7  FADDP
006aebb9  FST float ptr [ESP + 0x10]
006aebbd  FCOMP float ptr [0x0089096c]
006aebc3  FNSTSW AX
006aebc5  TEST AH,0x5
006aebc8  JP 0x006aec87
006aebce  FLD float ptr [ESP + 0x10]
006aebd2  FLD float ptr [0x00890968]
006aebd8  FCOMP float ptr [ESP + 0x10]
006aebdc  FNSTSW AX
006aebde  TEST AH,0x41
006aebe1  JNZ 0x006aebeb
006aebe3  FSTP ST0
006aebe5  FLD float ptr [0x00890968]
006aebeb  FLD ST0
006aebed  LEA EAX,[ESP + EBX*0x4 + 0x154]
006aebf4  FMUL float ptr [EAX]
006aebf6  MOV dword ptr [ESP + 0xdc],EAX
006aebfd  FADD float ptr [ESP + 0x10c]
006aec04  FLD float ptr [ESP + EBX*0x4 + 0x16c]
006aec0b  FSTP float ptr [ESP + 0x10]
006aec0f  FLD float ptr [0x00890968]
006aec15  FLD float ptr [EDI + 0x78]
006aec18  FUCOMPP
006aec1a  FNSTSW AX
006aec1c  TEST AH,0x44
006aec1f  JP 0x006aec3e
006aec21  FLD float ptr [ESP + 0x10]
006aec25  FSUBR ST0,ST1
006aec27  FLD float ptr [ESP + 0x18]
006aec2b  FCOMP
006aec2d  FNSTSW AX
006aec2f  TEST AH,0x41
006aec32  JNZ 0x006aec3a
006aec34  FSTP ST0
006aec36  FLD float ptr [ESP + 0x18]
006aec3a  FSTP float ptr [ESP + 0x18]
006aec3e  FCOM float ptr [0x00890968]
006aec44  FNSTSW AX
006aec46  TEST AH,0x41
006aec49  JZ 0x006aec53
006aec4b  FSTP ST0
006aec4d  FLD float ptr [0x00890968]
006aec53  FCOM float ptr [ESP + 0x10]
006aec57  FST float ptr [ESP + 0x1c]
006aec5b  FNSTSW AX
006aec5d  TEST AH,0x41
006aec60  JNZ 0x006aec92
006aec62  FSUB float ptr [ESP + 0x10]
006aec66  FLD float ptr [ESP + 0x18]
006aec6a  FCOMP
006aec6c  FNSTSW AX
006aec6e  TEST AH,0x41
006aec71  JNZ 0x006aec79
006aec73  FSTP ST0
006aec75  FLD float ptr [ESP + 0x18]
006aec79  MOV ECX,dword ptr [ESP + 0x10]
006aec7d  FSTP float ptr [ESP + 0x18]
006aec81  MOV dword ptr [ESP + 0x1c],ECX
006aec85  JMP 0x006aec94
006aec87  FLD float ptr [0x0089096c]
006aec8d  JMP 0x006aebeb
006aec92  FSTP ST0
006aec94  FLD float ptr [ESP + 0x1c]
006aec98  FCOMP float ptr [0x00890968]
006aec9e  FNSTSW AX
006aeca0  TEST AH,0x41
006aeca3  JNZ 0x006af25d
006aeca9  FCOMP float ptr [0x008f8760]
006aecaf  FNSTSW AX
006aecb1  TEST AH,0x41
006aecb4  JNZ 0x006af25f
006aecba  FLD float ptr [ESP + 0x1c]
006aecbe  MOV EAX,dword ptr [ESP + 0x5c]
006aecc2  FSUB float ptr [EDI + 0x78]
006aecc5  INC EAX
006aecc6  MOV dword ptr [ESP + 0x5c],EAX
006aecca  FDIV float ptr [ESP + 0xd4]
006aecd1  FST float ptr [ESP + 0xac]
006aecd8  FLD float ptr [ESP + EBX*0x4 + 0xf8]
006aecdf  FCOMP float ptr [0x008aabe0]
006aece5  FNSTSW AX
006aece7  TEST AH,0x41
006aecea  JNZ 0x006aed67
006aecec  FLD float ptr [ESP + EBX*0x4 + 0x11c]
006aecf3  FCOMP float ptr [0x0089096c]
006aecf9  FNSTSW AX
006aecfb  TEST AH,0x5
006aecfe  JP 0x006aed67
006aed00  FCOM float ptr [0x00890968]
006aed06  FLD ST0
006aed08  FNSTSW AX
006aed0a  TEST AH,0x5
006aed0d  JP 0x006aed11
006aed0f  FCHS
006aed11  MOV EDX,dword ptr [ESP + EBX*0x4 + 0xf8]
006aed18  FST float ptr [ESP + 0x10]
006aed1c  MOV dword ptr [ESP + 0xa0],EDX
006aed23  FCOMP float ptr [ESP + 0xa0]
006aed2a  FNSTSW AX
006aed2c  TEST AH,0x41
006aed2f  JNZ 0x006aed67
006aed31  FSTP ST0
006aed33  FLD float ptr [ESP + 0x10]
006aed37  FDIV float ptr [ESP + 0xa0]
006aed3e  FLD float ptr [ESP + EBX*0x4 + 0x11c]
006aed45  CALL 0x007c45f0
006aed4a  FMUL float ptr [ESP + 0xa0]
006aed51  FLD float ptr [ESP + 0xac]
006aed58  FCOMP float ptr [0x00890968]
006aed5e  FNSTSW AX
006aed60  TEST AH,0x41
006aed63  JZ 0x006aed67
006aed65  FCHS
006aed67  FLD float ptr [ESP + 0x1c]
006aed6b  FMUL float ptr [ESP + EBX*0x4 + 0x144]
006aed72  FADD float ptr [0x0089096c]
006aed78  FMUL float ptr [ESP + EBX*0x4 + 0x15c]
006aed7f  FMUL float ptr [ESP + 0x1c]
006aed83  FSTP float ptr [ESP + 0xac]
006aed8a  FCOM float ptr [0x00890968]
006aed90  FNSTSW AX
006aed92  TEST AH,0x41
006aed95  JNZ 0x006aeda0
006aed97  FLD float ptr [ESP + EBX*0x4 + 0x164]
006aed9e  JMP 0x006aeda7
006aeda0  FLD float ptr [ESP + EBX*0x4 + 0x14c]
006aeda7  MOV EAX,dword ptr [EBP + 0xb4]
006aedad  FMULP
006aedaf  FLD float ptr [ESP + 0x130]
006aedb6  FMUL float ptr [EAX + 0x58]
006aedb9  FMUL float ptr [0x00891608]
006aedbf  FLD ST1
006aedc1  FCOMPP
006aedc3  FNSTSW AX
006aedc5  TEST AH,0x41
006aedc8  JNZ 0x006aedd2
006aedca  FSTP ST0
006aedcc  FLD float ptr [0x00890968]
006aedd2  MOV ECX,dword ptr [ESP + 0x78]
006aedd6  FADD float ptr [ESP + ECX*0x4 + 0x134]
006aeddd  FADD float ptr [ESP + 0xac]
006aede4  FCOM float ptr [0x00890968]
006aedea  FNSTSW AX
006aedec  TEST AH,0x41
006aedef  JZ 0x006aedf9
006aedf1  FSTP ST0
006aedf3  FLD float ptr [0x00890968]
006aedf9  FLD float ptr [ESI + 0x10]
006aedfc  MOV EDX,dword ptr [ESI + 0x18]
006aedff  FLD float ptr [ESI + 0x14]
006aee02  MOV dword ptr [ESP + 0x28],EDX
006aee06  FXCH
006aee08  FMUL ST2
006aee0a  FSTP float ptr [ESP + 0x44]
006aee0e  FMUL ST1
006aee10  FSTP float ptr [ESP + 0x48]
006aee14  FLD float ptr [ESP + 0x28]
006aee18  FMUL ST1
006aee1a  FSTP float ptr [ESP + 0x4c]
006aee1e  FLD float ptr [ESP + 0xd0]
006aee25  FSUB float ptr [ESP + 0xd8]
006aee2c  FSTP float ptr [ESP + 0xec]
006aee33  MOV EAX,dword ptr [ESP + 0xec]
006aee3a  FLD float ptr [ESP + 0xc8]
006aee41  MOV dword ptr [ESP + 0x60],EAX
006aee45  FSUB float ptr [ESP + 0xcc]
006aee4c  FSTP float ptr [ESP + 0xf0]
006aee53  MOV ECX,dword ptr [ESP + 0xf0]
006aee5a  FLD float ptr [ESP + 0x3c]
006aee5e  MOV dword ptr [ESP + 0x64],ECX
006aee62  FSUB float ptr [ESP + 0x40]
006aee66  FSTP float ptr [ESP + 0xf4]
006aee6d  MOV EDX,dword ptr [ESP + 0xf4]
006aee74  FLD float ptr [ESP + 0x64]
006aee78  MOV dword ptr [ESP + 0x68],EDX
006aee7c  FMUL float ptr [ESP + 0x38]
006aee80  FLD float ptr [ESP + 0x68]
006aee84  FMUL float ptr [ESP + 0x34]
006aee88  FSUBP
006aee8a  FSTP float ptr [ESP + 0x100]
006aee91  MOV EAX,dword ptr [ESP + 0x100]
006aee98  FLD float ptr [ESP + 0x68]
006aee9c  FMUL float ptr [ESP + 0x30]
006aeea0  FLD float ptr [ESP + 0x38]
006aeea4  FMUL float ptr [ESP + 0x60]
006aeea8  FSUBP
006aeeaa  FSTP float ptr [ESP + 0x104]
006aeeb1  MOV ECX,dword ptr [ESP + 0x104]
006aeeb8  FLD float ptr [ESP + 0x34]
006aeebc  FMUL float ptr [ESP + 0x60]
006aeec0  MOV dword ptr [ESP + 0x60],EAX
006aeec4  FLD float ptr [ESP + 0x64]
006aeec8  MOV dword ptr [ESP + 0x64],ECX
006aeecc  FMUL float ptr [ESP + 0x30]
006aeed0  FSUBP
006aeed2  FSTP float ptr [ESP + 0x108]
006aeed9  MOV EDX,dword ptr [ESP + 0x108]
006aeee0  MOV dword ptr [ESP + 0x68],EDX
006aeee4  FLD float ptr [ESP + 0x68]
006aeee8  FMUL float ptr [ESP + 0x74]
006aeeec  FLD float ptr [ESP + 0x64]
006aeef0  FMUL float ptr [ESP + 0x70]
006aeef4  FADDP
006aeef6  FLD float ptr [ESP + 0x60]
006aeefa  FMUL float ptr [ESP + 0x6c]
006aeefe  FADDP
006aef00  FMUL float ptr [0x00890e98]
006aef06  FSUB float ptr [0x008aac70]
006aef0c  FCOM float ptr [0x00894b58]
006aef12  FNSTSW AX
006aef14  TEST AH,0x41
006aef17  JZ 0x006aef21
006aef19  FSTP ST0
006aef1b  FLD float ptr [0x00894b58]
006aef21  FXCH
006aef23  MOV EAX,dword ptr [ESI + 0xc0]
006aef29  FMUL ST1
006aef2b  PUSH EAX
006aef2c  FSTP float ptr [ESP + 0x14]
006aef30  MOV ECX,dword ptr [ESP + 0x14]
006aef34  FSTP ST0
006aef36  PUSH ECX
006aef37  FLD float ptr [ESP + 0xcc]
006aef3e  MOV ECX,EDI
006aef40  FMUL float ptr [EDI + 0x94]
006aef46  FLD float ptr [ESP + 0xc4]
006aef4d  FMUL float ptr [EDI + 0x8c]
006aef53  FADDP
006aef55  FLD float ptr [ESP + 0xc8]
006aef5c  FMUL float ptr [EDI + 0x90]
006aef62  FADDP
006aef64  FSTP float ptr [ESP + 0x44]
006aef68  FLD float ptr [ESP + 0x40]
006aef6c  MOV EAX,dword ptr [ESP + 0x44]
006aef70  FMUL float ptr [EDI + 0x94]
006aef76  FLD float ptr [ESP + 0x38]
006aef7a  FMUL float ptr [EDI + 0x8c]
006aef80  FADDP
006aef82  FLD float ptr [ESP + 0x3c]
006aef86  FMUL float ptr [EDI + 0x90]
006aef8c  FADDP
006aef8e  FSTP float ptr [ESP + 0x48]
006aef92  FLD float ptr [0x0089096c]
006aef98  MOV EDX,dword ptr [ESP + 0x48]
006aef9c  FDIV float ptr [ESI + 0xc0]
006aefa2  PUSH EDX
006aefa3  PUSH EAX
006aefa4  FLD float ptr [ESP + 0x4c]
006aefa8  FSUB float ptr [EDI + 0xe0]
006aefae  FMUL ST1
006aefb0  FSTP float ptr [ESP + 0x190]
006aefb7  FLD float ptr [ESP + 0x50]
006aefbb  FSUB float ptr [EDI + 0xd8]
006aefc1  FMUL ST1
006aefc3  FSTP float ptr [ESP + 0x198]
006aefca  FSTP ST0
006aefcc  CALL 0x00690da0
006aefd1  FLD float ptr [ESI + 0xac]
006aefd7  FMUL float ptr [0x008910f0]
006aefdd  FLD float ptr [ESP + 0x180]
006aefe4  FMUL ST1
006aefe6  FLD ST1
006aefe8  FMUL float ptr [0x00890968]
006aefee  FXCH ST2
006aeff0  FMUL float ptr [ESP + 0x188]
006aeff7  FLD ST1
006aeff9  FCHS
006aeffb  FLD float ptr [ESP + 0xbc]
006af002  FMUL ST1
006af004  FLD float ptr [ESP + 0xc0]
006af00b  FMUL ST2
006af00d  FSTP float ptr [ESP + 0x80]
006af014  FLD float ptr [ESP + 0xc4]
006af01b  FMUL ST2
006af01d  FSTP float ptr [ESP + 0x84]
006af024  FLD float ptr [ESP + 0x30]
006af028  FMUL ST3
006af02a  FADD ST0,ST1
006af02c  FSTP float ptr [ESP + 0x7c]
006af030  FSTP ST0
006af032  FSTP ST0
006af034  FLD float ptr [ESP + 0x34]
006af038  FMUL ST1
006af03a  FADD float ptr [ESP + 0x80]
006af041  FSTP float ptr [ESP + 0x80]
006af048  FLD float ptr [ESP + 0x38]
006af04c  PUSH ECX
006af04d  FMUL ST1
006af04f  FADD float ptr [ESP + 0x88]
006af056  FSTP float ptr [ESP + 0x88]
006af05d  FLD ST2
006af05f  FMUL ST3
006af061  FLD ST1
006af063  FMUL ST2
006af065  FADDP
006af067  FLD ST2
006af069  FMUL ST3
006af06b  FADDP
006af06d  FSTP float ptr [ESP]
006af070  FSTP ST0
006af072  FSTP ST1
006af074  FSTP ST0
006af076  CALL 0x005c5e80
006af07b  MOV ECX,dword ptr [EBP + 0xa0]
006af081  FLD float ptr [ESP + 0x14]
006af085  FMUL float ptr [ECX + EBX*0x4 + 0x38]
006af089  ADD ESP,0x4
006af08c  FLD ST1
006af08e  FCOMPP
006af090  FNSTSW AX
006af092  TEST AH,0x41
006af095  JNZ 0x006af0c2
006af097  FDIVR float ptr [ECX + EBX*0x4 + 0x20]
006af09b  FMUL float ptr [ESP + 0x10]
006af09f  FLD float ptr [ESP + 0x7c]
006af0a3  FMUL ST1
006af0a5  FSTP float ptr [ESP + 0x7c]
006af0a9  FLD float ptr [ESP + 0x80]
006af0b0  FMUL ST1
006af0b2  FSTP float ptr [ESP + 0x80]
006af0b9  FMUL float ptr [ESP + 0x84]
006af0c0  JMP 0x006af0cb
006af0c2  FSTP ST0
006af0c4  FLD float ptr [ESP + 0x84]
006af0cb  FLD float ptr [ESP + 0x7c]
006af0cf  MOV ECX,dword ptr [EDI + 0x6c]
006af0d2  FADD float ptr [ESP + 0x44]
006af0d6  MOV EDX,dword ptr [EDI + 0x74]
006af0d9  MOV EAX,dword ptr [ESP + 0xdc]
006af0e0  MOV dword ptr [ESP + 0xb0],ECX
006af0e7  FSTP float ptr [ESP + 0x50]
006af0eb  LEA ECX,[ESP + 0xb0]
006af0f2  FLD float ptr [ESP + 0x80]
006af0f9  PUSH ECX
006af0fa  FADD float ptr [ESP + 0x4c]
006af0fe  MOV dword ptr [ESP + 0xbc],EDX
006af105  MOV EDX,ECX
006af107  PUSH ESI
006af108  FSTP float ptr [ESP + 0x5c]
006af10c  PUSH EDX
006af10d  FADD float ptr [ESP + 0x58]
006af111  FSTP float ptr [ESP + 0x64]
006af115  FLD float ptr [EDI + 0x70]
006af118  FADD float ptr [EDI + 0x78]
006af11b  FSUB float ptr [EAX]
006af11d  FSTP float ptr [ESP + 0xc0]
006af124  CALL 0x00486610
006af129  FLD float ptr [ESP + 0xbc]
006af130  MOV ECX,dword ptr [ESP + 0xbc]
006af137  FSUB float ptr [ESP + 0x180]
006af13e  MOV EDX,dword ptr [ESP + 0xc0]
006af145  FLD float ptr [ESP + 0xc0]
006af14c  LEA EAX,[EDI + 0x4c]
006af14f  FSUB float ptr [ESP + 0x184]
006af156  MOV dword ptr [EAX],ECX
006af158  FLD float ptr [ESP + 0xc4]
006af15f  MOV ECX,dword ptr [ESP + 0xc4]
006af166  FSUB float ptr [ESP + 0x188]
006af16d  MOV dword ptr [EAX + 0x4],EDX
006af170  MOV dword ptr [EAX + 0x8],ECX
006af173  ADD ESP,0xc
006af176  FLD ST1
006af178  FMUL float ptr [ESP + 0x58]
006af17c  FLD ST1
006af17e  FMUL float ptr [ESP + 0x54]
006af182  FSUBP
006af184  FSTP float ptr [ESP + 0x110]
006af18b  MOV EDX,dword ptr [ESP + 0x110]
006af192  MOV dword ptr [ESP + 0x124],EDX
006af199  FMUL float ptr [ESP + 0x50]
006af19d  FLD float ptr [ESP + 0x58]
006af1a1  FMUL ST3
006af1a3  FSUBP
006af1a5  FSTP float ptr [ESP + 0x114]
006af1ac  MOV EAX,dword ptr [ESP + 0x114]
006af1b3  FLD float ptr [ESP + 0x54]
006af1b7  MOV dword ptr [ESP + 0x128],EAX
006af1be  FMUL ST2
006af1c0  FXCH
006af1c2  FMUL float ptr [ESP + 0x50]
006af1c6  FSUBP
006af1c8  FSTP float ptr [ESP + 0x118]
006af1cf  MOV ECX,dword ptr [ESP + 0x118]
006af1d6  MOV dword ptr [ESP + 0x12c],ECX
006af1dd  FSTP ST0
006af1df  FLD float ptr [ESP + 0x94]
006af1e6  FADD float ptr [ESP + 0x124]
006af1ed  FSTP float ptr [ESP + 0x94]
006af1f4  FLD float ptr [ESP + 0x128]
006af1fb  FADD float ptr [ESP + 0x98]
006af202  FSTP float ptr [ESP + 0x98]
006af209  FLD float ptr [ESP + 0x12c]
006af210  FADD float ptr [ESP + 0x9c]
006af217  FSTP float ptr [ESP + 0x9c]
006af21e  FLD float ptr [ESP + 0x44]
006af222  FADD float ptr [ESP + 0x88]
006af229  FSTP float ptr [ESP + 0x88]
006af230  FLD float ptr [ESP + 0x8c]
006af237  FADD float ptr [ESP + 0x48]
006af23b  MOV byte ptr [ESP + 0x17],0x1
006af240  XOR ECX,ECX
006af242  FSTP float ptr [ESP + 0x8c]
006af249  FLD float ptr [ESP + 0x4c]
006af24d  FADD float ptr [ESP + 0x90]
006af254  FSTP float ptr [ESP + 0x90]
006af25b  JMP 0x006af298
006af25d  FSTP ST0
006af25f  MOV EAX,[0x008a2fb4]
006af264  LEA EDX,[EDI + 0x5c]
006af267  MOV dword ptr [EDX],EAX
006af269  MOV ECX,dword ptr [0x008a2fb8]
006af26f  MOV dword ptr [EDX + 0x4],ECX
006af272  MOV EAX,[0x008a2fbc]
006af277  MOV dword ptr [EDX + 0x8],EAX
006af27a  MOV AL,byte ptr [EDI + 0xc4]
006af280  XOR ECX,ECX
006af282  TEST AL,AL
006af284  MOV dword ptr [EDI + 0xd4],ECX
006af28a  MOV dword ptr [EDI + 0xdc],ECX
006af290  JZ 0x006af298
006af292  MOV dword ptr [EDI + 0xd0],ECX
006af298  FLD float ptr [0x00890968]
006af29e  FLD float ptr [ESP + 0x1c]
006af2a2  FUCOMPP
006af2a4  FNSTSW AX
006af2a6  TEST AH,0x44
006af2a9  JP 0x006af2ba
006af2ab  FLD float ptr [ESP + 0xd4]
006af2b2  FADD float ptr [EDI + 0x68]
006af2b5  FSTP float ptr [EDI + 0x68]
006af2b8  JMP 0x006af2bd
006af2ba  MOV dword ptr [EDI + 0x68],ECX
006af2bd  FLD float ptr [ESP + 0x1c]
006af2c1  FCOMP float ptr [0x00890968]
006af2c7  FNSTSW AX
006af2c9  TEST AH,0x41
006af2cc  JNZ 0x006af2d4
006af2ce  FLD float ptr [ESP + 0x1c]
006af2d2  JMP 0x006af2da
006af2d4  FLD float ptr [0x00890968]
006af2da  MOV EAX,dword ptr [ESP + 0x78]
006af2de  FSTP float ptr [EDI + 0x78]
006af2e1  MOV EDI,dword ptr [ESP + 0xa4]
006af2e8  MOV EDX,dword ptr [ESP + 0xa8]
006af2ef  INC EAX
006af2f0  ADD EDI,0x10
006af2f3  ADD EDX,0x4
006af2f6  CMP EAX,0x4
006af2f9  MOV dword ptr [ESP + 0x78],EAX
006af2fd  MOV dword ptr [ESP + 0xa4],EDI
006af304  MOV dword ptr [ESP + 0xa8],EDX
006af30b  JC 0x006aea52
006af311  MOV AL,byte ptr [ESP + 0x17]
006af315  TEST AL,AL
006af317  JZ 0x006af3bc
006af31d  MOV ECX,dword ptr [EBP + 0xd4]
006af323  MOV EDX,dword ptr [ECX]
006af325  PUSH 0x0
006af327  LEA EAX,[ESP + 0x98]
006af32e  PUSH EAX
006af32f  CALL dword ptr [EDX + 0xa4]
006af335  MOV ECX,dword ptr [EBP + 0xd4]
006af33b  MOV EDX,dword ptr [ECX]
006af33d  PUSH 0x0
006af33f  LEA EAX,[ESP + 0x8c]
006af346  PUSH EAX
006af347  CALL dword ptr [EDX + 0xa4]
006af34d  MOV ECX,dword ptr [EBP + 0xd4]
006af353  PUSH 0x0
006af355  LEA EAX,[ESP + 0x98]
006af35c  MOV dword ptr [ESP + 0x9c],0x0
006af367  MOV dword ptr [ESP + 0x8c],0x0
006af372  MOV dword ptr [ESP + 0x94],0x0
006af37d  MOV EDX,dword ptr [ECX]
006af37f  PUSH EAX
006af380  CALL dword ptr [EDX + 0xa0]
006af386  MOV ECX,dword ptr [EBP + 0xd4]
006af38c  MOV EDX,dword ptr [ECX]
006af38e  PUSH 0x0
006af390  LEA EAX,[ESP + 0x8c]
006af397  PUSH EAX
006af398  CALL dword ptr [EDX + 0xa0]
006af39e  MOV ECX,dword ptr [EBP + 0xd4]
006af3a4  MOV EDX,dword ptr [ECX]
006af3a6  LEA EAX,[ESP + 0x94]
006af3ad  PUSH EAX
006af3ae  LEA EAX,[ESP + 0x8c]
006af3b5  PUSH EAX
006af3b6  CALL dword ptr [EDX + 0x84]
006af3bc  FLD float ptr [ESP + 0x18]
006af3c0  FCOMP float ptr [0x00890968]
006af3c6  FNSTSW AX
006af3c8  TEST AH,0x41
006af3cb  JNZ 0x006af426
006af3cd  MOV EDX,dword ptr [EBP + 0x4c]
006af3d0  LEA ESI,[EBP + 0x4c]
006af3d3  MOV ECX,ESI
006af3d5  XOR EDI,EDI
006af3d7  CALL dword ptr [EDX + 0x8]
006af3da  TEST EAX,EAX
006af3dc  JBE 0x006af3ff
006af3de  LEA EBX,[EBP + 0x180]
006af3e4  MOV EAX,dword ptr [EBX]
006af3e6  FLD float ptr [ESP + 0x18]
006af3ea  FADD float ptr [EAX + 0x50]
006af3ed  MOV ECX,ESI
006af3ef  INC EDI
006af3f0  ADD EBX,0x4
006af3f3  FSTP float ptr [EAX + 0x50]
006af3f6  MOV EAX,dword ptr [ESI]
006af3f8  CALL dword ptr [EAX + 0x8]
006af3fb  CMP EDI,EAX
006af3fd  JC 0x006af3e4
006af3ff  MOV ECX,dword ptr [EBP + 0xd4]
006af405  MOV EAX,dword ptr [ESP + 0x18]
006af409  MOV EDX,dword ptr [ECX]
006af40b  PUSH EAX
006af40c  CALL dword ptr [EDX + 0x7c]
006af40f  MOV ECX,dword ptr [ESP + 0x5c]
006af413  POP EDI
006af414  POP ESI
006af415  MOV dword ptr [EBP + 0xe4],ECX
006af41b  POP EBP
006af41c  POP EBX
006af41d  ADD ESP,0x1c8
006af423  RET 0x4
006af426  MOV EDX,dword ptr [ESP + 0x5c]
006af42a  POP EDI
006af42b  POP ESI
006af42c  MOV dword ptr [EBP + 0xe4],EDX
006af432  POP EBP
006af433  POP EBX
006af434  ADD ESP,0x1c8
006af43a  RET 0x4
