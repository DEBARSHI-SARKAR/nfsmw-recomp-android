004db580  PUSH EBP
004db581  MOV EBP,ESP
004db583  AND ESP,0xfffffff0
004db586  SUB ESP,0x34
004db589  PUSH EBX
004db58a  PUSH ESI
004db58b  MOV ESI,ECX
004db58d  MOV AL,byte ptr [ESI + 0x8]
004db590  TEST AL,AL
004db592  PUSH EDI
004db593  JZ 0x004db7d8
004db599  CALL 0x0045ce40
004db59e  PUSH EAX
004db59f  MOV EAX,dword ptr [ESI + 0xf0]
004db5a5  PUSH EAX
004db5a6  CALL 0x0045ce70
004db5ab  FSTP float ptr [ESI + 0xec]
004db5b1  ADD ESP,0x8
004db5b4  CALL 0x0045ce40
004db5b9  MOV dword ptr [ESI + 0xf0],EAX
004db5bf  MOV EAX,[0x00919690]
004db5c4  TEST EAX,EAX
004db5c6  JZ 0x004db7d8
004db5cc  MOV ECX,dword ptr [ESI + 0x14]
004db5cf  MOV EDI,dword ptr [ECX + 0x34]
004db5d2  FLD float ptr [EDI + 0x58]
004db5d5  FLD float ptr [EDI + 0x54]
004db5d8  FLD float ptr [EDI + 0x50]
004db5db  FLD ST0
004db5dd  FMUL ST1
004db5df  FLD ST2
004db5e1  FMUL ST3
004db5e3  FADDP
004db5e5  FLD ST3
004db5e7  FMUL ST4
004db5e9  FADDP
004db5eb  FSQRT
004db5ed  FSTP ST3
004db5ef  FSTP ST0
004db5f1  FSTP ST0
004db5f3  FCOM float ptr [0x00897dd0]
004db5f9  FNSTSW AX
004db5fb  TEST AH,0x5
004db5fe  JP 0x004db60a
004db600  FSTP ST0
004db602  FLD float ptr [0x00897dd0]
004db608  JMP 0x004db61f
004db60a  FCOM float ptr [0x00897dd4]
004db610  FNSTSW AX
004db612  TEST AH,0x41
004db615  JNZ 0x004db61f
004db617  FSTP ST0
004db619  FLD float ptr [0x00898788]
004db61f  FMUL float ptr [0x008916cc]
004db625  FLD float ptr [0x00898784]
004db62b  FMUL ST1
004db62d  CALL 0x007c4b80
004db632  FLD float ptr [0x00898780]
004db638  FMUL ST1
004db63a  MOV dword ptr [ESI + 0x10c],EAX
004db640  CALL 0x007c4b80
004db645  FLD float ptr [0x008969bc]
004db64b  FMUL ST1
004db64d  MOV EBX,0x500
004db652  SUB EBX,EAX
004db654  CALL 0x007c4b80
004db659  FSUBR float ptr [0x0089096c]
004db65f  MOV ECX,dword ptr [ESI + 0x18]
004db662  MOV dword ptr [ESI + 0x100],EAX
004db668  FMUL float ptr [0x00897dcc]
004db66e  FST float ptr [ESI + 0xfc]
004db674  FCOMP float ptr [ECX + 0xa0]
004db67a  FNSTSW AX
004db67c  TEST AH,0x5
004db67f  JP 0x004db693
004db681  FLD float ptr [ECX + 0xa0]
004db687  FMUL float ptr [0x00897de0]
004db68d  FSTP float ptr [ESI + 0xfc]
004db693  PUSH EBX
004db694  CALL 0x0045dbf0
004db699  FMUL float ptr [EDI + 0x10]
004db69c  PUSH EBX
004db69d  FSTP float ptr [ESP + 0x20]
004db6a1  CALL 0x0045db30
004db6a6  FMUL float ptr [EDI + 0x14]
004db6a9  PUSH EBX
004db6aa  FSUBR float ptr [ESP + 0x24]
004db6ae  FMUL float ptr [ESI + 0xfc]
004db6b4  FSTP float ptr [ESP + 0x2c]
004db6b8  CALL 0x0045dbf0
004db6bd  FMUL float ptr [EDI + 0x14]
004db6c0  PUSH EBX
004db6c1  FSTP float ptr [ESP + 0x28]
004db6c5  CALL 0x0045db30
004db6ca  FMUL float ptr [EDI + 0x10]
004db6cd  MOV EAX,0xffff
004db6d2  SUB EAX,EBX
004db6d4  PUSH EAX
004db6d5  FADD float ptr [ESP + 0x2c]
004db6d9  MOV dword ptr [ESP + 0x2c],EAX
004db6dd  FMUL float ptr [ESI + 0xfc]
004db6e3  FSTP float ptr [ESP + 0x38]
004db6e7  CALL 0x0045dbf0
004db6ec  FMUL float ptr [EDI + 0x10]
004db6ef  MOV EBX,dword ptr [ESP + 0x2c]
004db6f3  PUSH EBX
004db6f4  FSTP float ptr [ESP + 0x34]
004db6f8  CALL 0x0045db30
004db6fd  FMUL float ptr [EDI + 0x14]
004db700  PUSH EBX
004db701  FSUBR float ptr [ESP + 0x38]
004db705  FMUL float ptr [ESI + 0xfc]
004db70b  FSTP float ptr [ESP + 0x4c]
004db70f  CALL 0x0045dbf0
004db714  FMUL float ptr [EDI + 0x14]
004db717  PUSH EBX
004db718  FSTP float ptr [ESP + 0x3c]
004db71c  CALL 0x0045db30
004db721  FMUL float ptr [EDI + 0x10]
004db724  MOV EAX,dword ptr [ESI + 0x108]
004db72a  ADD ESP,0x20
004db72d  TEST EAX,EAX
004db72f  FADD float ptr [ESP + 0x1c]
004db733  FMUL float ptr [ESI + 0xfc]
004db739  JNZ 0x004db760
004db73b  FLD float ptr [ESP + 0x20]
004db73f  FADD float ptr [EDI + 0x40]
004db742  FSTP float ptr [ESI + 0x90]
004db748  FLD float ptr [ESP + 0x24]
004db74c  FADD float ptr [EDI + 0x44]
004db74f  FSTP float ptr [ESI + 0x94]
004db755  MOV EDX,dword ptr [EDI + 0x48]
004db758  MOV dword ptr [ESI + 0x98],EDX
004db75e  JMP 0x004db781
004db760  FLD float ptr [ESP + 0x30]
004db764  FADD float ptr [EDI + 0x40]
004db767  FSTP float ptr [ESI + 0xa0]
004db76d  FLD ST0
004db76f  FADD float ptr [EDI + 0x44]
004db772  FSTP float ptr [ESI + 0xa4]
004db778  MOV EAX,dword ptr [EDI + 0x48]
004db77b  MOV dword ptr [ESI + 0xa8],EAX
004db781  MOV EAX,dword ptr [ESI + 0x110]
004db787  TEST EAX,EAX
004db789  JNZ 0x004db7b9
004db78b  FSTP ST0
004db78d  FLD float ptr [ESP + 0x20]
004db791  FADD float ptr [EDI + 0x40]
004db794  FSTP float ptr [ESI + 0x90]
004db79a  FLD float ptr [ESP + 0x24]
004db79e  FADD float ptr [EDI + 0x44]
004db7a1  FSTP float ptr [ESI + 0x94]
004db7a7  MOV ECX,dword ptr [EDI + 0x48]
004db7aa  MOV dword ptr [ESI + 0x98],ECX
004db7b0  POP EDI
004db7b1  POP ESI
004db7b2  POP EBX
004db7b3  MOV ESP,EBP
004db7b5  POP EBP
004db7b6  RET 0x4
004db7b9  FLD float ptr [ESP + 0x30]
004db7bd  FADD float ptr [EDI + 0x40]
004db7c0  FSTP float ptr [ESI + 0xa0]
004db7c6  FADD float ptr [EDI + 0x44]
004db7c9  FSTP float ptr [ESI + 0xa4]
004db7cf  MOV EDX,dword ptr [EDI + 0x48]
004db7d2  MOV dword ptr [ESI + 0xa8],EDX
004db7d8  POP EDI
004db7d9  POP ESI
004db7da  POP EBX
004db7db  MOV ESP,EBP
004db7dd  POP EBP
004db7de  RET 0x4
