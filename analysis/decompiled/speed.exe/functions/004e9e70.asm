004e9e70  PUSH ECX
004e9e71  PUSH EBX
004e9e72  PUSH EBP
004e9e73  PUSH ESI
004e9e74  MOV ESI,dword ptr [ESP + 0x14]
004e9e78  MOV EAX,dword ptr [ESI]
004e9e7a  MOV ECX,dword ptr [EAX]
004e9e7c  MOV EAX,dword ptr [ECX + 0xc]
004e9e7f  MOV EDX,EAX
004e9e81  SAR EAX,0xc
004e9e84  AND EAX,0xf
004e9e87  AND EDX,0xfff
004e9e8d  MOV EBX,EAX
004e9e8f  MOV EAX,dword ptr [ECX + 0x14]
004e9e92  MOV dword ptr [ESP + 0x14],EDX
004e9e96  FILD dword ptr [ESP + 0x14]
004e9e9a  MOV EDX,EAX
004e9e9c  AND EDX,0xfff
004e9ea2  MOV dword ptr [ESP + 0x14],EDX
004e9ea6  FMUL float ptr [0x0089906c]
004e9eac  PUSH EDI
004e9ead  FILD dword ptr [ESP + 0x18]
004e9eb1  MOV EDI,dword ptr [ECX + 0x4]
004e9eb4  SAR EAX,0xc
004e9eb7  AND EDI,0xffff
004e9ebd  FMUL float ptr [0x0089906c]
004e9ec3  AND EAX,0xf
004e9ec6  TEST EDI,0x8000
004e9ecc  MOV EBP,EAX
004e9ece  FSTP float ptr [ESP + 0x18]
004e9ed2  MOV dword ptr [ESP + 0x10],EDI
004e9ed6  JZ 0x004e9ee2
004e9ed8  OR EDI,0xffff0000
004e9ede  MOV dword ptr [ESP + 0x10],EDI
004e9ee2  MOV ECX,dword ptr [ESI + 0x4]
004e9ee5  FCOM float ptr [ECX]
004e9ee7  FNSTSW AX
004e9ee9  TEST AH,0x41
004e9eec  JNZ 0x004e9f51
004e9eee  MOV EAX,dword ptr [ECX + 0x10]
004e9ef1  CMP dword ptr [EAX],0x0
004e9ef4  JNZ 0x004e9f13
004e9ef6  MOV dword ptr [ECX + 0x8],0x1
004e9efd  MOV EAX,dword ptr [ESI + 0x4]
004e9f00  MOV EDX,dword ptr [EAX + 0x18]
004e9f03  POP EDI
004e9f04  MOV dword ptr [EAX + 0xc],EDX
004e9f07  MOV EAX,dword ptr [ESI + 0x4]
004e9f0a  POP ESI
004e9f0b  FSTP float ptr [EAX]
004e9f0d  POP EBP
004e9f0e  POP EBX
004e9f0f  POP ECX
004e9f10  RET 0x4
004e9f13  FLD float ptr [ECX]
004e9f15  FMUL float ptr [0x008969bc]
004e9f1b  FDIV ST0,ST1
004e9f1d  CALL 0x007c4b80
004e9f22  FSTP ST0
004e9f24  PUSH 0x0
004e9f26  PUSH EAX
004e9f27  PUSH EBX
004e9f28  CALL 0x004e42a0
004e9f2d  ADD ESP,0xc
004e9f30  TEST EDI,EDI
004e9f32  JGE 0x004e9f3f
004e9f34  MOV ECX,dword ptr [ESI + 0x4]
004e9f37  MOV dword ptr [ECX + 0x1c],EAX
004e9f3a  JMP 0x004ea056
004e9f3f  MOV EDX,0x7fff
004e9f44  SUB EDX,EAX
004e9f46  MOV EAX,dword ptr [ESI + 0x4]
004e9f49  MOV dword ptr [EAX + 0x1c],EDX
004e9f4c  JMP 0x004ea056
004e9f51  MOV EDX,dword ptr [ECX + 0x10]
004e9f54  MOV EAX,dword ptr [EDX]
004e9f56  XOR EBX,EBX
004e9f58  CMP EAX,EBX
004e9f5a  JNZ 0x004e9ff0
004e9f60  FSTP ST0
004e9f62  FLD float ptr [0x00890968]
004e9f68  FLD float ptr [ECX + 0x4]
004e9f6b  FUCOMPP
004e9f6d  FNSTSW AX
004e9f6f  TEST AH,0x44
004e9f72  JP 0x004e9f7c
004e9f74  MOV EAX,dword ptr [ESI + 0x4]
004e9f77  MOV ECX,dword ptr [EAX]
004e9f79  MOV dword ptr [EAX + 0x4],ECX
004e9f7c  MOV EAX,dword ptr [ESI + 0x4]
004e9f7f  FLD float ptr [EAX]
004e9f81  FSUB float ptr [EAX + 0x4]
004e9f84  FCOMP float ptr [ESP + 0x18]
004e9f88  FNSTSW AX
004e9f8a  TEST AH,0x41
004e9f8d  JNZ 0x004e9fb8
004e9f8f  MOV EDX,dword ptr [ESI + 0x4]
004e9f92  MOV dword ptr [EDX + 0x8],EBX
004e9f95  MOV EAX,dword ptr [ESI + 0x4]
004e9f98  MOV dword ptr [EAX + 0xc],EBX
004e9f9b  MOV ECX,dword ptr [ESI + 0x4]
004e9f9e  MOV dword ptr [ECX],EBX
004e9fa0  MOV EDX,dword ptr [ESI + 0x4]
004e9fa3  MOV dword ptr [EDX + 0x4],EBX
004e9fa6  MOV EAX,dword ptr [ESI + 0x4]
004e9fa9  POP EDI
004e9faa  POP ESI
004e9fab  POP EBP
004e9fac  MOV dword ptr [EAX + 0x1c],0x7fff
004e9fb3  POP EBX
004e9fb4  POP ECX
004e9fb5  RET 0x4
004e9fb8  MOV EAX,dword ptr [ESI + 0x4]
004e9fbb  FLD float ptr [EAX]
004e9fbd  FSUB float ptr [EAX + 0x4]
004e9fc0  FMUL float ptr [0x008969bc]
004e9fc6  FDIV float ptr [ESP + 0x18]
004e9fca  FSUBR float ptr [0x008969bc]
004e9fd0  CALL 0x007c4b80
004e9fd5  PUSH EBX
004e9fd6  PUSH EAX
004e9fd7  PUSH EBP
004e9fd8  CALL 0x004e42a0
004e9fdd  ADD ESP,0xc
004e9fe0  CMP EDI,EBX
004e9fe2  JGE 0x004e9f3f
004e9fe8  MOV ECX,dword ptr [ESI + 0x4]
004e9feb  MOV dword ptr [ECX + 0x1c],EAX
004e9fee  JMP 0x004ea056
004e9ff0  CMP EAX,0x1
004e9ff3  JNZ 0x004ea039
004e9ff5  FLD float ptr [0x00890968]
004e9ffb  FLD float ptr [ECX + 0x4]
004e9ffe  FUCOMPP
004ea000  FNSTSW AX
004ea002  TEST AH,0x44
004ea005  JNP 0x004ea039
004ea007  MOV ECX,dword ptr [ESI + 0x4]
004ea00a  FSTP ST0
004ea00c  MOV dword ptr [ECX + 0x8],0x1
004ea013  MOV EDX,dword ptr [ESI + 0x4]
004ea016  MOV dword ptr [EDX],EBX
004ea018  MOV EAX,dword ptr [ESI + 0x4]
004ea01b  MOV ECX,dword ptr [EAX + 0x18]
004ea01e  MOV dword ptr [EAX + 0xc],ECX
004ea021  MOV EDX,dword ptr [ESI + 0x4]
004ea024  POP EDI
004ea025  MOV dword ptr [EDX + 0x1c],0x7fff
004ea02c  MOV EAX,dword ptr [ESI + 0x4]
004ea02f  POP ESI
004ea030  POP EBP
004ea031  MOV dword ptr [EAX + 0x4],EBX
004ea034  POP EBX
004ea035  POP ECX
004ea036  RET 0x4
004ea039  MOV ECX,dword ptr [ESI + 0x4]
004ea03c  MOV dword ptr [ECX + 0x8],EBX
004ea03f  MOV EDX,dword ptr [ESI + 0x4]
004ea042  MOV dword ptr [EDX + 0xc],EBX
004ea045  MOV EAX,dword ptr [ESI + 0x4]
004ea048  MOV dword ptr [EAX + 0x4],EBX
004ea04b  MOV ECX,dword ptr [ESI + 0x4]
004ea04e  FSTP float ptr [ECX]
004ea050  MOV EDX,dword ptr [ESI + 0x4]
004ea053  MOV dword ptr [EDX + 0x1c],EBX
004ea056  MOV EAX,dword ptr [ESI + 0x4]
004ea059  MOV ECX,dword ptr [EAX + 0x8]
004ea05c  TEST ECX,ECX
004ea05e  MOV ESI,EAX
004ea060  FILD dword ptr [ESI + 0x1c]
004ea063  FSUBR float ptr [0x008969bc]
004ea069  JZ 0x004ea0ab
004ea06b  MOV EAX,dword ptr [EAX + 0x10]
004ea06e  FMUL float ptr [0x00896ab8]
004ea074  CMP dword ptr [EAX],0x0
004ea077  JNZ 0x004ea08c
004ea079  FIMUL dword ptr [ESI + 0xc]
004ea07c  CALL 0x007c4b80
004ea081  POP EDI
004ea082  MOV dword ptr [ESI + 0x18],EAX
004ea085  POP ESI
004ea086  POP EBP
004ea087  POP EBX
004ea088  POP ECX
004ea089  RET 0x4
004ea08c  MOV EBX,dword ptr [ESI + 0xc]
004ea08f  SUB EDI,EBX
004ea091  MOV dword ptr [ESP + 0x18],EDI
004ea095  FIMUL dword ptr [ESP + 0x18]
004ea099  CALL 0x007c4b80
004ea09e  ADD EAX,EBX
004ea0a0  POP EDI
004ea0a1  MOV dword ptr [ESI + 0x18],EAX
004ea0a4  POP ESI
004ea0a5  POP EBP
004ea0a6  POP EBX
004ea0a7  POP ECX
004ea0a8  RET 0x4
004ea0ab  FMUL float ptr [0x00899068]
004ea0b1  FIMUL dword ptr [ESP + 0x10]
004ea0b5  CALL 0x007c4b80
004ea0ba  POP EDI
004ea0bb  MOV dword ptr [ESI + 0x18],EAX
004ea0be  POP ESI
004ea0bf  POP EBP
004ea0c0  POP EBX
004ea0c1  POP ECX
004ea0c2  RET 0x4
