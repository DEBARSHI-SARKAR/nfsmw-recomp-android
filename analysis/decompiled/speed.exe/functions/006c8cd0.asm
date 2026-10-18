006c8cd0  SUB ESP,0xb0
006c8cd6  MOV EAX,dword ptr [ESP + 0xb4]
006c8cdd  FLD float ptr [EAX + 0xc]
006c8ce0  MOV EDX,dword ptr [EAX + 0x3c]
006c8ce3  FLD float ptr [EAX + 0x1c]
006c8ce6  PUSH EBX
006c8ce7  FLD float ptr [EAX]
006c8ce9  PUSH ESI
006c8cea  FLD float ptr [EAX + 0x10]
006c8ced  MOV ESI,ECX
006c8cef  MOV ECX,dword ptr [EAX + 0x2c]
006c8cf2  FLD ST3
006c8cf4  FSUB ST0,ST2
006c8cf6  MOV dword ptr [ESP + 0x10],ECX
006c8cfa  MOV ECX,dword ptr [EAX + 0x20]
006c8cfd  MOV dword ptr [ESP + 0xb0],ECX
006c8d04  FSTP float ptr [ESP + 0x18]
006c8d08  MOV ECX,dword ptr [EAX + 0x4]
006c8d0b  FLD ST2
006c8d0d  MOV dword ptr [ESP + 0x14],EDX
006c8d11  FSUB ST0,ST1
006c8d13  MOV EDX,dword ptr [EAX + 0x30]
006c8d16  MOV dword ptr [ESP + 0xb4],EDX
006c8d1d  MOV EDX,dword ptr [EAX + 0x14]
006c8d20  FSTP float ptr [ESP + 0x1c]
006c8d24  MOV dword ptr [ESP + 0x38],ECX
006c8d28  FLD float ptr [ESP + 0x10]
006c8d2c  MOV ECX,dword ptr [EAX + 0x24]
006c8d2f  FSUB float ptr [ESP + 0xb0]
006c8d36  MOV dword ptr [ESP + 0x3c],EDX
006c8d3a  MOV EDX,dword ptr [EAX + 0x34]
006c8d3d  MOV dword ptr [ESP + 0x40],ECX
006c8d41  MOV ECX,dword ptr [EAX + 0x8]
006c8d44  FSTP float ptr [ESP + 0x20]
006c8d48  FLD float ptr [ESP + 0x14]
006c8d4c  MOV dword ptr [ESP + 0x44],EDX
006c8d50  FSUB float ptr [ESP + 0xb4]
006c8d57  MOV EDX,dword ptr [EAX + 0x18]
006c8d5a  MOV dword ptr [ESP + 0x28],ECX
006c8d5e  MOV ECX,dword ptr [EAX + 0x28]
006c8d61  FSTP float ptr [ESP + 0x24]
006c8d65  MOV dword ptr [ESP + 0x2c],EDX
006c8d69  MOV EDX,dword ptr [EAX + 0x38]
006c8d6c  FXCH
006c8d6e  MOV EAX,dword ptr [ESP + 0x18]
006c8d72  FADD ST0,ST3
006c8d74  MOV dword ptr [ESP + 0x30],ECX
006c8d78  MOV ECX,dword ptr [ESP + 0x1c]
006c8d7c  FSTP float ptr [ESP + 0x18]
006c8d80  MOV dword ptr [ESP + 0x34],EDX
006c8d84  MOV EDX,dword ptr [ESP + 0x20]
006c8d88  FADD ST0,ST1
006c8d8a  MOV dword ptr [ESP + 0x48],EAX
006c8d8e  MOV EAX,dword ptr [ESP + 0x24]
006c8d92  MOV dword ptr [ESP + 0x4c],ECX
006c8d96  FSTP float ptr [ESP + 0x1c]
006c8d9a  MOV ECX,dword ptr [ESP + 0x18]
006c8d9e  FLD float ptr [ESP + 0xb0]
006c8da5  MOV dword ptr [ESP + 0x50],EDX
006c8da9  FADD float ptr [ESP + 0x10]
006c8dad  MOV EDX,dword ptr [ESP + 0x1c]
006c8db1  MOV dword ptr [ESP + 0x54],EAX
006c8db5  MOV dword ptr [ESP + 0x58],ECX
006c8db9  FSTP float ptr [ESP + 0x20]
006c8dbd  MOV EAX,dword ptr [ESP + 0x20]
006c8dc1  FLD float ptr [ESP + 0xb4]
006c8dc8  PUSH EDI
006c8dc9  FADD float ptr [ESP + 0x18]
006c8dcd  MOV dword ptr [ESP + 0x60],EDX
006c8dd1  MOV dword ptr [ESP + 0x64],EAX
006c8dd5  FSTP float ptr [ESP + 0x28]
006c8dd9  MOV ECX,dword ptr [ESP + 0x28]
006c8ddd  FLD ST1
006c8ddf  MOV dword ptr [ESP + 0x68],ECX
006c8de3  FSUB float ptr [ESP + 0x3c]
006c8de7  FSTP float ptr [ESP + 0x1c]
006c8deb  FLD float ptr [ESP + 0x40]
006c8def  FSUBR ST0,ST1
006c8df1  FSTP float ptr [ESP + 0x20]
006c8df5  FLD float ptr [ESP + 0x14]
006c8df9  FSUB float ptr [ESP + 0x44]
006c8dfd  FSTP float ptr [ESP + 0x24]
006c8e01  FLD float ptr [ESP + 0x18]
006c8e05  MOV EDX,dword ptr [ESP + 0x1c]
006c8e09  FSUB float ptr [ESP + 0x48]
006c8e0d  MOV EAX,dword ptr [ESP + 0x20]
006c8e11  MOV ECX,dword ptr [ESP + 0x24]
006c8e15  MOV dword ptr [ESP + 0x6c],EDX
006c8e19  FSTP float ptr [ESP + 0x28]
006c8e1d  MOV EDX,dword ptr [ESP + 0x28]
006c8e21  FLD float ptr [ESP + 0x3c]
006c8e25  MOV dword ptr [ESP + 0x70],EAX
006c8e29  FADD ST0,ST2
006c8e2b  MOV dword ptr [ESP + 0x74],ECX
006c8e2f  MOV dword ptr [ESP + 0x78],EDX
006c8e33  FSTP float ptr [ESP + 0x1c]
006c8e37  MOV EAX,dword ptr [ESP + 0x1c]
006c8e3b  FLD float ptr [ESP + 0x40]
006c8e3f  MOV dword ptr [ESP + 0x7c],EAX
006c8e43  FADD ST0,ST1
006c8e45  FSTP float ptr [ESP + 0x20]
006c8e49  MOV ECX,dword ptr [ESP + 0x20]
006c8e4d  FLD float ptr [ESP + 0x44]
006c8e51  MOV dword ptr [ESP + 0x80],ECX
006c8e58  FADD float ptr [ESP + 0x14]
006c8e5c  FSTP float ptr [ESP + 0x24]
006c8e60  MOV EDX,dword ptr [ESP + 0x24]
006c8e64  FLD float ptr [ESP + 0x48]
006c8e68  MOV dword ptr [ESP + 0x84],EDX
006c8e6f  FADD float ptr [ESP + 0x18]
006c8e73  FSTP float ptr [ESP + 0x28]
006c8e77  MOV EAX,dword ptr [ESP + 0x28]
006c8e7b  FLD ST1
006c8e7d  MOV dword ptr [ESP + 0x88],EAX
006c8e84  FSUB float ptr [ESP + 0x2c]
006c8e88  FSTP float ptr [ESP + 0x1c]
006c8e8c  MOV ECX,dword ptr [ESP + 0x1c]
006c8e90  FLD float ptr [ESP + 0x30]
006c8e94  MOV dword ptr [ESP + 0x8c],ECX
006c8e9b  FSUBR ST0,ST1
006c8e9d  FSTP float ptr [ESP + 0x20]
006c8ea1  MOV EDX,dword ptr [ESP + 0x20]
006c8ea5  FLD float ptr [ESP + 0x14]
006c8ea9  MOV dword ptr [ESP + 0x90],EDX
006c8eb0  FSUB float ptr [ESP + 0x34]
006c8eb4  FSTP float ptr [ESP + 0x24]
006c8eb8  MOV EAX,dword ptr [ESP + 0x24]
006c8ebc  FLD float ptr [ESP + 0x18]
006c8ec0  MOV dword ptr [ESP + 0x94],EAX
006c8ec7  FSUB float ptr [ESP + 0x38]
006c8ecb  FSTP float ptr [ESP + 0x28]
006c8ecf  MOV ECX,dword ptr [ESP + 0x28]
006c8ed3  FLD float ptr [ESP + 0x2c]
006c8ed7  MOV dword ptr [ESP + 0x98],ECX
006c8ede  FADD ST0,ST2
006c8ee0  FSTP float ptr [ESP + 0x1c]
006c8ee4  MOV EDX,dword ptr [ESP + 0x1c]
006c8ee8  FLD float ptr [ESP + 0x30]
006c8eec  MOV dword ptr [ESP + 0x9c],EDX
006c8ef3  FADD ST0,ST1
006c8ef5  FSTP float ptr [ESP + 0x20]
006c8ef9  MOV EAX,dword ptr [ESP + 0x20]
006c8efd  MOV dword ptr [ESP + 0xa0],EAX
006c8f04  FSTP ST0
006c8f06  LEA EAX,[ESP + 0x54]
006c8f0a  FSTP ST0
006c8f0c  FLD float ptr [ESP + 0x34]
006c8f10  FADD float ptr [ESP + 0x14]
006c8f14  FSTP float ptr [ESP + 0x24]
006c8f18  MOV ECX,dword ptr [ESP + 0x24]
006c8f1c  FLD float ptr [ESP + 0x38]
006c8f20  MOV dword ptr [ESP + 0xa4],ECX
006c8f27  FADD float ptr [ESP + 0x18]
006c8f2b  MOV ECX,0x6
006c8f30  FSTP float ptr [ESP + 0x28]
006c8f34  MOV EDX,dword ptr [ESP + 0x28]
006c8f38  MOV dword ptr [ESP + 0xa8],EDX
006c8f3f  NOP
006c8f40  FLD float ptr [EAX]
006c8f42  ADD EAX,0x10
006c8f45  DEC ECX
006c8f46  FLD float ptr [EAX + -0x14]
006c8f49  FLD float ptr [EAX + -0x18]
006c8f4c  FLD ST0
006c8f4e  FMUL ST1
006c8f50  FLD ST2
006c8f52  FMUL ST3
006c8f54  FADDP
006c8f56  FLD ST3
006c8f58  FMUL ST4
006c8f5a  FADDP
006c8f5c  FSQRT
006c8f5e  FSTP ST3
006c8f60  FSTP ST0
006c8f62  FSTP ST0
006c8f64  FDIVR float ptr [0x0089096c]
006c8f6a  FLD ST0
006c8f6c  FMUL float ptr [EAX + -0x18]
006c8f6f  FSTP float ptr [ESP + 0x1c]
006c8f73  MOV EDX,dword ptr [ESP + 0x1c]
006c8f77  FLD ST0
006c8f79  FMUL float ptr [EAX + -0x14]
006c8f7c  FSTP float ptr [ESP + 0x20]
006c8f80  FLD ST0
006c8f82  FMUL float ptr [EAX + -0x10]
006c8f85  FSTP float ptr [ESP + 0x24]
006c8f89  FMUL float ptr [EAX + -0xc]
006c8f8c  MOV dword ptr [EAX + -0x18],EDX
006c8f8f  MOV EDX,dword ptr [ESP + 0x20]
006c8f93  MOV dword ptr [EAX + -0x14],EDX
006c8f96  MOV EDX,dword ptr [ESP + 0x24]
006c8f9a  FSTP float ptr [ESP + 0x28]
006c8f9e  MOV dword ptr [EAX + -0x10],EDX
006c8fa1  MOV EDX,dword ptr [ESP + 0x28]
006c8fa5  MOV dword ptr [EAX + -0xc],EDX
006c8fa8  JNZ 0x006c8f40
006c8faa  MOV EAX,dword ptr [ESP + 0x4c]
006c8fae  MOV ECX,dword ptr [ESP + 0x50]
006c8fb2  MOV EDX,dword ptr [ESP + 0x54]
006c8fb6  MOV dword ptr [ESP + 0xc],EAX
006c8fba  MOV EAX,dword ptr [ESP + 0x58]
006c8fbe  MOV dword ptr [ESP + 0x18],EAX
006c8fc2  MOV dword ptr [ESP + 0x10],ECX
006c8fc6  MOV EAX,dword ptr [ESP + 0x10]
006c8fca  MOV dword ptr [ESP + 0x14],EDX
006c8fce  MOV EDX,dword ptr [ESP + 0xc]
006c8fd2  MOV ECX,ESI
006c8fd4  MOV dword ptr [ECX],EDX
006c8fd6  MOV EDX,dword ptr [ESP + 0x14]
006c8fda  MOV dword ptr [ECX + 0x4],EAX
006c8fdd  MOV EAX,dword ptr [ESP + 0x18]
006c8fe1  MOV dword ptr [ECX + 0x8],EDX
006c8fe4  MOV dword ptr [ECX + 0xc],EAX
006c8fe7  MOV ECX,dword ptr [ESP + 0x5c]
006c8feb  MOV EDX,dword ptr [ESP + 0x60]
006c8fef  MOV EAX,dword ptr [ESP + 0x64]
006c8ff3  MOV dword ptr [ESP + 0x14],EAX
006c8ff7  MOV dword ptr [ESP + 0xc],ECX
006c8ffb  MOV ECX,dword ptr [ESP + 0x68]
006c8fff  MOV dword ptr [ESP + 0x10],EDX
006c9003  MOV EDX,dword ptr [ESP + 0xc]
006c9007  MOV dword ptr [ESP + 0x18],ECX
006c900b  MOV ECX,dword ptr [ESP + 0x10]
006c900f  LEA EAX,[ESI + 0x10]
006c9012  MOV dword ptr [EAX],EDX
006c9014  MOV EDX,dword ptr [ESP + 0x14]
006c9018  MOV dword ptr [EAX + 0x4],ECX
006c901b  MOV ECX,dword ptr [ESP + 0x18]
006c901f  MOV dword ptr [EAX + 0x8],EDX
006c9022  MOV EDX,dword ptr [ESP + 0x6c]
006c9026  MOV dword ptr [EAX + 0xc],ECX
006c9029  MOV EAX,dword ptr [ESP + 0x70]
006c902d  MOV ECX,dword ptr [ESP + 0x74]
006c9031  MOV dword ptr [ESP + 0x10],EAX
006c9035  MOV dword ptr [ESP + 0xc],EDX
006c9039  MOV EDX,dword ptr [ESP + 0x78]
006c903d  MOV dword ptr [ESP + 0x14],ECX
006c9041  MOV ECX,dword ptr [ESP + 0xc]
006c9045  MOV dword ptr [ESP + 0x18],EDX
006c9049  MOV EDX,dword ptr [ESP + 0x10]
006c904d  LEA EAX,[ESI + 0x20]
006c9050  MOV dword ptr [EAX],ECX
006c9052  MOV ECX,dword ptr [ESP + 0x14]
006c9056  MOV dword ptr [EAX + 0x4],EDX
006c9059  MOV EDX,dword ptr [ESP + 0x18]
006c905d  MOV dword ptr [EAX + 0x8],ECX
006c9060  MOV ECX,dword ptr [ESP + 0x80]
006c9067  MOV dword ptr [EAX + 0xc],EDX
006c906a  MOV EAX,dword ptr [ESP + 0x7c]
006c906e  MOV EDX,dword ptr [ESP + 0x84]
006c9075  MOV dword ptr [ESP + 0xc],EAX
006c9079  MOV EAX,dword ptr [ESP + 0x88]
006c9080  MOV dword ptr [ESP + 0x18],EAX
006c9084  MOV dword ptr [ESP + 0x10],ECX
006c9088  MOV ECX,dword ptr [ESP + 0xc]
006c908c  MOV dword ptr [ESP + 0x14],EDX
006c9090  MOV EDX,dword ptr [ESP + 0x10]
006c9094  LEA EAX,[ESI + 0x30]
006c9097  MOV dword ptr [EAX],ECX
006c9099  MOV ECX,dword ptr [ESP + 0x14]
006c909d  MOV dword ptr [EAX + 0x4],EDX
006c90a0  MOV EDX,dword ptr [ESP + 0x18]
006c90a4  MOV dword ptr [EAX + 0x8],ECX
006c90a7  MOV ECX,dword ptr [ESP + 0x90]
006c90ae  MOV dword ptr [EAX + 0xc],EDX
006c90b1  MOV EAX,dword ptr [ESP + 0x8c]
006c90b8  MOV EDX,dword ptr [ESP + 0x94]
006c90bf  MOV dword ptr [ESP + 0xc],EAX
006c90c3  MOV EAX,dword ptr [ESP + 0x98]
006c90ca  MOV dword ptr [ESP + 0x18],EAX
006c90ce  MOV dword ptr [ESP + 0x10],ECX
006c90d2  MOV ECX,dword ptr [ESP + 0xc]
006c90d6  LEA EAX,[ESI + 0x40]
006c90d9  MOV dword ptr [ESP + 0x14],EDX
006c90dd  MOV EDX,dword ptr [ESP + 0x10]
006c90e1  MOV dword ptr [EAX],ECX
006c90e3  MOV dword ptr [EAX + 0x4],EDX
006c90e6  MOV ECX,dword ptr [ESP + 0x14]
006c90ea  FLD float ptr [ESP + 0x4c]
006c90ee  MOV EDX,dword ptr [ESP + 0x18]
006c90f2  FCOMP float ptr [0x00890968]
006c90f8  MOV dword ptr [EAX + 0x8],ECX
006c90fb  MOV ECX,dword ptr [ESP + 0xa0]
006c9102  MOV dword ptr [EAX + 0xc],EDX
006c9105  MOV EAX,dword ptr [ESP + 0x9c]
006c910c  MOV EDX,dword ptr [ESP + 0xa4]
006c9113  MOV dword ptr [ESP + 0xc],EAX
006c9117  MOV EAX,dword ptr [ESP + 0xa8]
006c911e  MOV dword ptr [ESP + 0x18],EAX
006c9122  MOV dword ptr [ESP + 0x10],ECX
006c9126  MOV ECX,dword ptr [ESP + 0xc]
006c912a  MOV dword ptr [ESP + 0x14],EDX
006c912e  MOV EDX,dword ptr [ESP + 0x10]
006c9132  LEA EAX,[ESI + 0x50]
006c9135  MOV dword ptr [EAX],ECX
006c9137  MOV ECX,dword ptr [ESP + 0x14]
006c913b  MOV dword ptr [EAX + 0x4],EDX
006c913e  MOV EDX,dword ptr [ESP + 0x18]
006c9142  MOV dword ptr [EAX + 0x8],ECX
006c9145  MOV dword ptr [EAX + 0xc],EDX
006c9148  FNSTSW AX
006c914a  TEST AH,0x5
006c914d  JP 0x006c9156
006c914f  MOV EDX,0x1
006c9154  JMP 0x006c9158
006c9156  XOR EDX,EDX
006c9158  FLD float ptr [ESP + 0x50]
006c915c  FCOMP float ptr [0x00890968]
006c9162  FNSTSW AX
006c9164  TEST AH,0x5
006c9167  JP 0x006c9170
006c9169  MOV ECX,0x2
006c916e  JMP 0x006c9172
006c9170  XOR ECX,ECX
006c9172  FLD float ptr [ESP + 0x54]
006c9176  FCOMP float ptr [0x00890968]
006c917c  FNSTSW AX
006c917e  TEST AH,0x5
006c9181  JP 0x006c918a
006c9183  MOV EAX,0x4
006c9188  JMP 0x006c918c
006c918a  XOR EAX,EAX
006c918c  FLD float ptr [ESP + 0x5c]
006c9190  OR EAX,ECX
006c9192  FCOMP float ptr [0x00890968]
006c9198  OR EAX,EDX
006c919a  MOV dword ptr [ESI + 0x60],EAX
006c919d  FNSTSW AX
006c919f  TEST AH,0x5
006c91a2  JP 0x006c91ab
006c91a4  MOV EDX,0x1
006c91a9  JMP 0x006c91ad
006c91ab  XOR EDX,EDX
006c91ad  FLD float ptr [ESP + 0x60]
006c91b1  FCOMP float ptr [0x00890968]
006c91b7  FNSTSW AX
006c91b9  TEST AH,0x5
006c91bc  JP 0x006c91c5
006c91be  MOV ECX,0x2
006c91c3  JMP 0x006c91c7
006c91c5  XOR ECX,ECX
006c91c7  FLD float ptr [ESP + 0x64]
006c91cb  FCOMP float ptr [0x00890968]
006c91d1  FNSTSW AX
006c91d3  TEST AH,0x5
006c91d6  JP 0x006c91df
006c91d8  MOV EAX,0x4
006c91dd  JMP 0x006c91e1
006c91df  XOR EAX,EAX
006c91e1  FLD float ptr [ESP + 0x6c]
006c91e5  OR EAX,ECX
006c91e7  FCOMP float ptr [0x00890968]
006c91ed  OR EAX,EDX
006c91ef  MOV dword ptr [ESI + 0x64],EAX
006c91f2  FNSTSW AX
006c91f4  TEST AH,0x5
006c91f7  JP 0x006c9200
006c91f9  MOV EDX,0x1
006c91fe  JMP 0x006c9202
006c9200  XOR EDX,EDX
006c9202  FLD float ptr [ESP + 0x70]
006c9206  FCOMP float ptr [0x00890968]
006c920c  FNSTSW AX
006c920e  TEST AH,0x5
006c9211  JP 0x006c921a
006c9213  MOV ECX,0x2
006c9218  JMP 0x006c921c
006c921a  XOR ECX,ECX
006c921c  FLD float ptr [ESP + 0x74]
006c9220  FCOMP float ptr [0x00890968]
006c9226  FNSTSW AX
006c9228  TEST AH,0x5
006c922b  JP 0x006c9234
006c922d  MOV EAX,0x4
006c9232  JMP 0x006c9236
006c9234  XOR EAX,EAX
006c9236  FLD float ptr [ESP + 0x7c]
006c923a  OR EAX,ECX
006c923c  FCOMP float ptr [0x00890968]
006c9242  OR EAX,EDX
006c9244  MOV dword ptr [ESI + 0x68],EAX
006c9247  FNSTSW AX
006c9249  TEST AH,0x5
006c924c  JP 0x006c9255
006c924e  MOV EDX,0x1
006c9253  JMP 0x006c9257
006c9255  XOR EDX,EDX
006c9257  FLD float ptr [ESP + 0x80]
006c925e  FCOMP float ptr [0x00890968]
006c9264  FNSTSW AX
006c9266  TEST AH,0x5
006c9269  JP 0x006c9272
006c926b  MOV ECX,0x2
006c9270  JMP 0x006c9274
006c9272  XOR ECX,ECX
006c9274  FLD float ptr [ESP + 0x84]
006c927b  FCOMP float ptr [0x00890968]
006c9281  FNSTSW AX
006c9283  TEST AH,0x5
006c9286  JP 0x006c928f
006c9288  MOV EAX,0x4
006c928d  JMP 0x006c9291
006c928f  XOR EAX,EAX
006c9291  FLD float ptr [ESP + 0x8c]
006c9298  OR EAX,ECX
006c929a  FCOMP float ptr [0x00890968]
006c92a0  OR EAX,EDX
006c92a2  MOV dword ptr [ESI + 0x6c],EAX
006c92a5  FNSTSW AX
006c92a7  TEST AH,0x5
006c92aa  JP 0x006c92b3
006c92ac  MOV EDX,0x1
006c92b1  JMP 0x006c92b5
006c92b3  XOR EDX,EDX
006c92b5  FLD float ptr [ESP + 0x90]
006c92bc  FCOMP float ptr [0x00890968]
006c92c2  FNSTSW AX
006c92c4  TEST AH,0x5
006c92c7  JP 0x006c92d0
006c92c9  MOV ECX,0x2
006c92ce  JMP 0x006c92d2
006c92d0  XOR ECX,ECX
006c92d2  FLD float ptr [ESP + 0x94]
006c92d9  FCOMP float ptr [0x00890968]
006c92df  FNSTSW AX
006c92e1  TEST AH,0x5
006c92e4  JP 0x006c92ed
006c92e6  MOV EAX,0x4
006c92eb  JMP 0x006c92ef
006c92ed  XOR EAX,EAX
006c92ef  FLD float ptr [ESP + 0x9c]
006c92f6  OR EAX,ECX
006c92f8  FCOMP float ptr [0x00890968]
006c92fe  OR EAX,EDX
006c9300  MOV dword ptr [ESI + 0x70],EAX
006c9303  FNSTSW AX
006c9305  TEST AH,0x5
006c9308  JP 0x006c9311
006c930a  MOV EDX,0x1
006c930f  JMP 0x006c9313
006c9311  XOR EDX,EDX
006c9313  FLD float ptr [ESP + 0xa0]
006c931a  FCOMP float ptr [0x00890968]
006c9320  FNSTSW AX
006c9322  TEST AH,0x5
006c9325  JP 0x006c932e
006c9327  MOV ECX,0x2
006c932c  JMP 0x006c9330
006c932e  XOR ECX,ECX
006c9330  FLD float ptr [ESP + 0xa4]
006c9337  FCOMP float ptr [0x00890968]
006c933d  FNSTSW AX
006c933f  TEST AH,0x5
006c9342  JP 0x006c934b
006c9344  MOV EAX,0x4
006c9349  JMP 0x006c934d
006c934b  XOR EAX,EAX
006c934d  OR EAX,ECX
006c934f  OR EAX,EDX
006c9351  MOV dword ptr [ESI + 0x74],EAX
006c9354  XOR EBX,EBX
006c9356  LEA EDI,[ESI + 0x78]
006c9359  LEA ESP,[ESP]
006c9360  TEST BL,0x1
006c9363  LEA EAX,[ESI + 0x40]
006c9366  JNZ 0x006c936b
006c9368  LEA EAX,[ESI + 0x50]
006c936b  TEST BL,0x2
006c936e  MOV EDX,EAX
006c9370  LEA ECX,[ESI + 0x30]
006c9373  JNZ 0x006c9378
006c9375  LEA ECX,[ESI + 0x20]
006c9378  TEST BL,0x4
006c937b  MOV EAX,ESI
006c937d  JNZ 0x006c9382
006c937f  LEA EAX,[ESI + 0x10]
006c9382  CALL 0x006c88d0
006c9387  INC EBX
006c9388  ADD EDI,0xc
006c938b  CMP EBX,0x8
006c938e  JL 0x006c9360
006c9390  POP EDI
006c9391  MOV EAX,ESI
006c9393  POP ESI
006c9394  POP EBX
006c9395  ADD ESP,0xb0
006c939b  RET 0x4
