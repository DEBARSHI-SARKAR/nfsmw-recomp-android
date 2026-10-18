005ff990  SUB ESP,0x20
005ff993  MOV AL,byte ptr [ESP + 0x34]
005ff997  PUSH EBX
005ff998  XOR BL,BL
005ff99a  TEST AL,AL
005ff99c  PUSH ESI
005ff99d  MOV ESI,ECX
005ff99f  MOV byte ptr [ESP + 0xb],0x0
005ff9a4  JZ 0x005ff9b3
005ff9a6  MOV dword ptr [ESP + 0x3c],0x3f800000
005ff9ae  JMP 0x005ffa8b
005ff9b3  MOV EAX,dword ptr [ESI + 0x1964]
005ff9b9  SUB EAX,0x0
005ff9bc  JZ 0x005ffa5a
005ff9c2  SUB EAX,0x2
005ff9c5  JNZ 0x005ffcad
005ff9cb  FLD float ptr [ESI + 0x449c]
005ff9d1  FADD float ptr [0x0089096c]
005ff9d7  FMUL float ptr [0x008933d4]
005ff9dd  FST float ptr [ESP + 0x3c]
005ff9e1  FCOMP float ptr [0x0089096c]
005ff9e7  FNSTSW AX
005ff9e9  TEST AH,0x5
005ff9ec  JP 0x005ffa52
005ff9ee  FLD float ptr [ESP + 0x3c]
005ff9f2  FLD float ptr [0x00890968]
005ff9f8  FCOMP float ptr [ESP + 0x3c]
005ff9fc  FNSTSW AX
005ff9fe  TEST AH,0x41
005ffa01  JNZ 0x005ffa0b
005ffa03  FSTP ST0
005ffa05  FLD float ptr [0x00890968]
005ffa0b  MOV ECX,dword ptr [ESI + 0x1968]
005ffa11  FST float ptr [ESP + 0xc]
005ffa15  TEST ECX,ECX
005ffa17  FSTP float ptr [ESP + 0x3c]
005ffa1b  JZ 0x005ffa8b
005ffa1d  CALL 0x005fc800
005ffa22  TEST AL,AL
005ffa24  JZ 0x005ffa28
005ffa26  MOV BL,0x1
005ffa28  MOV ECX,dword ptr [ESI + 0x1968]
005ffa2e  CALL 0x005fbd90
005ffa33  TEST AL,AL
005ffa35  JZ 0x005ffa8b
005ffa37  FLD float ptr [0x0089096c]
005ffa3d  MOV byte ptr [ESP + 0xb],0x1
005ffa42  FSUB float ptr [ESP + 0xc]
005ffa46  FMUL float ptr [0x008933d4]
005ffa4c  FADD float ptr [ESP + 0xc]
005ffa50  JMP 0x005ffa87
005ffa52  FLD float ptr [0x0089096c]
005ffa58  JMP 0x005ffa0b
005ffa5a  MOV ECX,dword ptr [ESI + 0x1968]
005ffa60  TEST ECX,ECX
005ffa62  JZ 0x005ffcad
005ffa68  CALL 0x005fc7a0
005ffa6d  TEST AL,AL
005ffa6f  JZ 0x005ffcad
005ffa75  MOV ECX,dword ptr [ESI + 0x1968]
005ffa7b  CALL 0x005fac10
005ffa80  FLD float ptr [EAX*0x4 + 0x8a37d8]
005ffa87  FSTP float ptr [ESP + 0x3c]
005ffa8b  MOV EAX,dword ptr [ESP + 0x2c]
005ffa8f  MOV ECX,dword ptr [EAX + 0x18]
005ffa92  PUSH EDI
005ffa93  MOV EDI,dword ptr [ESP + 0x34]
005ffa97  MOV AL,byte ptr [EDI + 0x2e]
005ffa9a  TEST AL,AL
005ffa9c  MOV dword ptr [ESP + 0x10],ECX
005ffaa0  JZ 0x005ffabe
005ffaa2  MOVZX EDX,AL
005ffaa5  MOV dword ptr [ESP + 0x30],EDX
005ffaa9  FILD dword ptr [ESP + 0x30]
005ffaad  FMUL float ptr [EDI + 0x30]
005ffab0  FLD float ptr [EDI + 0x78]
005ffab3  FMUL float ptr [EDI + 0x8]
005ffab6  FDIVP
005ffab8  FSTP float ptr [ESP + 0x30]
005ffabc  JMP 0x005ffac6
005ffabe  MOV dword ptr [ESP + 0x30],0x0
005ffac6  TEST BL,BL
005ffac8  MOV EAX,dword ptr [EDI + 0x5c]
005ffacb  MOV dword ptr [ESP + 0x14],EAX
005ffacf  JNZ 0x005ffb5c
005ffad5  MOV ESI,dword ptr [ESP + 0x10]
005ffad9  PUSH ESI
005ffada  MOV ECX,0x8f5b6c
005ffadf  CALL 0x006533b0
005ffae4  FSTP float ptr [ESP + 0x34]
005ffae8  PUSH ESI
005ffae9  MOV ECX,0x8f5b58
005ffaee  CALL 0x006533b0
005ffaf3  FLD float ptr [ESP + 0x34]
005ffaf7  FSUB ST0,ST1
005ffaf9  PUSH ESI
005ffafa  MOV ECX,0x8f5b94
005ffaff  FMUL float ptr [ESP + 0x44]
005ffb03  FADD ST0,ST1
005ffb05  FSTP float ptr [ESP + 0x38]
005ffb09  FSTP ST0
005ffb0b  CALL 0x006533b0
005ffb10  PUSH ESI
005ffb11  FSTP float ptr [ESP + 0x14]
005ffb15  MOV ECX,0x8f5b80
005ffb1a  CALL 0x006533b0
005ffb1f  FLD float ptr [ESP + 0x10]
005ffb23  FSUB ST0,ST1
005ffb25  FMUL float ptr [ESP + 0x40]
005ffb29  FADD ST0,ST1
005ffb2b  FSTP float ptr [ESP + 0x10]
005ffb2f  FSTP ST0
005ffb31  FLD float ptr [ESP + 0x40]
005ffb35  FMUL float ptr [0x00890968]
005ffb3b  FST float ptr [ESP + 0x40]
005ffb3f  FADD float ptr [0x008a37c8]
005ffb45  FMUL float ptr [ESP + 0x30]
005ffb49  FLD float ptr [ESP + 0x40]
005ffb4d  FADD float ptr [0x00890dc4]
005ffb53  FMUL float ptr [ESP + 0x14]
005ffb57  JMP 0x005ffc00
005ffb5c  MOV EAX,dword ptr [ESI + 0x44a4]
005ffb62  MOV dword ptr [ESP + 0x18],EAX
005ffb66  DEC EAX
005ffb67  MOV dword ptr [ESP + 0x40],EAX
005ffb6b  FILD dword ptr [ESP + 0x40]
005ffb6f  PUSH EBP
005ffb70  MOV EBP,dword ptr [ESP + 0x14]
005ffb74  LEA ECX,[ESI + 0x44a8]
005ffb7a  FMUL float ptr [0x00890dc4]
005ffb80  MOV dword ptr [ESP + 0x2c],ECX
005ffb84  PUSH EBP
005ffb85  LEA ECX,[ESP + 0x20]
005ffb89  FSTP float ptr [ESP + 0x2c]
005ffb8d  MOV dword ptr [ESP + 0x24],0x0
005ffb95  MOV dword ptr [ESP + 0x28],0x42c80000
005ffb9d  CALL 0x006533b0
005ffba2  FSTP float ptr [ESP + 0x14]
005ffba6  MOV EAX,dword ptr [ESI + 0x44d4]
005ffbac  MOV dword ptr [ESP + 0x1c],EAX
005ffbb0  DEC EAX
005ffbb1  MOV dword ptr [ESP + 0x44],EAX
005ffbb5  FILD dword ptr [ESP + 0x44]
005ffbb9  LEA EDX,[ESI + 0x44d8]
005ffbbf  PUSH EBP
005ffbc0  LEA ECX,[ESP + 0x20]
005ffbc4  FMUL float ptr [0x00890dc4]
005ffbca  MOV dword ptr [ESP + 0x24],0x0
005ffbd2  MOV dword ptr [ESP + 0x28],0x42c80000
005ffbda  FSTP float ptr [ESP + 0x2c]
005ffbde  MOV dword ptr [ESP + 0x30],EDX
005ffbe2  CALL 0x006533b0
005ffbe7  FSTP float ptr [ESP + 0x38]
005ffbeb  FLD float ptr [ESP + 0x34]
005ffbef  POP EBP
005ffbf0  FMUL float ptr [ESI + 0x4494]
005ffbf6  FLD float ptr [ESP + 0x14]
005ffbfa  FMUL float ptr [ESI + 0x4498]
005ffc00  FLD float ptr [0x008a3720]
005ffc06  FCOMP float ptr [ESP + 0x34]
005ffc0a  FNSTSW AX
005ffc0c  TEST AH,0x41
005ffc0f  JNZ 0x005ffc19
005ffc11  FLD float ptr [0x008a3720]
005ffc17  JMP 0x005ffc1d
005ffc19  FLD float ptr [ESP + 0x34]
005ffc1d  FLD float ptr [0x00890d3c]
005ffc23  FDIV ST0,ST1
005ffc25  FMUL float ptr [EDI + 0x7c]
005ffc28  POP EDI
005ffc29  FADD ST0,ST2
005ffc2b  FADD ST0,ST3
005ffc2d  FSTP float ptr [ESP + 0x3c]
005ffc31  FSTP ST0
005ffc33  FSTP ST0
005ffc35  FSTP ST0
005ffc37  FLD float ptr [ESP + 0x3c]
005ffc3b  FCOMP float ptr [0x00890da8]
005ffc41  FNSTSW AX
005ffc43  TEST AH,0x41
005ffc46  JNZ 0x005ffc91
005ffc48  FLD float ptr [ESP + 0x3c]
005ffc4c  FLD float ptr [0x0089096c]
005ffc52  FCOMP float ptr [ESP + 0x3c]
005ffc56  FNSTSW AX
005ffc58  TEST AH,0x5
005ffc5b  JP 0x005ffc65
005ffc5d  FSTP ST0
005ffc5f  FLD float ptr [0x0089096c]
005ffc65  MOV EAX,dword ptr [ESP + 0x38]
005ffc69  FST float ptr [ESP + 0x3c]
005ffc6d  FMUL float ptr [ESP + 0xc]
005ffc71  FSTP float ptr [EAX]
005ffc73  MOV AL,byte ptr [ESP + 0xb]
005ffc77  TEST AL,AL
005ffc79  JZ 0x005ffc99
005ffc7b  FLD float ptr [0x0089096c]
005ffc81  MOV ECX,dword ptr [ESP + 0x34]
005ffc85  POP ESI
005ffc86  FSTP float ptr [ECX]
005ffc88  MOV AL,0x1
005ffc8a  POP EBX
005ffc8b  ADD ESP,0x20
005ffc8e  RET 0x14
005ffc91  FLD float ptr [0x00890da8]
005ffc97  JMP 0x005ffc65
005ffc99  FLD float ptr [ESP + 0x3c]
005ffc9d  MOV ECX,dword ptr [ESP + 0x34]
005ffca1  POP ESI
005ffca2  FSTP float ptr [ECX]
005ffca4  MOV AL,0x1
005ffca6  POP EBX
005ffca7  ADD ESP,0x20
005ffcaa  RET 0x14
005ffcad  POP ESI
005ffcae  XOR AL,AL
005ffcb0  POP EBX
005ffcb1  ADD ESP,0x20
005ffcb4  RET 0x14
