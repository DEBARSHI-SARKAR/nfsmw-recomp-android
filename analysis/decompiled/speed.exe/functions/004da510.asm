004da510  SUB ESP,0x8
004da513  PUSH ESI
004da514  MOV ESI,ECX
004da516  CALL 0x004ae8b0
004da51b  TEST AL,AL
004da51d  JNZ 0x004da562
004da51f  FLD float ptr [ESI + 0xfc]
004da525  FCOMP float ptr [0x00890dc4]
004da52b  FNSTSW AX
004da52d  TEST AH,0x41
004da530  JNZ 0x004da53d
004da532  FLD float ptr [ESI + 0xfc]
004da538  FADD float ptr [ESI + 0x6c]
004da53b  JMP 0x004da55f
004da53d  MOV ECX,dword ptr [ESI + 0x58]
004da540  PUSH 0x0
004da542  PUSH 0xfdf3bc20
004da547  CALL 0x00454810
004da54c  TEST EAX,EAX
004da54e  JNZ 0x004da55a
004da550  PUSH 0x4
004da552  CALL 0x006269b0
004da557  ADD ESP,0x4
004da55a  FLD float ptr [ESI + 0x6c]
004da55d  FSUB float ptr [EAX]
004da55f  FSTP float ptr [ESI + 0x6c]
004da562  FLD float ptr [ESI + 0x6c]
004da565  PUSH EDI
004da566  MOV EDI,dword ptr [ESI + 0x58]
004da569  FCOM float ptr [0x00890968]
004da56f  MOV EAX,dword ptr [EDI + 0x8]
004da572  MOV ECX,dword ptr [EAX + 0x14]
004da575  MOV dword ptr [ESP + 0x8],ECX
004da579  FNSTSW AX
004da57b  TEST AH,0x41
004da57e  JZ 0x004da588
004da580  FSTP ST0
004da582  FLD float ptr [0x00890968]
004da588  FLD float ptr [ESP + 0x8]
004da58c  FCOMP
004da58e  FNSTSW AX
004da590  TEST AH,0x5
004da593  JP 0x004da59b
004da595  FSTP ST0
004da597  FLD float ptr [ESP + 0x8]
004da59b  MOV EDX,dword ptr [ESI + 0x18]
004da59e  FST float ptr [ESI + 0x6c]
004da5a1  FLD float ptr [EDX + 0x64]
004da5a4  CALL 0x007c4b80
004da5a9  SUB EAX,0x3e8
004da5ae  MOV dword ptr [ESP + 0xc],EAX
004da5b2  FILD dword ptr [ESP + 0xc]
004da5b6  FMUL float ptr [0x00890dc4]
004da5bc  FST float ptr [ESP + 0x8]
004da5c0  FCOMP float ptr [0x00890968]
004da5c6  FNSTSW AX
004da5c8  TEST AH,0x41
004da5cb  JNZ 0x004da68c
004da5d1  FLD float ptr [ESP + 0x8]
004da5d5  FLD float ptr [0x0089096c]
004da5db  FCOMP float ptr [ESP + 0x8]
004da5df  FNSTSW AX
004da5e1  TEST AH,0x5
004da5e4  JP 0x004da5ee
004da5e6  FSTP ST0
004da5e8  FLD float ptr [0x0089096c]
004da5ee  FMUL float ptr [0x00897d98]
004da5f4  MOV EAX,dword ptr [EDI + 0x8]
004da5f7  FADD float ptr [0x00897d9c]
004da5fd  FSTP float ptr [ESP + 0xc]
004da601  FLD float ptr [ESP + 0xc]
004da605  FMUL float ptr [EAX + 0x14]
004da608  FSTP float ptr [ESP + 0x8]
004da60c  FCOM float ptr [0x00890968]
004da612  FNSTSW AX
004da614  TEST AH,0x41
004da617  JZ 0x004da621
004da619  FSTP ST0
004da61b  FLD float ptr [0x00890968]
004da621  FLD float ptr [ESP + 0x8]
004da625  FCOMP
004da627  FNSTSW AX
004da629  TEST AH,0x5
004da62c  JP 0x004da634
004da62e  FSTP ST0
004da630  FLD float ptr [ESP + 0x8]
004da634  FST float ptr [ESI + 0x6c]
004da637  MOV EDI,dword ptr [EDI + 0x8]
004da63a  FLD float ptr [ESP + 0xc]
004da63e  FMUL float ptr [EDI + 0x14]
004da641  FLD ST1
004da643  FUCOMPP
004da645  FNSTSW AX
004da647  TEST AH,0x44
004da64a  JP 0x004da697
004da64c  MOV AL,byte ptr [ESI + 0x78]
004da64f  TEST AL,AL
004da651  JNZ 0x004da697
004da653  LEA EDI,[ESI + 0x7c]
004da656  FSTP ST0
004da658  MOV ECX,EDI
004da65a  MOV byte ptr [ESI + 0x78],0x1
004da65e  CALL 0x004b0010
004da663  PUSH 0x0
004da665  PUSH 0x3e8
004da66a  PUSH 0x0
004da66c  PUSH 0x0
004da66e  MOV ECX,EDI
004da670  CALL 0x004b0040
004da675  PUSH 0x0
004da677  PUSH 0x7d0
004da67c  PUSH 0x4399999a
004da681  PUSH 0x0
004da683  MOV ECX,EDI
004da685  CALL 0x004b0040
004da68a  JMP 0x004da6b0
004da68c  FLD float ptr [0x00890968]
004da692  JMP 0x004da5ee
004da697  FLD float ptr [EDI + 0x14]
004da69a  FXCH
004da69c  FUCOMPP
004da69e  FNSTSW AX
004da6a0  TEST AH,0x44
004da6a3  JNP 0x004da6b0
004da6a5  MOV AL,byte ptr [ESI + 0x78]
004da6a8  TEST AL,AL
004da6aa  JZ 0x004da6b0
004da6ac  MOV byte ptr [ESI + 0x78],0x0
004da6b0  MOV EAX,dword ptr [ESI + 0x58]
004da6b3  FLD float ptr [ESI + 0x6c]
004da6b6  MOV ECX,dword ptr [EAX + 0x8]
004da6b9  FDIV float ptr [ECX + 0x14]
004da6bc  POP EDI
004da6bd  FSTP float ptr [ESI + 0x70]
004da6c0  MOV EDX,dword ptr [EAX + 0x8]
004da6c3  MOV EAX,dword ptr [EDX + 0x10]
004da6c6  MOV dword ptr [ESI + 0x5c],EAX
004da6c9  MOV AL,byte ptr [ESI + 0x78]
004da6cc  TEST AL,AL
004da6ce  JZ 0x004da6f9
004da6d0  MOV ECX,dword ptr [ESP + 0x10]
004da6d4  PUSH ECX
004da6d5  LEA ECX,[ESI + 0x7c]
004da6d8  CALL 0x004b0120
004da6dd  FLD float ptr [ESI + 0xf0]
004da6e3  CALL 0x007c4b80
004da6e8  MOV EDX,dword ptr [EAX*0x4 + 0x8f1550]
004da6ef  IMUL EDX,dword ptr [ESI + 0x5c]
004da6f3  SAR EDX,0xf
004da6f6  MOV dword ptr [ESI + 0x5c],EDX
004da6f9  XOR EAX,EAX
004da6fb  POP ESI
004da6fc  ADD ESP,0x8
004da6ff  RET 0x4
