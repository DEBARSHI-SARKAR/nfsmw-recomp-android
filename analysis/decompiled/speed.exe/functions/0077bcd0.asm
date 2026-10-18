0077bcd0  SUB ESP,0x18
0077bcd3  MOV EDX,dword ptr [0x009b38c0]
0077bcd9  PUSH EBX
0077bcda  MOV EBX,dword ptr [ESP + 0x24]
0077bcde  FLD float ptr [EBX]
0077bce0  PUSH EBP
0077bce1  PUSH ESI
0077bce2  MOV ESI,dword ptr [ESP + 0x28]
0077bce6  FSUB float ptr [ESI]
0077bce8  PUSH EDI
0077bce9  MOV EDI,dword ptr [ESP + 0x3c]
0077bced  IMUL EDI,EDI,0x16
0077bcf0  FSTP float ptr [ESP + 0x10]
0077bcf4  FLD float ptr [EBX + 0x4]
0077bcf7  FSUB float ptr [ESI + 0x4]
0077bcfa  FSTP float ptr [ESP + 0x14]
0077bcfe  FLD float ptr [EBX + 0x8]
0077bd01  FSUB float ptr [ESI + 0x8]
0077bd04  MOVZX EAX,word ptr [EDI + EDX*0x1 + 0x4]
0077bd09  MOV ECX,dword ptr [0x009b38b4]
0077bd0f  FSTP float ptr [ESP + 0x18]
0077bd13  ADD EDI,EDX
0077bd15  MOV dword ptr [ESP + 0x30],EAX
0077bd19  MOV EBP,ECX
0077bd1b  FILD dword ptr [ESP + 0x30]
0077bd1f  FMUL float ptr [0x009b3a14]
0077bd25  FLD float ptr [0x0089096c]
0077bd2b  FCOMP
0077bd2d  FNSTSW AX
0077bd2f  TEST AH,0x41
0077bd32  JNZ 0x0077bd3c
0077bd34  FSTP ST0
0077bd36  FLD float ptr [0x0089096c]
0077bd3c  FLD float ptr [ESP + 0x38]
0077bd40  LEA EAX,[ESP + 0x1c]
0077bd44  FDIV ST0,ST1
0077bd46  PUSH EAX
0077bd47  MOVSX EAX,word ptr [EDI + 0x8]
0077bd4b  IMUL EAX,EAX,0x16
0077bd4e  FSTP float ptr [ESP + 0x30]
0077bd52  FSTP ST0
0077bd54  ADD EAX,EDX
0077bd56  PUSH EAX
0077bd57  CALL 0x0076dda0
0077bd5c  FLD float ptr [ESP + 0x24]
0077bd60  FMUL float ptr [ESP + 0x18]
0077bd64  FLD float ptr [ESP + 0x1c]
0077bd68  FMUL float ptr [ESP + 0x10]
0077bd6c  FADDP
0077bd6e  FLD float ptr [ESP + 0x20]
0077bd72  FMUL float ptr [ESP + 0x14]
0077bd76  FADDP
0077bd78  FCOMP float ptr [0x00890968]
0077bd7e  FNSTSW AX
0077bd80  TEST AH,0x41
0077bd83  JNZ 0x0077bd8f
0077bd85  FLD float ptr [ESP + 0x2c]
0077bd89  FCHS
0077bd8b  FSTP float ptr [ESP + 0x2c]
0077bd8f  FLD float ptr [EBX]
0077bd91  PUSH ECX
0077bd92  FSUB float ptr [ESI]
0077bd94  FLD float ptr [EBX + 0x4]
0077bd97  FSUB float ptr [ESI + 0x4]
0077bd9a  FLD float ptr [EBX + 0x8]
0077bd9d  FSUB float ptr [ESI + 0x8]
0077bda0  FLD ST0
0077bda2  FMUL ST1
0077bda4  FLD ST2
0077bda6  FMUL ST3
0077bda8  FADDP
0077bdaa  FLD ST3
0077bdac  FMUL ST4
0077bdae  FADDP
0077bdb0  FSTP float ptr [ESP]
0077bdb3  FSTP ST0
0077bdb5  FSTP ST0
0077bdb7  FSTP ST0
0077bdb9  CALL 0x005c5e80
0077bdbe  MOV ECX,dword ptr [ESP + 0x38]
0077bdc2  FSTP float ptr [ESP + 0x40]
0077bdc6  FLD float ptr [ESP + 0x30]
0077bdca  ADD ESP,0x4
0077bdcd  FADD float ptr [ECX]
0077bdcf  FST float ptr [ESP + 0x30]
0077bdd3  FCOMP float ptr [0x00890968]
0077bdd9  FNSTSW AX
0077bddb  TEST AH,0x41
0077bdde  JNZ 0x0077be9d
0077bde4  FLD float ptr [ESP + 0x30]
0077bde8  FCOMP float ptr [0x0089096c]
0077bdee  FNSTSW AX
0077bdf0  TEST AH,0x5
0077bdf3  JP 0x0077be9d
0077bdf9  MOV EAX,dword ptr [ESP + 0x30]
0077bdfd  LEA EDX,[ESP + 0x10]
0077be01  PUSH EDX
0077be02  PUSH EAX
0077be03  PUSH EDI
0077be04  MOV ECX,EBP
0077be06  CALL 0x0077b720
0077be0b  FLD float ptr [ESP + 0x10]
0077be0f  FSUB float ptr [ESI]
0077be11  PUSH ECX
0077be12  FLD float ptr [ESP + 0x18]
0077be16  FSUB float ptr [ESI + 0x4]
0077be19  FLD float ptr [ESP + 0x1c]
0077be1d  FSUB float ptr [ESI + 0x8]
0077be20  FLD ST0
0077be22  FMUL ST1
0077be24  FLD ST2
0077be26  FMUL ST3
0077be28  FADDP
0077be2a  FLD ST3
0077be2c  FMUL ST4
0077be2e  FADDP
0077be30  FSTP float ptr [ESP]
0077be33  FSTP ST0
0077be35  FSTP ST0
0077be37  FSTP ST0
0077be39  CALL 0x005c5e80
0077be3e  FCOM float ptr [ESP + 0x40]
0077be42  ADD ESP,0x4
0077be45  FNSTSW AX
0077be47  TEST AH,0x41
0077be4a  JZ 0x0077be9b
0077be4c  MOV EDX,dword ptr [ESP + 0x10]
0077be50  FSTP float ptr [ESP + 0x3c]
0077be54  FLD float ptr [ESP + 0x30]
0077be58  MOV EAX,dword ptr [ESP + 0x14]
0077be5c  FADD float ptr [ESP + 0x2c]
0077be60  MOV ECX,EBX
0077be62  MOV dword ptr [ECX],EDX
0077be64  MOV EDX,dword ptr [ESP + 0x18]
0077be68  MOV dword ptr [ECX + 0x4],EAX
0077be6b  MOV EAX,dword ptr [ESP + 0x30]
0077be6f  FST float ptr [ESP + 0x30]
0077be73  FCOMP float ptr [0x00890968]
0077be79  MOV dword ptr [ECX + 0x8],EDX
0077be7c  MOV ECX,dword ptr [ESP + 0x34]
0077be80  MOV dword ptr [ECX],EAX
0077be82  FNSTSW AX
0077be84  TEST AH,0x41
0077be87  JZ 0x0077bde4
0077be8d  FLD float ptr [ESP + 0x3c]
0077be91  POP EDI
0077be92  POP ESI
0077be93  POP EBP
0077be94  POP EBX
0077be95  ADD ESP,0x18
0077be98  RET 0x14
0077be9b  FSTP ST0
0077be9d  FLD float ptr [ESP + 0x3c]
0077bea1  POP EDI
0077bea2  POP ESI
0077bea3  POP EBP
0077bea4  POP EBX
0077bea5  ADD ESP,0x18
0077bea8  RET 0x14
