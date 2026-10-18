0069eac0  FLD float ptr [ESP + 0x8]
0069eac4  PUSH ESI
0069eac5  MOV ESI,ECX
0069eac7  MOV ECX,dword ptr [ESI]
0069eac9  PUSH EDI
0069eaca  XOR EDI,EDI
0069eacc  CMP ECX,EDI
0069eace  JZ 0x0069eb75
0069ead4  FCOMP float ptr [0x008aac18]
0069eada  FNSTSW AX
0069eadc  TEST AH,0x41
0069eadf  JNZ 0x0069eb07
0069eae1  FLD float ptr [ESP + 0x1c]
0069eae5  FMUL float ptr [0x008aabd8]
0069eaeb  FCOM float ptr [0x00890968]
0069eaf1  FNSTSW AX
0069eaf3  TEST AH,0x5
0069eaf6  JP 0x0069eafa
0069eaf8  FCHS
0069eafa  FCOMP float ptr [0x008f8d10]
0069eb00  FNSTSW AX
0069eb02  TEST AH,0x41
0069eb05  JZ 0x0069eb33
0069eb07  FLD float ptr [ESP + 0x14]
0069eb0b  FCOMP float ptr [0x008f8d0c]
0069eb11  FNSTSW AX
0069eb13  TEST AH,0x5
0069eb16  JP 0x0069eb47
0069eb18  FLD float ptr [ESP + 0xc]
0069eb1c  FADD float ptr [ESI + 0xc]
0069eb1f  FST float ptr [ESI + 0xc]
0069eb22  FCOMP float ptr [0x008f8d14]
0069eb28  FNSTSW AX
0069eb2a  TEST AH,0x41
0069eb2d  JNZ 0x0069ebe6
0069eb33  MOV dword ptr [ESI],EDI
0069eb35  MOV dword ptr [ESI + 0x4],EDI
0069eb38  MOV dword ptr [ESI + 0xc],EDI
0069eb3b  POP EDI
0069eb3c  MOV dword ptr [ESI + 0x8],0x3f800000
0069eb43  POP ESI
0069eb44  RET 0x14
0069eb47  FLD float ptr [ESI + 0x4]
0069eb4a  MOV dword ptr [ESI + 0xc],EDI
0069eb4d  FSUB float ptr [ESP + 0xc]
0069eb51  FST float ptr [ESI + 0x4]
0069eb54  FCOMP float ptr [0x00890968]
0069eb5a  FNSTSW AX
0069eb5c  TEST AH,0x5
0069eb5f  JP 0x0069ebe6
0069eb65  DEC ECX
0069eb66  MOV dword ptr [ESI],ECX
0069eb68  MOV EAX,[0x008f8d1c]
0069eb6d  POP EDI
0069eb6e  MOV dword ptr [ESI + 0x4],EAX
0069eb71  POP ESI
0069eb72  RET 0x14
0069eb75  FCOMP float ptr [0x008f8d18]
0069eb7b  FNSTSW AX
0069eb7d  TEST AH,0x5
0069eb80  JP 0x0069ebe6
0069eb82  FLD float ptr [ESP + 0x14]
0069eb86  FCOMP float ptr [0x008933d4]
0069eb8c  FNSTSW AX
0069eb8e  TEST AH,0x41
0069eb91  JNZ 0x0069ebe6
0069eb93  MOV ECX,dword ptr [ESP + 0x14]
0069eb97  PUSH ECX
0069eb98  LEA EDX,[ESP + 0x18]
0069eb9c  PUSH EDX
0069eb9d  MOV ECX,0x8f8fa8
0069eba2  CALL 0x0046f7c0
0069eba7  FLD float ptr [ESP + 0x14]
0069ebab  FMUL float ptr [0x008ab698]
0069ebb1  MOV EAX,dword ptr [ESP + 0x18]
0069ebb5  AND EAX,0x1
0069ebb8  FSTP float ptr [ESI + 0x8]
0069ebbb  FLD float ptr [0x008aac78]
0069ebc1  FSUB float ptr [ESP + 0x14]
0069ebc5  MOV dword ptr [ESP + 0x14],EAX
0069ebc9  FIMUL dword ptr [0x008f8d20]
0069ebcf  FIADD dword ptr [ESP + 0x14]
0069ebd3  CALL 0x007c4b80
0069ebd8  MOV dword ptr [ESI],EAX
0069ebda  MOV ECX,dword ptr [0x008f8d1c]
0069ebe0  MOV dword ptr [ESI + 0x4],ECX
0069ebe3  MOV dword ptr [ESI + 0xc],EDI
0069ebe6  POP EDI
0069ebe7  POP ESI
0069ebe8  RET 0x14
