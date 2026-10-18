0068d8e0  SUB ESP,0x18
0068d8e3  PUSH EBX
0068d8e4  PUSH EBP
0068d8e5  PUSH ESI
0068d8e6  PUSH EDI
0068d8e7  MOV EDI,ECX
0068d8e9  MOV ECX,dword ptr [EDI + 0x34]
0068d8ec  MOV EAX,dword ptr [ECX]
0068d8ee  CALL dword ptr [EAX + 0x54]
0068d8f1  FLD float ptr [ESP + 0x30]
0068d8f5  FCOMP float ptr [0x00890968]
0068d8fb  MOV EBP,dword ptr [ESP + 0x40]
0068d8ff  MOV ESI,dword ptr [ESP + 0x2c]
0068d903  MOV EBX,EAX
0068d905  FNSTSW AX
0068d907  TEST AH,0x41
0068d90a  JNZ 0x0068d9e9
0068d910  TEST EBP,EBP
0068d912  FLD float ptr [0x0089096c]
0068d918  FSUB float ptr [ESI + 0x4c]
0068d91b  MOV ECX,dword ptr [EDI + 0x78]
0068d91e  FLD float ptr [ECX + 0x70]
0068d921  FMUL float ptr [ESI + 0xbc]
0068d927  FMUL float ptr [ESP + 0x30]
0068d92b  FLD float ptr [0x008f89d8]
0068d931  FSUB float ptr [0x0089096c]
0068d937  FMUL ST2
0068d939  FADD float ptr [0x0089096c]
0068d93f  FMULP
0068d941  JZ 0x0068d954
0068d943  FLD float ptr [EBP + 0x10]
0068d946  FMUL float ptr [0x008910f0]
0068d94c  FADD float ptr [0x0089096c]
0068d952  FMULP
0068d954  FLD float ptr [ESI + 0x50]
0068d957  MOV EDX,dword ptr [ESI + 0x54]
0068d95a  MOV EAX,dword ptr [ESI + 0x58]
0068d95d  FXCH
0068d95f  FCHS
0068d961  MOV ECX,dword ptr [ESI + 0x70]
0068d964  FST float ptr [ESP + 0x30]
0068d968  MOV dword ptr [ESP + 0x20],EDX
0068d96c  FMUL ST1
0068d96e  MOV EDX,dword ptr [ESI + 0x74]
0068d971  MOV dword ptr [ESP + 0x24],EAX
0068d975  MOV EAX,dword ptr [ESI + 0x78]
0068d978  FSTP float ptr [ESP + 0x1c]
0068d97c  MOV dword ptr [ESP + 0x18],EAX
0068d980  MOV dword ptr [ESP + 0x10],ECX
0068d984  FSTP ST0
0068d986  MOV dword ptr [ESP + 0x14],EDX
0068d98a  FLD float ptr [ESP + 0x20]
0068d98e  FMUL float ptr [ESP + 0x30]
0068d992  FSTP float ptr [ESP + 0x20]
0068d996  FLD float ptr [ESP + 0x24]
0068d99a  FMUL float ptr [ESP + 0x30]
0068d99e  FSTP float ptr [ESP + 0x24]
0068d9a2  FLD float ptr [ESI + 0x6c]
0068d9a5  FCOMP float ptr [0x008933d4]
0068d9ab  FNSTSW AX
0068d9ad  TEST AH,0x1
0068d9b0  JNZ 0x0068d9c2
0068d9b2  FMUL float ptr [0x008f89dc]
0068d9b8  FADD float ptr [ESP + 0x14]
0068d9bc  FSTP float ptr [ESP + 0x14]
0068d9c0  JMP 0x0068d9c4
0068d9c2  FSTP ST0
0068d9c4  LEA ECX,[ESP + 0x10]
0068d9c8  PUSH ECX
0068d9c9  MOV EDX,ECX
0068d9cb  PUSH ESI
0068d9cc  PUSH EDX
0068d9cd  CALL 0x00486610
0068d9d2  MOV EAX,dword ptr [EBX]
0068d9d4  ADD ESP,0xc
0068d9d7  LEA ECX,[ESP + 0x10]
0068d9db  PUSH ECX
0068d9dc  LEA EDX,[ESP + 0x20]
0068d9e0  PUSH EDX
0068d9e1  MOV ECX,EBX
0068d9e3  CALL dword ptr [EAX + 0x88]
0068d9e9  FLD float ptr [ESP + 0x34]
0068d9ed  FCOMP float ptr [0x00890968]
0068d9f3  FNSTSW AX
0068d9f5  TEST AH,0x41
0068d9f8  JNZ 0x0068dbdc
0068d9fe  FLD float ptr [ESI + 0x14]
0068da01  FCOM float ptr [0x00890968]
0068da07  FNSTSW AX
0068da09  TEST AH,0x41
0068da0c  JZ 0x0068da16
0068da0e  FSTP ST0
0068da10  FLD float ptr [0x00890968]
0068da16  FSTP float ptr [ESP + 0x40]
0068da1a  FLD float ptr [ESI + 0x6c]
0068da1d  FCOMP float ptr [0x008933d4]
0068da23  FNSTSW AX
0068da25  TEST AH,0x1
0068da28  JNZ 0x0068da32
0068da2a  MOV dword ptr [ESP + 0x40],0x3f800000
0068da32  FLD float ptr [ESI + 0x20]
0068da35  FLD float ptr [ESI + 0x24]
0068da38  FLD float ptr [ESI + 0x28]
0068da3b  FLD float ptr [ESI + 0xbc]
0068da41  FCOMP float ptr [0x00891218]
0068da47  FNSTSW AX
0068da49  TEST AH,0x41
0068da4c  JNZ 0x0068da87
0068da4e  FSTP ST0
0068da50  MOV EAX,dword ptr [ESI + 0x54]
0068da53  FSTP ST0
0068da55  MOV ECX,dword ptr [ESI + 0x58]
0068da58  FSTP ST0
0068da5a  MOV dword ptr [ESP + 0x20],EAX
0068da5e  FLD float ptr [ESI + 0x50]
0068da61  MOV dword ptr [ESP + 0x24],ECX
0068da65  FLD float ptr [0x0089096c]
0068da6b  FDIV float ptr [ESI + 0xbc]
0068da71  FST float ptr [ESP + 0x30]
0068da75  FMULP
0068da77  FLD float ptr [ESP + 0x20]
0068da7b  FMUL float ptr [ESP + 0x30]
0068da7f  FLD float ptr [ESP + 0x24]
0068da83  FMUL float ptr [ESP + 0x30]
0068da87  FMUL float ptr [ESI + 0x28]
0068da8a  FXCH
0068da8c  FMUL float ptr [ESI + 0x24]
0068da8f  FADDP
0068da91  FXCH
0068da93  FMUL float ptr [ESI + 0x20]
0068da96  FADDP
0068da98  FCOM float ptr [0x00890968]
0068da9e  FNSTSW AX
0068daa0  TEST AH,0x41
0068daa3  JNZ 0x0068daab
0068daa5  FSTP float ptr [ESP + 0x30]
0068daa9  JMP 0x0068dab5
0068daab  FSTP ST0
0068daad  MOV dword ptr [ESP + 0x30],0x0
0068dab5  FLD float ptr [ESP + 0x30]
0068dab9  FLD float ptr [0x008f89d0]
0068dabf  CALL 0x007c45f0
0068dac4  FLD float ptr [0x008f89d4]
0068daca  FCOMP
0068dacc  FNSTSW AX
0068dace  TEST AH,0x41
0068dad1  JNZ 0x0068dae1
0068dad3  MOV EDX,dword ptr [0x008f89d4]
0068dad9  FSTP ST0
0068dadb  MOV dword ptr [ESP + 0x30],EDX
0068dadf  JMP 0x0068dae5
0068dae1  FSTP float ptr [ESP + 0x30]
0068dae5  MOV EAX,dword ptr [ESI + 0xbc]
0068daeb  PUSH EAX
0068daec  LEA ECX,[EDI + 0x70]
0068daef  PUSH ECX
0068daf0  CALL 0x0066bae0
0068daf5  FMUL float ptr [ESP + 0x38]
0068daf9  ADD ESP,0x8
0068dafc  FMUL float ptr [ESP + 0x40]
0068db00  FMUL float ptr [ESP + 0x34]
0068db04  FLD float ptr [0x00890968]
0068db0a  FLD float ptr [ESI + 0x6c]
0068db0d  FUCOMPP
0068db0f  FNSTSW AX
0068db11  TEST AH,0x44
0068db14  JP 0x0068db1c
0068db16  FMUL float ptr [0x0089119c]
0068db1c  TEST EBP,EBP
0068db1e  JZ 0x0068db31
0068db20  FLD float ptr [EBP + 0x10]
0068db23  FMUL float ptr [0x008910f0]
0068db29  FADD float ptr [0x0089096c]
0068db2f  FMULP
0068db31  FCOM float ptr [0x00890968]
0068db37  FNSTSW AX
0068db39  TEST AH,0x41
0068db3c  JNZ 0x0068dbda
0068db42  FLD float ptr [0x00890968]
0068db48  MOV EAX,dword ptr [ESI + 0x74]
0068db4b  FLD float ptr [ESI + 0x6c]
0068db4e  MOV EDX,dword ptr [ESI + 0x70]
0068db51  MOV ECX,dword ptr [ESI + 0x78]
0068db54  FUCOMPP
0068db56  MOV dword ptr [ESP + 0x20],EAX
0068db5a  MOV dword ptr [ESP + 0x1c],EDX
0068db5e  MOV dword ptr [ESP + 0x24],ECX
0068db62  FNSTSW AX
0068db64  TEST AH,0x44
0068db67  JNP 0x0068db87
0068db69  MOV EDX,dword ptr [EDI + 0x78]
0068db6c  FLD float ptr [EDX + 0x5c]
0068db6f  FMUL float ptr [0x00890dc4]
0068db75  FLD float ptr [ESP + 0x38]
0068db79  FSUB float ptr [ESP + 0x3c]
0068db7d  FMULP
0068db7f  FADD float ptr [ESP + 0x3c]
0068db83  FSTP float ptr [ESP + 0x24]
0068db87  LEA EAX,[ESP + 0x1c]
0068db8b  FCHS
0068db8d  PUSH EAX
0068db8e  FSTP float ptr [ESP + 0x18]
0068db92  MOV ECX,EAX
0068db94  PUSH ESI
0068db95  PUSH ECX
0068db96  MOV dword ptr [ESP + 0x1c],0x0
0068db9e  MOV dword ptr [ESP + 0x24],0x0
0068dba6  CALL 0x00486610
0068dbab  LEA EDX,[ESP + 0x1c]
0068dbaf  PUSH EDX
0068dbb0  MOV EAX,EDX
0068dbb2  PUSH ESI
0068dbb3  PUSH EAX
0068dbb4  CALL 0x00401670
0068dbb9  MOV EDX,dword ptr [EBX]
0068dbbb  ADD ESP,0x18
0068dbbe  LEA EAX,[ESP + 0x1c]
0068dbc2  PUSH EAX
0068dbc3  LEA ECX,[ESP + 0x14]
0068dbc7  PUSH ECX
0068dbc8  MOV ECX,EBX
0068dbca  CALL dword ptr [EDX + 0x88]
0068dbd0  POP EDI
0068dbd1  POP ESI
0068dbd2  POP EBP
0068dbd3  POP EBX
0068dbd4  ADD ESP,0x18
0068dbd7  RET 0x18
0068dbda  FSTP ST0
0068dbdc  POP EDI
0068dbdd  POP ESI
0068dbde  POP EBP
0068dbdf  POP EBX
0068dbe0  ADD ESP,0x18
0068dbe3  RET 0x18
