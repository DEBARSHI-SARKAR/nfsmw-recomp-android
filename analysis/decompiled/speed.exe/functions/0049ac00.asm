0049ac00  SUB ESP,0x10
0049ac03  PUSH ESI
0049ac04  LEA EDX,[ESP + 0x4]
0049ac08  MOV ESI,ECX
0049ac0a  MOV ECX,dword ptr [ESI + 0x20]
0049ac0d  MOV EAX,dword ptr [ECX]
0049ac0f  PUSH EDX
0049ac10  MOV EDX,dword ptr [ESP + 0x1c]
0049ac14  PUSH EDX
0049ac15  CALL dword ptr [EAX + 0x20]
0049ac18  TEST AL,AL
0049ac1a  JZ 0x0049ac48
0049ac1c  FLD float ptr [0x00890968]
0049ac22  FLD float ptr [ESI + 0x28]
0049ac25  FUCOMPP
0049ac27  FNSTSW AX
0049ac29  TEST AH,0x44
0049ac2c  JNP 0x0049acf6
0049ac32  MOV ECX,dword ptr [ESI + 0x24]
0049ac35  MOV EAX,dword ptr [ECX]
0049ac37  LEA EDX,[ESP + 0xc]
0049ac3b  PUSH EDX
0049ac3c  MOV EDX,dword ptr [ESP + 0x20]
0049ac40  PUSH EDX
0049ac41  CALL dword ptr [EAX + 0x20]
0049ac44  TEST AL,AL
0049ac46  JNZ 0x0049ac51
0049ac48  XOR AL,AL
0049ac4a  POP ESI
0049ac4b  ADD ESP,0x10
0049ac4e  RET 0xc
0049ac51  FLD float ptr [0x0089096c]
0049ac57  MOV ECX,dword ptr [ESP + 0x20]
0049ac5b  FSUB float ptr [ESI + 0x28]
0049ac5e  FLD float ptr [ESP + 0xc]
0049ac62  FMUL float ptr [ESI + 0x28]
0049ac65  FLD float ptr [ESP + 0x4]
0049ac69  FMUL ST2
0049ac6b  FADDP
0049ac6d  FSTP float ptr [ECX]
0049ac6f  FLD float ptr [ESP + 0x10]
0049ac73  FMUL float ptr [ESI + 0x28]
0049ac76  FLD float ptr [ESP + 0x8]
0049ac7a  FMUL ST2
0049ac7c  FADDP
0049ac7e  FST float ptr [ECX + 0x4]
0049ac81  FLD float ptr [ECX]
0049ac83  FLD ST0
0049ac85  FMUL ST1
0049ac87  FLD ST2
0049ac89  FMUL ST3
0049ac8b  FADDP
0049ac8d  FSQRT
0049ac8f  FSTP ST2
0049ac91  FSTP ST0
0049ac93  FSTP float ptr [ESP + 0x20]
0049ac97  FLD float ptr [0x00890968]
0049ac9d  FLD float ptr [ESP + 0x20]
0049aca1  FUCOMPP
0049aca3  FNSTSW AX
0049aca5  TEST AH,0x44
0049aca8  JNP 0x0049ad10
0049acaa  FLD float ptr [ESP + 0x8]
0049acae  MOV AL,0x1
0049acb0  FMUL float ptr [ESP + 0x8]
0049acb4  FLD float ptr [ESP + 0x4]
0049acb8  FMUL float ptr [ESP + 0x4]
0049acbc  FADDP
0049acbe  FSQRT
0049acc0  FMUL ST1
0049acc2  FLD float ptr [ESP + 0x10]
0049acc6  FMUL float ptr [ESP + 0x10]
0049acca  FLD float ptr [ESP + 0xc]
0049acce  FMUL float ptr [ESP + 0xc]
0049acd2  FADDP
0049acd4  FSQRT
0049acd6  FSTP ST2
0049acd8  FXCH
0049acda  FMUL float ptr [ESI + 0x28]
0049acdd  POP ESI
0049acde  FADDP
0049ace0  FDIV float ptr [ESP + 0x1c]
0049ace4  FLD ST0
0049ace6  FMUL float ptr [ECX]
0049ace8  FSTP float ptr [ECX]
0049acea  FMUL float ptr [ECX + 0x4]
0049aced  FSTP float ptr [ECX + 0x4]
0049acf0  ADD ESP,0x10
0049acf3  RET 0xc
0049acf6  MOV EAX,dword ptr [ESP + 0x20]
0049acfa  FLD float ptr [ESP + 0x4]
0049acfe  MOV ECX,dword ptr [ESP + 0x8]
0049ad02  FSTP float ptr [EAX]
0049ad04  MOV dword ptr [EAX + 0x4],ECX
0049ad07  MOV AL,0x1
0049ad09  POP ESI
0049ad0a  ADD ESP,0x10
0049ad0d  RET 0xc
0049ad10  FSTP ST0
0049ad12  MOV AL,0x1
0049ad14  POP ESI
0049ad15  ADD ESP,0x10
0049ad18  RET 0xc
