004db7f0  SUB ESP,0x8
004db7f3  PUSH ESI
004db7f4  MOV ESI,ECX
004db7f6  MOV AL,byte ptr [ESI + 0x29]
004db7f9  MOV CL,0x1
004db7fb  CMP AL,CL
004db7fd  JZ 0x004dba7c
004db803  FLD float ptr [0x00897de4]
004db809  FCOMP float ptr [ESP + 0x14]
004db80d  FNSTSW AX
004db80f  TEST AH,0x41
004db812  JZ 0x004dba7c
004db818  FLD float ptr [ESP + 0x14]
004db81c  MOV EAX,dword ptr [ESP + 0x14]
004db820  FCOMP float ptr [0x00897d78]
004db826  MOV dword ptr [ESI + 0xf8],EAX
004db82c  FNSTSW AX
004db82e  TEST AH,0x41
004db831  JNZ 0x004db83d
004db833  MOV dword ptr [ESI + 0xf8],0x428c0000
004db83d  FLD float ptr [ESI + 0xf8]
004db843  FCOMP float ptr [0x00897dd0]
004db849  FNSTSW AX
004db84b  TEST AH,0x5
004db84e  JP 0x004db85a
004db850  MOV dword ptr [ESI + 0xf8],0x40000000
004db85a  MOV EAX,dword ptr [ESP + 0x10]
004db85e  MOV byte ptr [ESI + 0x29],CL
004db861  MOV ECX,dword ptr [EAX + 0x4]
004db864  MOV EDX,dword ptr [EAX]
004db866  PUSH ECX
004db867  PUSH EDX
004db868  CALL 0x0045ded0
004db86d  MOVZX ECX,AX
004db870  LEA EDX,[ECX + 0x3fff]
004db876  ADD ESP,0x8
004db879  CMP EDX,0xffff
004db87f  LEA EDX,[EAX + 0x4001]
004db885  JG 0x004db88d
004db887  LEA EDX,[EAX + 0x3fff]
004db88d  ADD ECX,0xffffc001
004db893  MOV dword ptr [ESP + 0x10],EDX
004db897  JNS 0x004db8a0
004db899  ADD EAX,0xffffbfff
004db89e  JMP 0x004db8a5
004db8a0  ADD EAX,0xffffc001
004db8a5  FLD float ptr [ESI + 0x94]
004db8ab  MOV EDX,dword ptr [ESI + 0x90]
004db8b1  FLD float ptr [ESI + 0x98]
004db8b7  MOV dword ptr [ESP + 0x4],EAX
004db8bb  MOV EAX,dword ptr [ESI + 0x18]
004db8be  FXCH
004db8c0  MOV ECX,dword ptr [EAX + 0xa0]
004db8c6  FSTP float ptr [ESI + 0x54]
004db8c9  PUSH EBX
004db8ca  FSTP float ptr [ESI + 0x58]
004db8cd  LEA EBX,[ESI + 0x50]
004db8d0  MOV dword ptr [EBX],EDX
004db8d2  FLD float ptr [ESI + 0xa4]
004db8d8  FLD float ptr [ESI + 0xa8]
004db8de  MOV EAX,dword ptr [ESI + 0xa0]
004db8e4  PUSH EBP
004db8e5  FXCH
004db8e7  LEA EBP,[ESI + 0x60]
004db8ea  MOV dword ptr [ESP + 0x1c],ECX
004db8ee  FSTP float ptr [EBP + 0x4]
004db8f1  MOV ECX,dword ptr [ESP + 0x18]
004db8f5  PUSH EDI
004db8f6  FSTP float ptr [EBP + 0x8]
004db8f9  PUSH ECX
004db8fa  MOV dword ptr [EBP],EAX
004db8fd  CALL 0x0045db30
004db902  FMUL float ptr [ESP + 0x24]
004db906  MOV EDX,dword ptr [ESI + 0x18]
004db909  MOV ECX,dword ptr [ESP + 0x20]
004db90d  FADD float ptr [EDX + 0x94]
004db913  MOV EAX,EDX
004db915  PUSH ECX
004db916  MOV dword ptr [ESP + 0x1c],EAX
004db91a  FSTP float ptr [ESI + 0x34]
004db91d  LEA EDI,[ESI + 0x30]
004db920  CALL 0x0045dbf0
004db925  FMUL float ptr [ESP + 0x28]
004db929  MOV EAX,dword ptr [ESP + 0x1c]
004db92d  FADD float ptr [EAX + 0x90]
004db933  FSTP float ptr [EDI]
004db935  MOV EDX,dword ptr [EAX + 0x98]
004db93b  MOV EAX,dword ptr [ESP + 0x18]
004db93f  PUSH EAX
004db940  MOV dword ptr [ESI + 0x38],EDX
004db943  CALL 0x0045db30
004db948  FMUL float ptr [ESP + 0x2c]
004db94c  MOV ECX,dword ptr [ESI + 0x18]
004db94f  MOV EAX,dword ptr [ESP + 0x1c]
004db953  FADD float ptr [ECX + 0x94]
004db959  MOV EDX,ECX
004db95b  PUSH EAX
004db95c  MOV dword ptr [ESP + 0x24],EDX
004db960  FSTP float ptr [ESI + 0x44]
004db963  CALL 0x0045dbf0
004db968  FMUL float ptr [ESP + 0x30]
004db96c  MOV EAX,dword ptr [ESP + 0x24]
004db970  PUSH EBX
004db971  PUSH EDI
004db972  FADD float ptr [EAX + 0x90]
004db978  FSTP float ptr [ESI + 0x40]
004db97b  MOV ECX,dword ptr [EAX + 0x98]
004db981  MOV dword ptr [ESI + 0x48],ECX
004db984  CALL 0x0045f340
004db989  FADD float ptr [0x0089096c]
004db98f  LEA EAX,[ESI + 0x40]
004db992  PUSH EBP
004db993  PUSH EAX
004db994  FSTP float ptr [ESI + 0xd0]
004db99a  CALL 0x0045f340
004db99f  FADD float ptr [0x0089096c]
004db9a5  PUSH EBX
004db9a6  LEA EAX,[ESI + 0x30]
004db9a9  PUSH EAX
004db9aa  FSTP float ptr [ESI + 0xd4]
004db9b0  LEA EDI,[ESI + 0xb0]
004db9b6  PUSH EDI
004db9b7  CALL 0x004021e0
004db9bc  PUSH EBP
004db9bd  LEA EAX,[ESI + 0x40]
004db9c0  LEA EBX,[ESI + 0xc0]
004db9c6  PUSH EAX
004db9c7  PUSH EBX
004db9c8  CALL 0x004021e0
004db9cd  FLD float ptr [0x0089096c]
004db9d3  FDIV float ptr [ESI + 0xf8]
004db9d9  ADD ESP,0x38
004db9dc  FLD ST0
004db9de  FMUL float ptr [ESI + 0xd0]
004db9e4  FMUL float ptr [0x00894200]
004db9ea  FSTP float ptr [ESI + 0xdc]
004db9f0  FMUL float ptr [ESI + 0xd4]
004db9f6  FMUL float ptr [0x00894200]
004db9fc  FST float ptr [ESI + 0xd8]
004dba02  MOV EDX,dword ptr [EDI + 0x8]
004dba05  FDIVR float ptr [0x0089096c]
004dba0b  MOV dword ptr [ESP + 0x20],EDX
004dba0f  FLD float ptr [EDI + 0x4]
004dba12  FLD ST1
004dba14  FMUL float ptr [EDI]
004dba16  FSTP float ptr [EDI]
004dba18  FMUL ST1
004dba1a  FSTP float ptr [EDI + 0x4]
004dba1d  FLD float ptr [ESP + 0x20]
004dba21  FMUL ST1
004dba23  FSTP float ptr [EDI + 0x8]
004dba26  MOV EAX,dword ptr [EBX + 0x8]
004dba29  MOV dword ptr [ESP + 0x20],EAX
004dba2d  FSTP ST0
004dba2f  FLD float ptr [0x0089096c]
004dba35  FDIV float ptr [ESI + 0xdc]
004dba3b  FLD float ptr [EBX + 0x4]
004dba3e  FLD ST1
004dba40  FMUL float ptr [EBX]
004dba42  FSTP float ptr [EBX]
004dba44  FMUL ST1
004dba46  FSTP float ptr [EBX + 0x4]
004dba49  FLD float ptr [ESP + 0x20]
004dba4d  FMUL ST1
004dba4f  FSTP float ptr [EBX + 0x8]
004dba52  XOR EBX,EBX
004dba54  MOV dword ptr [ESI + 0xe4],EBX
004dba5a  FSTP ST0
004dba5c  MOV dword ptr [ESI + 0xe8],EBX
004dba62  CALL 0x0045ce40
004dba67  POP EDI
004dba68  POP EBP
004dba69  MOV byte ptr [ESI + 0xe0],BL
004dba6f  MOV byte ptr [ESI + 0xe1],BL
004dba75  MOV dword ptr [ESI + 0xf0],EAX
004dba7b  POP EBX
004dba7c  POP ESI
004dba7d  ADD ESP,0x8
004dba80  RET 0x8
