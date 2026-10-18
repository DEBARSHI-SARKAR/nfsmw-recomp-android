0066bcc0  SUB ESP,0x10
0066bcc3  PUSH EBX
0066bcc4  MOV EBX,dword ptr [ESP + 0x2c]
0066bcc8  TEST EBX,EBX
0066bcca  PUSH ESI
0066bccb  PUSH EDI
0066bccc  JZ 0x0066bcd4
0066bcce  MOV dword ptr [EBX],0x0
0066bcd4  FLD float ptr [ESP + 0x2c]
0066bcd8  FCOMP float ptr [0x0089096c]
0066bcde  FNSTSW AX
0066bce0  TEST AH,0x5
0066bce3  JP 0x0066bd06
0066bce5  FLD float ptr [ESP + 0x2c]
0066bce9  FLD float ptr [0x00890968]
0066bcef  FCOMP float ptr [ESP + 0x2c]
0066bcf3  FNSTSW AX
0066bcf5  TEST AH,0x41
0066bcf8  JNZ 0x0066bd0c
0066bcfa  FSTP ST0
0066bcfc  MOV dword ptr [ESP + 0xc],0x0
0066bd04  JMP 0x0066bd10
0066bd06  FLD float ptr [0x0089096c]
0066bd0c  FSTP float ptr [ESP + 0xc]
0066bd10  MOV ECX,dword ptr [ESP + 0x20]
0066bd14  MOV EAX,dword ptr [ECX + 0x8]
0066bd17  MOV EDI,dword ptr [ESP + 0x30]
0066bd1b  MOV EDX,dword ptr [EAX + 0x5c]
0066bd1e  MOV ESI,dword ptr [ESP + 0x24]
0066bd22  MOV EAX,dword ptr [EAX + 0x58]
0066bd25  PUSH EDI
0066bd26  PUSH ESI
0066bd27  PUSH ECX
0066bd28  MOV dword ptr [ESP + 0x24],EDX
0066bd2c  MOV dword ptr [ESP + 0x20],EAX
0066bd30  MOV dword ptr [ESP + 0x2c],0x0
0066bd38  CALL 0x0066bc60
0066bd3d  FSTP float ptr [ESP + 0x30]
0066bd41  MOV EAX,dword ptr [ESI + 0x8]
0066bd44  MOV ECX,dword ptr [EAX + 0x18]
0066bd47  MOV EDX,dword ptr [EAX]
0066bd49  MOV EAX,dword ptr [EAX + 0x8]
0066bd4c  MOV dword ptr [ESP + 0x40],ECX
0066bd50  FLD float ptr [ESP + 0x40]
0066bd54  MOV dword ptr [ESP + 0x1c],EAX
0066bd58  FCOMP float ptr [0x00890968]
0066bd5e  ADD ESP,0xc
0066bd61  MOV dword ptr [ESP + 0x2c],EDX
0066bd65  FNSTSW AX
0066bd67  TEST AH,0x41
0066bd6a  JZ 0x0066bd81
0066bd6c  FLD float ptr [ESP + 0x2c]
0066bd70  FCOMP float ptr [0x00890968]
0066bd76  FNSTSW AX
0066bd78  TEST AH,0x41
0066bd7b  JNZ 0x0066bec9
0066bd81  TEST EDI,EDI
0066bd83  JZ 0x0066bdb0
0066bd85  FLD float ptr [EDI + 0x18]
0066bd88  FLD float ptr [ESP + 0x2c]
0066bd8c  FMUL ST1
0066bd8e  FMUL float ptr [0x008910f0]
0066bd94  FSUBR float ptr [ESP + 0x2c]
0066bd98  FSTP float ptr [ESP + 0x2c]
0066bd9c  FMUL float ptr [0x008910f0]
0066bda2  FADD float ptr [0x0089096c]
0066bda8  FMUL float ptr [ESP + 0x34]
0066bdac  FSTP float ptr [ESP + 0x34]
0066bdb0  FLD float ptr [ESP + 0x28]
0066bdb4  FCOMP float ptr [ESP + 0x24]
0066bdb8  FNSTSW AX
0066bdba  TEST AH,0x1
0066bdbd  JNZ 0x0066be49
0066bdc3  MOV ECX,dword ptr [ESP + 0x14]
0066bdc7  MOV EDX,dword ptr [ESP + 0x24]
0066bdcb  MOV EAX,dword ptr [ESP + 0x28]
0066bdcf  PUSH ECX
0066bdd0  PUSH EDX
0066bdd1  PUSH EAX
0066bdd2  CALL 0x00401ae0
0066bdd7  FLD float ptr [0x0089096c]
0066bddd  FSUB ST0,ST1
0066bddf  ADD ESP,0xc
0066bde2  TEST EBX,EBX
0066bde4  FMUL float ptr [ESP + 0x2c]
0066bde8  FXCH
0066bdea  FMUL float ptr [ESP + 0x34]
0066bdee  FADDP
0066bdf0  FSTP float ptr [ESP + 0x20]
0066bdf4  JZ 0x0066bec9
0066bdfa  FLD float ptr [ESP + 0x34]
0066bdfe  MOV ESI,dword ptr [ESI + 0x8]
0066be01  FCOMP float ptr [ESP + 0x2c]
0066be05  FNSTSW AX
0066be07  TEST AH,0x41
0066be0a  JNZ 0x0066be16
0066be0c  MOV ECX,dword ptr [ESP + 0x34]
0066be10  MOV dword ptr [ESP + 0x2c],ECX
0066be14  JMP 0x0066be1e
0066be16  MOV EDX,dword ptr [ESP + 0x2c]
0066be1a  MOV dword ptr [ESP + 0x2c],EDX
0066be1e  MOV EAX,dword ptr [ESP + 0x2c]
0066be22  MOV ECX,dword ptr [ESP + 0x20]
0066be26  PUSH EAX
0066be27  PUSH 0x0
0066be29  PUSH ECX
0066be2a  CALL 0x00401ae0
0066be2f  FMUL float ptr [ESI + 0x14]
0066be32  ADD ESP,0xc
0066be35  POP EDI
0066be36  FMUL float ptr [ESP + 0x8]
0066be3a  POP ESI
0066be3b  FSTP float ptr [EBX]
0066be3d  POP EBX
0066be3e  FLD float ptr [ESP]
0066be41  FMUL float ptr [ESP + 0x14]
0066be45  ADD ESP,0x10
0066be48  RET
0066be49  FLD float ptr [ESP + 0x10]
0066be4d  FCOMP float ptr [0x00890968]
0066be53  FNSTSW AX
0066be55  TEST AH,0x5
0066be58  JP 0x0066bec9
0066be5a  MOV EDX,dword ptr [ESP + 0x24]
0066be5e  MOV EAX,dword ptr [ESP + 0x18]
0066be62  MOV ECX,dword ptr [ESP + 0x28]
0066be66  PUSH EDX
0066be67  PUSH EAX
0066be68  PUSH ECX
0066be69  CALL 0x00401ae0
0066be6e  FST float ptr [ESP + 0x30]
0066be72  FMUL float ptr [ESP + 0x1c]
0066be76  ADD ESP,0xc
0066be79  TEST EBX,EBX
0066be7b  FSTP float ptr [ESP + 0x20]
0066be7f  JZ 0x0066bec9
0066be81  FLD float ptr [ESP + 0x34]
0066be85  MOV ESI,dword ptr [ESI + 0x8]
0066be88  FCOMP float ptr [ESP + 0x2c]
0066be8c  FNSTSW AX
0066be8e  TEST AH,0x41
0066be91  JNZ 0x0066be9d
0066be93  MOV EDX,dword ptr [ESP + 0x34]
0066be97  MOV dword ptr [ESP + 0x2c],EDX
0066be9b  JMP 0x0066bea5
0066be9d  MOV EAX,dword ptr [ESP + 0x2c]
0066bea1  MOV dword ptr [ESP + 0x2c],EAX
0066bea5  MOV ECX,dword ptr [ESP + 0x2c]
0066bea9  FLD float ptr [ESP + 0x20]
0066bead  PUSH ECX
0066beae  FCHS
0066beb0  PUSH 0x0
0066beb2  PUSH ECX
0066beb3  FSTP float ptr [ESP]
0066beb6  CALL 0x00401ae0
0066bebb  FMUL float ptr [ESI + 0x14]
0066bebe  ADD ESP,0xc
0066bec1  FMUL float ptr [ESP + 0x24]
0066bec5  FCHS
0066bec7  FSTP float ptr [EBX]
0066bec9  FLD float ptr [ESP + 0xc]
0066becd  POP EDI
0066bece  FMUL float ptr [ESP + 0x1c]
0066bed2  POP ESI
0066bed3  POP EBX
0066bed4  ADD ESP,0x10
0066bed7  RET
