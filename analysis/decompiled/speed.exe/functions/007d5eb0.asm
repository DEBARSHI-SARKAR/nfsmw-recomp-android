007d5eb0  PUSH EBP
007d5eb1  MOV EBP,ESP
007d5eb3  SUB ESP,0x2c
007d5eb6  MOV EAX,dword ptr [EBP + 0x8]
007d5eb9  MOV ECX,dword ptr [EAX + 0x10]
007d5ebc  MOV dword ptr [EBP + -0x20],ECX
007d5ebf  MOV EDX,dword ptr [EBP + 0x8]
007d5ec2  MOV EAX,dword ptr [EDX + 0x8]
007d5ec5  MOV dword ptr [EBP + -0x2c],EAX
007d5ec8  MOV dword ptr [EBP + -0x28],0x0
007d5ecf  CMP dword ptr [EBP + -0x2c],0x0
007d5ed3  JL 0x007d5ee8
007d5ed5  MOV ECX,dword ptr [EBP + -0x2c]
007d5ed8  SHL ECX,0x1
007d5eda  MOV dword ptr [EBP + -0x2c],ECX
007d5edd  MOV EDX,dword ptr [EBP + -0x28]
007d5ee0  ADD EDX,0x1
007d5ee3  MOV dword ptr [EBP + -0x28],EDX
007d5ee6  JMP 0x007d5ecf
007d5ee8  MOV EAX,dword ptr [EBP + -0x28]
007d5eeb  IMUL EAX,EAX,0x204
007d5ef1  MOV ECX,dword ptr [EBP + -0x20]
007d5ef4  LEA EDX,[ECX + EAX*0x1 + 0x144]
007d5efb  MOV dword ptr [EBP + -0x1c],EDX
007d5efe  MOV dword ptr [EBP + -0x14],0x0
007d5f05  JMP 0x007d5f10
007d5f07  MOV EAX,dword ptr [EBP + -0x14]
007d5f0a  ADD EAX,0x1
007d5f0d  MOV dword ptr [EBP + -0x14],EAX
007d5f10  CMP dword ptr [EBP + -0x14],0x3f
007d5f14  JGE 0x007d5f36
007d5f16  MOV ECX,dword ptr [EBP + -0x14]
007d5f19  MOV EDX,dword ptr [EBP + -0x1c]
007d5f1c  LEA EAX,[EDX + ECX*0x8]
007d5f1f  MOV dword ptr [EBP + -0x8],EAX
007d5f22  MOV ECX,dword ptr [EBP + -0x8]
007d5f25  MOV EDX,dword ptr [EBP + -0x8]
007d5f28  MOV dword ptr [ECX + 0x8],EDX
007d5f2b  MOV EAX,dword ptr [EBP + -0x8]
007d5f2e  MOV ECX,dword ptr [EBP + -0x8]
007d5f31  MOV dword ptr [EAX + 0x4],ECX
007d5f34  JMP 0x007d5f07
007d5f36  MOV EDX,dword ptr [EBP + -0x28]
007d5f39  SHL EDX,0xf
007d5f3c  MOV EAX,dword ptr [EBP + 0x8]
007d5f3f  ADD EDX,dword ptr [EAX + 0xc]
007d5f42  MOV dword ptr [EBP + -0xc],EDX
007d5f45  PUSH 0x4
007d5f47  PUSH 0x1000
007d5f4c  PUSH 0x8000
007d5f51  MOV ECX,dword ptr [EBP + -0xc]
007d5f54  PUSH ECX
007d5f55  CALL dword ptr [0x00890240]
007d5f5b  TEST EAX,EAX
007d5f5d  JNZ 0x007d5f67
007d5f5f  OR EAX,0xffffffff
007d5f62  JMP 0x007d6096
007d5f67  MOV EDX,dword ptr [EBP + -0xc]
007d5f6a  ADD EDX,0x7000
007d5f70  MOV dword ptr [EBP + -0x4],EDX
007d5f73  MOV EAX,dword ptr [EBP + -0xc]
007d5f76  MOV dword ptr [EBP + -0x10],EAX
007d5f79  JMP 0x007d5f87
007d5f7b  MOV ECX,dword ptr [EBP + -0x10]
007d5f7e  ADD ECX,0x1000
007d5f84  MOV dword ptr [EBP + -0x10],ECX
007d5f87  MOV EDX,dword ptr [EBP + -0x10]
007d5f8a  CMP EDX,dword ptr [EBP + -0x4]
007d5f8d  JA 0x007d5fec
007d5f8f  MOV EAX,dword ptr [EBP + -0x10]
007d5f92  MOV dword ptr [EAX + 0x8],0xffffffff
007d5f99  MOV ECX,dword ptr [EBP + -0x10]
007d5f9c  MOV dword ptr [ECX + 0xffc],0xffffffff
007d5fa6  MOV EDX,dword ptr [EBP + -0x10]
007d5fa9  ADD EDX,0xc
007d5fac  MOV dword ptr [EBP + -0x8],EDX
007d5faf  MOV EAX,dword ptr [EBP + -0x8]
007d5fb2  MOV dword ptr [EAX],0xff0
007d5fb8  MOV ECX,dword ptr [EBP + -0x8]
007d5fbb  ADD ECX,0x1000
007d5fc1  MOV EDX,dword ptr [EBP + -0x8]
007d5fc4  MOV dword ptr [EDX + 0x4],ECX
007d5fc7  MOV EAX,dword ptr [EBP + -0x8]
007d5fca  SUB EAX,0x1000
007d5fcf  MOV ECX,dword ptr [EBP + -0x8]
007d5fd2  MOV dword ptr [ECX + 0x8],EAX
007d5fd5  MOV EDX,dword ptr [EBP + -0x8]
007d5fd8  ADD EDX,0xfec
007d5fde  MOV dword ptr [EBP + -0x24],EDX
007d5fe1  MOV EAX,dword ptr [EBP + -0x24]
007d5fe4  MOV dword ptr [EAX],0xff0
007d5fea  JMP 0x007d5f7b
007d5fec  MOV ECX,dword ptr [EBP + -0x1c]
007d5fef  ADD ECX,0x1f8
007d5ff5  MOV dword ptr [EBP + -0x18],ECX
007d5ff8  MOV EDX,dword ptr [EBP + -0xc]
007d5ffb  ADD EDX,0xc
007d5ffe  MOV EAX,dword ptr [EBP + -0x18]
007d6001  MOV dword ptr [EAX + 0x4],EDX
007d6004  MOV ECX,dword ptr [EBP + -0x18]
007d6007  MOV EDX,dword ptr [ECX + 0x4]
007d600a  MOV dword ptr [EBP + -0x8],EDX
007d600d  MOV EAX,dword ptr [EBP + -0x8]
007d6010  MOV ECX,dword ptr [EBP + -0x18]
007d6013  MOV dword ptr [EAX + 0x8],ECX
007d6016  MOV EDX,dword ptr [EBP + -0x4]
007d6019  ADD EDX,0xc
007d601c  MOV EAX,dword ptr [EBP + -0x18]
007d601f  MOV dword ptr [EAX + 0x8],EDX
007d6022  MOV ECX,dword ptr [EBP + -0x18]
007d6025  MOV EDX,dword ptr [ECX + 0x8]
007d6028  MOV dword ptr [EBP + -0x8],EDX
007d602b  MOV EAX,dword ptr [EBP + -0x8]
007d602e  MOV ECX,dword ptr [EBP + -0x18]
007d6031  MOV dword ptr [EAX + 0x4],ECX
007d6034  MOV EDX,dword ptr [EBP + -0x28]
007d6037  MOV EAX,dword ptr [EBP + -0x20]
007d603a  MOV dword ptr [EAX + EDX*0x4 + 0x44],0x0
007d6042  MOV ECX,dword ptr [EBP + -0x28]
007d6045  MOV EDX,dword ptr [EBP + -0x20]
007d6048  MOV dword ptr [EDX + ECX*0x4 + 0xc4],0x1
007d6053  MOV EAX,dword ptr [EBP + -0x20]
007d6056  MOVSX ECX,byte ptr [EAX + 0x43]
007d605a  MOV EDX,dword ptr [EBP + -0x20]
007d605d  MOV AL,byte ptr [EDX + 0x43]
007d6060  ADD AL,0x1
007d6062  MOV EDX,dword ptr [EBP + -0x20]
007d6065  MOV byte ptr [EDX + 0x43],AL
007d6068  TEST ECX,ECX
007d606a  JNZ 0x007d607b
007d606c  MOV EAX,dword ptr [EBP + 0x8]
007d606f  MOV ECX,dword ptr [EAX + 0x4]
007d6072  OR ECX,0x1
007d6075  MOV EDX,dword ptr [EBP + 0x8]
007d6078  MOV dword ptr [EDX + 0x4],ECX
007d607b  MOV EAX,0x80000000
007d6080  MOV ECX,dword ptr [EBP + -0x28]
007d6083  SHR EAX,CL
007d6085  NOT EAX
007d6087  MOV ECX,dword ptr [EBP + 0x8]
007d608a  AND EAX,dword ptr [ECX + 0x8]
007d608d  MOV EDX,dword ptr [EBP + 0x8]
007d6090  MOV dword ptr [EDX + 0x8],EAX
007d6093  MOV EAX,dword ptr [EBP + -0x28]
007d6096  MOV ESP,EBP
007d6098  POP EBP
007d6099  RET
