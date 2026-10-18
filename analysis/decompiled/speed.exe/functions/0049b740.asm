0049b740  MOV EAX,dword ptr [ESP + 0xc]
0049b744  SUB ESP,0x1c
0049b747  TEST EAX,EAX
0049b749  PUSH EBP
0049b74a  MOV EBP,dword ptr [ESP + 0x34]
0049b74e  MOV word ptr [ECX + 0x10],BP
0049b752  JNZ 0x0049bd42
0049b758  PUSH EBX
0049b759  PUSH ESI
0049b75a  PUSH EDI
0049b75b  MOV EDI,dword ptr [ECX + 0xc]
0049b75e  MOVZX EBX,byte ptr [EDI + 0x12]
0049b762  MOV EDX,dword ptr [EDI + 0xc]
0049b765  MOV EAX,EBX
0049b767  SHL EAX,0x5
0049b76a  LEA ESI,[EAX + EDI*0x1 + 0x18]
0049b76e  MOV EAX,EBX
0049b770  IMUL EAX,EBP
0049b773  LEA ECX,[EAX + EAX*0x2]
0049b776  LEA EAX,[ESI + ECX*0x2]
0049b779  MOV CL,byte ptr [ESP + 0x3c]
0049b77d  TEST CL,CL
0049b77f  MOV dword ptr [ESP + 0x40],EDI
0049b783  MOV dword ptr [ESP + 0x30],EBX
0049b787  MOV dword ptr [ESP + 0x10],ESI
0049b78b  MOV dword ptr [ESP + 0x38],EDX
0049b78f  JZ 0x0049bb38
0049b795  LEA ECX,[EBP + 0x1]
0049b798  MOVZX EBP,byte ptr [EDI + 0x12]
0049b79c  IMUL ECX,EBP
0049b79f  LEA ECX,[ECX + ECX*0x2]
0049b7a2  XOR EBP,EBP
0049b7a4  CMP EBX,0x4
0049b7a7  LEA ESI,[ESI + ECX*0x2]
0049b7aa  MOV ECX,dword ptr [ESP + 0x34]
0049b7ae  JL 0x0049ba65
0049b7b4  LEA EDI,[EDX + 0x4]
0049b7b7  MOV EDX,dword ptr [ESP + 0x40]
0049b7bb  ADD EBX,-0x4
0049b7be  SHR EBX,0x2
0049b7c1  ADD EDX,0x4c
0049b7c4  INC EBX
0049b7c5  MOV dword ptr [ESP + 0x34],EBX
0049b7c9  LEA EBP,[EBX*0x4 + 0x0]
0049b7d0  MOVSX EBX,word ptr [EAX]
0049b7d3  MOV dword ptr [ESP + 0x3c],EBX
0049b7d7  MOVSX EBX,word ptr [EAX + 0x2]
0049b7db  FILD dword ptr [ESP + 0x3c]
0049b7df  MOV dword ptr [ESP + 0x3c],EBX
0049b7e3  MOVSX EBX,word ptr [EAX + 0x4]
0049b7e7  FMUL float ptr [EDX + -0x24]
0049b7ea  FILD dword ptr [ESP + 0x3c]
0049b7ee  MOV dword ptr [ESP + 0x3c],EBX
0049b7f2  MOVSX EBX,word ptr [ESI]
0049b7f5  FMUL float ptr [EDX + -0x20]
0049b7f8  FILD dword ptr [ESP + 0x3c]
0049b7fc  MOV dword ptr [ESP + 0x3c],EBX
0049b800  MOVSX EBX,word ptr [ESI + 0x2]
0049b804  FMUL float ptr [EDX + -0x1c]
0049b807  FSTP float ptr [ESP + 0x28]
0049b80b  FILD dword ptr [ESP + 0x3c]
0049b80f  MOV dword ptr [ESP + 0x3c],EBX
0049b813  MOVSX EBX,word ptr [ESI + 0x4]
0049b817  FMUL float ptr [EDX + -0x24]
0049b81a  FILD dword ptr [ESP + 0x3c]
0049b81e  MOV dword ptr [ESP + 0x3c],EBX
0049b822  MOVZX EBX,word ptr [EDI + -0x4]
0049b826  FMUL float ptr [EDX + -0x20]
0049b829  FSTP float ptr [ESP + 0x18]
0049b82d  FILD dword ptr [ESP + 0x3c]
0049b831  FMUL float ptr [EDX + -0x1c]
0049b834  FSTP float ptr [ESP + 0x1c]
0049b838  FSUB ST0,ST2
0049b83a  FMUL float ptr [ESP + 0x44]
0049b83e  FADD ST0,ST2
0049b840  FSTP float ptr [ECX + EBX*0x4]
0049b843  FLD float ptr [ESP + 0x18]
0049b847  FSUB ST0,ST1
0049b849  FMUL float ptr [ESP + 0x44]
0049b84d  FADD ST0,ST1
0049b84f  FSTP float ptr [ECX + EBX*0x4 + 0x4]
0049b853  FSTP ST0
0049b855  FSTP ST0
0049b857  FLD float ptr [ESP + 0x1c]
0049b85b  FSUB float ptr [ESP + 0x28]
0049b85f  FMUL float ptr [ESP + 0x44]
0049b863  FADD float ptr [ESP + 0x28]
0049b867  FSTP float ptr [ECX + EBX*0x4 + 0x8]
0049b86b  MOVSX EBX,word ptr [EAX + 0x6]
0049b86f  MOV dword ptr [ESP + 0x3c],EBX
0049b873  MOVSX EBX,word ptr [EAX + 0x8]
0049b877  FILD dword ptr [ESP + 0x3c]
0049b87b  MOV dword ptr [ESP + 0x3c],EBX
0049b87f  MOVSX EBX,word ptr [EAX + 0xa]
0049b883  FMUL float ptr [EDX + -0x4]
0049b886  FILD dword ptr [ESP + 0x3c]
0049b88a  MOV dword ptr [ESP + 0x3c],EBX
0049b88e  MOVSX EBX,word ptr [ESI + 0x6]
0049b892  FMUL float ptr [EDX]
0049b894  FILD dword ptr [ESP + 0x3c]
0049b898  MOV dword ptr [ESP + 0x3c],EBX
0049b89c  MOVSX EBX,word ptr [ESI + 0x8]
0049b8a0  FMUL float ptr [EDX + 0x4]
0049b8a3  FSTP float ptr [ESP + 0x28]
0049b8a7  FILD dword ptr [ESP + 0x3c]
0049b8ab  MOV dword ptr [ESP + 0x3c],EBX
0049b8af  MOVSX EBX,word ptr [ESI + 0xa]
0049b8b3  FMUL float ptr [EDX + -0x4]
0049b8b6  FILD dword ptr [ESP + 0x3c]
0049b8ba  MOV dword ptr [ESP + 0x3c],EBX
0049b8be  MOVZX EBX,word ptr [EDI + -0x2]
0049b8c2  FMUL float ptr [EDX]
0049b8c4  FSTP float ptr [ESP + 0x18]
0049b8c8  FILD dword ptr [ESP + 0x3c]
0049b8cc  FMUL float ptr [EDX + 0x4]
0049b8cf  FSTP float ptr [ESP + 0x1c]
0049b8d3  FSUB ST0,ST2
0049b8d5  FMUL float ptr [ESP + 0x44]
0049b8d9  FADD ST0,ST2
0049b8db  FSTP float ptr [ECX + EBX*0x4]
0049b8de  FLD float ptr [ESP + 0x18]
0049b8e2  FSUB ST0,ST1
0049b8e4  FMUL float ptr [ESP + 0x44]
0049b8e8  FADD ST0,ST1
0049b8ea  FSTP float ptr [ECX + EBX*0x4 + 0x4]
0049b8ee  FSTP ST0
0049b8f0  FSTP ST0
0049b8f2  FLD float ptr [ESP + 0x1c]
0049b8f6  FSUB float ptr [ESP + 0x28]
0049b8fa  FMUL float ptr [ESP + 0x44]
0049b8fe  FADD float ptr [ESP + 0x28]
0049b902  FSTP float ptr [ECX + EBX*0x4 + 0x8]
0049b906  MOVSX EBX,word ptr [EAX + 0xc]
0049b90a  MOV dword ptr [ESP + 0x3c],EBX
0049b90e  MOVSX EBX,word ptr [EAX + 0xe]
0049b912  FILD dword ptr [ESP + 0x3c]
0049b916  MOV dword ptr [ESP + 0x3c],EBX
0049b91a  MOVSX EBX,word ptr [EAX + 0x10]
0049b91e  FMUL float ptr [EDX + 0x1c]
0049b921  FILD dword ptr [ESP + 0x3c]
0049b925  MOV dword ptr [ESP + 0x3c],EBX
0049b929  MOVSX EBX,word ptr [ESI + 0xc]
0049b92d  FMUL float ptr [EDX + 0x20]
0049b930  FILD dword ptr [ESP + 0x3c]
0049b934  MOV dword ptr [ESP + 0x3c],EBX
0049b938  MOVSX EBX,word ptr [ESI + 0xe]
0049b93c  FMUL float ptr [EDX + 0x24]
0049b93f  FSTP float ptr [ESP + 0x28]
0049b943  FILD dword ptr [ESP + 0x3c]
0049b947  MOV dword ptr [ESP + 0x3c],EBX
0049b94b  MOVSX EBX,word ptr [ESI + 0x10]
0049b94f  FMUL float ptr [EDX + 0x1c]
0049b952  FILD dword ptr [ESP + 0x3c]
0049b956  MOV dword ptr [ESP + 0x3c],EBX
0049b95a  MOVZX EBX,word ptr [EDI]
0049b95d  FMUL float ptr [EDX + 0x20]
0049b960  FSTP float ptr [ESP + 0x18]
0049b964  FILD dword ptr [ESP + 0x3c]
0049b968  FMUL float ptr [EDX + 0x24]
0049b96b  FSTP float ptr [ESP + 0x1c]
0049b96f  FSUB ST0,ST2
0049b971  FMUL float ptr [ESP + 0x44]
0049b975  FADD ST0,ST2
0049b977  FSTP float ptr [ECX + EBX*0x4]
0049b97a  FLD float ptr [ESP + 0x18]
0049b97e  FSUB ST0,ST1
0049b980  FMUL float ptr [ESP + 0x44]
0049b984  FADD ST0,ST1
0049b986  FSTP float ptr [ECX + EBX*0x4 + 0x4]
0049b98a  FSTP ST0
0049b98c  FSTP ST0
0049b98e  FLD float ptr [ESP + 0x1c]
0049b992  FSUB float ptr [ESP + 0x28]
0049b996  FMUL float ptr [ESP + 0x44]
0049b99a  FADD float ptr [ESP + 0x28]
0049b99e  FSTP float ptr [ECX + EBX*0x4 + 0x8]
0049b9a2  MOVSX EBX,word ptr [EAX + 0x12]
0049b9a6  MOV dword ptr [ESP + 0x3c],EBX
0049b9aa  MOVSX EBX,word ptr [EAX + 0x14]
0049b9ae  FILD dword ptr [ESP + 0x3c]
0049b9b2  MOV dword ptr [ESP + 0x3c],EBX
0049b9b6  MOVSX EBX,word ptr [EAX + 0x16]
0049b9ba  FMUL float ptr [EDX + 0x3c]
0049b9bd  FILD dword ptr [ESP + 0x3c]
0049b9c1  MOV dword ptr [ESP + 0x3c],EBX
0049b9c5  MOVSX EBX,word ptr [ESI + 0x12]
0049b9c9  FMUL float ptr [EDX + 0x40]
0049b9cc  FILD dword ptr [ESP + 0x3c]
0049b9d0  MOV dword ptr [ESP + 0x3c],EBX
0049b9d4  MOVSX EBX,word ptr [ESI + 0x14]
0049b9d8  FMUL float ptr [EDX + 0x44]
0049b9db  FSTP float ptr [ESP + 0x28]
0049b9df  FILD dword ptr [ESP + 0x3c]
0049b9e3  MOV dword ptr [ESP + 0x3c],EBX
0049b9e7  FMUL float ptr [EDX + 0x3c]
0049b9ea  FILD dword ptr [ESP + 0x3c]
0049b9ee  FMUL float ptr [EDX + 0x40]
0049b9f1  MOVSX EBX,word ptr [ESI + 0x16]
0049b9f5  FSTP float ptr [ESP + 0x18]
0049b9f9  MOV dword ptr [ESP + 0x3c],EBX
0049b9fd  MOVZX EBX,word ptr [EDI + 0x2]
0049ba01  FILD dword ptr [ESP + 0x3c]
0049ba05  ADD EAX,0x18
0049ba08  ADD ESI,0x18
0049ba0b  FMUL float ptr [EDX + 0x44]
0049ba0e  ADD EDX,0x80
0049ba14  ADD EDI,0x8
0049ba17  FSTP float ptr [ESP + 0x1c]
0049ba1b  FSUB ST0,ST2
0049ba1d  FMUL float ptr [ESP + 0x44]
0049ba21  FADD ST0,ST2
0049ba23  FSTP float ptr [ECX + EBX*0x4]
0049ba26  FLD float ptr [ESP + 0x18]
0049ba2a  FSUB ST0,ST1
0049ba2c  FMUL float ptr [ESP + 0x44]
0049ba30  FADD ST0,ST1
0049ba32  FSTP float ptr [ECX + EBX*0x4 + 0x4]
0049ba36  FSTP ST0
0049ba38  FSTP ST0
0049ba3a  FLD float ptr [ESP + 0x1c]
0049ba3e  FSUB float ptr [ESP + 0x28]
0049ba42  FMUL float ptr [ESP + 0x44]
0049ba46  FADD float ptr [ESP + 0x28]
0049ba4a  FSTP float ptr [ECX + EBX*0x4 + 0x8]
0049ba4e  MOV EBX,dword ptr [ESP + 0x34]
0049ba52  DEC EBX
0049ba53  MOV dword ptr [ESP + 0x34],EBX
0049ba57  JNZ 0x0049b7d0
0049ba5d  MOV EBX,dword ptr [ESP + 0x30]
0049ba61  MOV EDI,dword ptr [ESP + 0x40]
0049ba65  CMP EBP,EBX
0049ba67  JGE 0x0049bce3
0049ba6d  MOV EDX,EBP
0049ba6f  SHL EDX,0x5
0049ba72  LEA EDX,[EDX + EDI*0x1 + 0x2c]
0049ba76  JMP 0x0049ba80
0049ba80  MOVSX EDI,word ptr [EAX]
0049ba83  MOV dword ptr [ESP + 0x34],EDI
0049ba87  MOVSX EDI,word ptr [EAX + 0x2]
0049ba8b  FILD dword ptr [ESP + 0x34]
0049ba8f  MOV dword ptr [ESP + 0x34],EDI
0049ba93  MOVSX EDI,word ptr [EAX + 0x4]
0049ba97  FMUL float ptr [EDX + -0x4]
0049ba9a  FILD dword ptr [ESP + 0x34]
0049ba9e  MOV dword ptr [ESP + 0x34],EDI
0049baa2  MOVSX EDI,word ptr [ESI]
0049baa5  FMUL float ptr [EDX]
0049baa7  FILD dword ptr [ESP + 0x34]
0049baab  MOV dword ptr [ESP + 0x34],EDI
0049baaf  MOVSX EDI,word ptr [ESI + 0x2]
0049bab3  FMUL float ptr [EDX + 0x4]
0049bab6  ADD EAX,0x6
0049bab9  FSTP float ptr [ESP + 0x28]
0049babd  ADD ESI,0x6
0049bac0  FILD dword ptr [ESP + 0x34]
0049bac4  MOV dword ptr [ESP + 0x34],EDI
0049bac8  MOVSX EDI,word ptr [ESI + -0x2]
0049bacc  FMUL float ptr [EDX + -0x4]
0049bacf  FILD dword ptr [ESP + 0x34]
0049bad3  MOV dword ptr [ESP + 0x34],EDI
0049bad7  MOV EDI,dword ptr [ESP + 0x38]
0049badb  MOVZX EDI,word ptr [EDI + EBP*0x2]
0049badf  FMUL float ptr [EDX]
0049bae1  INC EBP
0049bae2  FSTP float ptr [ESP + 0x18]
0049bae6  ADD EDX,0x20
0049bae9  CMP EBP,EBX
0049baeb  FILD dword ptr [ESP + 0x34]
0049baef  FMUL float ptr [EDX + -0x1c]
0049baf2  FSTP float ptr [ESP + 0x1c]
0049baf6  FSUB ST0,ST2
0049baf8  FMUL float ptr [ESP + 0x44]
0049bafc  FADD ST0,ST2
0049bafe  FSTP float ptr [ECX + EDI*0x4]
0049bb01  FLD float ptr [ESP + 0x18]
0049bb05  FSUB ST0,ST1
0049bb07  FMUL float ptr [ESP + 0x44]
0049bb0b  FADD ST0,ST1
0049bb0d  FSTP float ptr [ECX + EDI*0x4 + 0x4]
0049bb11  FSTP ST0
0049bb13  FSTP ST0
0049bb15  FLD float ptr [ESP + 0x1c]
0049bb19  FSUB float ptr [ESP + 0x28]
0049bb1d  FMUL float ptr [ESP + 0x44]
0049bb21  FADD float ptr [ESP + 0x28]
0049bb25  FSTP float ptr [ECX + EDI*0x4 + 0x8]
0049bb29  JL 0x0049ba80
0049bb2f  MOV EDI,dword ptr [ESP + 0x40]
0049bb33  JMP 0x0049bce3
0049bb38  MOV ECX,dword ptr [ESP + 0x34]
0049bb3c  XOR ESI,ESI
0049bb3e  CMP EBX,0x4
0049bb41  MOV dword ptr [ESP + 0x44],ESI
0049bb45  JL 0x0049bc7b
0049bb4b  LEA ESI,[EDX + 0x4]
0049bb4e  LEA EDX,[EDI + 0x30]
0049bb51  LEA EDI,[EBX + -0x4]
0049bb54  SHR EDI,0x2
0049bb57  INC EDI
0049bb58  MOV dword ptr [ESP + 0x34],EDI
0049bb5c  SHL EDI,0x2
0049bb5f  MOV dword ptr [ESP + 0x44],EDI
0049bb63  MOVSX EBP,word ptr [EAX]
0049bb66  MOVZX EDI,word ptr [ESI + -0x4]
0049bb6a  MOV dword ptr [ESP + 0x3c],EBP
0049bb6e  ADD EAX,0x18
0049bb71  ADD ESI,0x8
0049bb74  FILD dword ptr [ESP + 0x3c]
0049bb78  ADD EDX,0x80
0049bb7e  FMUL float ptr [EDX + 0xffffff78]
0049bb84  FSTP float ptr [ECX + EDI*0x4]
0049bb87  MOVSX EBP,word ptr [EAX + -0x16]
0049bb8b  MOV dword ptr [ESP + 0x3c],EBP
0049bb8f  FILD dword ptr [ESP + 0x3c]
0049bb93  FMUL float ptr [EDX + 0xffffff7c]
0049bb99  FSTP float ptr [ECX + EDI*0x4 + 0x4]
0049bb9d  MOVSX EBP,word ptr [EAX + -0x14]
0049bba1  MOV dword ptr [ESP + 0x3c],EBP
0049bba5  FILD dword ptr [ESP + 0x3c]
0049bba9  FMUL float ptr [EDX + -0x80]
0049bbac  FSTP float ptr [ECX + EDI*0x4 + 0x8]
0049bbb0  MOVSX EBP,word ptr [EAX + -0x12]
0049bbb4  MOVZX EDI,word ptr [ESI + -0xa]
0049bbb8  MOV dword ptr [ESP + 0x3c],EBP
0049bbbc  FILD dword ptr [ESP + 0x3c]
0049bbc0  FMUL float ptr [EDX + -0x68]
0049bbc3  FSTP float ptr [ECX + EDI*0x4]
0049bbc6  MOVSX EBP,word ptr [EAX + -0x10]
0049bbca  MOV dword ptr [ESP + 0x3c],EBP
0049bbce  FILD dword ptr [ESP + 0x3c]
0049bbd2  FMUL float ptr [EDX + -0x64]
0049bbd5  FSTP float ptr [ECX + EDI*0x4 + 0x4]
0049bbd9  MOVSX EBP,word ptr [EAX + -0xe]
0049bbdd  MOV dword ptr [ESP + 0x3c],EBP
0049bbe1  FILD dword ptr [ESP + 0x3c]
0049bbe5  FMUL float ptr [EDX + -0x60]
0049bbe8  FSTP float ptr [ECX + EDI*0x4 + 0x8]
0049bbec  MOVSX EBP,word ptr [EAX + -0xc]
0049bbf0  MOVZX EDI,word ptr [ESI + -0x8]
0049bbf4  MOV dword ptr [ESP + 0x3c],EBP
0049bbf8  FILD dword ptr [ESP + 0x3c]
0049bbfc  FMUL float ptr [EDX + -0x48]
0049bbff  FSTP float ptr [ECX + EDI*0x4]
0049bc02  MOVSX EBP,word ptr [EAX + -0xa]
0049bc06  MOV dword ptr [ESP + 0x3c],EBP
0049bc0a  FILD dword ptr [ESP + 0x3c]
0049bc0e  FMUL float ptr [EDX + -0x44]
0049bc11  FSTP float ptr [ECX + EDI*0x4 + 0x4]
0049bc15  MOVSX EBP,word ptr [EAX + -0x8]
0049bc19  MOV dword ptr [ESP + 0x3c],EBP
0049bc1d  FILD dword ptr [ESP + 0x3c]
0049bc21  FMUL float ptr [EDX + -0x40]
0049bc24  FSTP float ptr [ECX + EDI*0x4 + 0x8]
0049bc28  MOVSX EBP,word ptr [EAX + -0x6]
0049bc2c  MOVZX EDI,word ptr [ESI + -0x6]
0049bc30  MOV dword ptr [ESP + 0x3c],EBP
0049bc34  FILD dword ptr [ESP + 0x3c]
0049bc38  FMUL float ptr [EDX + -0x28]
0049bc3b  FSTP float ptr [ECX + EDI*0x4]
0049bc3e  MOVSX EBP,word ptr [EAX + -0x4]
0049bc42  MOV dword ptr [ESP + 0x3c],EBP
0049bc46  FILD dword ptr [ESP + 0x3c]
0049bc4a  FMUL float ptr [EDX + -0x24]
0049bc4d  FSTP float ptr [ECX + EDI*0x4 + 0x4]
0049bc51  MOVSX EBP,word ptr [EAX + -0x2]
0049bc55  MOV dword ptr [ESP + 0x3c],EBP
0049bc59  FILD dword ptr [ESP + 0x3c]
0049bc5d  FMUL float ptr [EDX + -0x20]
0049bc60  FSTP float ptr [ECX + EDI*0x4 + 0x8]
0049bc64  MOV EDI,dword ptr [ESP + 0x34]
0049bc68  DEC EDI
0049bc69  MOV dword ptr [ESP + 0x34],EDI
0049bc6d  JNZ 0x0049bb63
0049bc73  MOV EDI,dword ptr [ESP + 0x40]
0049bc77  MOV ESI,dword ptr [ESP + 0x44]
0049bc7b  CMP ESI,EBX
0049bc7d  JGE 0x0049bce3
0049bc7f  MOV EDX,ESI
0049bc81  SHL EDX,0x5
0049bc84  LEA EDX,[EDX + EDI*0x1 + 0x30]
0049bc88  JMP 0x0049bc90
0049bc90  MOV EBP,dword ptr [ESP + 0x38]
0049bc94  MOVZX ESI,word ptr [EBP + ESI*0x2]
0049bc99  MOVSX EBP,word ptr [EAX]
0049bc9c  MOV dword ptr [ESP + 0x34],EBP
0049bca0  ADD EAX,0x6
0049bca3  ADD EDX,0x20
0049bca6  FILD dword ptr [ESP + 0x34]
0049bcaa  FMUL float ptr [EDX + -0x28]
0049bcad  FSTP float ptr [ECX + ESI*0x4]
0049bcb0  MOVSX EBP,word ptr [EAX + -0x4]
0049bcb4  MOV dword ptr [ESP + 0x34],EBP
0049bcb8  FILD dword ptr [ESP + 0x34]
0049bcbc  FMUL float ptr [EDX + -0x24]
0049bcbf  FSTP float ptr [ECX + ESI*0x4 + 0x4]
0049bcc3  MOVSX EBP,word ptr [EAX + -0x2]
0049bcc7  MOV dword ptr [ESP + 0x34],EBP
0049bccb  FILD dword ptr [ESP + 0x34]
0049bccf  FMUL float ptr [EDX + -0x20]
0049bcd2  FSTP float ptr [ECX + ESI*0x4 + 0x8]
0049bcd6  MOV ESI,dword ptr [ESP + 0x44]
0049bcda  INC ESI
0049bcdb  CMP ESI,EBX
0049bcdd  MOV dword ptr [ESP + 0x44],ESI
0049bce1  JL 0x0049bc90
0049bce3  MOV BL,byte ptr [EDI + 0x13]
0049bce6  TEST BL,BL
0049bce8  JBE 0x0049bd36
0049bcea  MOVZX EDX,byte ptr [EDI + 0x12]
0049bcee  MOV EAX,dword ptr [EDI + 0xc]
0049bcf1  LEA EBP,[EAX + EDX*0x2]
0049bcf4  MOVZX EAX,word ptr [EDI + 0x10]
0049bcf8  IMUL EAX,EDX
0049bcfb  LEA EDX,[EAX + EAX*0x2]
0049bcfe  MOV EAX,dword ptr [ESP + 0x10]
0049bd02  LEA EAX,[EAX + EDX*0x2 + 0x3]
0049bd06  AND EAX,0xfffffffc
0049bd09  XOR ESI,ESI
0049bd0b  TEST BL,BL
0049bd0d  JBE 0x0049bd36
0049bd0f  ADD EAX,0x8
0049bd12  MOVZX EDX,word ptr [EBP + ESI*0x2]
0049bd17  MOV EBX,dword ptr [EAX + -0x8]
0049bd1a  MOV dword ptr [ECX + EDX*0x4],EBX
0049bd1d  MOV EBX,dword ptr [EAX + -0x4]
0049bd20  MOV dword ptr [ECX + EDX*0x4 + 0x4],EBX
0049bd24  MOV EBX,dword ptr [EAX]
0049bd26  MOV dword ptr [ECX + EDX*0x4 + 0x8],EBX
0049bd2a  MOVZX EDX,byte ptr [EDI + 0x13]
0049bd2e  INC ESI
0049bd2f  ADD EAX,0xc
0049bd32  CMP ESI,EDX
0049bd34  JL 0x0049bd12
0049bd36  POP EDI
0049bd37  POP ESI
0049bd38  POP EBX
0049bd39  MOV AL,0x1
0049bd3b  POP EBP
0049bd3c  ADD ESP,0x1c
0049bd3f  RET 0x18
0049bd42  MOV EDX,dword ptr [ESP + 0x38]
0049bd46  PUSH EDX
0049bd47  MOV EDX,dword ptr [ESP + 0x34]
0049bd4b  PUSH EBP
0049bd4c  PUSH EDX
0049bd4d  MOV EDX,dword ptr [ESP + 0x30]
0049bd51  PUSH EAX
0049bd52  MOV EAX,dword ptr [ESP + 0x38]
0049bd56  PUSH EAX
0049bd57  PUSH EDX
0049bd58  CALL 0x0049af00
0049bd5d  POP EBP
0049bd5e  ADD ESP,0x1c
0049bd61  RET 0x18
