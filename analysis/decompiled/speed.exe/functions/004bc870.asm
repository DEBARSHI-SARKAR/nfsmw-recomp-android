004bc870  SUB ESP,0x8
004bc873  PUSH EBX
004bc874  PUSH ESI
004bc875  MOV ESI,ECX
004bc877  MOV EAX,dword ptr [ESI + 0x28]
004bc87a  TEST EAX,EAX
004bc87c  JZ 0x004bc896
004bc87e  MOV ECX,dword ptr [EAX + 0x38]
004bc881  CMP ECX,0x3
004bc884  JZ 0x004bc88a
004bc886  TEST ECX,ECX
004bc888  JZ 0x004bc896
004bc88a  MOV ECX,dword ptr [EAX + 0x9c]
004bc890  MOV dword ptr [ESP + 0x8],ECX
004bc894  JMP 0x004bc8b6
004bc896  MOV ECX,dword ptr [ESI + 0x2c]
004bc899  TEST ECX,ECX
004bc89b  JZ 0x004bc8ac
004bc89d  MOV EDX,dword ptr [ECX + 0x84]
004bc8a3  TEST EDX,EDX
004bc8a5  JZ 0x004bc8ac
004bc8a7  MOV EDX,dword ptr [ECX + 0x44]
004bc8aa  JMP 0x004bc8b2
004bc8ac  MOV ECX,dword ptr [ESI + 0x18]
004bc8af  MOV EDX,dword ptr [ECX + 0x64]
004bc8b2  MOV dword ptr [ESP + 0x8],EDX
004bc8b6  MOV CL,byte ptr [ESI + 0x138]
004bc8bc  TEST CL,CL
004bc8be  JZ 0x004bc917
004bc8c0  MOV EAX,dword ptr [EAX + 0x38]
004bc8c3  CMP EAX,0x3
004bc8c6  JZ 0x004bc917
004bc8c8  TEST EAX,EAX
004bc8ca  JNZ 0x004bc917
004bc8cc  MOV EAX,dword ptr [ESI + 0x18]
004bc8cf  MOV ECX,dword ptr [EAX + 0x64]
004bc8d2  MOV EDX,dword ptr [ESI]
004bc8d4  MOV dword ptr [ESP + 0xc],ECX
004bc8d8  MOV ECX,ESI
004bc8da  CALL dword ptr [EDX + 0x44]
004bc8dd  FST float ptr [ESP + 0x8]
004bc8e1  FADD float ptr [0x0089165c]
004bc8e7  FLD float ptr [ESP + 0xc]
004bc8eb  FCOMP
004bc8ed  FNSTSW AX
004bc8ef  TEST AH,0x41
004bc8f2  JZ 0x004bc913
004bc8f4  FSTP ST0
004bc8f6  FLD float ptr [ESP + 0x8]
004bc8fa  FSUB float ptr [0x0089643c]
004bc900  FLD float ptr [ESP + 0xc]
004bc904  FCOMP
004bc906  FNSTSW AX
004bc908  TEST AH,0x5
004bc90b  JNP 0x004bc913
004bc90d  FSTP ST0
004bc90f  FLD float ptr [ESP + 0xc]
004bc913  FSTP float ptr [ESP + 0x8]
004bc917  FLD float ptr [ESP + 0x8]
004bc91b  MOV ECX,dword ptr [ESI + 0x118]
004bc921  FADD float ptr [ESI + 0x140]
004bc927  MOV EAX,dword ptr [ESP + 0x8]
004bc92b  MOV dword ptr [ESI + 0x11c],ECX
004bc931  MOV ECX,dword ptr [ESI + 0x28]
004bc934  FADD float ptr [ESI + 0x1c4]
004bc93a  MOV dword ptr [ESP + 0xc],EAX
004bc93e  FADD float ptr [ESI + 0x140]
004bc944  FST float ptr [ESI + 0x118]
004bc94a  FLD float ptr [ESI + 0x120]
004bc950  FMUL float ptr [0x00896b58]
004bc956  FXCH
004bc958  FMUL float ptr [0x00890ea8]
004bc95e  FADDP
004bc960  FSTP float ptr [ESI + 0x120]
004bc966  MOV EAX,dword ptr [ECX + 0x38]
004bc969  CMP EAX,0x2
004bc96c  JZ 0x004bca32
004bc972  MOV EBX,0x1
004bc977  CMP EAX,EBX
004bc979  JZ 0x004bca32
004bc97f  MOV EDX,dword ptr [ESI + 0x2c]
004bc982  CMP dword ptr [EDX + 0x84],EBX
004bc988  JNZ 0x004bc995
004bc98a  MOV EAX,dword ptr [ESI + 0x18]
004bc98d  MOV ECX,dword ptr [EAX + 0x64]
004bc990  JMP 0x004bca38
004bc995  MOV AL,byte ptr [ESI + 0xd4]
004bc99b  TEST AL,AL
004bc99d  JZ 0x004bca3c
004bc9a3  MOV AL,byte ptr [ESI + 0x110]
004bc9a9  TEST AL,AL
004bc9ab  PUSH 0x42480000
004bc9b0  JZ 0x004bc9f4
004bc9b2  MOV EDX,dword ptr [ESI + 0x114]
004bc9b8  PUSH 0x43480000
004bc9bd  PUSH EDX
004bc9be  CALL 0x004b7b00
004bc9c3  FST float ptr [ESI + 0x114]
004bc9c9  FLD float ptr [0x008970cc]
004bc9cf  ADD ESP,0xc
004bc9d2  FXCH
004bc9d4  FUCOMPP
004bc9d6  FNSTSW AX
004bc9d8  TEST AH,0x44
004bc9db  JP 0x004bca22
004bc9dd  FLD float ptr [ESP + 0x8]
004bc9e1  MOV byte ptr [ESI + 0x110],0x0
004bc9e8  FSUB float ptr [ESI + 0x114]
004bc9ee  FSTP float ptr [ESP + 0xc]
004bc9f2  JMP 0x004bca3c
004bc9f4  MOV EAX,dword ptr [ESI + 0x114]
004bc9fa  PUSH 0x0
004bc9fc  PUSH EAX
004bc9fd  CALL 0x004b7b00
004bca02  FST float ptr [ESI + 0x114]
004bca08  FLD float ptr [0x00890968]
004bca0e  ADD ESP,0xc
004bca11  FXCH
004bca13  FUCOMPP
004bca15  FNSTSW AX
004bca17  TEST AH,0x44
004bca1a  JP 0x004bca22
004bca1c  MOV byte ptr [ESI + 0x110],BL
004bca22  FLD float ptr [ESP + 0x8]
004bca26  FSUB float ptr [ESI + 0x114]
004bca2c  FSTP float ptr [ESP + 0xc]
004bca30  JMP 0x004bca3c
004bca32  MOV ECX,dword ptr [ECX + 0x160]
004bca38  MOV dword ptr [ESP + 0xc],ECX
004bca3c  MOV EDX,dword ptr [ESP + 0xc]
004bca40  PUSH EDI
004bca41  LEA EDI,[ESI + 0xa0]
004bca47  PUSH EDX
004bca48  MOV ECX,EDI
004bca4a  CALL 0x00653b10
004bca4f  MOV EAX,dword ptr [EDI]
004bca51  MOV ECX,EDI
004bca53  CALL dword ptr [EAX + 0x4]
004bca56  FLD float ptr [ESI + 0xac]
004bca5c  MOV ECX,dword ptr [ESI + 0x14]
004bca5f  FSUB float ptr [0x00896480]
004bca65  MOV EDX,dword ptr [ECX + 0x34]
004bca68  MOV EAX,dword ptr [EDX + 0x228]
004bca6e  TEST EAX,EAX
004bca70  FMUL float ptr [0x008970c8]
004bca76  POP EDI
004bca77  JNZ 0x004bcb00
004bca7d  MOV BL,byte ptr [ESI + 0xcc]
004bca83  TEST BL,BL
004bca85  JNZ 0x004bca9e
004bca87  FLD float ptr [ESI + 0xc8]
004bca8d  FCOMP float ptr [0x00890968]
004bca93  FNSTSW AX
004bca95  TEST AH,0x41
004bca98  JNZ 0x004bcb00
004bca9a  TEST BL,BL
004bca9c  JZ 0x004bcab4
004bca9e  MOV ECX,dword ptr [ESI + 0x18]
004bcaa1  FSTP ST0
004bcaa3  FLD float ptr [EDX + 0x1dc]
004bcaa9  POP ESI
004bcaaa  FSTP float ptr [ECX + 0x74]
004bcaad  POP EBX
004bcaae  ADD ESP,0x8
004bcab1  RET 0x4
004bcab4  FLD float ptr [ESI + 0xc8]
004bcaba  FSUB float ptr [ESP + 0x14]
004bcabe  FST float ptr [ESI + 0xc8]
004bcac4  FCOMP float ptr [0x00890968]
004bcaca  FNSTSW AX
004bcacc  TEST AH,0x5
004bcacf  JP 0x004bcadb
004bcad1  MOV dword ptr [ESI + 0xc8],0x0
004bcadb  FLD float ptr [0x0089644c]
004bcae1  MOV EAX,dword ptr [ECX + 0x34]
004bcae4  FSUB float ptr [ESI + 0xc8]
004bcaea  FMUL float ptr [0x008970c4]
004bcaf0  FXCH
004bcaf2  FSUB float ptr [EAX + 0x1dc]
004bcaf8  FMULP
004bcafa  FADD float ptr [EAX + 0x1dc]
004bcb00  MOV ECX,dword ptr [ESI + 0x18]
004bcb03  POP ESI
004bcb04  FSTP float ptr [ECX + 0x74]
004bcb07  POP EBX
004bcb08  ADD ESP,0x8
004bcb0b  RET 0x4
