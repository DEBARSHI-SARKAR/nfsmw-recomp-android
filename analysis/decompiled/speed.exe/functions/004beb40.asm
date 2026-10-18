004beb40  PUSH ECX
004beb41  MOV EAX,dword ptr [ESP + 0x8]
004beb45  PUSH EBX
004beb46  PUSH ESI
004beb47  MOV ESI,ECX
004beb49  PUSH EDI
004beb4a  LEA EDI,[ESI + 0x78]
004beb4d  XOR EBX,EBX
004beb4f  PUSH EAX
004beb50  MOV ECX,EDI
004beb52  MOV byte ptr [ESI + 0x96],BL
004beb58  CALL 0x004b0320
004beb5d  CMP byte ptr [ESI + 0x94],BL
004beb63  JZ 0x004bec95
004beb69  CMP byte ptr [ESI + 0x90],BL
004beb6f  JZ 0x004becdb
004beb75  CMP byte ptr [ESI + 0x6c],BL
004beb78  JNZ 0x004becdb
004beb7e  CMP byte ptr [ESI + 0x97],BL
004beb84  JZ 0x004beb8d
004beb86  MOV byte ptr [ESI + 0x96],0x1
004beb8d  MOV EAX,dword ptr [ESI + 0xa0]
004beb93  LEA ECX,[EAX + EAX*0x2]
004beb96  PUSH EBX
004beb97  MOV byte ptr [ESI + 0x95],0x1
004beb9e  MOV byte ptr [ESI + 0x94],BL
004beba4  MOV dword ptr [ESI + 0x98],EAX
004bebaa  MOV EDX,dword ptr [ECX*0x8 + 0x8f2154]
004bebb1  PUSH EDX
004bebb2  PUSH 0x3f800000
004bebb7  PUSH EBX
004bebb8  MOV ECX,EDI
004bebba  CALL 0x004b02b0
004bebbf  FLD float ptr [ESI + 0x9c]
004bebc5  MOV EAX,dword ptr [ESI + 0xb4]
004bebcb  MOV ECX,dword ptr [ESI + 0xbc]
004bebd1  MOV EDX,dword ptr [ESI + 0xb8]
004bebd7  MOV dword ptr [ESI + 0xa4],EAX
004bebdd  MOV EAX,dword ptr [ESI + 0xc0]
004bebe3  MOV dword ptr [ESI + 0xb0],EAX
004bebe9  MOV EAX,dword ptr [ESI + 0x98]
004bebef  LEA EDI,[EAX + EAX*0x2]
004bebf2  MOV dword ptr [ESI + 0xa8],ECX
004bebf8  MOV dword ptr [ESI + 0xac],EDX
004bebfe  SHL EDI,0x3
004bec01  CALL 0x007c4b80
004bec06  MOV ECX,dword ptr [EDI + 0x8f2140]
004bec0c  ADD ECX,EAX
004bec0e  CMP ECX,0xffffd8f0
004bec14  JG 0x004bec1d
004bec16  MOV ECX,0xffffd8f0
004bec1b  JMP 0x004bec23
004bec1d  CMP ECX,EBX
004bec1f  JLE 0x004bec23
004bec21  XOR ECX,ECX
004bec23  MOV EDI,dword ptr [EDI + 0x8f2148]
004bec29  ADD EDI,EAX
004bec2b  CMP EDI,0xffffd8f0
004bec31  JG 0x004bec3a
004bec33  MOV EDI,0xffffd8f0
004bec38  JMP 0x004bec40
004bec3a  CMP EDI,EBX
004bec3c  JLE 0x004bec40
004bec3e  XOR EDI,EDI
004bec40  PUSH ECX
004bec41  CALL 0x004e4270
004bec46  FSTP float ptr [ESI + 0xb4]
004bec4c  PUSH EDI
004bec4d  CALL 0x004e4270
004bec52  FSTP float ptr [ESI + 0xb8]
004bec58  MOV EAX,dword ptr [ESI + 0x98]
004bec5e  LEA ECX,[EAX + EAX*0x2]
004bec61  MOV EDX,dword ptr [ECX*0x8 + 0x8f2144]
004bec68  PUSH EDX
004bec69  CALL 0x004e4270
004bec6e  FSTP float ptr [ESI + 0xbc]
004bec74  MOV EAX,dword ptr [ESI + 0x98]
004bec7a  LEA EAX,[EAX + EAX*0x2]
004bec7d  MOV ECX,dword ptr [EAX*0x8 + 0x8f214c]
004bec84  PUSH ECX
004bec85  CALL 0x004e4270
004bec8a  FSTP float ptr [ESI + 0xc0]
004bec90  ADD ESP,0x10
004bec93  JMP 0x004becdb
004bec95  CMP byte ptr [ESI + 0x95],BL
004bec9b  JZ 0x004becdb
004bec9d  CMP byte ptr [ESI + 0x90],BL
004beca3  JZ 0x004becdb
004beca5  MOV EDX,dword ptr [ESI + 0xb4]
004becab  MOV EAX,dword ptr [ESI + 0xbc]
004becb1  MOV ECX,dword ptr [ESI + 0xb8]
004becb7  MOV dword ptr [ESI + 0xa4],EDX
004becbd  MOV EDX,dword ptr [ESI + 0xc0]
004becc3  MOV byte ptr [ESI + 0x95],BL
004becc9  MOV dword ptr [ESI + 0xa8],EAX
004beccf  MOV dword ptr [ESI + 0xac],ECX
004becd5  MOV dword ptr [ESI + 0xb0],EDX
004becdb  CMP byte ptr [ESI + 0x94],BL
004bece1  JNZ 0x004bee69
004bece7  CMP byte ptr [ESI + 0x95],BL
004beced  JNZ 0x004bee69
004becf3  MOV ECX,dword ptr [ESI + 0xa4]
004becf9  MOV EAX,dword ptr [ESI + 0xb4]
004becff  MOV dword ptr [ESP + 0xc],ECX
004bed03  FLD float ptr [ESP + 0xc]
004bed07  MOV dword ptr [ESP + 0x14],EAX
004bed0b  FADD float ptr [0x008910f0]
004bed11  FLD float ptr [ESP + 0x14]
004bed15  FCOMP
004bed17  FNSTSW AX
004bed19  TEST AH,0x41
004bed1c  JZ 0x004bed3d
004bed1e  FSTP ST0
004bed20  FLD float ptr [ESP + 0xc]
004bed24  FSUB float ptr [0x008910f0]
004bed2a  FLD float ptr [ESP + 0x14]
004bed2e  FCOMP
004bed30  FNSTSW AX
004bed32  TEST AH,0x5
004bed35  JNP 0x004bed3d
004bed37  FSTP ST0
004bed39  FLD float ptr [ESP + 0x14]
004bed3d  MOV EAX,dword ptr [ESI + 0xa8]
004bed43  FST float ptr [ESI + 0xa4]
004bed49  MOV EDX,dword ptr [ESI + 0xbc]
004bed4f  MOV dword ptr [ESP + 0xc],EAX
004bed53  FLD float ptr [ESP + 0xc]
004bed57  MOV dword ptr [ESP + 0x14],EDX
004bed5b  FADD float ptr [0x008910f0]
004bed61  FLD float ptr [ESP + 0x14]
004bed65  FCOMP
004bed67  FNSTSW AX
004bed69  TEST AH,0x41
004bed6c  JZ 0x004bed8d
004bed6e  FSTP ST0
004bed70  FLD float ptr [ESP + 0xc]
004bed74  FSUB float ptr [0x008910f0]
004bed7a  FLD float ptr [ESP + 0x14]
004bed7e  FCOMP
004bed80  FNSTSW AX
004bed82  TEST AH,0x5
004bed85  JNP 0x004bed8d
004bed87  FSTP ST0
004bed89  FLD float ptr [ESP + 0x14]
004bed8d  MOV EDX,dword ptr [ESI + 0xac]
004bed93  FST float ptr [ESI + 0xa8]
004bed99  MOV ECX,dword ptr [ESI + 0xb8]
004bed9f  MOV dword ptr [ESP + 0xc],EDX
004beda3  FLD float ptr [ESP + 0xc]
004beda7  MOV dword ptr [ESP + 0x14],ECX
004bedab  FADD float ptr [0x008910f0]
004bedb1  FLD float ptr [ESP + 0x14]
004bedb5  FCOMP
004bedb7  FNSTSW AX
004bedb9  TEST AH,0x41
004bedbc  JZ 0x004beddd
004bedbe  FSTP ST0
004bedc0  FLD float ptr [ESP + 0xc]
004bedc4  FSUB float ptr [0x008910f0]
004bedca  FLD float ptr [ESP + 0x14]
004bedce  FCOMP
004bedd0  FNSTSW AX
004bedd2  TEST AH,0x5
004bedd5  JNP 0x004beddd
004bedd7  FSTP ST0
004bedd9  FLD float ptr [ESP + 0x14]
004beddd  MOV ECX,dword ptr [ESI + 0xb0]
004bede3  FST float ptr [ESI + 0xac]
004bede9  MOV EAX,dword ptr [ESI + 0xc0]
004bedef  MOV dword ptr [ESP + 0xc],ECX
004bedf3  FLD float ptr [ESP + 0xc]
004bedf7  MOV dword ptr [ESP + 0x14],EAX
004bedfb  FADD float ptr [0x008910f0]
004bee01  FLD float ptr [ESP + 0x14]
004bee05  FCOMP
004bee07  FNSTSW AX
004bee09  TEST AH,0x41
004bee0c  JZ 0x004bee2d
004bee0e  FSTP ST0
004bee10  FLD float ptr [ESP + 0xc]
004bee14  FSUB float ptr [0x008910f0]
004bee1a  FLD float ptr [ESP + 0x14]
004bee1e  FCOMP
004bee20  FNSTSW AX
004bee22  TEST AH,0x5
004bee25  JNP 0x004bee2d
004bee27  FSTP ST0
004bee29  FLD float ptr [ESP + 0x14]
004bee2d  FST float ptr [ESI + 0xb0]
004bee33  FXCH ST3
004bee35  FMUL float ptr [0x008969bc]
004bee3b  CALL 0x007c4b80
004bee40  FXCH
004bee42  FMUL float ptr [0x008969bc]
004bee48  MOV dword ptr [ESI + 0xc4],EAX
004bee4e  CALL 0x007c4b80
004bee53  FMUL float ptr [0x008969bc]
004bee59  MOV dword ptr [ESI + 0xc8],EAX
004bee5f  CALL 0x007c4b80
004bee64  JMP 0x004beef6
004bee69  FLD float ptr [ESI + 0xb4]
004bee6f  FSUB float ptr [ESI + 0xa4]
004bee75  FMUL float ptr [ESI + 0x8c]
004bee7b  FADD float ptr [ESI + 0xa4]
004bee81  FMUL float ptr [0x008969bc]
004bee87  CALL 0x007c4b80
004bee8c  FLD float ptr [ESI + 0xbc]
004bee92  FSUB float ptr [ESI + 0xa8]
004bee98  MOV dword ptr [ESI + 0xc4],EAX
004bee9e  FMUL float ptr [ESI + 0x8c]
004beea4  FADD float ptr [ESI + 0xa8]
004beeaa  FMUL float ptr [0x008969bc]
004beeb0  CALL 0x007c4b80
004beeb5  FLD float ptr [ESI + 0xb8]
004beebb  FSUB float ptr [ESI + 0xac]
004beec1  MOV dword ptr [ESI + 0xc8],EAX
004beec7  FMUL float ptr [ESI + 0x8c]
004beecd  FADD float ptr [ESI + 0xac]
004beed3  FMUL float ptr [0x008969bc]
004beed9  CALL 0x007c4b80
004beede  FLD float ptr [ESI + 0xc0]
004beee4  FSUB float ptr [ESI + 0xb0]
004beeea  FMUL float ptr [ESI + 0x8c]
004beef0  FADD float ptr [ESI + 0xb0]
004beef6  FMUL float ptr [0x008969bc]
004beefc  MOV dword ptr [ESI + 0xcc],EAX
004bef02  CALL 0x007c4b80
004bef07  MOV dword ptr [ESI + 0xd0],EAX
004bef0d  CMP byte ptr [ESI + 0xd4],BL
004bef13  JZ 0x004bef7b
004bef15  MOV EDX,dword ptr [ESI + 0xcc]
004bef1b  INC EDX
004bef1c  MOV EAX,EDX
004bef1e  CMP EAX,EBX
004bef20  MOV dword ptr [ESI + 0xcc],EDX
004bef26  JG 0x004bef2c
004bef28  XOR EAX,EAX
004bef2a  JMP 0x004bef38
004bef2c  CMP EAX,0x7fff
004bef31  JLE 0x004bef38
004bef33  MOV EAX,0x7fff
004bef38  MOV EDX,dword ptr [ESI + 0xc4]
004bef3e  INC EDX
004bef3f  MOV dword ptr [ESI + 0xcc],EAX
004bef45  MOV EAX,EDX
004bef47  CMP EAX,EBX
004bef49  MOV dword ptr [ESI + 0xc4],EDX
004bef4f  JG 0x004bef61
004bef51  XOR EAX,EAX
004bef53  MOV dword ptr [ESI + 0xc4],EAX
004bef59  MOV byte ptr [ESI + 0xd4],BL
004bef5f  JMP 0x004bef82
004bef61  CMP EAX,0x7fff
004bef66  JLE 0x004bef6d
004bef68  MOV EAX,0x7fff
004bef6d  MOV dword ptr [ESI + 0xc4],EAX
004bef73  MOV byte ptr [ESI + 0xd4],BL
004bef79  JMP 0x004bef82
004bef7b  MOV byte ptr [ESI + 0xd4],0x1
004bef82  CMP byte ptr [ESI + 0x90],BL
004bef88  SETZ DL
004bef8b  POP EDI
004bef8c  MOV byte ptr [ESI + 0x6c],DL
004bef8f  POP ESI
004bef90  POP EBX
004bef91  POP ECX
004bef92  RET 0x4
