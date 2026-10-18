006a9b40  SUB ESP,0x2c
006a9b43  PUSH ESI
006a9b44  MOV ESI,dword ptr [ESP + 0x34]
006a9b48  FLD float ptr [ESI + 0xc0]
006a9b4e  MOV EAX,dword ptr [ESI + 0x7c]
006a9b51  FLD float ptr [ESI + 0x48]
006a9b54  PUSH EDI
006a9b55  FMUL float ptr [0x008967e0]
006a9b5b  MOV EDI,ECX
006a9b5d  MOV dword ptr [ESP + 0x8],EAX
006a9b61  FSTP float ptr [ESP + 0x38]
006a9b65  FLD float ptr [ESI + 0x9c]
006a9b6b  FMUL float ptr [0x008aabd8]
006a9b71  FSTP float ptr [ESP + 0x18]
006a9b75  FLD float ptr [EDI + 0x1b0]
006a9b7b  FLD float ptr [ESP + 0x8]
006a9b7f  FCOMP float ptr [0x008933d4]
006a9b85  FNSTSW AX
006a9b87  TEST AH,0x1
006a9b8a  JNZ 0x006a9bad
006a9b8c  FLD float ptr [0x008f8d2c]
006a9b92  FMULP ST2
006a9b94  FSUBRP
006a9b96  FCOM float ptr [0x008f8d24]
006a9b9c  FNSTSW AX
006a9b9e  TEST AH,0x5
006a9ba1  JP 0x006a9bcc
006a9ba3  FSTP ST0
006a9ba5  FLD float ptr [0x008f8d24]
006a9bab  JMP 0x006a9bcc
006a9bad  FLD float ptr [0x008f8d28]
006a9bb3  FMULP ST2
006a9bb5  FADDP
006a9bb7  FCOM float ptr [0x0089096c]
006a9bbd  FNSTSW AX
006a9bbf  TEST AH,0x41
006a9bc2  JNZ 0x006a9bcc
006a9bc4  FSTP ST0
006a9bc6  FLD float ptr [0x0089096c]
006a9bcc  FST float ptr [EDI + 0x1b0]
006a9bd2  MOV ECX,dword ptr [ESI + 0x5c]
006a9bd5  FLD float ptr [0x0089096c]
006a9bdb  MOV EDX,ECX
006a9bdd  FSUB float ptr [EDI + 0x108]
006a9be3  MOV dword ptr [ESP + 0x24],ECX
006a9be7  MOV ECX,dword ptr [EDI + 0x48]
006a9bea  MOV EAX,dword ptr [ECX]
006a9bec  FMUL ST1
006a9bee  PUSH EBX
006a9bef  PUSH EBP
006a9bf0  FSTP float ptr [ESP + 0x28]
006a9bf4  MOV dword ptr [ESP + 0x30],EDX
006a9bf8  FSTP ST0
006a9bfa  CALL dword ptr [EAX + 0xcc]
006a9c00  MOV EBX,EAX
006a9c02  TEST EBX,EBX
006a9c04  JZ 0x006a9c32
006a9c06  FLD float ptr [EBX + 0x8]
006a9c09  FMUL float ptr [0x008933d4]
006a9c0f  FADD float ptr [0x0089096c]
006a9c15  FMUL float ptr [ESP + 0x2c]
006a9c19  FSTP float ptr [ESP + 0x2c]
006a9c1d  FLD float ptr [ESP + 0x30]
006a9c21  FMUL float ptr [EBX + 0x8]
006a9c24  FMUL float ptr [0x008933d4]
006a9c2a  FSUBR float ptr [ESP + 0x30]
006a9c2e  FSTP float ptr [ESP + 0x30]
006a9c32  MOV ECX,dword ptr [ESI + 0xbc]
006a9c38  PUSH ECX
006a9c39  MOV ECX,EDI
006a9c3b  CALL 0x0069ebf0
006a9c40  FSTP float ptr [ESP + 0x14]
006a9c44  MOV ECX,dword ptr [EDI + 0x34]
006a9c47  MOV EDX,dword ptr [ECX]
006a9c49  CALL dword ptr [EDX + 0x20]
006a9c4c  CMP word ptr [ESI + 0xc8],0x1
006a9c54  JNZ 0x006a9c60
006a9c56  MOV dword ptr [ESP + 0x14],0x3dcccccd
006a9c5e  JMP 0x006a9c84
006a9c60  TEST EAX,EAX
006a9c62  JZ 0x006a9c84
006a9c64  MOV EDX,dword ptr [EAX]
006a9c66  MOV ECX,EAX
006a9c68  CALL dword ptr [EDX + 0x14]
006a9c6b  TEST EAX,EAX
006a9c6d  JZ 0x006a9c84
006a9c6f  MOV CL,byte ptr [EAX + 0x12]
006a9c72  TEST CL,CL
006a9c74  JNZ 0x006a9c84
006a9c76  FLD float ptr [ESP + 0x14]
006a9c7a  FADD float ptr [0x008aacec]
006a9c80  FSTP float ptr [ESP + 0x14]
006a9c84  MOV dword ptr [ESP + 0x1c],0x0
006a9c8c  MOV dword ptr [ESP + 0x24],0x0
006a9c94  XOR ECX,ECX
006a9c96  LEA EDX,[EDI + 0x1b4]
006a9c9c  LEA ESP,[ESP]
006a9ca0  FLD float ptr [ESI + 0x4c]
006a9ca3  MOV dword ptr [ESP + 0x18],0x3f800000
006a9cab  FCOMP float ptr [0x0089119c]
006a9cb1  FNSTSW AX
006a9cb3  TEST AH,0x41
006a9cb6  JNZ 0x006a9d51
006a9cbc  FLD float ptr [ESI + 0x5c]
006a9cbf  FCOMP float ptr [0x008933d4]
006a9cc5  FNSTSW AX
006a9cc7  TEST AH,0x41
006a9cca  JNZ 0x006a9d51
006a9cd0  FLD float ptr [ESP + 0x40]
006a9cd4  FCOMP float ptr [0x00890968]
006a9cda  FLD float ptr [ESP + 0x40]
006a9cde  FNSTSW AX
006a9ce0  TEST AH,0x5
006a9ce3  JP 0x006a9ce7
006a9ce5  FCHS
006a9ce7  FCOMP float ptr [0x008aac84]
006a9ced  FNSTSW AX
006a9cef  TEST AH,0x5
006a9cf2  JP 0x006a9d51
006a9cf4  CMP ECX,0x1
006a9cf7  JBE 0x006a9d0f
006a9cf9  MOV EAX,dword ptr [EDI + 0xdc]
006a9cff  FLD float ptr [EAX + 0x70]
006a9d02  FCOMP float ptr [0x0089096c]
006a9d08  FNSTSW AX
006a9d0a  TEST AH,0x5
006a9d0d  JNP 0x006a9d2a
006a9d0f  CMP ECX,0x2
006a9d12  JNC 0x006a9d51
006a9d14  MOV EAX,dword ptr [EDI + 0xdc]
006a9d1a  FLD float ptr [EAX + 0x70]
006a9d1d  FCOMP float ptr [0x00890968]
006a9d23  FNSTSW AX
006a9d25  TEST AH,0x41
006a9d28  JNZ 0x006a9d51
006a9d2a  FLD float ptr [ESP + 0x40]
006a9d2e  FCOMP float ptr [0x00890968]
006a9d34  FLD float ptr [ESP + 0x40]
006a9d38  FNSTSW AX
006a9d3a  TEST AH,0x5
006a9d3d  JP 0x006a9d41
006a9d3f  FCHS
006a9d41  FMUL float ptr [0x00890ea8]
006a9d47  MOV EAX,dword ptr [EDX]
006a9d49  FSTP float ptr [EAX + 0xc8]
006a9d4f  JMP 0x006a9d61
006a9d51  MOV EBP,dword ptr [EDX]
006a9d53  MOV EAX,ECX
006a9d55  SAR EAX,0x1
006a9d57  MOV EAX,dword ptr [ESP + EAX*0x4 + 0x2c]
006a9d5b  MOV dword ptr [EBP + 0xc8],EAX
006a9d61  CMP ECX,0x1
006a9d64  JBE 0x006a9db3
006a9d66  FLD float ptr [ESP + 0x10]
006a9d6a  FLD float ptr [ESP + 0x10]
006a9d6e  FCOMP float ptr [0x00895074]
006a9d74  FNSTSW AX
006a9d76  TEST AH,0x41
006a9d79  JNZ 0x006a9da9
006a9d7b  FLD float ptr [ESP + 0x20]
006a9d7f  FCOMP float ptr [0x008f8d30]
006a9d85  FNSTSW AX
006a9d87  TEST AH,0x41
006a9d8a  JNZ 0x006a9da9
006a9d8c  FLD float ptr [ESP + 0x40]
006a9d90  FCOMP float ptr [0x008f8d34]
006a9d96  FNSTSW AX
006a9d98  TEST AH,0x5
006a9d9b  JP 0x006a9da9
006a9d9d  FSTP ST0
006a9d9f  FLD float ptr [ESP + 0x10]
006a9da3  FADD float ptr [0x008933d4]
006a9da9  MOV EAX,dword ptr [EDX]
006a9dab  FSTP float ptr [EAX + 0xcc]
006a9db1  JMP 0x006a9dbf
006a9db3  MOV EAX,dword ptr [EDX]
006a9db5  MOV dword ptr [EAX + 0xcc],0x0
006a9dbf  CMP ECX,0x1
006a9dc2  FLD float ptr [0x0089096c]
006a9dc8  JBE 0x006a9e02
006a9dca  MOV EAX,dword ptr [ESI + 0x24]
006a9dcd  FSTP ST0
006a9dcf  PUSH EAX
006a9dd0  MOV EAX,dword ptr [ESP + 0x18]
006a9dd4  PUSH EAX
006a9dd5  MOV EAX,dword ptr [ESI + 0xbc]
006a9ddb  PUSH EAX
006a9ddc  MOV EAX,dword ptr [EDX]
006a9dde  MOV EAX,dword ptr [EAX + 0xcc]
006a9de4  PUSH EAX
006a9de5  MOV EAX,dword ptr [ESP + 0x30]
006a9de9  PUSH EAX
006a9dea  CALL 0x0068ef10
006a9def  FSUB float ptr [0x0089096c]
006a9df5  ADD ESP,0x14
006a9df8  FMUL float ptr [ESP + 0x28]
006a9dfc  FADD float ptr [0x0089096c]
006a9e02  FLD float ptr [EDI + 0xf8]
006a9e08  FCOMP float ptr [0x00890968]
006a9e0e  FNSTSW AX
006a9e10  TEST AH,0x41
006a9e13  JNZ 0x006a9e47
006a9e15  CMP ECX,0x2
006a9e18  JNC 0x006a9e47
006a9e1a  FLD float ptr [ESI + 0x8c]
006a9e20  FCOM float ptr [0x00890968]
006a9e26  FNSTSW AX
006a9e28  TEST AH,0x5
006a9e2b  JP 0x006a9e2f
006a9e2d  FCHS
006a9e2f  FMUL float ptr [EDI + 0xf8]
006a9e35  FMUL float ptr [0x00891050]
006a9e3b  FADD float ptr [0x0089096c]
006a9e41  FST float ptr [ESP + 0x18]
006a9e45  FMULP
006a9e47  TEST EBX,EBX
006a9e49  MOV EAX,dword ptr [EDX]
006a9e4b  FMUL float ptr [EAX + 0xec]
006a9e51  MOV EBP,dword ptr [ESP + 0x18]
006a9e55  FSTP float ptr [EAX + 0xec]
006a9e5b  MOV EAX,dword ptr [EDX]
006a9e5d  MOV dword ptr [EAX + 0xe8],EBP
006a9e63  JZ 0x006a9e9e
006a9e65  FLD float ptr [EBX + 0x4]
006a9e68  MOV EAX,dword ptr [EDX]
006a9e6a  FMUL float ptr [0x00895074]
006a9e70  FLD float ptr [0x0089096c]
006a9e76  FADD ST0,ST1
006a9e78  FSTP float ptr [ESP + 0x34]
006a9e7c  MOV EBP,dword ptr [ESP + 0x34]
006a9e80  FLD float ptr [0x0089096c]
006a9e86  MOV dword ptr [EAX + 0x11c],EBP
006a9e8c  FSUB ST0,ST1
006a9e8e  FSTP float ptr [ESP + 0x38]
006a9e92  MOV EBP,dword ptr [ESP + 0x38]
006a9e96  MOV dword ptr [EAX + 0x120],EBP
006a9e9c  FSTP ST0
006a9e9e  FLD float ptr [ESI + 0xd4]
006a9ea4  MOV EAX,dword ptr [EDX]
006a9ea6  FMUL float ptr [ESI + 0xd0]
006a9eac  FMUL float ptr [EAX + 0xec]
006a9eb2  FSTP float ptr [EAX + 0xec]
006a9eb8  MOVSX EBP,word ptr [ESI + 0xce]
006a9ebf  MOV EAX,0x1
006a9ec4  SHL EAX,CL
006a9ec6  TEST EBP,EAX
006a9ec8  JZ 0x006a9ef6
006a9eca  MOV EAX,dword ptr [EDX]
006a9ecc  MOV dword ptr [EAX + 0xcc],0x0
006a9ed6  MOV EAX,dword ptr [EDX]
006a9ed8  MOV dword ptr [EAX + 0xc8],0x3f800000
006a9ee2  MOV EAX,dword ptr [EDX]
006a9ee4  FLD float ptr [EAX + 0xec]
006a9eea  FMUL float ptr [0x00894b58]
006a9ef0  FSTP float ptr [EAX + 0xec]
006a9ef6  MOV EBP,dword ptr [EDX]
006a9ef8  FLD float ptr [EBP + 0xf0]
006a9efe  FCOMP float ptr [ESP + 0x1c]
006a9f02  FNSTSW AX
006a9f04  TEST AH,0x41
006a9f07  JNZ 0x006a9f17
006a9f09  MOV EAX,dword ptr [EBP + 0xf0]
006a9f0f  MOV dword ptr [ESP + 0x1c],EAX
006a9f13  MOV dword ptr [ESP + 0x24],ECX
006a9f17  INC ECX
006a9f18  ADD EDX,0x4
006a9f1b  CMP ECX,0x4
006a9f1e  JL 0x006a9ca0
006a9f24  CMP word ptr [ESI + 0xc8],0x1
006a9f2c  POP EBP
006a9f2d  POP EBX
006a9f2e  JZ 0x006a9f7c
006a9f30  CMP word ptr [ESI + 0xcc],0x2
006a9f38  JNZ 0x006a9f7c
006a9f3a  FLD float ptr [ESI + 0x4c]
006a9f3d  FCOMP float ptr [0x0089096c]
006a9f43  FNSTSW AX
006a9f45  TEST AH,0x1
006a9f48  JNZ 0x006a9f7c
006a9f4a  MOV ECX,dword ptr [ESI + 0x9c]
006a9f50  FLD float ptr [ESI + 0x48]
006a9f53  MOV EDX,dword ptr [ESP + 0x1c]
006a9f57  FMUL float ptr [0x008967e0]
006a9f5d  MOV EAX,dword ptr [ESP + 0x14]
006a9f61  PUSH ECX
006a9f62  PUSH EDX
006a9f63  PUSH EAX
006a9f64  PUSH ECX
006a9f65  MOV ECX,dword ptr [ESI + 0xc0]
006a9f6b  FSTP float ptr [ESP]
006a9f6e  PUSH ECX
006a9f6f  LEA ECX,[EDI + 0x10c]
006a9f75  CALL 0x0069eac0
006a9f7a  JMP 0x006a9f9a
006a9f7c  XOR EAX,EAX
006a9f7e  MOV dword ptr [EDI + 0x10c],EAX
006a9f84  MOV dword ptr [EDI + 0x110],EAX
006a9f8a  MOV dword ptr [EDI + 0x114],0x3f800000
006a9f94  MOV dword ptr [EDI + 0x118],EAX
006a9f9a  TEST byte ptr [ESI + 0xc4],0x1
006a9fa1  JZ 0x006aa003
006a9fa3  MOV EAX,dword ptr [EDI + 0x1b4]
006a9fa9  FLD float ptr [EAX + 0xec]
006a9faf  FMUL float ptr [0x008910f0]
006a9fb5  FSTP float ptr [EAX + 0xec]
006a9fbb  MOV EAX,dword ptr [EDI + 0x1b8]
006a9fc1  FLD float ptr [EAX + 0xec]
006a9fc7  FMUL float ptr [0x008910f0]
006a9fcd  FSTP float ptr [EAX + 0xec]
006a9fd3  MOV EAX,dword ptr [EDI + 0x1bc]
006a9fd9  FLD float ptr [EAX + 0xec]
006a9fdf  FMUL float ptr [0x008910f0]
006a9fe5  FSTP float ptr [EAX + 0xec]
006a9feb  MOV EAX,dword ptr [EDI + 0x1c0]
006a9ff1  FLD float ptr [EAX + 0xec]
006a9ff7  FMUL float ptr [0x008910f0]
006a9ffd  FSTP float ptr [EAX + 0xec]
006aa003  PUSH ESI
006aa004  MOV ECX,EDI
006aa006  CALL 0x006a9760
006aa00b  POP EDI
006aa00c  POP ESI
006aa00d  ADD ESP,0x2c
006aa010  RET 0x4
