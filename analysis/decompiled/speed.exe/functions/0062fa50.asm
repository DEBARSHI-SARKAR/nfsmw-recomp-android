0062fa50  PUSH -0x1
0062fa52  PUSH 0x8780c8
0062fa57  MOV EAX,FS:[0x0]
0062fa5d  PUSH EAX
0062fa5e  MOV dword ptr FS:[0x0],ESP
0062fa65  SUB ESP,0x58
0062fa68  PUSH EBX
0062fa69  PUSH EBP
0062fa6a  PUSH ESI
0062fa6b  MOV ESI,ECX
0062fa6d  PUSH EDI
0062fa6e  MOV dword ptr [ESP + 0x14],ESI
0062fa72  MOV dword ptr [ESI],0x8a71e4
0062fa78  FLD float ptr [ESI + 0x14]
0062fa7b  MOV EBP,dword ptr [0x0092d93c]
0062fa81  FLD ST0
0062fa83  LEA EAX,[ESI + 0x18]
0062fa86  FMUL ST1
0062fa88  MOV ECX,dword ptr [EAX]
0062fa8a  MOV EDX,dword ptr [EAX + 0x4]
0062fa8d  MOV dword ptr [ESP + 0x18],ECX
0062fa91  FSTP float ptr [ESP + 0x10]
0062fa95  MOV ECX,dword ptr [EAX + 0x8]
0062fa98  MOV dword ptr [ESP + 0x1c],EDX
0062fa9c  FSTP ST0
0062fa9e  MOV EDX,dword ptr [EAX + 0xc]
0062faa1  MOV EAX,[0x0092d944]
0062faa6  MOV dword ptr [ESP + 0x20],ECX
0062faaa  LEA ECX,[EBP + EAX*0x4]
0062faae  CMP EBP,ECX
0062fab0  MOV dword ptr [ESP + 0x70],0x0
0062fab8  MOV dword ptr [ESP + 0x24],EDX
0062fabc  JZ 0x0062fb75
0062fac2  MOV EBX,dword ptr [EBP]
0062fac5  MOV EDX,dword ptr [EBX]
0062fac7  MOV ECX,EBX
0062fac9  CALL dword ptr [EDX + 0x1c]
0062facc  MOV EDI,EAX
0062face  TEST EDI,EDI
0062fad0  JZ 0x0062fb5c
0062fad6  MOV EAX,dword ptr [EBX]
0062fad8  LEA ECX,[ESP + 0x28]
0062fadc  PUSH ECX
0062fadd  MOV ECX,EBX
0062fadf  CALL dword ptr [EAX + 0x3c]
0062fae2  FLD float ptr [ESP + 0x5c]
0062fae6  FSUB float ptr [ESP + 0x1c]
0062faea  FLD float ptr [ESP + 0x58]
0062faee  FSUB float ptr [ESP + 0x18]
0062faf2  FLD float ptr [ESP + 0x60]
0062faf6  FSUB float ptr [ESP + 0x20]
0062fafa  FLD ST0
0062fafc  FMUL ST1
0062fafe  FLD ST2
0062fb00  FMUL ST3
0062fb02  FADDP
0062fb04  FLD ST3
0062fb06  FMUL ST4
0062fb08  FADDP
0062fb0a  FCOMP float ptr [ESP + 0x10]
0062fb0e  FSTP ST0
0062fb10  FNSTSW AX
0062fb12  FSTP ST0
0062fb14  TEST AH,0x5
0062fb17  FSTP ST0
0062fb19  JP 0x0062fb5c
0062fb1b  MOV ECX,dword ptr [0x00920390]
0062fb21  MOV EAX,ECX
0062fb23  ADD ECX,0x20
0062fb26  TEST EAX,EAX
0062fb28  MOV dword ptr [0x00920390],ECX
0062fb2e  JZ 0x0062fb5c
0062fb30  MOV ECX,dword ptr [EDI + 0x8]
0062fb33  MOV EDX,dword ptr [ESI + 0x10]
0062fb36  MOV EDI,dword ptr [ESI + 0xc]
0062fb39  MOV EBX,dword ptr [ESI + 0x8]
0062fb3c  MOV dword ptr [EAX + 0x4],0x20
0062fb43  MOV dword ptr [EAX],0x8a7204
0062fb49  MOV dword ptr [EAX + 0x8],EBX
0062fb4c  MOV dword ptr [EAX + 0xc],EDI
0062fb4f  MOV dword ptr [EAX + 0x10],EDX
0062fb52  MOV dword ptr [EAX + 0x14],ECX
0062fb55  MOV dword ptr [EAX + 0x18],0x0
0062fb5c  MOV EDX,dword ptr [0x0092d93c]
0062fb62  MOV EAX,[0x0092d944]
0062fb67  ADD EBP,0x4
0062fb6a  LEA ECX,[EDX + EAX*0x4]
0062fb6d  CMP EBP,ECX
0062fb6f  JNZ 0x0062fac2
0062fb75  MOV ECX,dword ptr [ESP + 0x68]
0062fb79  POP EDI
0062fb7a  MOV dword ptr [ESI],0x8a66f8
0062fb80  POP ESI
0062fb81  POP EBP
0062fb82  MOV dword ptr FS:[0x0],ECX
0062fb89  POP EBX
0062fb8a  ADD ESP,0x64
0062fb8d  RET
