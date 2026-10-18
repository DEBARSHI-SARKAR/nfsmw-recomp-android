0074ab20  PUSH EBP
0074ab21  MOV EBP,ESP
0074ab23  AND ESP,0xfffffff0
0074ab26  SUB ESP,0x14
0074ab29  MOV EAX,[0x00904a80]
0074ab2e  FLD float ptr [0x0089096c]
0074ab34  FSUB float ptr [0x00904ad8]
0074ab3a  PUSH EBX
0074ab3b  PUSH ESI
0074ab3c  PUSH EDI
0074ab3d  FSTP float ptr [0x00904ad4]
0074ab43  MOV EDI,ECX
0074ab45  MOV dword ptr [EDI + 0x33f4],EAX
0074ab4b  FLD float ptr [0x00904a80]
0074ab51  FMUL float ptr [0x008933d4]
0074ab57  LEA EBX,[EDI + 0x3460]
0074ab5d  MOV dword ptr [ESP + 0x1c],EDI
0074ab61  FSTP float ptr [EDI + 0x33f8]
0074ab67  MOV ECX,dword ptr [0x00904a90]
0074ab6d  FLD float ptr [0x00904a94]
0074ab73  FLD float ptr [0x00904a98]
0074ab79  MOV dword ptr [EDI + 0x3420],ECX
0074ab7f  FXCH
0074ab81  FSTP float ptr [EDI + 0x3424]
0074ab87  FSTP float ptr [EDI + 0x3428]
0074ab8d  MOV EDX,dword ptr [0x00904a20]
0074ab93  FLD float ptr [0x00904a24]
0074ab99  FLD float ptr [0x00904a28]
0074ab9f  MOV dword ptr [EDI + 0x3440],EDX
0074aba5  FXCH
0074aba7  FSTP float ptr [EDI + 0x3444]
0074abad  FSTP float ptr [EDI + 0x3448]
0074abb3  MOV EAX,[0x00904a2c]
0074abb8  MOV dword ptr [EBX],EAX
0074abba  FLD float ptr [0x00904a2c]
0074abc0  FLD float ptr [0x009b3788]
0074abc6  FUCOMPP
0074abc8  FNSTSW AX
0074abca  TEST AH,0x44
0074abcd  JNP 0x0074ac74
0074abd3  LEA ESI,[EDI + 0x36cc]
0074abd9  ADD EDI,0x3444
0074abdf  MOV dword ptr [ESP + 0x18],0x2
0074abe7  JMP 0x0074abf0
0074abf0  MOV dword ptr [ESP + 0x14],0xa
0074abf8  JMP 0x0074ac00
0074ac00  MOV ECX,dword ptr [EDI + -0x4]
0074ac03  PUSH ECX
0074ac04  CALL 0x0045da70
0074ac09  FLD float ptr [EDI + -0x4]
0074ac0c  FMUL float ptr [0x008933d4]
0074ac12  FSUBP
0074ac14  FSTP float ptr [ESI + -0x4]
0074ac17  MOV EDX,dword ptr [EDI]
0074ac19  PUSH EDX
0074ac1a  CALL 0x0045da70
0074ac1f  FLD float ptr [EDI]
0074ac21  FMUL float ptr [0x008933d4]
0074ac27  FSUBP
0074ac29  FSTP float ptr [ESI]
0074ac2b  MOV EAX,dword ptr [EDI + 0x4]
0074ac2e  PUSH EAX
0074ac2f  CALL 0x0045da70
0074ac34  FCHS
0074ac36  FSUB float ptr [EBX]
0074ac38  MOV EAX,dword ptr [ESP + 0x20]
0074ac3c  MOV dword ptr [ESI + 0x8],0xc7c34ff3
0074ac43  ADD ESP,0xc
0074ac46  FSTP float ptr [ESI + 0x4]
0074ac49  ADD ESI,0x10
0074ac4c  DEC EAX
0074ac4d  MOV dword ptr [ESP + 0x14],EAX
0074ac51  JNZ 0x0074ac00
0074ac53  MOV EAX,dword ptr [ESP + 0x18]
0074ac57  ADD EBX,0x4
0074ac5a  ADD EDI,0x10
0074ac5d  DEC EAX
0074ac5e  MOV dword ptr [ESP + 0x18],EAX
0074ac62  JNZ 0x0074abf0
0074ac64  MOV ECX,dword ptr [0x00904a2c]
0074ac6a  MOV EDI,dword ptr [ESP + 0x1c]
0074ac6e  MOV dword ptr [0x009b3788],ECX
0074ac74  FLD float ptr [0x0089096c]
0074ac7a  MOV EDX,dword ptr [EDI + 0x294]
0074ac80  TEST EDX,EDX
0074ac82  FSUB float ptr [0x009b0a40]
0074ac88  FMUL float ptr [0x00904ad8]
0074ac8e  FILD dword ptr [EDI + 0x294]
0074ac94  JGE 0x0074ac9c
0074ac96  FADD float ptr [0x00891214]
0074ac9c  FMUL ST1
0074ac9e  CALL 0x007c4b80
0074aca3  FSTP float ptr [EDI + 0x33ec]
0074aca9  MOV dword ptr [EDI + 0x33e4],EAX
0074acaf  POP EDI
0074acb0  POP ESI
0074acb1  POP EBX
0074acb2  MOV ESP,EBP
0074acb4  POP EBP
0074acb5  RET
