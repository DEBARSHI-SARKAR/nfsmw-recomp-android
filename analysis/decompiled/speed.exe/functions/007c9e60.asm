007c9e60  PUSH EBP
007c9e61  MOV EBP,ESP
007c9e63  SUB ESP,0x30
007c9e66  PUSH 0xffff
007c9e6b  PUSH 0x133f
007c9e70  CALL 0x007dac10
007c9e75  ADD ESP,0x8
007c9e78  MOV dword ptr [EBP + -0x4],EAX
007c9e7b  MOVZX EAX,word ptr [EBP + 0xe]
007c9e7f  AND EAX,0x7ff0
007c9e84  CMP EAX,0x7ff0
007c9e89  JZ 0x007c9ea1
007c9e8b  MOVZX ECX,word ptr [EBP + 0x16]
007c9e8f  AND ECX,0x7ff0
007c9e95  CMP ECX,0x7ff0
007c9e9b  JNZ 0x007c9f61
007c9ea1  MOVZX EDX,word ptr [EBP + 0xe]
007c9ea5  AND EDX,0x7ff8
007c9eab  CMP EDX,0x7ff0
007c9eb1  JNZ 0x007c9ec3
007c9eb3  MOV EAX,dword ptr [EBP + 0xc]
007c9eb6  SHL EAX,0xd
007c9eb9  TEST EAX,EAX
007c9ebb  JNZ 0x007c9ee5
007c9ebd  CMP dword ptr [EBP + 0x8],0x0
007c9ec1  JNZ 0x007c9ee5
007c9ec3  MOVZX ECX,word ptr [EBP + 0x16]
007c9ec7  AND ECX,0x7ff8
007c9ecd  CMP ECX,0x7ff0
007c9ed3  JNZ 0x007c9f18
007c9ed5  MOV EDX,dword ptr [EBP + 0x14]
007c9ed8  SHL EDX,0xd
007c9edb  TEST EDX,EDX
007c9edd  JNZ 0x007c9ee5
007c9edf  CMP dword ptr [EBP + 0x10],0x0
007c9ee3  JZ 0x007c9f18
007c9ee5  MOV EAX,dword ptr [EBP + -0x4]
007c9ee8  PUSH EAX
007c9ee9  FLD double ptr [EBP + 0x8]
007c9eec  FADD double ptr [EBP + 0x10]
007c9eef  SUB ESP,0x8
007c9ef2  FSTP double ptr [ESP]
007c9ef5  FLD double ptr [EBP + 0x10]
007c9ef8  SUB ESP,0x8
007c9efb  FSTP double ptr [ESP]
007c9efe  FLD double ptr [EBP + 0x8]
007c9f01  SUB ESP,0x8
007c9f04  FSTP double ptr [ESP]
007c9f07  PUSH 0x26
007c9f09  PUSH 0x8
007c9f0b  CALL 0x007da170
007c9f10  ADD ESP,0x24
007c9f13  JMP 0x007ca184
007c9f18  MOVZX ECX,word ptr [EBP + 0xe]
007c9f1c  AND ECX,0x7ff8
007c9f22  CMP ECX,0x7ff8
007c9f28  JZ 0x007c9f3c
007c9f2a  MOVZX EDX,word ptr [EBP + 0x16]
007c9f2e  AND EDX,0x7ff8
007c9f34  CMP EDX,0x7ff8
007c9f3a  JNZ 0x007c9f61
007c9f3c  MOV EAX,dword ptr [EBP + -0x4]
007c9f3f  PUSH EAX
007c9f40  FLD double ptr [EBP + 0x10]
007c9f43  SUB ESP,0x8
007c9f46  FSTP double ptr [ESP]
007c9f49  FLD double ptr [EBP + 0x8]
007c9f4c  SUB ESP,0x8
007c9f4f  FSTP double ptr [ESP]
007c9f52  PUSH 0x26
007c9f54  CALL 0x007da000
007c9f59  ADD ESP,0x18
007c9f5c  JMP 0x007ca184
007c9f61  FLD double ptr [EBP + 0x8]
007c9f64  FLD double ptr [EBP + 0x10]
007c9f67  FUCOMPP
007c9f69  FNSTSW AX
007c9f6b  TEST AH,0x44
007c9f6e  JP 0x007c9f89
007c9f70  PUSH 0xffff
007c9f75  MOV ECX,dword ptr [EBP + -0x4]
007c9f78  PUSH ECX
007c9f79  CALL 0x007dac10
007c9f7e  ADD ESP,0x8
007c9f81  FLD double ptr [EBP + 0x8]
007c9f84  JMP 0x007ca184
007c9f89  FLD double ptr [0x008942e0]
007c9f8f  FLD double ptr [EBP + 0x8]
007c9f92  FUCOMPP
007c9f94  FNSTSW AX
007c9f96  TEST AH,0x44
007c9f99  JP 0x007c9fbf
007c9f9b  MOV dword ptr [EBP + -0x10],0x1
007c9fa2  FLD double ptr [EBP + 0x10]
007c9fa5  FCOMP double ptr [EBP + 0x8]
007c9fa8  FNSTSW AX
007c9faa  TEST AH,0x41
007c9fad  JNZ 0x007c9fb8
007c9faf  MOV dword ptr [EBP + -0xc],0x0
007c9fb6  JMP 0x007c9fbf
007c9fb8  MOV dword ptr [EBP + -0xc],0x80000000
007c9fbf  FLD double ptr [EBP + 0x8]
007c9fc2  FCOMP double ptr [0x008942e0]
007c9fc8  FNSTSW AX
007c9fca  TEST AH,0x41
007c9fcd  JNZ 0x007c9fdc
007c9fcf  FLD double ptr [EBP + 0x10]
007c9fd2  FCOMP double ptr [EBP + 0x8]
007c9fd5  FNSTSW AX
007c9fd7  TEST AH,0x5
007c9fda  JNP 0x007c9ff9
007c9fdc  FLD double ptr [EBP + 0x8]
007c9fdf  FCOMP double ptr [0x008942e0]
007c9fe5  FNSTSW AX
007c9fe7  TEST AH,0x5
007c9fea  JP 0x007ca019
007c9fec  FLD double ptr [EBP + 0x10]
007c9fef  FCOMP double ptr [EBP + 0x8]
007c9ff2  FNSTSW AX
007c9ff4  TEST AH,0x41
007c9ff7  JNZ 0x007ca019
007c9ff9  MOV EDX,dword ptr [EBP + 0x8]
007c9ffc  SUB EDX,0x1
007c9fff  MOV dword ptr [EBP + -0x10],EDX
007ca002  MOV EAX,dword ptr [EBP + 0xc]
007ca005  MOV dword ptr [EBP + -0xc],EAX
007ca008  CMP dword ptr [EBP + 0x8],0x0
007ca00c  JNZ 0x007ca017
007ca00e  MOV ECX,dword ptr [EBP + -0xc]
007ca011  SUB ECX,0x1
007ca014  MOV dword ptr [EBP + -0xc],ECX
007ca017  JMP 0x007ca06d
007ca019  FLD double ptr [EBP + 0x8]
007ca01c  FCOMP double ptr [0x008942e0]
007ca022  FNSTSW AX
007ca024  TEST AH,0x41
007ca027  JNZ 0x007ca036
007ca029  FLD double ptr [EBP + 0x10]
007ca02c  FCOMP double ptr [EBP + 0x8]
007ca02f  FNSTSW AX
007ca031  TEST AH,0x41
007ca034  JZ 0x007ca053
007ca036  FLD double ptr [EBP + 0x8]
007ca039  FCOMP double ptr [0x008942e0]
007ca03f  FNSTSW AX
007ca041  TEST AH,0x5
007ca044  JP 0x007ca06d
007ca046  FLD double ptr [EBP + 0x10]
007ca049  FCOMP double ptr [EBP + 0x8]
007ca04c  FNSTSW AX
007ca04e  TEST AH,0x5
007ca051  JP 0x007ca06d
007ca053  MOV EDX,dword ptr [EBP + 0x8]
007ca056  ADD EDX,0x1
007ca059  MOV dword ptr [EBP + -0x10],EDX
007ca05c  MOV EAX,dword ptr [EBP + 0xc]
007ca05f  MOV dword ptr [EBP + -0xc],EAX
007ca062  JNZ 0x007ca06d
007ca064  MOV ECX,dword ptr [EBP + -0xc]
007ca067  ADD ECX,0x1
007ca06a  MOV dword ptr [EBP + -0xc],ECX
007ca06d  MOVZX EDX,word ptr [EBP + -0xa]
007ca071  AND EDX,0x7ff0
007ca077  JNZ 0x007ca0ef
007ca079  MOV EAX,dword ptr [EBP + -0xc]
007ca07c  SHL EAX,0xc
007ca07f  TEST EAX,EAX
007ca081  JNZ 0x007ca089
007ca083  CMP dword ptr [EBP + -0x10],0x0
007ca087  JZ 0x007ca0ef
007ca089  LEA ECX,[EBP + -0x14]
007ca08c  PUSH ECX
007ca08d  FLD double ptr [EBP + -0x10]
007ca090  SUB ESP,0x8
007ca093  FSTP double ptr [ESP]
007ca096  CALL 0x007d9e70
007ca09b  ADD ESP,0xc
007ca09e  FSTP double ptr [EBP + -0x20]
007ca0a1  MOV EDX,dword ptr [EBP + -0x14]
007ca0a4  ADD EDX,0x600
007ca0aa  PUSH EDX
007ca0ab  FLD double ptr [EBP + -0x20]
007ca0ae  SUB ESP,0x8
007ca0b1  FSTP double ptr [ESP]
007ca0b4  CALL 0x007d9d20
007ca0b9  ADD ESP,0xc
007ca0bc  FSTP double ptr [EBP + -0x10]
007ca0bf  MOV EAX,dword ptr [EBP + -0x4]
007ca0c2  PUSH EAX
007ca0c3  FLD double ptr [EBP + -0x10]
007ca0c6  SUB ESP,0x8
007ca0c9  FSTP double ptr [ESP]
007ca0cc  FLD double ptr [EBP + 0x10]
007ca0cf  SUB ESP,0x8
007ca0d2  FSTP double ptr [ESP]
007ca0d5  FLD double ptr [EBP + 0x8]
007ca0d8  SUB ESP,0x8
007ca0db  FSTP double ptr [ESP]
007ca0de  PUSH 0x26
007ca0e0  PUSH 0x12
007ca0e2  CALL 0x007da170
007ca0e7  ADD ESP,0x24
007ca0ea  JMP 0x007ca184
007ca0ef  CMP dword ptr [EBP + -0xc],0x7ff00000
007ca0f6  JNZ 0x007ca0fe
007ca0f8  CMP dword ptr [EBP + -0x10],0x0
007ca0fc  JZ 0x007ca10d
007ca0fe  CMP dword ptr [EBP + -0xc],0xfff00000
007ca105  JNZ 0x007ca170
007ca107  CMP dword ptr [EBP + -0x10],0x0
007ca10b  JNZ 0x007ca170
007ca10d  LEA ECX,[EBP + -0x24]
007ca110  PUSH ECX
007ca111  FLD double ptr [EBP + -0x10]
007ca114  SUB ESP,0x8
007ca117  FSTP double ptr [ESP]
007ca11a  CALL 0x007d9e70
007ca11f  ADD ESP,0xc
007ca122  FSTP double ptr [EBP + -0x30]
007ca125  MOV EDX,dword ptr [EBP + -0x24]
007ca128  SUB EDX,0x600
007ca12e  PUSH EDX
007ca12f  FLD double ptr [EBP + -0x30]
007ca132  SUB ESP,0x8
007ca135  FSTP double ptr [ESP]
007ca138  CALL 0x007d9d20
007ca13d  ADD ESP,0xc
007ca140  FSTP double ptr [EBP + -0x10]
007ca143  MOV EAX,dword ptr [EBP + -0x4]
007ca146  PUSH EAX
007ca147  FLD double ptr [EBP + -0x10]
007ca14a  SUB ESP,0x8
007ca14d  FSTP double ptr [ESP]
007ca150  FLD double ptr [EBP + 0x10]
007ca153  SUB ESP,0x8
007ca156  FSTP double ptr [ESP]
007ca159  FLD double ptr [EBP + 0x8]
007ca15c  SUB ESP,0x8
007ca15f  FSTP double ptr [ESP]
007ca162  PUSH 0x26
007ca164  PUSH 0x11
007ca166  CALL 0x007da170
007ca16b  ADD ESP,0x24
007ca16e  JMP 0x007ca184
007ca170  PUSH 0xffff
007ca175  MOV ECX,dword ptr [EBP + -0x4]
007ca178  PUSH ECX
007ca179  CALL 0x007dac10
007ca17e  ADD ESP,0x8
007ca181  FLD double ptr [EBP + -0x10]
007ca184  MOV ESP,EBP
007ca186  POP EBP
007ca187  RET
