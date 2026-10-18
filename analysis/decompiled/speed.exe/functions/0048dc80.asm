0048dc80  SUB ESP,0x24
0048dc83  MOV EAX,dword ptr [ESP + 0x28]
0048dc87  FLD float ptr [EAX + 0x8]
0048dc8a  FLD float ptr [EAX + 0x4]
0048dc8d  FLD float ptr [EAX]
0048dc8f  FLD ST0
0048dc91  FMUL ST1
0048dc93  FLD ST2
0048dc95  FMUL ST3
0048dc97  FADDP
0048dc99  FLD ST3
0048dc9b  FMUL ST4
0048dc9d  FADDP
0048dc9f  FSQRT
0048dca1  FSTP ST3
0048dca3  FSTP ST0
0048dca5  FSTP ST0
0048dca7  FDIVR float ptr [0x0089096c]
0048dcad  FLD ST0
0048dcaf  FMUL float ptr [EAX]
0048dcb1  FSTP float ptr [ESP]
0048dcb4  FLD ST0
0048dcb6  FMUL float ptr [EAX + 0x4]
0048dcb9  FSTP float ptr [ESP + 0x4]
0048dcbd  FMUL float ptr [EAX + 0x8]
0048dcc0  MOV EAX,dword ptr [ESP + 0x2c]
0048dcc4  FSTP float ptr [ESP + 0x8]
0048dcc8  FLD float ptr [EAX + 0x8]
0048dccb  FLD float ptr [EAX + 0x4]
0048dcce  FLD float ptr [EAX]
0048dcd0  FLD ST0
0048dcd2  FMUL ST1
0048dcd4  FLD ST2
0048dcd6  FMUL ST3
0048dcd8  FADDP
0048dcda  FLD ST3
0048dcdc  FMUL ST4
0048dcde  FADDP
0048dce0  FSQRT
0048dce2  FSTP ST3
0048dce4  FSTP ST0
0048dce6  FSTP ST0
0048dce8  FDIVR float ptr [0x0089096c]
0048dcee  FLD ST0
0048dcf0  FMUL float ptr [EAX]
0048dcf2  FSTP float ptr [ESP + 0xc]
0048dcf6  FLD ST0
0048dcf8  FMUL float ptr [EAX + 0x4]
0048dcfb  FSTP float ptr [ESP + 0x10]
0048dcff  FMUL float ptr [EAX + 0x8]
0048dd02  FST float ptr [ESP + 0x14]
0048dd06  FMUL float ptr [ESP + 0x8]
0048dd0a  FLD float ptr [ESP + 0xc]
0048dd0e  FMUL float ptr [ESP]
0048dd11  FADDP
0048dd13  FLD float ptr [ESP + 0x10]
0048dd17  FMUL float ptr [ESP + 0x4]
0048dd1b  FADDP
0048dd1d  FCOM float ptr [0x008955a0]
0048dd23  FNSTSW AX
0048dd25  TEST AH,0x41
0048dd28  JNZ 0x0048dd45
0048dd2a  MOV EAX,dword ptr [ESP + 0x30]
0048dd2e  FSTP ST0
0048dd30  XOR ECX,ECX
0048dd32  MOV dword ptr [EAX],ECX
0048dd34  MOV dword ptr [EAX + 0x4],ECX
0048dd37  MOV dword ptr [EAX + 0x8],ECX
0048dd3a  MOV dword ptr [EAX + 0xc],0x3f800000
0048dd41  ADD ESP,0x24
0048dd44  RET
0048dd45  FCOMP float ptr [0x00895400]
0048dd4b  FNSTSW AX
0048dd4d  TEST AH,0x5
0048dd50  JP 0x0048dd7c
0048dd52  LEA EAX,[ESP + 0x18]
0048dd56  PUSH EAX
0048dd57  LEA ECX,[ESP + 0x4]
0048dd5b  PUSH ECX
0048dd5c  CALL 0x0048db70
0048dd61  MOV EDX,dword ptr [ESP + 0x38]
0048dd65  PUSH EDX
0048dd66  LEA EAX,[ESP + 0x24]
0048dd6a  PUSH 0x40490fdb
0048dd6f  PUSH EAX
0048dd70  CALL 0x0048dc20
0048dd75  ADD ESP,0x14
0048dd78  ADD ESP,0x24
0048dd7b  RET
0048dd7c  FLD float ptr [ESP + 0x14]
0048dd80  MOV ECX,dword ptr [ESP + 0x30]
0048dd84  FMUL float ptr [ESP + 0x4]
0048dd88  PUSH ECX
0048dd89  FLD float ptr [ESP + 0x14]
0048dd8d  LEA EDX,[ESP + 0x10]
0048dd91  FMUL float ptr [ESP + 0xc]
0048dd95  PUSH EDX
0048dd96  LEA EAX,[ESP + 0x8]
0048dd9a  PUSH EAX
0048dd9b  FSUBP
0048dd9d  FSTP float ptr [ESP + 0x24]
0048dda1  FLD float ptr [ESP + 0x14]
0048dda5  FMUL float ptr [ESP + 0x18]
0048dda9  FLD float ptr [ESP + 0x20]
0048ddad  FMUL float ptr [ESP + 0xc]
0048ddb1  FSUBP
0048ddb3  FSTP float ptr [ESP + 0x28]
0048ddb7  FLD float ptr [ESP + 0x1c]
0048ddbb  FMUL float ptr [ESP + 0xc]
0048ddbf  FLD float ptr [ESP + 0x18]
0048ddc3  FMUL float ptr [ESP + 0x10]
0048ddc7  FSUBP
0048ddc9  FSTP float ptr [ESP + 0x2c]
0048ddcd  CALL 0x0048da30
0048ddd2  ADD ESP,0x4
0048ddd5  LEA ECX,[ESP + 0x20]
0048ddd9  FSTP float ptr [ESP]
0048dddc  PUSH ECX
0048dddd  CALL 0x0048dc20
0048dde2  ADD ESP,0xc
0048dde5  ADD ESP,0x24
0048dde8  RET
