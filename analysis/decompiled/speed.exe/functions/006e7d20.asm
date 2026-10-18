006e7d20  SUB ESP,0x30
006e7d23  MOV EDX,dword ptr [ESP + 0x34]
006e7d27  PUSH EBX
006e7d28  PUSH EBP
006e7d29  MOV EBP,dword ptr [ESP + 0x44]
006e7d2d  PUSH ESI
006e7d2e  PUSH EDI
006e7d2f  MOV EDI,dword ptr [ESP + 0x48]
006e7d33  MOV dword ptr [ESP + 0x1c],0x0
006e7d3b  JMP 0x006e7d40
006e7d40  CMP dword ptr [ESP + 0x1c],0x1
006e7d45  JNZ 0x006e7d4f
006e7d47  MOV EDX,dword ptr [ESP + 0x48]
006e7d4b  MOV EDI,dword ptr [ESP + 0x44]
006e7d4f  XOR EAX,EAX
006e7d51  MOV dword ptr [ESP + 0x18],EAX
006e7d55  JMP 0x006e7d60
006e7d57  MOV EAX,dword ptr [ESP + 0x18]
006e7d5b  JMP 0x006e7d60
006e7d60  CMP EAX,0x1
006e7d63  JNZ 0x006e7d6c
006e7d65  MOV ESI,0x2
006e7d6a  JMP 0x006e7d76
006e7d6c  XOR ECX,ECX
006e7d6e  CMP EAX,0x2
006e7d71  SETZ CL
006e7d74  MOV ESI,ECX
006e7d76  FLD float ptr [EDX]
006e7d78  LEA EAX,[ESI + 0x1]
006e7d7b  FSUB float ptr [EDI]
006e7d7d  SHL EAX,0x4
006e7d80  FLD float ptr [EDX + 0x4]
006e7d83  ADD EAX,EDX
006e7d85  MOV ECX,dword ptr [EAX]
006e7d87  FSUB float ptr [EDI + 0x4]
006e7d8a  FLD float ptr [EDX + 0x8]
006e7d8d  MOV dword ptr [ESP + 0x30],ECX
006e7d91  MOV ECX,dword ptr [EAX + 0x4]
006e7d94  FSUB float ptr [EDI + 0x8]
006e7d97  MOV dword ptr [ESP + 0x34],ECX
006e7d9b  MOV ECX,dword ptr [EAX + 0x8]
006e7d9e  MOV EAX,dword ptr [EAX + 0xc]
006e7da1  MOV dword ptr [ESP + 0x38],ECX
006e7da5  FMUL float ptr [ESP + 0x38]
006e7da9  FXCH ST2
006e7dab  MOV dword ptr [ESP + 0x3c],EAX
006e7daf  FMUL float ptr [ESP + 0x30]
006e7db3  MOV EAX,EDI
006e7db5  MOV EBX,dword ptr [EAX]
006e7db7  FADDP ST2,ST0
006e7db9  MOV dword ptr [ESP + 0x20],EBX
006e7dbd  MOV EBX,dword ptr [EAX + 0x4]
006e7dc0  FMUL float ptr [ESP + 0x34]
006e7dc4  MOV dword ptr [ESP + 0x24],EBX
006e7dc8  MOV EBX,dword ptr [EAX + 0x8]
006e7dcb  MOV dword ptr [ESP + 0x28],EBX
006e7dcf  MOV EBX,dword ptr [EAX + 0xc]
006e7dd2  FADDP
006e7dd4  LEA ECX,[EDI + 0x40]
006e7dd7  FCOM float ptr [0x00890968]
006e7ddd  FNSTSW AX
006e7ddf  TEST AH,0x5
006e7de2  JP 0x006e7de8
006e7de4  FCHS
006e7de6  JMP 0x006e7e06
006e7de8  FLD float ptr [ESP + 0x30]
006e7dec  FCHS
006e7dee  FSTP float ptr [ESP + 0x30]
006e7df2  FLD float ptr [ESP + 0x34]
006e7df6  FCHS
006e7df8  FSTP float ptr [ESP + 0x34]
006e7dfc  FLD float ptr [ESP + 0x38]
006e7e00  FCHS
006e7e02  FSTP float ptr [ESP + 0x38]
006e7e06  FSUB float ptr [EDX + ESI*0x4 + 0xa0]
006e7e0d  FLD float ptr [ESP + 0x34]
006e7e11  FMUL float ptr [ECX + 0x4]
006e7e14  FLD float ptr [ESP + 0x38]
006e7e18  FMUL float ptr [ECX + 0x8]
006e7e1b  FADDP
006e7e1d  FLD float ptr [ESP + 0x30]
006e7e21  FMUL float ptr [ECX]
006e7e23  FADDP
006e7e25  FST float ptr [ESP + 0x14]
006e7e29  FABS
006e7e2b  FSUBR ST0,ST1
006e7e2d  FSTP float ptr [ESP + 0x10]
006e7e31  FSTP ST0
006e7e33  FLD float ptr [ESP + 0x14]
006e7e37  FCOMP float ptr [0x00890968]
006e7e3d  FNSTSW AX
006e7e3f  TEST AH,0x41
006e7e42  JNZ 0x006e7e62
006e7e44  FLD float ptr [ESP + 0x20]
006e7e48  FSUB float ptr [ECX]
006e7e4a  FSTP float ptr [ESP + 0x20]
006e7e4e  FLD float ptr [ESP + 0x24]
006e7e52  FSUB float ptr [ECX + 0x4]
006e7e55  FSTP float ptr [ESP + 0x24]
006e7e59  FLD float ptr [ESP + 0x28]
006e7e5d  FSUB float ptr [ECX + 0x8]
006e7e60  JMP 0x006e7e8f
006e7e62  FLD float ptr [ESP + 0x14]
006e7e66  FCOMP float ptr [0x00890968]
006e7e6c  FNSTSW AX
006e7e6e  TEST AH,0x5
006e7e71  JP 0x006e7e93
006e7e73  FLD float ptr [ESP + 0x20]
006e7e77  FADD float ptr [ECX]
006e7e79  FSTP float ptr [ESP + 0x20]
006e7e7d  FLD float ptr [ESP + 0x24]
006e7e81  FADD float ptr [ECX + 0x4]
006e7e84  FSTP float ptr [ESP + 0x24]
006e7e88  FLD float ptr [ESP + 0x28]
006e7e8c  FADD float ptr [ECX + 0x8]
006e7e8f  FSTP float ptr [ESP + 0x28]
006e7e93  FLD float ptr [ESP + 0x34]
006e7e97  ADD ECX,0x10
006e7e9a  FMUL float ptr [ECX + 0x4]
006e7e9d  FLD float ptr [ESP + 0x38]
006e7ea1  FMUL float ptr [ECX + 0x8]
006e7ea4  FADDP
006e7ea6  FLD float ptr [ESP + 0x30]
006e7eaa  FMUL float ptr [ECX]
006e7eac  FADDP
006e7eae  FLD ST0
006e7eb0  FABS
006e7eb2  FSUBR float ptr [ESP + 0x10]
006e7eb6  FSTP float ptr [ESP + 0x10]
006e7eba  FCOM float ptr [0x00890968]
006e7ec0  FNSTSW AX
006e7ec2  TEST AH,0x41
006e7ec5  JNZ 0x006e7ee7
006e7ec7  FSTP ST0
006e7ec9  FLD float ptr [ESP + 0x20]
006e7ecd  FSUB float ptr [ECX]
006e7ecf  FSTP float ptr [ESP + 0x20]
006e7ed3  FLD float ptr [ESP + 0x24]
006e7ed7  FSUB float ptr [ECX + 0x4]
006e7eda  FSTP float ptr [ESP + 0x24]
006e7ede  FLD float ptr [ESP + 0x28]
006e7ee2  FSUB float ptr [ECX + 0x8]
006e7ee5  JMP 0x006e7f10
006e7ee7  FCOMP float ptr [0x00890968]
006e7eed  FNSTSW AX
006e7eef  TEST AH,0x5
006e7ef2  JP 0x006e7f14
006e7ef4  FLD float ptr [ESP + 0x20]
006e7ef8  FADD float ptr [ECX]
006e7efa  FSTP float ptr [ESP + 0x20]
006e7efe  FLD float ptr [ESP + 0x24]
006e7f02  FADD float ptr [ECX + 0x4]
006e7f05  FSTP float ptr [ESP + 0x24]
006e7f09  FLD float ptr [ESP + 0x28]
006e7f0d  FADD float ptr [ECX + 0x8]
006e7f10  FSTP float ptr [ESP + 0x28]
006e7f14  FLD float ptr [ESP + 0x34]
006e7f18  ADD ECX,0x10
006e7f1b  FMUL float ptr [ECX + 0x4]
006e7f1e  FLD float ptr [ESP + 0x38]
006e7f22  FMUL float ptr [ECX + 0x8]
006e7f25  FADDP
006e7f27  FLD float ptr [ESP + 0x30]
006e7f2b  FMUL float ptr [ECX]
006e7f2d  FADDP
006e7f2f  FLD ST0
006e7f31  FABS
006e7f33  FSUBR float ptr [ESP + 0x10]
006e7f37  FSTP float ptr [ESP + 0x10]
006e7f3b  FCOM float ptr [0x00890968]
006e7f41  FNSTSW AX
006e7f43  TEST AH,0x41
006e7f46  JNZ 0x006e7f68
006e7f48  FSTP ST0
006e7f4a  FLD float ptr [ESP + 0x20]
006e7f4e  FSUB float ptr [ECX]
006e7f50  FSTP float ptr [ESP + 0x20]
006e7f54  FLD float ptr [ESP + 0x24]
006e7f58  FSUB float ptr [ECX + 0x4]
006e7f5b  FSTP float ptr [ESP + 0x24]
006e7f5f  FLD float ptr [ESP + 0x28]
006e7f63  FSUB float ptr [ECX + 0x8]
006e7f66  JMP 0x006e7f91
006e7f68  FCOMP float ptr [0x00890968]
006e7f6e  FNSTSW AX
006e7f70  TEST AH,0x5
006e7f73  JP 0x006e7f95
006e7f75  FLD float ptr [ESP + 0x20]
006e7f79  FADD float ptr [ECX]
006e7f7b  FSTP float ptr [ESP + 0x20]
006e7f7f  FLD float ptr [ESP + 0x24]
006e7f83  FADD float ptr [ECX + 0x4]
006e7f86  FSTP float ptr [ESP + 0x24]
006e7f8a  FLD float ptr [ESP + 0x28]
006e7f8e  FADD float ptr [ECX + 0x8]
006e7f91  FSTP float ptr [ESP + 0x28]
006e7f95  FLD float ptr [ESP + 0x10]
006e7f99  FCOMP float ptr [0x00890968]
006e7f9f  FNSTSW AX
006e7fa1  TEST AH,0x41
006e7fa4  JZ 0x006e8055
006e7faa  FLD float ptr [ESP + 0x10]
006e7fae  FCOMP float ptr [EBP + 0x90]
006e7fb4  FNSTSW AX
006e7fb6  TEST AH,0x41
006e7fb9  JNZ 0x006e8027
006e7fbb  CMP EBP,EDX
006e7fbd  MOV ECX,dword ptr [ESP + 0x10]
006e7fc1  MOV dword ptr [EBP + 0x90],ECX
006e7fc7  MOV ECX,dword ptr [ESP + 0x20]
006e7fcb  LEA EAX,[EBP + 0x70]
006e7fce  MOV dword ptr [EAX],ECX
006e7fd0  MOV ECX,dword ptr [ESP + 0x24]
006e7fd4  MOV dword ptr [EAX + 0x4],ECX
006e7fd7  MOV ECX,dword ptr [ESP + 0x28]
006e7fdb  MOV dword ptr [EAX + 0x8],ECX
006e7fde  MOV dword ptr [EAX + 0xc],EBX
006e7fe1  JZ 0x006e8009
006e7fe3  FLD float ptr [ESP + 0x30]
006e7fe7  FCHS
006e7fe9  FSTP float ptr [EBP + 0x80]
006e7fef  FLD float ptr [ESP + 0x34]
006e7ff3  FCHS
006e7ff5  FSTP float ptr [EBP + 0x84]
006e7ffb  FLD float ptr [ESP + 0x38]
006e7fff  FCHS
006e8001  FSTP float ptr [EBP + 0x88]
006e8007  JMP 0x006e8027
006e8009  MOV EAX,dword ptr [ESP + 0x30]
006e800d  MOV ECX,dword ptr [ESP + 0x34]
006e8011  MOV dword ptr [EBP + 0x80],EAX
006e8017  MOV EAX,dword ptr [ESP + 0x38]
006e801b  MOV dword ptr [EBP + 0x84],ECX
006e8021  MOV dword ptr [EBP + 0x88],EAX
006e8027  MOV EAX,dword ptr [ESP + 0x18]
006e802b  INC EAX
006e802c  CMP EAX,0x3
006e802f  MOV dword ptr [ESP + 0x18],EAX
006e8033  JL 0x006e7d57
006e8039  MOV EAX,dword ptr [ESP + 0x1c]
006e803d  INC EAX
006e803e  CMP EAX,0x2
006e8041  MOV dword ptr [ESP + 0x1c],EAX
006e8045  JL 0x006e7d40
006e804b  POP EDI
006e804c  POP ESI
006e804d  POP EBP
006e804e  MOV AL,0x1
006e8050  POP EBX
006e8051  ADD ESP,0x30
006e8054  RET
006e8055  POP EDI
006e8056  POP ESI
006e8057  POP EBP
006e8058  XOR AL,AL
006e805a  POP EBX
006e805b  ADD ESP,0x30
006e805e  RET
