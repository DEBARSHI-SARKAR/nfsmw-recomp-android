004a3890  SUB ESP,0x30
004a3893  PUSH EBP
004a3894  PUSH ESI
004a3895  MOV ESI,ECX
004a3897  MOV EAX,dword ptr [ESI + 0x18]
004a389a  XOR EBP,EBP
004a389c  CMP EAX,EBP
004a389e  JNZ 0x004a38a5
004a38a0  CALL 0x004968e0
004a38a5  MOV EAX,dword ptr [ESP + 0x44]
004a38a9  CMP EAX,EBP
004a38ab  JZ 0x004a38c7
004a38ad  MOV ECX,dword ptr [ESP + 0x3c]
004a38b1  PUSH EAX
004a38b2  MOV EAX,dword ptr [ESP + 0x44]
004a38b6  PUSH EAX
004a38b7  PUSH ECX
004a38b8  MOV ECX,ESI
004a38ba  CALL 0x00495db0
004a38bf  POP ESI
004a38c0  POP EBP
004a38c1  ADD ESP,0x30
004a38c4  RET 0xc
004a38c7  MOV ECX,dword ptr [ESI + 0x28]
004a38ca  OR EAX,0xffffffff
004a38cd  CMP ECX,EBP
004a38cf  JZ 0x004a38da
004a38d1  MOV dword ptr [ESI + 0x10],EAX
004a38d4  MOV dword ptr [ESI + 0x1c],EAX
004a38d7  MOV dword ptr [ESI + 0x28],EBP
004a38da  FLD float ptr [ESP + 0x3c]
004a38de  PUSH EBX
004a38df  PUSH EDI
004a38e0  MOV EDI,dword ptr [ESI + 0xc]
004a38e3  CALL 0x007c4b80
004a38e8  MOV EDX,dword ptr [EDI + 0x8]
004a38eb  CMP EDX,EBP
004a38ed  MOV dword ptr [ESP + 0x30],EAX
004a38f1  JNZ 0x004a390e
004a38f3  CMP EAX,EBP
004a38f5  JGE 0x004a38fd
004a38f7  MOV dword ptr [ESP + 0x4c],EBP
004a38fb  JMP 0x004a396b
004a38fd  MOVZX ECX,word ptr [EDI + 0xc]
004a3901  CMP EAX,ECX
004a3903  JL 0x004a3908
004a3905  DEC ECX
004a3906  JMP 0x004a3967
004a3908  MOV dword ptr [ESP + 0x4c],EAX
004a390c  JMP 0x004a396b
004a390e  MOVZX ECX,word ptr [EDX]
004a3911  CMP EAX,ECX
004a3913  JGE 0x004a391b
004a3915  MOV dword ptr [ESP + 0x4c],EBP
004a3919  JMP 0x004a396b
004a391b  MOV ECX,dword ptr [ESI + 0x10]
004a391e  CMP ECX,0x1
004a3921  JGE 0x004a3927
004a3923  XOR ECX,ECX
004a3925  JMP 0x004a3928
004a3927  DEC ECX
004a3928  LEA EBX,[EDX + ECX*0x2]
004a392b  MOVZX EDX,word ptr [EBX]
004a392e  CMP EDX,EAX
004a3930  JG 0x004a3951
004a3932  MOVZX EDX,word ptr [EDI + 0xc]
004a3936  SUB EDX,0x2
004a3939  CMP ECX,EDX
004a393b  JGE 0x004a3966
004a393d  ADD EBX,0x2
004a3940  MOVZX EBP,word ptr [EBX]
004a3943  CMP EBP,EAX
004a3945  JG 0x004a3966
004a3947  INC ECX
004a3948  ADD EBX,0x2
004a394b  CMP ECX,EDX
004a394d  JL 0x004a3940
004a394f  JMP 0x004a3966
004a3951  CMP ECX,EBP
004a3953  JLE 0x004a3966
004a3955  MOV EDX,EBX
004a3957  MOVZX EBX,word ptr [EDX]
004a395a  CMP EBX,EAX
004a395c  JLE 0x004a3966
004a395e  DEC ECX
004a395f  SUB EDX,0x2
004a3962  CMP ECX,EBP
004a3964  JG 0x004a3957
004a3966  INC ECX
004a3967  MOV dword ptr [ESP + 0x4c],ECX
004a396b  MOVZX EAX,byte ptr [EDI + 0x10]
004a396f  MOV EBP,dword ptr [ESP + 0x4c]
004a3973  MOV ECX,0x1f
004a3978  SUB ECX,EAX
004a397a  MOV EBX,0x7fffffff
004a397f  SHR EBX,CL
004a3981  MOV ECX,EAX
004a3983  MOV EDX,EBP
004a3985  SAR EDX,CL
004a3987  MOV dword ptr [ESP + 0x28],EAX
004a398b  MOV ECX,EBX
004a398d  AND ECX,EBP
004a398f  MOV EBP,dword ptr [ESI + 0x10]
004a3992  MOV dword ptr [ESP + 0x1c],EDX
004a3996  MOV dword ptr [ESP + 0x10],ECX
004a399a  MOV ECX,EAX
004a399c  MOV EDX,EBP
004a399e  SAR EDX,CL
004a39a0  MOV EAX,0x1
004a39a5  SHL EAX,CL
004a39a7  MOV dword ptr [ESP + 0x20],EDX
004a39ab  MOVZX EDX,word ptr [EDI + 0xe]
004a39af  INC EAX
004a39b0  IMUL EAX,EDX
004a39b3  LEA EAX,[EAX + EAX*0x2 + 0x1]
004a39b7  AND EAX,0xfffffffe
004a39ba  IMUL EAX,dword ptr [ESP + 0x1c]
004a39bf  ADD EAX,EDI
004a39c1  LEA ECX,[EDX + EDX*0x8]
004a39c4  LEA EAX,[EAX + ECX*0x4 + 0x14]
004a39c8  MOV dword ptr [ESP + 0x18],EAX
004a39cc  CMP dword ptr [ESP + 0x4c],EBP
004a39d0  LEA ECX,[EDX + EDX*0x2]
004a39d3  MOV dword ptr [ESP + 0x24],ECX
004a39d7  JGE 0x004a39e6
004a39d9  MOV AL,[0x008ee4e4]
004a39de  TEST AL,AL
004a39e0  JNZ 0x004a39e6
004a39e2  MOV CL,0x1
004a39e4  JMP 0x004a39e8
004a39e6  XOR CL,CL
004a39e8  MOV EAX,dword ptr [ESI + 0x1c]
004a39eb  CMP dword ptr [ESP + 0x4c],EAX
004a39ef  JNZ 0x004a3a0c
004a39f1  MOV ECX,dword ptr [ESI + 0x18]
004a39f4  MOV EDX,dword ptr [ESI + 0x24]
004a39f7  MOV dword ptr [ESI + 0x18],EDX
004a39fa  MOV dword ptr [ESI + 0x24],ECX
004a39fd  MOV dword ptr [ESI + 0x10],EAX
004a3a00  MOV dword ptr [ESI + 0x1c],0xffffffff
004a3a07  JMP 0x004a3cac
004a3a0c  CMP EBP,-0x1
004a3a0f  JZ 0x004a3a2e
004a3a11  MOV EAX,dword ptr [ESP + 0x20]
004a3a15  CMP dword ptr [ESP + 0x1c],EAX
004a3a19  JNZ 0x004a3a2e
004a3a1b  MOV EDX,dword ptr [ESP + 0x10]
004a3a1f  TEST EDX,EDX
004a3a21  JZ 0x004a3a2e
004a3a23  TEST CL,CL
004a3a25  JNZ 0x004a3a2e
004a3a27  AND EBP,EBX
004a3a29  JMP 0x004a3ac3
004a3a2e  CMP word ptr [EDI + 0xe],0x0
004a3a33  MOV dword ptr [ESP + 0x20],0x0
004a3a3b  JBE 0x004a3abd
004a3a41  MOV EDX,dword ptr [ESP + 0x18]
004a3a45  XOR EBX,EBX
004a3a47  MOV dword ptr [ESP + 0x14],EBX
004a3a4b  ADD EDX,0x4
004a3a4e  MOV EDI,EDI
004a3a50  MOV EAX,dword ptr [ESI + 0x2c]
004a3a53  MOV EBP,dword ptr [ESP + 0x14]
004a3a57  MOV ECX,dword ptr [ESI + 0x18]
004a3a5a  ADD EAX,EBP
004a3a5c  MOVZX EBP,word ptr [EDX + -0x4]
004a3a60  MOV dword ptr [ESP + 0x2c],EBP
004a3a64  ADD ECX,EBX
004a3a66  ADD EBX,0x10
004a3a69  FILD dword ptr [ESP + 0x2c]
004a3a6d  ADD EDX,0x6
004a3a70  FMUL float ptr [EAX + 0xc]
004a3a73  FADD float ptr [EAX]
004a3a75  FSTP float ptr [ECX]
004a3a77  MOVZX EBP,word ptr [EDX + -0x8]
004a3a7b  MOV dword ptr [ESP + 0x2c],EBP
004a3a7f  FILD dword ptr [ESP + 0x2c]
004a3a83  FMUL float ptr [EAX + 0x10]
004a3a86  FADD float ptr [EAX + 0x4]
004a3a89  FSTP float ptr [ECX + 0x4]
004a3a8c  MOVZX EBP,word ptr [EDX + -0x6]
004a3a90  MOV dword ptr [ESP + 0x2c],EBP
004a3a94  FILD dword ptr [ESP + 0x2c]
004a3a98  FMUL float ptr [EAX + 0x14]
004a3a9b  FADD float ptr [EAX + 0x8]
004a3a9e  MOV EAX,dword ptr [ESP + 0x20]
004a3aa2  INC EAX
004a3aa3  FSTP float ptr [ECX + 0x8]
004a3aa6  MOV ECX,dword ptr [ESP + 0x14]
004a3aaa  ADD ECX,0x30
004a3aad  MOV dword ptr [ESP + 0x14],ECX
004a3ab1  MOVZX ECX,word ptr [EDI + 0xe]
004a3ab5  CMP EAX,ECX
004a3ab7  MOV dword ptr [ESP + 0x20],EAX
004a3abb  JL 0x004a3a50
004a3abd  MOV EDX,dword ptr [ESP + 0x10]
004a3ac1  XOR EBP,EBP
004a3ac3  CMP EBP,EDX
004a3ac5  JGE 0x004a3ba6
004a3acb  MOVZX ECX,word ptr [EDI + 0xe]
004a3acf  LEA EAX,[EBP + 0x2]
004a3ad2  IMUL EAX,ECX
004a3ad5  MOV ECX,dword ptr [ESP + 0x18]
004a3ad9  LEA ECX,[ECX + EAX*0x2]
004a3adc  ADD ECX,EAX
004a3ade  MOVZX EAX,word ptr [EDI + 0xe]
004a3ae2  SUB EDX,EBP
004a3ae4  MOV dword ptr [ESP + 0x18],ECX
004a3ae8  MOV dword ptr [ESP + 0x14],EDX
004a3aec  LEA ESP,[ESP]
004a3af0  TEST EAX,EAX
004a3af2  MOV dword ptr [ESP + 0x20],0x0
004a3afa  JLE 0x004a3b88
004a3b00  XOR EDX,EDX
004a3b02  XOR EBX,EBX
004a3b04  ADD ECX,0x2
004a3b07  MOVZX EBP,byte ptr [ECX + -0x2]
004a3b0b  MOV EAX,dword ptr [ESI + 0x2c]
004a3b0e  ADD EAX,EBX
004a3b10  MOV dword ptr [ESP + 0x2c],EBP
004a3b14  MOVZX EBP,byte ptr [ECX + -0x1]
004a3b18  FILD dword ptr [ESP + 0x2c]
004a3b1c  MOV dword ptr [ESP + 0x2c],EBP
004a3b20  MOVZX EBP,byte ptr [ECX]
004a3b23  FMUL float ptr [EAX + 0x24]
004a3b26  ADD EBX,0x30
004a3b29  FADD float ptr [EAX + 0x18]
004a3b2c  ADD ECX,0x3
004a3b2f  FILD dword ptr [ESP + 0x2c]
004a3b33  MOV dword ptr [ESP + 0x2c],EBP
004a3b37  MOV EBP,dword ptr [ESP + 0x20]
004a3b3b  FMUL float ptr [EAX + 0x28]
004a3b3e  FADD float ptr [EAX + 0x1c]
004a3b41  FILD dword ptr [ESP + 0x2c]
004a3b45  FMUL float ptr [EAX + 0x2c]
004a3b48  FADD float ptr [EAX + 0x20]
004a3b4b  MOV EAX,dword ptr [ESI + 0x18]
004a3b4e  ADD EAX,EDX
004a3b50  FSTP float ptr [ESP + 0x3c]
004a3b54  INC EBP
004a3b55  FXCH
004a3b57  MOV dword ptr [ESP + 0x20],EBP
004a3b5b  FADD float ptr [EAX]
004a3b5d  FSTP float ptr [EAX]
004a3b5f  MOV EAX,dword ptr [ESI + 0x18]
004a3b62  LEA EAX,[EDX + EAX*0x1 + 0x4]
004a3b66  FADD float ptr [EAX]
004a3b68  FSTP float ptr [EAX]
004a3b6a  MOV EAX,dword ptr [ESI + 0x18]
004a3b6d  FLD float ptr [ESP + 0x3c]
004a3b71  LEA EAX,[EDX + EAX*0x1 + 0x8]
004a3b75  FADD float ptr [EAX]
004a3b77  ADD EDX,0x10
004a3b7a  FSTP float ptr [EAX]
004a3b7c  MOVZX EAX,word ptr [EDI + 0xe]
004a3b80  CMP EBP,EAX
004a3b82  JL 0x004a3b07
004a3b84  MOV ECX,dword ptr [ESP + 0x18]
004a3b88  MOV EBX,dword ptr [ESP + 0x24]
004a3b8c  MOV EDX,dword ptr [ESP + 0x14]
004a3b90  ADD ECX,EBX
004a3b92  DEC EDX
004a3b93  MOV dword ptr [ESP + 0x18],ECX
004a3b97  MOV dword ptr [ESP + 0x14],EDX
004a3b9b  JNZ 0x004a3af0
004a3ba1  JMP 0x004a3cac
004a3ba6  JLE 0x004a3cac
004a3bac  MOVZX ECX,word ptr [EDI + 0xe]
004a3bb0  MOV EDX,dword ptr [ESP + 0x18]
004a3bb4  LEA EAX,[EBP + 0x1]
004a3bb7  IMUL EAX,ECX
004a3bba  LEA EDX,[EDX + EAX*0x2]
004a3bbd  ADD EDX,EAX
004a3bbf  MOV EAX,dword ptr [ESP + 0x10]
004a3bc3  LEA ECX,[EBP + -0x1]
004a3bc6  CMP ECX,EAX
004a3bc8  JL 0x004a3cac
004a3bce  MOV EBX,dword ptr [ESP + 0x10]
004a3bd2  MOVZX EAX,word ptr [EDI + 0xe]
004a3bd6  SUB ECX,EBX
004a3bd8  LEA EBP,[EDX + 0x2]
004a3bdb  INC ECX
004a3bdc  MOV dword ptr [ESP + 0x18],EBP
004a3be0  MOV dword ptr [ESP + 0x14],ECX
004a3be4  JMP 0x004a3bf0
004a3bf0  TEST EAX,EAX
004a3bf2  MOV dword ptr [ESP + 0x20],0x0
004a3bfa  JLE 0x004a3c8f
004a3c00  XOR EDX,EDX
004a3c02  XOR EBX,EBX
004a3c04  MOV ECX,EBP
004a3c06  MOVZX EBP,byte ptr [ECX + -0x2]
004a3c0a  MOV EAX,dword ptr [ESI + 0x2c]
004a3c0d  ADD EAX,EBX
004a3c0f  MOV dword ptr [ESP + 0x2c],EBP
004a3c13  MOVZX EBP,byte ptr [ECX + -0x1]
004a3c17  FILD dword ptr [ESP + 0x2c]
004a3c1b  MOV dword ptr [ESP + 0x2c],EBP
004a3c1f  MOVZX EBP,byte ptr [ECX]
004a3c22  FMUL float ptr [EAX + 0x24]
004a3c25  ADD EBX,0x30
004a3c28  FADD float ptr [EAX + 0x18]
004a3c2b  ADD ECX,0x3
004a3c2e  FILD dword ptr [ESP + 0x2c]
004a3c32  MOV dword ptr [ESP + 0x2c],EBP
004a3c36  MOV EBP,dword ptr [ESP + 0x20]
004a3c3a  FMUL float ptr [EAX + 0x28]
004a3c3d  FADD float ptr [EAX + 0x1c]
004a3c40  FILD dword ptr [ESP + 0x2c]
004a3c44  FMUL float ptr [EAX + 0x2c]
004a3c47  FADD float ptr [EAX + 0x20]
004a3c4a  MOV EAX,dword ptr [ESI + 0x18]
004a3c4d  ADD EAX,EDX
004a3c4f  FSTP float ptr [ESP + 0x3c]
004a3c53  INC EBP
004a3c54  FLD float ptr [EAX]
004a3c56  MOV dword ptr [ESP + 0x20],EBP
004a3c5a  FSUB ST0,ST2
004a3c5c  FSTP float ptr [EAX]
004a3c5e  MOV EAX,dword ptr [ESI + 0x18]
004a3c61  FLD float ptr [EDX + EAX*0x1 + 0x4]
004a3c65  LEA EAX,[EDX + EAX*0x1 + 0x4]
004a3c69  FSUB ST0,ST1
004a3c6b  FSTP float ptr [EAX]
004a3c6d  MOV EAX,dword ptr [ESI + 0x18]
004a3c70  LEA EAX,[EDX + EAX*0x1 + 0x8]
004a3c74  FSTP ST0
004a3c76  ADD EDX,0x10
004a3c79  FSTP ST0
004a3c7b  FLD float ptr [EAX]
004a3c7d  FSUB float ptr [ESP + 0x3c]
004a3c81  FSTP float ptr [EAX]
004a3c83  MOVZX EAX,word ptr [EDI + 0xe]
004a3c87  CMP EBP,EAX
004a3c89  JL 0x004a3c06
004a3c8f  MOV EBP,dword ptr [ESP + 0x18]
004a3c93  MOV EDX,dword ptr [ESP + 0x24]
004a3c97  MOV ECX,dword ptr [ESP + 0x14]
004a3c9b  SUB EBP,EDX
004a3c9d  DEC ECX
004a3c9e  MOV dword ptr [ESP + 0x18],EBP
004a3ca2  MOV dword ptr [ESP + 0x14],ECX
004a3ca6  JNZ 0x004a3bf0
004a3cac  MOV ECX,dword ptr [ESP + 0x4c]
004a3cb0  LEA EDX,[ECX + 0x1]
004a3cb3  MOV dword ptr [ESI + 0x10],ECX
004a3cb6  MOV dword ptr [ESP + 0x18],EDX
004a3cba  MOV EDX,dword ptr [EDI + 0x8]
004a3cbd  TEST EDX,EDX
004a3cbf  MOV dword ptr [ESP + 0x4c],0x3f800000
004a3cc7  JNZ 0x004a3cea
004a3cc9  FILD dword ptr [ESP + 0x30]
004a3ccd  FLD ST0
004a3ccf  FLD float ptr [ESP + 0x44]
004a3cd3  FUCOMPP
004a3cd5  FNSTSW AX
004a3cd7  TEST AH,0x44
004a3cda  JNP 0x004a3e3e
004a3ce0  FLD float ptr [ESP + 0x44]
004a3ce4  MOV AL,0x1
004a3ce6  FSUB ST0,ST1
004a3ce8  JMP 0x004a3d54
004a3cea  TEST ECX,ECX
004a3cec  JNZ 0x004a3d1c
004a3cee  FLD float ptr [0x00890968]
004a3cf4  FLD float ptr [ESP + 0x44]
004a3cf8  FUCOMPP
004a3cfa  FNSTSW AX
004a3cfc  TEST AH,0x44
004a3cff  JNP 0x004a3d18
004a3d01  MOVZX EDX,word ptr [EDX]
004a3d04  MOV dword ptr [ESP + 0x4c],EDX
004a3d08  MOV AL,0x1
004a3d0a  FILD dword ptr [ESP + 0x4c]
004a3d0e  FDIVR float ptr [ESP + 0x44]
004a3d12  FSTP float ptr [ESP + 0x4c]
004a3d16  JMP 0x004a3d5a
004a3d18  XOR AL,AL
004a3d1a  JMP 0x004a3d5a
004a3d1c  MOVZX EAX,word ptr [EDX + ECX*0x2 + -0x2]
004a3d21  MOV dword ptr [ESP + 0x30],EAX
004a3d25  FILD dword ptr [ESP + 0x30]
004a3d29  FLD ST0
004a3d2b  FLD float ptr [ESP + 0x44]
004a3d2f  FUCOMPP
004a3d31  FNSTSW AX
004a3d33  TEST AH,0x44
004a3d36  JNP 0x004a3e3e
004a3d3c  MOVZX EDX,word ptr [EDX + ECX*0x2]
004a3d40  FLD float ptr [ESP + 0x44]
004a3d44  FSUB ST0,ST1
004a3d46  MOV dword ptr [ESP + 0x44],EDX
004a3d4a  MOV AL,0x1
004a3d4c  FILD dword ptr [ESP + 0x44]
004a3d50  FSUB ST0,ST2
004a3d52  FDIVP
004a3d54  FSTP float ptr [ESP + 0x4c]
004a3d58  FSTP ST0
004a3d5a  TEST AL,AL
004a3d5c  MOV EDX,dword ptr [EDI + 0x4]
004a3d5f  MOV EBX,dword ptr [ESP + 0x48]
004a3d63  JZ 0x004a40b0
004a3d69  MOVZX EAX,word ptr [EDI + 0xc]
004a3d6d  DEC EAX
004a3d6e  CMP ECX,EAX
004a3d70  JGE 0x004a40b0
004a3d76  MOV ECX,dword ptr [ESP + 0x28]
004a3d7a  MOV EBP,dword ptr [ESP + 0x18]
004a3d7e  SAR EBP,CL
004a3d80  MOV CL,byte ptr [EDI + 0x10]
004a3d83  MOV EAX,0x1
004a3d88  SHL EAX,CL
004a3d8a  MOVZX ECX,word ptr [EDI + 0xe]
004a3d8e  INC EAX
004a3d8f  IMUL EAX,ECX
004a3d92  LEA EAX,[EAX + EAX*0x2 + 0x1]
004a3d96  AND EAX,0xfffffffe
004a3d99  IMUL EAX,EBP
004a3d9c  LEA ECX,[ECX + ECX*0x8]
004a3d9f  ADD EAX,EDI
004a3da1  LEA EAX,[EAX + ECX*0x4 + 0x14]
004a3da5  MOV ECX,dword ptr [ESP + 0x18]
004a3da9  CMP ECX,dword ptr [ESI + 0x1c]
004a3dac  JNZ 0x004a3e45
004a3db2  CMP word ptr [EDI + 0xe],0x0
004a3db7  MOV dword ptr [ESP + 0x44],0x0
004a3dbf  JBE 0x004a40fa
004a3dc5  XOR EAX,EAX
004a3dc7  MOV EBP,dword ptr [ESI + 0x24]
004a3dca  FLD float ptr [EAX + EBP*0x1]
004a3dcd  MOV ECX,dword ptr [ESI + 0x18]
004a3dd0  FSUB float ptr [ECX + EAX*0x1]
004a3dd3  ADD ECX,EAX
004a3dd5  ADD EDX,0x2
004a3dd8  FMUL float ptr [ESP + 0x4c]
004a3ddc  FADD float ptr [ECX]
004a3dde  MOVZX ECX,word ptr [EDX + -0x2]
004a3de2  FSTP float ptr [EBX + ECX*0x4]
004a3de5  MOV EBP,dword ptr [ESI + 0x24]
004a3de8  FLD float ptr [EAX + EBP*0x1 + 0x4]
004a3dec  MOV ECX,dword ptr [ESI + 0x18]
004a3def  FSUB float ptr [EAX + ECX*0x1 + 0x4]
004a3df3  LEA ECX,[EAX + ECX*0x1 + 0x4]
004a3df7  FMUL float ptr [ESP + 0x4c]
004a3dfb  FADD float ptr [ECX]
004a3dfd  MOVZX ECX,word ptr [EDX + -0x2]
004a3e01  FSTP float ptr [EBX + ECX*0x4 + 0x4]
004a3e05  MOV EBP,dword ptr [ESI + 0x24]
004a3e08  MOV ECX,dword ptr [ESI + 0x18]
004a3e0b  FLD float ptr [EAX + EBP*0x1 + 0x8]
004a3e0f  FSUB float ptr [EAX + ECX*0x1 + 0x8]
004a3e13  LEA ECX,[EAX + ECX*0x1 + 0x8]
004a3e17  ADD EAX,0x10
004a3e1a  FMUL float ptr [ESP + 0x4c]
004a3e1e  FADD float ptr [ECX]
004a3e20  MOVZX ECX,word ptr [EDX + -0x2]
004a3e24  FSTP float ptr [EBX + ECX*0x4 + 0x8]
004a3e28  MOV ECX,dword ptr [ESP + 0x44]
004a3e2c  MOVZX EBP,word ptr [EDI + 0xe]
004a3e30  INC ECX
004a3e31  CMP ECX,EBP
004a3e33  MOV dword ptr [ESP + 0x44],ECX
004a3e37  JL 0x004a3dc7
004a3e39  JMP 0x004a40fa
004a3e3e  XOR AL,AL
004a3e40  JMP 0x004a3d58
004a3e45  CMP EBP,dword ptr [ESP + 0x1c]
004a3e49  MOV dword ptr [ESP + 0x28],0x0
004a3e51  JZ 0x004a3f70
004a3e57  CMP word ptr [EDI + 0xe],0x0
004a3e5c  JBE 0x004a40a7
004a3e62  XOR ECX,ECX
004a3e64  ADD EAX,0x4
004a3e67  MOV dword ptr [ESP + 0x44],EAX
004a3e6b  MOV dword ptr [ESP + 0x1c],ECX
004a3e6f  NOP
004a3e70  MOV EAX,dword ptr [ESI + 0x24]
004a3e73  MOV EBP,dword ptr [ESP + 0x1c]
004a3e77  ADD EAX,ECX
004a3e79  MOV dword ptr [ESP + 0x48],EAX
004a3e7d  MOV EAX,dword ptr [ESI + 0x2c]
004a3e80  ADD EAX,EBP
004a3e82  MOV EBP,dword ptr [ESP + 0x44]
004a3e86  MOVZX EBP,word ptr [EBP + -0x4]
004a3e8a  MOV dword ptr [ESP + 0x30],EBP
004a3e8e  MOV EBP,dword ptr [ESP + 0x48]
004a3e92  ADD EDX,0x2
004a3e95  FILD dword ptr [ESP + 0x30]
004a3e99  FMUL float ptr [EAX + 0xc]
004a3e9c  FADD float ptr [EAX]
004a3e9e  FSTP float ptr [EBP]
004a3ea1  MOV EBP,dword ptr [ESP + 0x44]
004a3ea5  MOVZX EBP,word ptr [EBP + -0x2]
004a3ea9  MOV dword ptr [ESP + 0x30],EBP
004a3ead  MOV EBP,dword ptr [ESP + 0x48]
004a3eb1  FILD dword ptr [ESP + 0x30]
004a3eb5  FMUL float ptr [EAX + 0x10]
004a3eb8  FADD float ptr [EAX + 0x4]
004a3ebb  FSTP float ptr [EBP + 0x4]
004a3ebe  MOV EBP,dword ptr [ESP + 0x44]
004a3ec2  MOVZX EBP,word ptr [EBP]
004a3ec6  MOV dword ptr [ESP + 0x30],EBP
004a3eca  FILD dword ptr [ESP + 0x30]
004a3ece  FMUL float ptr [EAX + 0x14]
004a3ed1  FADD float ptr [EAX + 0x8]
004a3ed4  MOV EAX,dword ptr [ESP + 0x48]
004a3ed8  FSTP float ptr [EAX + 0x8]
004a3edb  MOV EBP,dword ptr [ESI + 0x24]
004a3ede  FLD float ptr [ECX + EBP*0x1]
004a3ee1  MOV EAX,dword ptr [ESI + 0x18]
004a3ee4  FSUB float ptr [EAX + ECX*0x1]
004a3ee7  ADD EAX,ECX
004a3ee9  FMUL float ptr [ESP + 0x4c]
004a3eed  FADD float ptr [EAX]
004a3eef  MOVZX EAX,word ptr [EDX + -0x2]
004a3ef3  FSTP float ptr [EBX + EAX*0x4]
004a3ef6  MOV EBP,dword ptr [ESI + 0x24]
004a3ef9  FLD float ptr [ECX + EBP*0x1 + 0x4]
004a3efd  MOV EAX,dword ptr [ESI + 0x18]
004a3f00  FSUB float ptr [ECX + EAX*0x1 + 0x4]
004a3f04  LEA EAX,[ECX + EAX*0x1 + 0x4]
004a3f08  FMUL float ptr [ESP + 0x4c]
004a3f0c  FADD float ptr [EAX]
004a3f0e  MOVZX EAX,word ptr [EDX + -0x2]
004a3f12  FSTP float ptr [EBX + EAX*0x4 + 0x4]
004a3f16  MOV EBP,dword ptr [ESI + 0x24]
004a3f19  FLD float ptr [ECX + EBP*0x1 + 0x8]
004a3f1d  MOV EAX,dword ptr [ESI + 0x18]
004a3f20  FSUB float ptr [ECX + EAX*0x1 + 0x8]
004a3f24  MOV EBP,dword ptr [ESP + 0x1c]
004a3f28  LEA EAX,[ECX + EAX*0x1 + 0x8]
004a3f2c  ADD EBP,0x30
004a3f2f  FMUL float ptr [ESP + 0x4c]
004a3f33  MOV dword ptr [ESP + 0x1c],EBP
004a3f37  ADD ECX,0x10
004a3f3a  FADD float ptr [EAX]
004a3f3c  MOVZX EAX,word ptr [EDX + -0x2]
004a3f40  FSTP float ptr [EBX + EAX*0x4 + 0x8]
004a3f44  MOV EAX,dword ptr [ESP + 0x44]
004a3f48  MOVZX EBP,word ptr [EDI + 0xe]
004a3f4c  ADD EAX,0x6
004a3f4f  MOV dword ptr [ESP + 0x44],EAX
004a3f53  MOV EAX,dword ptr [ESP + 0x28]
004a3f57  INC EAX
004a3f58  CMP EAX,EBP
004a3f5a  MOV dword ptr [ESP + 0x28],EAX
004a3f5e  JL 0x004a3e70
004a3f64  MOV EDX,dword ptr [ESP + 0x18]
004a3f68  MOV dword ptr [ESI + 0x1c],EDX
004a3f6b  JMP 0x004a40fa
004a3f70  MOVZX EBP,word ptr [EDI + 0xe]
004a3f74  MOV ECX,dword ptr [ESP + 0x10]
004a3f78  ADD ECX,0x2
004a3f7b  IMUL ECX,EBP
004a3f7e  LEA EBP,[EAX + ECX*0x2]
004a3f81  ADD EBP,ECX
004a3f83  CMP word ptr [EDI + 0xe],0x0
004a3f88  JBE 0x004a40a7
004a3f8e  XOR EAX,EAX
004a3f90  ADD EBP,0x2
004a3f93  MOV dword ptr [ESP + 0x48],EAX
004a3f97  MOV dword ptr [ESP + 0x44],EBP
004a3f9b  JMP 0x004a3fa0
004a3fa0  MOV ECX,dword ptr [ESI + 0x2c]
004a3fa3  ADD ECX,dword ptr [ESP + 0x48]
004a3fa7  MOV EBP,dword ptr [ESP + 0x44]
004a3fab  MOVZX EBP,byte ptr [EBP + -0x2]
004a3faf  MOV dword ptr [ESP + 0x30],EBP
004a3fb3  MOV EBP,dword ptr [ESP + 0x44]
004a3fb7  MOVZX EBP,byte ptr [EBP + -0x1]
004a3fbb  FILD dword ptr [ESP + 0x30]
004a3fbf  MOV dword ptr [ESP + 0x30],EBP
004a3fc3  FMUL float ptr [ECX + 0x24]
004a3fc6  MOV EBP,dword ptr [ESP + 0x44]
004a3fca  MOVZX EBP,byte ptr [EBP]
004a3fce  ADD EDX,0x2
004a3fd1  FADD float ptr [ECX + 0x18]
004a3fd4  FILD dword ptr [ESP + 0x30]
004a3fd8  MOV dword ptr [ESP + 0x30],EBP
004a3fdc  FMUL float ptr [ECX + 0x28]
004a3fdf  FADD float ptr [ECX + 0x1c]
004a3fe2  FILD dword ptr [ESP + 0x30]
004a3fe6  FMUL float ptr [ECX + 0x2c]
004a3fe9  FADD float ptr [ECX + 0x20]
004a3fec  MOV ECX,dword ptr [ESI + 0x18]
004a3fef  FSTP float ptr [ESP + 0x3c]
004a3ff3  FXCH
004a3ff5  FADD float ptr [EAX + ECX*0x1]
004a3ff8  MOV ECX,dword ptr [ESI + 0x24]
004a3ffb  FSTP float ptr [EAX + ECX*0x1]
004a3ffe  MOV ECX,dword ptr [ESI + 0x18]
004a4001  FADD float ptr [EAX + ECX*0x1 + 0x4]
004a4005  MOV ECX,dword ptr [ESI + 0x24]
004a4008  FSTP float ptr [ECX + EAX*0x1 + 0x4]
004a400c  MOV ECX,dword ptr [ESI + 0x18]
004a400f  FLD float ptr [ESP + 0x3c]
004a4013  FADD float ptr [EAX + ECX*0x1 + 0x8]
004a4017  MOV ECX,dword ptr [ESI + 0x24]
004a401a  FSTP float ptr [ECX + EAX*0x1 + 0x8]
004a401e  MOV EBP,dword ptr [ESI + 0x24]
004a4021  FLD float ptr [EAX + EBP*0x1]
004a4024  MOV ECX,dword ptr [ESI + 0x18]
004a4027  FSUB float ptr [ECX + EAX*0x1]
004a402a  ADD ECX,EAX
004a402c  FMUL float ptr [ESP + 0x4c]
004a4030  FADD float ptr [ECX]
004a4032  MOVZX ECX,word ptr [EDX + -0x2]
004a4036  FSTP float ptr [EBX + ECX*0x4]
004a4039  MOV EBP,dword ptr [ESI + 0x24]
004a403c  FLD float ptr [EAX + EBP*0x1 + 0x4]
004a4040  MOV ECX,dword ptr [ESI + 0x18]
004a4043  FSUB float ptr [EAX + ECX*0x1 + 0x4]
004a4047  LEA ECX,[EAX + ECX*0x1 + 0x4]
004a404b  FMUL float ptr [ESP + 0x4c]
004a404f  FADD float ptr [ECX]
004a4051  MOVZX ECX,word ptr [EDX + -0x2]
004a4055  FSTP float ptr [EBX + ECX*0x4 + 0x4]
004a4059  MOV EBP,dword ptr [ESI + 0x24]
004a405c  FLD float ptr [EAX + EBP*0x1 + 0x8]
004a4060  MOV ECX,dword ptr [ESI + 0x18]
004a4063  FSUB float ptr [EAX + ECX*0x1 + 0x8]
004a4067  MOV EBP,dword ptr [ESP + 0x48]
004a406b  LEA ECX,[EAX + ECX*0x1 + 0x8]
004a406f  ADD EBP,0x30
004a4072  FMUL float ptr [ESP + 0x4c]
004a4076  MOV dword ptr [ESP + 0x48],EBP
004a407a  MOV EBP,dword ptr [ESP + 0x44]
004a407e  FADD float ptr [ECX]
004a4080  MOVZX ECX,word ptr [EDX + -0x2]
004a4084  ADD EBP,0x3
004a4087  MOV dword ptr [ESP + 0x44],EBP
004a408b  FSTP float ptr [EBX + ECX*0x4 + 0x8]
004a408f  MOV ECX,dword ptr [ESP + 0x28]
004a4093  MOVZX EBP,word ptr [EDI + 0xe]
004a4097  INC ECX
004a4098  MOV dword ptr [ESP + 0x28],ECX
004a409c  ADD EAX,0x10
004a409f  CMP ECX,EBP
004a40a1  JL 0x004a3fa0
004a40a7  MOV EDX,dword ptr [ESP + 0x18]
004a40ab  MOV dword ptr [ESI + 0x1c],EDX
004a40ae  JMP 0x004a40fa
004a40b0  XOR EAX,EAX
004a40b2  CMP word ptr [EDI + 0xe],AX
004a40b6  MOV dword ptr [ESP + 0x48],EAX
004a40ba  JBE 0x004a40fa
004a40bc  MOV dword ptr [ESP + 0x44],EAX
004a40c0  MOVZX EAX,word ptr [EDX + EAX*0x2]
004a40c4  MOV ECX,dword ptr [ESI + 0x18]
004a40c7  ADD ECX,dword ptr [ESP + 0x44]
004a40cb  MOV EBP,dword ptr [ECX]
004a40cd  LEA EAX,[EBX + EAX*0x4]
004a40d0  MOV dword ptr [EAX],EBP
004a40d2  MOV EBP,dword ptr [ECX + 0x4]
004a40d5  MOV dword ptr [EAX + 0x4],EBP
004a40d8  MOV ECX,dword ptr [ECX + 0x8]
004a40db  MOV dword ptr [EAX + 0x8],ECX
004a40de  MOV ECX,dword ptr [ESP + 0x44]
004a40e2  MOV EAX,dword ptr [ESP + 0x48]
004a40e6  ADD ECX,0x10
004a40e9  MOV dword ptr [ESP + 0x44],ECX
004a40ed  MOVZX ECX,word ptr [EDI + 0xe]
004a40f1  INC EAX
004a40f2  CMP EAX,ECX
004a40f4  MOV dword ptr [ESP + 0x48],EAX
004a40f8  JL 0x004a40c0
004a40fa  MOV AL,byte ptr [EDI + 0x11]
004a40fd  TEST AL,AL
004a40ff  JBE 0x004a420d
004a4105  MOVZX EDX,byte ptr [EDI + 0x10]
004a4109  MOVZX ESI,word ptr [EDI + 0xe]
004a410d  MOVZX EBP,word ptr [EDI + 0xc]
004a4111  MOV ECX,EDX
004a4113  MOV EAX,0x1
004a4118  SHL EAX,CL
004a411a  SHR EBP,CL
004a411c  LEA ECX,[ESI + ESI*0x8]
004a411f  INC EAX
004a4120  IMUL EAX,ESI
004a4123  LEA EAX,[EAX + EAX*0x2 + 0x1]
004a4127  AND EAX,0xfffffffe
004a412a  IMUL EAX,EBP
004a412d  ADD EAX,EDI
004a412f  LEA ESI,[EAX + ECX*0x4 + 0x14]
004a4133  MOV ECX,0x1f
004a4138  SUB ECX,EDX
004a413a  MOV EAX,0x7fffffff
004a413f  SHR EAX,CL
004a4141  MOVZX ECX,word ptr [EDI + 0xc]
004a4145  AND EAX,ECX
004a4147  JLE 0x004a415b
004a4149  MOVZX EDX,word ptr [EDI + 0xe]
004a414d  INC EAX
004a414e  IMUL EAX,EDX
004a4151  LEA ECX,[ESI + EAX*0x2]
004a4154  LEA ESI,[EAX + ECX*0x1 + 0x1]
004a4158  AND ESI,0xfffffffe
004a415b  CMP word ptr [EDI + 0xe],0x0
004a4160  JNZ 0x004a4166
004a4162  INC ESI
004a4163  AND ESI,0xfffffffe
004a4166  MOVZX EBP,word ptr [EDI + 0xe]
004a416a  MOVZX EDX,word ptr [EDI + 0xc]
004a416e  MOV dword ptr [ESP + 0x44],ESI
004a4172  MOVZX ESI,byte ptr [EDI + 0x10]
004a4176  MOV ECX,ESI
004a4178  MOV EAX,0x1
004a417d  SHL EAX,CL
004a417f  SHR EDX,CL
004a4181  LEA ECX,[EBP + EBP*0x8]
004a4185  INC EAX
004a4186  IMUL EAX,EBP
004a4189  LEA EAX,[EAX + EAX*0x2 + 0x1]
004a418d  AND EAX,0xfffffffe
004a4190  IMUL EAX,EDX
004a4193  ADD EAX,EDI
004a4195  LEA EAX,[EAX + ECX*0x4 + 0x14]
004a4199  MOV ECX,0x1f
004a419e  SUB ECX,ESI
004a41a0  MOV ESI,0x7fffffff
004a41a5  SHR ESI,CL
004a41a7  MOVZX ECX,word ptr [EDI + 0xc]
004a41ab  AND ESI,ECX
004a41ad  JLE 0x004a41c1
004a41af  MOVZX EDX,word ptr [EDI + 0xe]
004a41b3  INC ESI
004a41b4  IMUL ESI,EDX
004a41b7  LEA EAX,[EAX + ESI*0x2]
004a41ba  LEA EAX,[ESI + EAX*0x1 + 0x1]
004a41be  AND EAX,0xfffffffe
004a41c1  MOV CX,word ptr [EDI + 0xe]
004a41c5  TEST CX,CX
004a41c8  JNZ 0x004a41ce
004a41ca  INC EAX
004a41cb  AND EAX,0xfffffffe
004a41ce  MOVZX ECX,byte ptr [EDI + 0x11]
004a41d2  LEA EAX,[EAX + ECX*0x2 + 0x3]
004a41d6  AND EAX,0xfffffffc
004a41d9  XOR EDX,EDX
004a41db  TEST ECX,ECX
004a41dd  JLE 0x004a420d
004a41df  MOV ESI,dword ptr [ESP + 0x44]
004a41e3  MOVZX ECX,word ptr [ESI]
004a41e6  MOV EBP,dword ptr [EAX]
004a41e8  MOV dword ptr [EBX + ECX*0x4],EBP
004a41eb  MOV EBP,dword ptr [EAX + 0x4]
004a41ee  ADD EAX,0x4
004a41f1  ADD ESI,0x2
004a41f4  INC ECX
004a41f5  ADD EAX,0x4
004a41f8  MOV dword ptr [EBX + ECX*0x4],EBP
004a41fb  MOV EBP,dword ptr [EAX]
004a41fd  MOV dword ptr [EBX + ECX*0x4 + 0x4],EBP
004a4201  MOVZX ECX,byte ptr [EDI + 0x11]
004a4205  ADD EAX,0x4
004a4208  INC EDX
004a4209  CMP EDX,ECX
004a420b  JL 0x004a41e3
004a420d  POP EDI
004a420e  POP EBX
004a420f  POP ESI
004a4210  MOV AL,0x1
004a4212  POP EBP
004a4213  ADD ESP,0x30
004a4216  RET 0xc
