005c9e50  SUB ESP,0x54
005c9e53  MOV ECX,dword ptr [ESP + 0x60]
005c9e57  PUSH EBX
005c9e58  MOV EBX,dword ptr [ESP + 0x68]
005c9e5c  PUSH EBP
005c9e5d  MOV EBP,dword ptr [ESP + 0x64]
005c9e61  PUSH ESI
005c9e62  PUSH EDI
005c9e63  MOV EDI,dword ptr [ESP + 0x68]
005c9e67  MOV EAX,dword ptr [EDI*0x4 + 0x8a3130]
005c9e6e  XOR ESI,ESI
005c9e70  TEST EDI,EDI
005c9e72  MOV dword ptr [ESP + 0x10],EAX
005c9e76  JBE 0x005c9ebc
005c9e78  MOV EDX,EBP
005c9e7a  LEA EBX,[EBX]
005c9e80  FLD float ptr [EDX]
005c9e82  FCOMP float ptr [ECX]
005c9e84  FNSTSW AX
005c9e86  TEST AH,0x1
005c9e89  JNZ 0x005c9eb4
005c9e8b  FLD float ptr [EDX]
005c9e8d  FCOMP float ptr [EBX]
005c9e8f  FNSTSW AX
005c9e91  TEST AH,0x41
005c9e94  JP 0x005c9eb4
005c9e96  FLD float ptr [EDX + 0x8]
005c9e99  FCOMP float ptr [ECX + 0x8]
005c9e9c  FNSTSW AX
005c9e9e  TEST AH,0x1
005c9ea1  JNZ 0x005c9eb4
005c9ea3  FLD float ptr [EDX + 0x8]
005c9ea6  FCOMP float ptr [EBX + 0x8]
005c9ea9  FNSTSW AX
005c9eab  TEST AH,0x41
005c9eae  JNP 0x005ca142
005c9eb4  INC ESI
005c9eb5  ADD EDX,0x10
005c9eb8  CMP ESI,EDI
005c9eba  JC 0x005c9e80
005c9ebc  MOV ESI,dword ptr [ESP + 0x68]
005c9ec0  XOR EDI,EDI
005c9ec2  CMP ESI,0x4
005c9ec5  MOV AL,0x1
005c9ec7  JL 0x005c9fd3
005c9ecd  MOV ESI,dword ptr [ESP + 0x10]
005c9ed1  ADD ESI,0x8
005c9ed4  LEA EDX,[EBP + 0x28]
005c9ed7  TEST AL,AL
005c9ed9  JZ 0x005ca02e
005c9edf  MOV EAX,dword ptr [ESI + -0x8]
005c9ee2  FLD float ptr [EDX + -0x20]
005c9ee5  FSUB float ptr [ECX + 0x8]
005c9ee8  SHL EAX,0x4
005c9eeb  FLD float ptr [EAX + EBP*0x1]
005c9eee  ADD EAX,EBP
005c9ef0  FSUB float ptr [ECX]
005c9ef2  FMULP
005c9ef4  FLD float ptr [EAX + 0x8]
005c9ef7  FSUB float ptr [ECX + 0x8]
005c9efa  FLD float ptr [EDX + -0x28]
005c9efd  FSUB float ptr [ECX]
005c9eff  FMULP
005c9f01  FSUBP
005c9f03  FCOMP double ptr [0x008942e0]
005c9f09  FNSTSW AX
005c9f0b  TEST AH,0x1
005c9f0e  JNZ 0x005ca02e
005c9f14  MOV EAX,dword ptr [ESI + -0x4]
005c9f17  FLD float ptr [EDX + -0x10]
005c9f1a  FSUB float ptr [ECX + 0x8]
005c9f1d  SHL EAX,0x4
005c9f20  FLD float ptr [EAX + EBP*0x1]
005c9f23  ADD EAX,EBP
005c9f25  FSUB float ptr [ECX]
005c9f27  FMULP
005c9f29  FLD float ptr [EAX + 0x8]
005c9f2c  FSUB float ptr [ECX + 0x8]
005c9f2f  FLD float ptr [EDX + -0x18]
005c9f32  FSUB float ptr [ECX]
005c9f34  FMULP
005c9f36  FSUBP
005c9f38  FCOMP double ptr [0x008942e0]
005c9f3e  FNSTSW AX
005c9f40  TEST AH,0x1
005c9f43  JNZ 0x005ca02e
005c9f49  MOV EAX,dword ptr [ESI]
005c9f4b  SHL EAX,0x4
005c9f4e  FLD float ptr [EAX + EBP*0x1]
005c9f51  ADD EAX,EBP
005c9f53  FSUB float ptr [ECX]
005c9f55  FLD float ptr [EDX]
005c9f57  FSUB float ptr [ECX + 0x8]
005c9f5a  FMULP
005c9f5c  FLD float ptr [EAX + 0x8]
005c9f5f  FSUB float ptr [ECX + 0x8]
005c9f62  FLD float ptr [EDX + -0x8]
005c9f65  FSUB float ptr [ECX]
005c9f67  FMULP
005c9f69  FSUBP
005c9f6b  FCOMP double ptr [0x008942e0]
005c9f71  FNSTSW AX
005c9f73  TEST AH,0x1
005c9f76  JNZ 0x005ca02e
005c9f7c  MOV EAX,dword ptr [ESI + 0x4]
005c9f7f  FLD float ptr [EDX + 0x10]
005c9f82  FSUB float ptr [ECX + 0x8]
005c9f85  SHL EAX,0x4
005c9f88  FLD float ptr [EAX + EBP*0x1]
005c9f8b  ADD EAX,EBP
005c9f8d  FSUB float ptr [ECX]
005c9f8f  FMULP
005c9f91  FLD float ptr [EAX + 0x8]
005c9f94  FSUB float ptr [ECX + 0x8]
005c9f97  FLD float ptr [EDX + 0x8]
005c9f9a  FSUB float ptr [ECX]
005c9f9c  FMULP
005c9f9e  FSUBP
005c9fa0  FCOMP double ptr [0x008942e0]
005c9fa6  FNSTSW AX
005c9fa8  TEST AH,0x1
005c9fab  JNZ 0x005c9fb1
005c9fad  MOV AL,0x1
005c9faf  JMP 0x005c9fb3
005c9fb1  XOR AL,AL
005c9fb3  MOV EBX,dword ptr [ESP + 0x68]
005c9fb7  ADD EBX,-0x3
005c9fba  ADD EDI,0x4
005c9fbd  ADD ESI,0x10
005c9fc0  ADD EDX,0x40
005c9fc3  CMP EDI,EBX
005c9fc5  MOV EBX,dword ptr [ESP + 0x74]
005c9fc9  JC 0x005c9ed7
005c9fcf  MOV ESI,dword ptr [ESP + 0x68]
005c9fd3  CMP EDI,ESI
005c9fd5  JNC 0x005ca026
005c9fd7  MOV EDX,EDI
005c9fd9  SHL EDX,0x4
005c9fdc  ADD EDX,EBP
005c9fde  MOV EDI,EDI
005c9fe0  TEST AL,AL
005c9fe2  JZ 0x005ca02e
005c9fe4  MOV EAX,dword ptr [ESP + 0x10]
005c9fe8  FLD float ptr [EDX + 0x8]
005c9feb  FSUB float ptr [ECX + 0x8]
005c9fee  MOV EAX,dword ptr [EAX + EDI*0x4]
005c9ff1  SHL EAX,0x4
005c9ff4  FLD float ptr [EAX + EBP*0x1]
005c9ff7  ADD EAX,EBP
005c9ff9  FSUB float ptr [ECX]
005c9ffb  FMULP
005c9ffd  FLD float ptr [EAX + 0x8]
005ca000  FSUB float ptr [ECX + 0x8]
005ca003  FLD float ptr [EDX]
005ca005  FSUB float ptr [ECX]
005ca007  FMULP
005ca009  FSUBP
005ca00b  FCOMP double ptr [0x008942e0]
005ca011  FNSTSW AX
005ca013  TEST AH,0x1
005ca016  JNZ 0x005ca01c
005ca018  MOV AL,0x1
005ca01a  JMP 0x005ca01e
005ca01c  XOR AL,AL
005ca01e  INC EDI
005ca01f  ADD EDX,0x10
005ca022  CMP EDI,ESI
005ca024  JC 0x005c9fe0
005ca026  TEST AL,AL
005ca028  JNZ 0x005ca142
005ca02e  FLD float ptr [EBX]
005ca030  MOV EAX,dword ptr [ECX + 0x8]
005ca033  FSUB float ptr [ECX]
005ca035  MOV EDX,dword ptr [ECX]
005ca037  MOV dword ptr [ESP + 0x44],EAX
005ca03b  MOV dword ptr [ESP + 0x48],EAX
005ca03f  MOV EAX,dword ptr [EBX + 0x8]
005ca042  FSTP float ptr [ESP + 0x34]
005ca046  FLD float ptr [EBX + 0x8]
005ca049  MOV dword ptr [ESP + 0x54],EDX
005ca04d  FSUB float ptr [ECX + 0x8]
005ca050  MOV EDX,dword ptr [EBX]
005ca052  MOV dword ptr [ESP + 0x4c],EAX
005ca056  MOV dword ptr [ESP + 0x50],EAX
005ca05a  MOV EAX,dword ptr [ESP + 0x68]
005ca05e  FSTP float ptr [ESP + 0x28]
005ca062  FLD float ptr [ECX]
005ca064  MOV dword ptr [ESP + 0x58],EDX
005ca068  FSUB float ptr [EBX]
005ca06a  MOV dword ptr [ESP + 0x5c],EDX
005ca06e  MOV EDX,dword ptr [ECX]
005ca070  MOV dword ptr [ESP + 0x24],0x0
005ca078  FSTP float ptr [ESP + 0x3c]
005ca07c  MOV dword ptr [ESP + 0x38],0x0
005ca084  FLD float ptr [ECX + 0x8]
005ca087  MOV dword ptr [ESP + 0x2c],0x0
005ca08f  FSUB float ptr [EBX + 0x8]
005ca092  XOR EBX,EBX
005ca094  TEST EAX,EAX
005ca096  MOV dword ptr [ESP + 0x60],EDX
005ca09a  FSTP float ptr [ESP + 0x30]
005ca09e  MOV dword ptr [ESP + 0x40],0x0
005ca0a6  JBE 0x005ca138
005ca0ac  MOV EDI,EBP
005ca0ae  JMP 0x005ca0b4
005ca0b0  MOV EBP,dword ptr [ESP + 0x6c]
005ca0b4  MOV ECX,dword ptr [EDI]
005ca0b6  MOV EAX,dword ptr [ESP + 0x10]
005ca0ba  MOV EDX,dword ptr [EDI + 0x8]
005ca0bd  MOV dword ptr [ESP + 0x14],ECX
005ca0c1  MOV ECX,dword ptr [EAX + EBX*0x4]
005ca0c4  SHL ECX,0x4
005ca0c7  FLD float ptr [ECX + EBP*0x1]
005ca0ca  LEA EAX,[ECX + EBP*0x1]
005ca0cd  FSUB float ptr [ESP + 0x14]
005ca0d1  MOV EBP,dword ptr [ESP + 0x14]
005ca0d5  MOV dword ptr [ESP + 0x18],EDX
005ca0d9  XOR ESI,ESI
005ca0db  FSTP float ptr [ESP + 0x20]
005ca0df  FLD float ptr [EAX + 0x8]
005ca0e2  FSUB float ptr [ESP + 0x18]
005ca0e6  FSTP float ptr [ESP + 0x1c]
005ca0ea  LEA EBX,[EBX]
005ca0f0  MOV EDX,dword ptr [ESP + 0x1c]
005ca0f4  MOV EAX,dword ptr [ESP + 0x20]
005ca0f8  MOV ECX,dword ptr [ESP + 0x18]
005ca0fc  PUSH EDX
005ca0fd  MOV EDX,dword ptr [ESP + ESI*0x1 + 0x28]
005ca101  PUSH EAX
005ca102  MOV EAX,dword ptr [ESP + ESI*0x1 + 0x3c]
005ca106  PUSH ECX
005ca107  MOV ECX,dword ptr [ESP + ESI*0x1 + 0x50]
005ca10b  PUSH EBP
005ca10c  PUSH EDX
005ca10d  MOV EDX,dword ptr [ESP + ESI*0x1 + 0x68]
005ca111  PUSH EAX
005ca112  PUSH ECX
005ca113  PUSH EDX
005ca114  CALL 0x005c58b0
005ca119  ADD ESP,0x20
005ca11c  TEST AL,AL
005ca11e  JNZ 0x005ca142
005ca120  ADD ESI,0x4
005ca123  CMP ESI,0x10
005ca126  JC 0x005ca0f0
005ca128  MOV EAX,dword ptr [ESP + 0x68]
005ca12c  INC EBX
005ca12d  ADD EDI,0x10
005ca130  CMP EBX,EAX
005ca132  JC 0x005ca0b0
005ca138  POP EDI
005ca139  POP ESI
005ca13a  POP EBP
005ca13b  XOR AL,AL
005ca13d  POP EBX
005ca13e  ADD ESP,0x54
005ca141  RET
005ca142  POP EDI
005ca143  POP ESI
005ca144  POP EBP
005ca145  MOV AL,0x1
005ca147  POP EBX
005ca148  ADD ESP,0x54
005ca14b  RET
