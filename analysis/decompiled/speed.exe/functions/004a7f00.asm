004a7f00  SUB ESP,0x24
004a7f03  PUSH EBX
004a7f04  MOV EBX,dword ptr [ESP + 0x2c]
004a7f08  PUSH EBP
004a7f09  MOV EBP,dword ptr [ESP + 0x44]
004a7f0d  PUSH ESI
004a7f0e  MOV ESI,ECX
004a7f10  MOV ECX,dword ptr [ESP + 0x44]
004a7f14  MOV EDX,dword ptr [ECX]
004a7f16  LEA EAX,[ESI + 0x18]
004a7f19  MOV dword ptr [EAX],EDX
004a7f1b  MOV EDX,dword ptr [ECX + 0x4]
004a7f1e  MOV dword ptr [EAX + 0x4],EDX
004a7f21  MOV EDX,dword ptr [ECX + 0x8]
004a7f24  MOV dword ptr [EAX + 0x8],EDX
004a7f27  MOV ECX,dword ptr [ECX + 0xc]
004a7f2a  MOV EDX,dword ptr [ESP + 0x38]
004a7f2e  MOV dword ptr [EAX + 0xc],ECX
004a7f31  MOV ECX,dword ptr [ESP + 0x40]
004a7f35  MOV EAX,dword ptr [ESP + 0x3c]
004a7f39  PUSH EDI
004a7f3a  PUSH 0x0
004a7f3c  MOV dword ptr [ESI + 0xc],ECX
004a7f3f  PUSH EBP
004a7f40  MOV ECX,EBX
004a7f42  MOV dword ptr [ESI],EBX
004a7f44  MOV dword ptr [ESI + 0x4],EDX
004a7f47  MOV dword ptr [ESI + 0x8],EAX
004a7f4a  CALL 0x0049ff90
004a7f4f  MOV EDI,dword ptr [ESP + 0x50]
004a7f53  PUSH 0x0
004a7f55  PUSH EDI
004a7f56  PUSH EBP
004a7f57  MOV ECX,EBX
004a7f59  CALL 0x0049fcf0
004a7f5e  MOV EDX,dword ptr [ESI + 0x4]
004a7f61  MOV ECX,dword ptr [ESI + 0x8]
004a7f64  SHL EDX,0x6
004a7f67  FLD float ptr [EDX + EDI*0x1 + 0x30]
004a7f6b  LEA EAX,[EDX + EDI*0x1]
004a7f6e  FLD float ptr [EAX + 0x34]
004a7f71  MOV EAX,dword ptr [EAX + 0x38]
004a7f74  MOV dword ptr [ESP + 0x30],EAX
004a7f78  SHL ECX,0x6
004a7f7b  MOV EDX,dword ptr [ECX + EDI*0x1 + 0x30]
004a7f7f  LEA EAX,[ECX + EDI*0x1]
004a7f82  MOV ECX,dword ptr [EAX + 0x34]
004a7f85  MOV dword ptr [ESP + 0x10],EDX
004a7f89  FLD float ptr [ESP + 0x10]
004a7f8d  MOV EDX,dword ptr [EAX + 0x38]
004a7f90  FSUB ST0,ST2
004a7f92  MOV dword ptr [ESP + 0x14],ECX
004a7f96  MOV dword ptr [ESP + 0x18],EDX
004a7f9a  FSTP float ptr [ESP + 0x1c]
004a7f9e  MOV EAX,dword ptr [ESI + 0xc]
004a7fa1  FLD float ptr [ESP + 0x14]
004a7fa5  SHL EAX,0x6
004a7fa8  FSUB ST0,ST1
004a7faa  ADD EAX,EDI
004a7fac  FSTP ST2
004a7fae  FSTP ST0
004a7fb0  FLD float ptr [ESP + 0x18]
004a7fb4  FSUB float ptr [ESP + 0x30]
004a7fb8  FLD ST0
004a7fba  FMUL ST1
004a7fbc  FLD float ptr [ESP + 0x1c]
004a7fc0  FMUL float ptr [ESP + 0x1c]
004a7fc4  FADDP
004a7fc6  FLD ST2
004a7fc8  FMUL ST3
004a7fca  FADDP
004a7fcc  FSQRT
004a7fce  FSTP ST2
004a7fd0  FSTP ST0
004a7fd2  FSTP float ptr [ESI + 0x10]
004a7fd5  MOV ECX,dword ptr [EAX + 0x38]
004a7fd8  FLD float ptr [EAX + 0x30]
004a7fdb  FLD float ptr [EAX + 0x34]
004a7fde  MOV dword ptr [ESP + 0x30],ECX
004a7fe2  FXCH
004a7fe4  POP EDI
004a7fe5  FSUB float ptr [ESP + 0xc]
004a7fe9  FSTP float ptr [ESP + 0x18]
004a7fed  FSUB float ptr [ESP + 0x10]
004a7ff1  FLD float ptr [ESP + 0x2c]
004a7ff5  FSUB float ptr [ESP + 0x14]
004a7ff9  FLD ST0
004a7ffb  FMUL ST1
004a7ffd  FLD float ptr [ESP + 0x18]
004a8001  FMUL float ptr [ESP + 0x18]
004a8005  FADDP
004a8007  FLD ST2
004a8009  FMUL ST3
004a800b  FADDP
004a800d  FSQRT
004a800f  FSTP ST2
004a8011  FSTP ST0
004a8013  FSTP float ptr [ESI + 0x14]
004a8016  POP ESI
004a8017  POP EBP
004a8018  POP EBX
004a8019  ADD ESP,0x24
004a801c  RET 0x1c
