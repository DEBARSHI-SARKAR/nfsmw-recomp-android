0068bd60  SUB ESP,0x18
0068bd63  PUSH EBX
0068bd64  PUSH ESI
0068bd65  MOV ESI,dword ptr [ESP + 0x2c]
0068bd69  PUSH EDI
0068bd6a  MOV EDI,ECX
0068bd6c  MOV EAX,dword ptr [EDI + 0x84]
0068bd72  MOV ECX,dword ptr [EAX + 0x20]
0068bd75  ADD EAX,0x20
0068bd78  MOV dword ptr [ESI + 0xbc],ECX
0068bd7e  MOV EDX,dword ptr [EAX + 0x4]
0068bd81  MOV dword ptr [ESI + 0xc0],EDX
0068bd87  MOV EAX,dword ptr [EAX + 0x8]
0068bd8a  LEA EBX,[EDI + 0x48]
0068bd8d  MOV dword ptr [ESI + 0xc4],EAX
0068bd93  MOV EDX,dword ptr [EBX]
0068bd95  MOV ECX,EBX
0068bd97  CALL dword ptr [EDX + 0x4]
0068bd9a  MOV EDX,dword ptr [EAX]
0068bd9c  MOV ECX,EAX
0068bd9e  CALL dword ptr [EDX + 0x24]
0068bda1  TEST AL,AL
0068bda3  JZ 0x0068beb7
0068bda9  MOV EAX,dword ptr [EDI + 0x50]
0068bdac  LEA ECX,[EDI + 0x50]
0068bdaf  CALL dword ptr [EAX + 0x98]
0068bdb5  MOV EDI,dword ptr [ESP + 0x2c]
0068bdb9  FLD float ptr [EDI + 0x14]
0068bdbc  FMUL float ptr [EAX + 0x8]
0068bdbf  FLD float ptr [EDI + 0x10]
0068bdc2  FMUL float ptr [EAX + 0x4]
0068bdc5  FADDP
0068bdc7  FLD float ptr [EDI + 0xc]
0068bdca  FMUL float ptr [EAX]
0068bdcc  FADDP
0068bdce  FCHS
0068bdd0  FST float ptr [ESP + 0x30]
0068bdd4  FCOMP float ptr [0x008aac20]
0068bdda  FNSTSW AX
0068bddc  TEST AH,0x1
0068bddf  JNZ 0x0068be7a
0068bde5  MOV EDX,dword ptr [EBX]
0068bde7  MOV ECX,EBX
0068bde9  CALL dword ptr [EDX + 0x24]
0068bdec  FLD float ptr [EDI + 0x14]
0068bdef  FMUL float ptr [EAX + 0x8]
0068bdf2  PUSH 0x40a00000
0068bdf7  FLD float ptr [EDI + 0x10]
0068bdfa  PUSH 0x0
0068bdfc  FMUL float ptr [EAX + 0x4]
0068bdff  PUSH ECX
0068be00  FADDP
0068be02  FLD float ptr [EDI + 0xc]
0068be05  FMUL float ptr [EAX]
0068be07  FADDP
0068be09  FCHS
0068be0b  FSTP float ptr [ESP]
0068be0e  CALL 0x00401ae0
0068be13  MOV EAX,dword ptr [ESP + 0x3c]
0068be17  PUSH 0x3f800000
0068be1c  PUSH 0xbf800000
0068be21  FSTP float ptr [ESP + 0x40]
0068be25  PUSH EAX
0068be26  CALL 0x00401ae0
0068be2b  FMUL float ptr [ESP + 0x44]
0068be2f  FLD float ptr [0x008aac1c]
0068be35  LEA ECX,[ESI + 0x80]
0068be3b  MOV EDX,dword ptr [ECX]
0068be3d  MOV EAX,dword ptr [ECX + 0x4]
0068be40  FMUL ST1
0068be42  MOV ECX,dword ptr [ECX + 0x8]
0068be45  MOV dword ptr [ESP + 0x28],EAX
0068be49  FADD float ptr [0x0089096c]
0068be4f  MOV dword ptr [ESP + 0x24],EDX
0068be53  ADD ESP,0x18
0068be56  LEA EDX,[ESP + 0xc]
0068be5a  FMUL float ptr [ESP + 0x10]
0068be5e  MOV dword ptr [ESP + 0x14],ECX
0068be62  PUSH EDX
0068be63  MOV ECX,ESI
0068be65  FSTP float ptr [ESP + 0x14]
0068be69  FMUL float ptr [0x00890968]
0068be6f  FSTP float ptr [ESI + 0x10c]
0068be75  CALL 0x004872e0
0068be7a  LEA EAX,[ESI + 0x8c]
0068be80  MOV ECX,dword ptr [EAX]
0068be82  MOV EDX,dword ptr [EAX + 0x4]
0068be85  MOV EAX,dword ptr [EAX + 0x8]
0068be88  MOV dword ptr [ESP + 0x1c],EDX
0068be8c  FLD float ptr [ESP + 0x1c]
0068be90  FMUL float ptr [0x00890968]
0068be96  MOV dword ptr [ESP + 0x18],ECX
0068be9a  LEA ECX,[ESP + 0x18]
0068be9e  PUSH ECX
0068be9f  MOV ECX,ESI
0068bea1  FSTP float ptr [ESP + 0x20]
0068bea5  MOV dword ptr [ESP + 0x24],EAX
0068bea9  CALL 0x00487330
0068beae  POP EDI
0068beaf  POP ESI
0068beb0  POP EBX
0068beb1  ADD ESP,0x18
0068beb4  RET 0xc
0068beb7  LEA EDX,[ESI + 0x8c]
0068bebd  MOV EAX,dword ptr [EDX]
0068bebf  MOV ECX,dword ptr [EDX + 0x4]
0068bec2  MOV EDX,dword ptr [EDX + 0x8]
0068bec5  MOV dword ptr [ESP + 0x18],EAX
0068bec9  MOV dword ptr [ESP + 0x1c],ECX
0068becd  LEA EAX,[ESP + 0x18]
0068bed1  PUSH EAX
0068bed2  MOV ECX,ESI
0068bed4  MOV dword ptr [ESP + 0x24],EDX
0068bed8  MOV dword ptr [ESP + 0x20],0x0
0068bee0  CALL 0x00487330
0068bee5  POP EDI
0068bee6  POP ESI
0068bee7  POP EBX
0068bee8  ADD ESP,0x18
0068beeb  RET 0xc
