004a6d10  SUB ESP,0x28
004a6d13  PUSH EBX
004a6d14  MOV EBX,ECX
004a6d16  MOV AL,byte ptr [EBX + 0x12]
004a6d19  TEST AL,AL
004a6d1b  PUSH EBP
004a6d1c  PUSH ESI
004a6d1d  PUSH EDI
004a6d1e  MOV dword ptr [ESP + 0x14],EBX
004a6d22  JZ 0x004a6d38
004a6d24  MOVZX EAX,byte ptr [EBX + 0x13]
004a6d28  MOV dword ptr [ESP + 0x18],EAX
004a6d2c  FILD dword ptr [ESP + 0x18]
004a6d30  FMUL float ptr [ESP + 0x3c]
004a6d34  FSTP float ptr [ESP + 0x3c]
004a6d38  MOV EDI,dword ptr [EBX + 0xc]
004a6d3b  FLD float ptr [ESP + 0x3c]
004a6d3f  MOV dword ptr [ESP + 0x18],EDI
004a6d43  CALL 0x007c4b80
004a6d48  MOV EBP,dword ptr [EDI + 0x8]
004a6d4b  TEST EBP,EBP
004a6d4d  MOV dword ptr [ESP + 0x1c],EAX
004a6d51  MOV dword ptr [ESP + 0x10],0x0
004a6d59  JNZ 0x004a6da5
004a6d5b  TEST EAX,EAX
004a6d5d  JGE 0x004a6d63
004a6d5f  XOR ESI,ESI
004a6d61  JMP 0x004a6d70
004a6d63  MOVZX ESI,word ptr [EDI + 0x10]
004a6d67  CMP EAX,ESI
004a6d69  JL 0x004a6d6e
004a6d6b  DEC ESI
004a6d6c  JMP 0x004a6d70
004a6d6e  MOV ESI,EAX
004a6d70  FILD dword ptr [ESP + 0x1c]
004a6d74  FLD ST0
004a6d76  FLD float ptr [ESP + 0x3c]
004a6d7a  FUCOMPP
004a6d7c  FNSTSW AX
004a6d7e  TEST AH,0x44
004a6d81  JNP 0x004a6d87
004a6d83  MOV CL,0x1
004a6d85  JMP 0x004a6d89
004a6d87  XOR CL,CL
004a6d89  FLD float ptr [ESP + 0x3c]
004a6d8d  MOVZX EDX,word ptr [EDI + 0x10]
004a6d91  FSUB ST0,ST1
004a6d93  DEC EDX
004a6d94  MOV byte ptr [ESP + 0x14],CL
004a6d98  CMP ESI,EDX
004a6d9a  FSTP float ptr [ESP + 0x10]
004a6d9e  FSTP ST0
004a6da0  JMP 0x004a6e93
004a6da5  MOVZX ECX,word ptr [EBP]
004a6da9  CMP EAX,ECX
004a6dab  MOV dword ptr [ESP + 0x1c],ECX
004a6daf  JGE 0x004a6db5
004a6db1  XOR ESI,ESI
004a6db3  JMP 0x004a6dfc
004a6db5  MOV CX,word ptr [EBX + 0x10]
004a6db9  CMP CX,0x1
004a6dbd  JNC 0x004a6dc3
004a6dbf  XOR ECX,ECX
004a6dc1  JMP 0x004a6dc7
004a6dc3  MOVZX ECX,CX
004a6dc6  DEC ECX
004a6dc7  MOVZX EDX,word ptr [EBP + ECX*0x2]
004a6dcc  CMP EDX,EAX
004a6dce  LEA ESI,[EBP + ECX*0x2]
004a6dd2  JG 0x004a6e23
004a6dd4  MOVZX EDX,word ptr [EDI + 0x10]
004a6dd8  SUB EDX,0x2
004a6ddb  CMP ECX,EDX
004a6ddd  JGE 0x004a6df5
004a6ddf  LEA EBX,[ESI + 0x2]
004a6de2  MOVZX ESI,word ptr [EBX]
004a6de5  CMP ESI,EAX
004a6de7  JG 0x004a6df1
004a6de9  INC ECX
004a6dea  ADD EBX,0x2
004a6ded  CMP ECX,EDX
004a6def  JL 0x004a6de2
004a6df1  MOV EBX,dword ptr [ESP + 0x14]
004a6df5  LEA ESI,[ECX + 0x1]
004a6df8  TEST ESI,ESI
004a6dfa  JNZ 0x004a6e49
004a6dfc  FLD float ptr [0x00890968]
004a6e02  FLD float ptr [ESP + 0x3c]
004a6e06  FUCOMPP
004a6e08  FNSTSW AX
004a6e0a  TEST AH,0x44
004a6e0d  JNP 0x004a6e41
004a6e0f  FILD dword ptr [ESP + 0x1c]
004a6e13  MOV CL,0x1
004a6e15  MOV byte ptr [ESP + 0x14],CL
004a6e19  FDIVR float ptr [ESP + 0x3c]
004a6e1d  FSTP float ptr [ESP + 0x10]
004a6e21  JMP 0x004a6e8c
004a6e23  TEST ECX,ECX
004a6e25  JLE 0x004a6df5
004a6e27  MOV EDX,ESI
004a6e29  LEA ESP,[ESP]
004a6e30  MOVZX ESI,word ptr [EDX]
004a6e33  CMP ESI,EAX
004a6e35  JLE 0x004a6df5
004a6e37  DEC ECX
004a6e38  SUB EDX,0x2
004a6e3b  TEST ECX,ECX
004a6e3d  JG 0x004a6e30
004a6e3f  JMP 0x004a6df5
004a6e41  XOR CL,CL
004a6e43  MOV byte ptr [ESP + 0x14],CL
004a6e47  JMP 0x004a6e8c
004a6e49  MOVZX EAX,word ptr [EBP + ESI*0x2 + -0x2]
004a6e4e  MOV dword ptr [ESP + 0x1c],EAX
004a6e52  FILD dword ptr [ESP + 0x1c]
004a6e56  FLD ST0
004a6e58  FLD float ptr [ESP + 0x3c]
004a6e5c  FUCOMPP
004a6e5e  FNSTSW AX
004a6e60  TEST AH,0x44
004a6e63  JNP 0x004a7288
004a6e69  MOVZX EDX,word ptr [EBP + ESI*0x2]
004a6e6e  FLD float ptr [ESP + 0x3c]
004a6e72  FSUB ST0,ST1
004a6e74  MOV dword ptr [ESP + 0x1c],EDX
004a6e78  MOV CL,0x1
004a6e7a  FILD dword ptr [ESP + 0x1c]
004a6e7e  MOV byte ptr [ESP + 0x14],CL
004a6e82  FSUB ST0,ST2
004a6e84  FDIVP
004a6e86  FSTP float ptr [ESP + 0x10]
004a6e8a  FSTP ST0
004a6e8c  MOVZX EAX,word ptr [EDI + 0x10]
004a6e90  DEC EAX
004a6e91  CMP ESI,EAX
004a6e93  JL 0x004a6e9b
004a6e95  XOR CL,CL
004a6e97  MOV byte ptr [ESP + 0x14],CL
004a6e9b  MOV EAX,dword ptr [ESP + 0x44]
004a6e9f  TEST EAX,EAX
004a6ea1  MOV word ptr [EBX + 0x10],SI
004a6ea5  JNZ 0x004a74a2
004a6eab  MOVZX EBX,byte ptr [EDI + 0x12]
004a6eaf  MOV EAX,EBX
004a6eb1  IMUL EAX,ESI
004a6eb4  MOV EDX,EBX
004a6eb6  SHL EDX,0x5
004a6eb9  TEST CL,CL
004a6ebb  LEA EBP,[EDX + EDI*0x1 + 0x18]
004a6ebf  MOV EDX,dword ptr [EDI + 0xc]
004a6ec2  LEA EAX,[EAX + EAX*0x2]
004a6ec5  MOV dword ptr [ESP + 0x1c],EBX
004a6ec9  MOV dword ptr [ESP + 0x14],EBP
004a6ecd  MOV dword ptr [ESP + 0x44],EDX
004a6ed1  LEA EAX,[EBP + EAX*0x2]
004a6ed5  JZ 0x004a7293
004a6edb  LEA ECX,[ESI + 0x1]
004a6ede  MOVZX ESI,byte ptr [EDI + 0x12]
004a6ee2  IMUL ECX,ESI
004a6ee5  LEA ECX,[ECX + ECX*0x2]
004a6ee8  LEA ESI,[EBP + ECX*0x2]
004a6eec  MOV ECX,dword ptr [ESP + 0x40]
004a6ef0  XOR EBP,EBP
004a6ef2  CMP EBX,0x4
004a6ef5  JL 0x004a71b5
004a6efb  LEA EDI,[EDX + 0x4]
004a6efe  MOV EDX,dword ptr [ESP + 0x18]
004a6f02  ADD EBX,-0x4
004a6f05  SHR EBX,0x2
004a6f08  ADD EDX,0x4c
004a6f0b  INC EBX
004a6f0c  MOV dword ptr [ESP + 0x3c],EBX
004a6f10  LEA EBP,[EBX*0x4 + 0x0]
004a6f17  JMP 0x004a6f20
004a6f20  MOVSX EBX,word ptr [EAX]
004a6f23  MOV dword ptr [ESP + 0x40],EBX
004a6f27  MOVSX EBX,word ptr [EAX + 0x2]
004a6f2b  FILD dword ptr [ESP + 0x40]
004a6f2f  MOV dword ptr [ESP + 0x40],EBX
004a6f33  MOVSX EBX,word ptr [EAX + 0x4]
004a6f37  FMUL float ptr [EDX + -0x24]
004a6f3a  FILD dword ptr [ESP + 0x40]
004a6f3e  MOV dword ptr [ESP + 0x40],EBX
004a6f42  MOVSX EBX,word ptr [ESI]
004a6f45  FMUL float ptr [EDX + -0x20]
004a6f48  FILD dword ptr [ESP + 0x40]
004a6f4c  MOV dword ptr [ESP + 0x40],EBX
004a6f50  MOVSX EBX,word ptr [ESI + 0x2]
004a6f54  FMUL float ptr [EDX + -0x1c]
004a6f57  FSTP float ptr [ESP + 0x34]
004a6f5b  FILD dword ptr [ESP + 0x40]
004a6f5f  MOV dword ptr [ESP + 0x40],EBX
004a6f63  MOVSX EBX,word ptr [ESI + 0x4]
004a6f67  FMUL float ptr [EDX + -0x24]
004a6f6a  FILD dword ptr [ESP + 0x40]
004a6f6e  MOV dword ptr [ESP + 0x40],EBX
004a6f72  MOVZX EBX,word ptr [EDI + -0x4]
004a6f76  FMUL float ptr [EDX + -0x20]
004a6f79  FSTP float ptr [ESP + 0x24]
004a6f7d  FILD dword ptr [ESP + 0x40]
004a6f81  FMUL float ptr [EDX + -0x1c]
004a6f84  FSTP float ptr [ESP + 0x28]
004a6f88  FSUB ST0,ST2
004a6f8a  FMUL float ptr [ESP + 0x10]
004a6f8e  FADD ST0,ST2
004a6f90  FSTP float ptr [ECX + EBX*0x4]
004a6f93  FLD float ptr [ESP + 0x24]
004a6f97  FSUB ST0,ST1
004a6f99  FMUL float ptr [ESP + 0x10]
004a6f9d  FADD ST0,ST1
004a6f9f  FSTP float ptr [ECX + EBX*0x4 + 0x4]
004a6fa3  FSTP ST0
004a6fa5  FSTP ST0
004a6fa7  FLD float ptr [ESP + 0x28]
004a6fab  FSUB float ptr [ESP + 0x34]
004a6faf  FMUL float ptr [ESP + 0x10]
004a6fb3  FADD float ptr [ESP + 0x34]
004a6fb7  FSTP float ptr [ECX + EBX*0x4 + 0x8]
004a6fbb  MOVSX EBX,word ptr [EAX + 0x6]
004a6fbf  MOV dword ptr [ESP + 0x40],EBX
004a6fc3  MOVSX EBX,word ptr [EAX + 0x8]
004a6fc7  FILD dword ptr [ESP + 0x40]
004a6fcb  MOV dword ptr [ESP + 0x40],EBX
004a6fcf  MOVSX EBX,word ptr [EAX + 0xa]
004a6fd3  FMUL float ptr [EDX + -0x4]
004a6fd6  FILD dword ptr [ESP + 0x40]
004a6fda  MOV dword ptr [ESP + 0x40],EBX
004a6fde  MOVSX EBX,word ptr [ESI + 0x6]
004a6fe2  FMUL float ptr [EDX]
004a6fe4  FILD dword ptr [ESP + 0x40]
004a6fe8  MOV dword ptr [ESP + 0x40],EBX
004a6fec  MOVSX EBX,word ptr [ESI + 0x8]
004a6ff0  FMUL float ptr [EDX + 0x4]
004a6ff3  FSTP float ptr [ESP + 0x34]
004a6ff7  FILD dword ptr [ESP + 0x40]
004a6ffb  MOV dword ptr [ESP + 0x40],EBX
004a6fff  MOVSX EBX,word ptr [ESI + 0xa]
004a7003  FMUL float ptr [EDX + -0x4]
004a7006  FILD dword ptr [ESP + 0x40]
004a700a  MOV dword ptr [ESP + 0x40],EBX
004a700e  MOVZX EBX,word ptr [EDI + -0x2]
004a7012  FMUL float ptr [EDX]
004a7014  FSTP float ptr [ESP + 0x24]
004a7018  FILD dword ptr [ESP + 0x40]
004a701c  FMUL float ptr [EDX + 0x4]
004a701f  FSTP float ptr [ESP + 0x28]
004a7023  FSUB ST0,ST2
004a7025  FMUL float ptr [ESP + 0x10]
004a7029  FADD ST0,ST2
004a702b  FSTP float ptr [ECX + EBX*0x4]
004a702e  FLD float ptr [ESP + 0x24]
004a7032  FSUB ST0,ST1
004a7034  FMUL float ptr [ESP + 0x10]
004a7038  FADD ST0,ST1
004a703a  FSTP float ptr [ECX + EBX*0x4 + 0x4]
004a703e  FSTP ST0
004a7040  FSTP ST0
004a7042  FLD float ptr [ESP + 0x28]
004a7046  FSUB float ptr [ESP + 0x34]
004a704a  FMUL float ptr [ESP + 0x10]
004a704e  FADD float ptr [ESP + 0x34]
004a7052  FSTP float ptr [ECX + EBX*0x4 + 0x8]
004a7056  MOVSX EBX,word ptr [EAX + 0xc]
004a705a  MOV dword ptr [ESP + 0x40],EBX
004a705e  MOVSX EBX,word ptr [EAX + 0xe]
004a7062  FILD dword ptr [ESP + 0x40]
004a7066  MOV dword ptr [ESP + 0x40],EBX
004a706a  MOVSX EBX,word ptr [EAX + 0x10]
004a706e  FMUL float ptr [EDX + 0x1c]
004a7071  FILD dword ptr [ESP + 0x40]
004a7075  MOV dword ptr [ESP + 0x40],EBX
004a7079  MOVSX EBX,word ptr [ESI + 0xc]
004a707d  FMUL float ptr [EDX + 0x20]
004a7080  FILD dword ptr [ESP + 0x40]
004a7084  MOV dword ptr [ESP + 0x40],EBX
004a7088  MOVSX EBX,word ptr [ESI + 0xe]
004a708c  FMUL float ptr [EDX + 0x24]
004a708f  FSTP float ptr [ESP + 0x34]
004a7093  FILD dword ptr [ESP + 0x40]
004a7097  MOV dword ptr [ESP + 0x40],EBX
004a709b  MOVSX EBX,word ptr [ESI + 0x10]
004a709f  FMUL float ptr [EDX + 0x1c]
004a70a2  FILD dword ptr [ESP + 0x40]
004a70a6  MOV dword ptr [ESP + 0x40],EBX
004a70aa  MOVZX EBX,word ptr [EDI]
004a70ad  FMUL float ptr [EDX + 0x20]
004a70b0  FSTP float ptr [ESP + 0x24]
004a70b4  FILD dword ptr [ESP + 0x40]
004a70b8  FMUL float ptr [EDX + 0x24]
004a70bb  FSTP float ptr [ESP + 0x28]
004a70bf  FSUB ST0,ST2
004a70c1  FMUL float ptr [ESP + 0x10]
004a70c5  FADD ST0,ST2
004a70c7  FSTP float ptr [ECX + EBX*0x4]
004a70ca  FLD float ptr [ESP + 0x24]
004a70ce  FSUB ST0,ST1
004a70d0  FMUL float ptr [ESP + 0x10]
004a70d4  FADD ST0,ST1
004a70d6  FSTP float ptr [ECX + EBX*0x4 + 0x4]
004a70da  FSTP ST0
004a70dc  FSTP ST0
004a70de  FLD float ptr [ESP + 0x28]
004a70e2  FSUB float ptr [ESP + 0x34]
004a70e6  FMUL float ptr [ESP + 0x10]
004a70ea  FADD float ptr [ESP + 0x34]
004a70ee  FSTP float ptr [ECX + EBX*0x4 + 0x8]
004a70f2  MOVSX EBX,word ptr [EAX + 0x12]
004a70f6  MOV dword ptr [ESP + 0x40],EBX
004a70fa  MOVSX EBX,word ptr [EAX + 0x14]
004a70fe  FILD dword ptr [ESP + 0x40]
004a7102  MOV dword ptr [ESP + 0x40],EBX
004a7106  MOVSX EBX,word ptr [EAX + 0x16]
004a710a  FMUL float ptr [EDX + 0x3c]
004a710d  FILD dword ptr [ESP + 0x40]
004a7111  MOV dword ptr [ESP + 0x40],EBX
004a7115  MOVSX EBX,word ptr [ESI + 0x12]
004a7119  FMUL float ptr [EDX + 0x40]
004a711c  FILD dword ptr [ESP + 0x40]
004a7120  MOV dword ptr [ESP + 0x40],EBX
004a7124  MOVSX EBX,word ptr [ESI + 0x14]
004a7128  FMUL float ptr [EDX + 0x44]
004a712b  FSTP float ptr [ESP + 0x34]
004a712f  FILD dword ptr [ESP + 0x40]
004a7133  MOV dword ptr [ESP + 0x40],EBX
004a7137  FMUL float ptr [EDX + 0x3c]
004a713a  FILD dword ptr [ESP + 0x40]
004a713e  FMUL float ptr [EDX + 0x40]
004a7141  MOVSX EBX,word ptr [ESI + 0x16]
004a7145  FSTP float ptr [ESP + 0x24]
004a7149  MOV dword ptr [ESP + 0x40],EBX
004a714d  MOVZX EBX,word ptr [EDI + 0x2]
004a7151  FILD dword ptr [ESP + 0x40]
004a7155  ADD EAX,0x18
004a7158  ADD ESI,0x18
004a715b  FMUL float ptr [EDX + 0x44]
004a715e  ADD EDX,0x80
004a7164  ADD EDI,0x8
004a7167  FSTP float ptr [ESP + 0x28]
004a716b  FSUB ST0,ST2
004a716d  FMUL float ptr [ESP + 0x10]
004a7171  FADD ST0,ST2
004a7173  FSTP float ptr [ECX + EBX*0x4]
004a7176  FLD float ptr [ESP + 0x24]
004a717a  FSUB ST0,ST1
004a717c  FMUL float ptr [ESP + 0x10]
004a7180  FADD ST0,ST1
004a7182  FSTP float ptr [ECX + EBX*0x4 + 0x4]
004a7186  FSTP ST0
004a7188  FSTP ST0
004a718a  FLD float ptr [ESP + 0x28]
004a718e  FSUB float ptr [ESP + 0x34]
004a7192  FMUL float ptr [ESP + 0x10]
004a7196  FADD float ptr [ESP + 0x34]
004a719a  FSTP float ptr [ECX + EBX*0x4 + 0x8]
004a719e  MOV EBX,dword ptr [ESP + 0x3c]
004a71a2  DEC EBX
004a71a3  MOV dword ptr [ESP + 0x3c],EBX
004a71a7  JNZ 0x004a6f20
004a71ad  MOV EBX,dword ptr [ESP + 0x1c]
004a71b1  MOV EDI,dword ptr [ESP + 0x18]
004a71b5  CMP EBP,EBX
004a71b7  JGE 0x004a7443
004a71bd  MOV EDX,EBP
004a71bf  SHL EDX,0x5
004a71c2  LEA EDX,[EDX + EDI*0x1 + 0x2c]
004a71c6  JMP 0x004a71d0
004a71d0  MOVSX EDI,word ptr [EAX]
004a71d3  MOV dword ptr [ESP + 0x3c],EDI
004a71d7  MOVSX EDI,word ptr [EAX + 0x2]
004a71db  FILD dword ptr [ESP + 0x3c]
004a71df  MOV dword ptr [ESP + 0x3c],EDI
004a71e3  MOVSX EDI,word ptr [EAX + 0x4]
004a71e7  FMUL float ptr [EDX + -0x4]
004a71ea  FILD dword ptr [ESP + 0x3c]
004a71ee  MOV dword ptr [ESP + 0x3c],EDI
004a71f2  MOVSX EDI,word ptr [ESI]
004a71f5  FMUL float ptr [EDX]
004a71f7  FILD dword ptr [ESP + 0x3c]
004a71fb  MOV dword ptr [ESP + 0x3c],EDI
004a71ff  MOVSX EDI,word ptr [ESI + 0x2]
004a7203  FMUL float ptr [EDX + 0x4]
004a7206  ADD EAX,0x6
004a7209  FSTP float ptr [ESP + 0x34]
004a720d  ADD ESI,0x6
004a7210  FILD dword ptr [ESP + 0x3c]
004a7214  MOV dword ptr [ESP + 0x3c],EDI
004a7218  MOVSX EDI,word ptr [ESI + -0x2]
004a721c  FMUL float ptr [EDX + -0x4]
004a721f  FILD dword ptr [ESP + 0x3c]
004a7223  MOV dword ptr [ESP + 0x3c],EDI
004a7227  MOV EDI,dword ptr [ESP + 0x44]
004a722b  MOVZX EDI,word ptr [EDI + EBP*0x2]
004a722f  FMUL float ptr [EDX]
004a7231  INC EBP
004a7232  FSTP float ptr [ESP + 0x24]
004a7236  ADD EDX,0x20
004a7239  CMP EBP,EBX
004a723b  FILD dword ptr [ESP + 0x3c]
004a723f  FMUL float ptr [EDX + -0x1c]
004a7242  FSTP float ptr [ESP + 0x28]
004a7246  FSUB ST0,ST2
004a7248  FMUL float ptr [ESP + 0x10]
004a724c  FADD ST0,ST2
004a724e  FSTP float ptr [ECX + EDI*0x4]
004a7251  FLD float ptr [ESP + 0x24]
004a7255  FSUB ST0,ST1
004a7257  FMUL float ptr [ESP + 0x10]
004a725b  FADD ST0,ST1
004a725d  FSTP float ptr [ECX + EDI*0x4 + 0x4]
004a7261  FSTP ST0
004a7263  FSTP ST0
004a7265  FLD float ptr [ESP + 0x28]
004a7269  FSUB float ptr [ESP + 0x34]
004a726d  FMUL float ptr [ESP + 0x10]
004a7271  FADD float ptr [ESP + 0x34]
004a7275  FSTP float ptr [ECX + EDI*0x4 + 0x8]
004a7279  JL 0x004a71d0
004a727f  MOV EDI,dword ptr [ESP + 0x18]
004a7283  JMP 0x004a7443
004a7288  XOR CL,CL
004a728a  MOV byte ptr [ESP + 0x14],CL
004a728e  JMP 0x004a6e8a
004a7293  MOV ECX,dword ptr [ESP + 0x40]
004a7297  XOR ESI,ESI
004a7299  CMP EBX,0x4
004a729c  MOV dword ptr [ESP + 0x3c],ESI
004a72a0  JL 0x004a73d8
004a72a6  LEA ESI,[EDX + 0x4]
004a72a9  LEA EDX,[EDI + 0x30]
004a72ac  LEA EDI,[EBX + -0x4]
004a72af  SHR EDI,0x2
004a72b2  INC EDI
004a72b3  MOV dword ptr [ESP + 0x40],EDI
004a72b7  SHL EDI,0x2
004a72ba  MOV dword ptr [ESP + 0x3c],EDI
004a72be  MOV EDI,EDI
004a72c0  MOVSX EBP,word ptr [EAX]
004a72c3  MOVZX EDI,word ptr [ESI + -0x4]
004a72c7  MOV dword ptr [ESP + 0x1c],EBP
004a72cb  ADD EAX,0x18
004a72ce  ADD ESI,0x8
004a72d1  FILD dword ptr [ESP + 0x1c]
004a72d5  ADD EDX,0x80
004a72db  FMUL float ptr [EDX + 0xffffff78]
004a72e1  FSTP float ptr [ECX + EDI*0x4]
004a72e4  MOVSX EBP,word ptr [EAX + -0x16]
004a72e8  MOV dword ptr [ESP + 0x1c],EBP
004a72ec  FILD dword ptr [ESP + 0x1c]
004a72f0  FMUL float ptr [EDX + 0xffffff7c]
004a72f6  FSTP float ptr [ECX + EDI*0x4 + 0x4]
004a72fa  MOVSX EBP,word ptr [EAX + -0x14]
004a72fe  MOV dword ptr [ESP + 0x1c],EBP
004a7302  FILD dword ptr [ESP + 0x1c]
004a7306  FMUL float ptr [EDX + -0x80]
004a7309  FSTP float ptr [ECX + EDI*0x4 + 0x8]
004a730d  MOVSX EBP,word ptr [EAX + -0x12]
004a7311  MOVZX EDI,word ptr [ESI + -0xa]
004a7315  MOV dword ptr [ESP + 0x1c],EBP
004a7319  FILD dword ptr [ESP + 0x1c]
004a731d  FMUL float ptr [EDX + -0x68]
004a7320  FSTP float ptr [ECX + EDI*0x4]
004a7323  MOVSX EBP,word ptr [EAX + -0x10]
004a7327  MOV dword ptr [ESP + 0x1c],EBP
004a732b  FILD dword ptr [ESP + 0x1c]
004a732f  FMUL float ptr [EDX + -0x64]
004a7332  FSTP float ptr [ECX + EDI*0x4 + 0x4]
004a7336  MOVSX EBP,word ptr [EAX + -0xe]
004a733a  MOV dword ptr [ESP + 0x1c],EBP
004a733e  FILD dword ptr [ESP + 0x1c]
004a7342  FMUL float ptr [EDX + -0x60]
004a7345  FSTP float ptr [ECX + EDI*0x4 + 0x8]
004a7349  MOVSX EBP,word ptr [EAX + -0xc]
004a734d  MOVZX EDI,word ptr [ESI + -0x8]
004a7351  MOV dword ptr [ESP + 0x1c],EBP
004a7355  FILD dword ptr [ESP + 0x1c]
004a7359  FMUL float ptr [EDX + -0x48]
004a735c  FSTP float ptr [ECX + EDI*0x4]
004a735f  MOVSX EBP,word ptr [EAX + -0xa]
004a7363  MOV dword ptr [ESP + 0x1c],EBP
004a7367  FILD dword ptr [ESP + 0x1c]
004a736b  FMUL float ptr [EDX + -0x44]
004a736e  FSTP float ptr [ECX + EDI*0x4 + 0x4]
004a7372  MOVSX EBP,word ptr [EAX + -0x8]
004a7376  MOV dword ptr [ESP + 0x1c],EBP
004a737a  FILD dword ptr [ESP + 0x1c]
004a737e  FMUL float ptr [EDX + -0x40]
004a7381  FSTP float ptr [ECX + EDI*0x4 + 0x8]
004a7385  MOVSX EBP,word ptr [EAX + -0x6]
004a7389  MOVZX EDI,word ptr [ESI + -0x6]
004a738d  MOV dword ptr [ESP + 0x1c],EBP
004a7391  FILD dword ptr [ESP + 0x1c]
004a7395  FMUL float ptr [EDX + -0x28]
004a7398  FSTP float ptr [ECX + EDI*0x4]
004a739b  MOVSX EBP,word ptr [EAX + -0x4]
004a739f  MOV dword ptr [ESP + 0x1c],EBP
004a73a3  FILD dword ptr [ESP + 0x1c]
004a73a7  FMUL float ptr [EDX + -0x24]
004a73aa  FSTP float ptr [ECX + EDI*0x4 + 0x4]
004a73ae  MOVSX EBP,word ptr [EAX + -0x2]
004a73b2  MOV dword ptr [ESP + 0x1c],EBP
004a73b6  FILD dword ptr [ESP + 0x1c]
004a73ba  FMUL float ptr [EDX + -0x20]
004a73bd  FSTP float ptr [ECX + EDI*0x4 + 0x8]
004a73c1  MOV EDI,dword ptr [ESP + 0x40]
004a73c5  DEC EDI
004a73c6  MOV dword ptr [ESP + 0x40],EDI
004a73ca  JNZ 0x004a72c0
004a73d0  MOV ESI,dword ptr [ESP + 0x3c]
004a73d4  MOV EDI,dword ptr [ESP + 0x18]
004a73d8  CMP ESI,EBX
004a73da  JGE 0x004a7443
004a73dc  MOV EDX,ESI
004a73de  SHL EDX,0x5
004a73e1  LEA EDX,[EDX + EDI*0x1 + 0x30]
004a73e5  JMP 0x004a73f0
004a73f0  MOV EBP,dword ptr [ESP + 0x44]
004a73f4  MOVZX ESI,word ptr [EBP + ESI*0x2]
004a73f9  MOVSX EBP,word ptr [EAX]
004a73fc  MOV dword ptr [ESP + 0x40],EBP
004a7400  ADD EAX,0x6
004a7403  ADD EDX,0x20
004a7406  FILD dword ptr [ESP + 0x40]
004a740a  FMUL float ptr [EDX + -0x28]
004a740d  FSTP float ptr [ECX + ESI*0x4]
004a7410  MOVSX EBP,word ptr [EAX + -0x4]
004a7414  MOV dword ptr [ESP + 0x40],EBP
004a7418  FILD dword ptr [ESP + 0x40]
004a741c  FMUL float ptr [EDX + -0x24]
004a741f  FSTP float ptr [ECX + ESI*0x4 + 0x4]
004a7423  MOVSX EBP,word ptr [EAX + -0x2]
004a7427  MOV dword ptr [ESP + 0x40],EBP
004a742b  FILD dword ptr [ESP + 0x40]
004a742f  FMUL float ptr [EDX + -0x20]
004a7432  FSTP float ptr [ECX + ESI*0x4 + 0x8]
004a7436  MOV ESI,dword ptr [ESP + 0x3c]
004a743a  INC ESI
004a743b  CMP ESI,EBX
004a743d  MOV dword ptr [ESP + 0x3c],ESI
004a7441  JL 0x004a73f0
004a7443  MOV BL,byte ptr [EDI + 0x13]
004a7446  TEST BL,BL
004a7448  JBE 0x004a7496
004a744a  MOVZX EDX,byte ptr [EDI + 0x12]
004a744e  MOV EAX,dword ptr [EDI + 0xc]
004a7451  LEA EBP,[EAX + EDX*0x2]
004a7454  MOVZX EAX,word ptr [EDI + 0x10]
004a7458  IMUL EAX,EDX
004a745b  LEA EDX,[EAX + EAX*0x2]
004a745e  MOV EAX,dword ptr [ESP + 0x14]
004a7462  LEA EAX,[EAX + EDX*0x2 + 0x3]
004a7466  AND EAX,0xfffffffc
004a7469  XOR ESI,ESI
004a746b  TEST BL,BL
004a746d  JBE 0x004a7496
004a746f  ADD EAX,0x8
004a7472  MOVZX EDX,word ptr [EBP + ESI*0x2]
004a7477  MOV EBX,dword ptr [EAX + -0x8]
004a747a  MOV dword ptr [ECX + EDX*0x4],EBX
004a747d  MOV EBX,dword ptr [EAX + -0x4]
004a7480  MOV dword ptr [ECX + EDX*0x4 + 0x4],EBX
004a7484  MOV EBX,dword ptr [EAX]
004a7486  MOV dword ptr [ECX + EDX*0x4 + 0x8],EBX
004a748a  MOVZX EDX,byte ptr [EDI + 0x13]
004a748e  INC ESI
004a748f  ADD EAX,0xc
004a7492  CMP ESI,EDX
004a7494  JL 0x004a7472
004a7496  POP EDI
004a7497  POP ESI
004a7498  POP EBP
004a7499  MOV AL,0x1
004a749b  POP EBX
004a749c  ADD ESP,0x28
004a749f  RET 0xc
004a74a2  MOV ECX,dword ptr [ESP + 0x10]
004a74a6  MOV EDX,dword ptr [ESP + 0x14]
004a74aa  PUSH ECX
004a74ab  MOV ECX,dword ptr [ESP + 0x40]
004a74af  PUSH ESI
004a74b0  PUSH EDX
004a74b1  PUSH EAX
004a74b2  MOV EAX,dword ptr [ESP + 0x50]
004a74b6  PUSH EAX
004a74b7  PUSH ECX
004a74b8  MOV ECX,EBX
004a74ba  CALL 0x0049af00
004a74bf  POP EDI
004a74c0  POP ESI
004a74c1  POP EBP
004a74c2  POP EBX
004a74c3  ADD ESP,0x28
004a74c6  RET 0xc
