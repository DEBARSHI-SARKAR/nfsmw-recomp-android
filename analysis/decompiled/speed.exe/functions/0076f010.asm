0076f010  SUB ESP,0x24
0076f013  FLD float ptr [ECX]
0076f015  PUSH EDI
0076f016  FSUB float ptr [ESI]
0076f018  MOV EDI,dword ptr [ECX + 0x4]
0076f01b  MOV ECX,dword ptr [ECX + 0x8]
0076f01e  MOV dword ptr [ESP + 0x24],ECX
0076f022  MOV dword ptr [ESP + 0x20],EDI
0076f026  FLD float ptr [ESP + 0x20]
0076f02a  FSUB float ptr [ESI + 0x4]
0076f02d  FLD float ptr [ESP + 0x24]
0076f031  FSUB float ptr [ESI + 0x8]
0076f034  FSTP float ptr [ESP + 0x24]
0076f038  MOV ECX,dword ptr [ESP + 0x24]
0076f03c  MOV dword ptr [ESP + 0xc],ECX
0076f040  FXCH
0076f042  FSTP float ptr [ESP + 0x4]
0076f046  MOV ECX,dword ptr [ESP + 0x4]
0076f04a  MOV dword ptr [ESP + 0x10],ECX
0076f04e  FSTP float ptr [ESP + 0x8]
0076f052  MOV ECX,dword ptr [ESP + 0x8]
0076f056  FLD float ptr [EAX]
0076f058  MOV dword ptr [ESP + 0x14],ECX
0076f05c  FSUB float ptr [EDX]
0076f05e  MOV ECX,dword ptr [ESP + 0xc]
0076f062  MOV dword ptr [ESP + 0x18],ECX
0076f066  MOV ECX,dword ptr [EAX + 0x4]
0076f069  MOV EAX,dword ptr [EAX + 0x8]
0076f06c  MOV dword ptr [ESP + 0x20],ECX
0076f070  FLD float ptr [ESP + 0x20]
0076f074  FSUB float ptr [EDX + 0x4]
0076f077  MOV dword ptr [ESP + 0x24],EAX
0076f07b  FLD float ptr [ESP + 0x24]
0076f07f  FSUB float ptr [EDX + 0x8]
0076f082  FSTP float ptr [ESP + 0xc]
0076f086  MOV ECX,dword ptr [ESP + 0xc]
0076f08a  FXCH
0076f08c  MOV dword ptr [ESP + 0x24],ECX
0076f090  FSTP float ptr [ESP + 0x1c]
0076f094  MOV EDX,dword ptr [ESP + 0x1c]
0076f098  MOV dword ptr [ESP + 0x4],EDX
0076f09c  FSTP float ptr [ESP + 0x20]
0076f0a0  MOV EAX,dword ptr [ESP + 0x20]
0076f0a4  LEA EDX,[ESP + 0x1c]
0076f0a8  MOV dword ptr [ESP + 0x8],EAX
0076f0ac  PUSH EDX
0076f0ad  LEA EAX,[ESP + 0x14]
0076f0b1  PUSH EAX
0076f0b2  MOV dword ptr [ESP + 0x14],ECX
0076f0b6  CALL 0x0040fe20
0076f0bb  FLD float ptr [ESP + 0x14]
0076f0bf  FMUL float ptr [ESP + 0x2c]
0076f0c3  MOV ECX,dword ptr [ESP + 0x34]
0076f0c7  FLD float ptr [ESP + 0x10]
0076f0cb  ADD ESP,0x8
0076f0ce  FMUL float ptr [ESP + 0x20]
0076f0d2  POP EDI
0076f0d3  FADDP
0076f0d5  FLD float ptr [ESP]
0076f0d8  FMUL float ptr [ESP + 0x18]
0076f0dc  FADDP
0076f0de  FCHS
0076f0e0  FSTP float ptr [ECX]
0076f0e2  FLD float ptr [ESP + 0x8]
0076f0e6  FMUL float ptr [ESP + 0x8]
0076f0ea  FLD float ptr [ESP + 0x4]
0076f0ee  FMUL float ptr [ESP + 0x4]
0076f0f2  FADDP
0076f0f4  FLD float ptr [ESP]
0076f0f7  FMUL float ptr [ESP]
0076f0fa  FADDP
0076f0fc  FCOM float ptr [0x00891218]
0076f102  FNSTSW AX
0076f104  TEST AH,0x5
0076f107  JP 0x0076f115
0076f109  FSTP ST0
0076f10b  FLD float ptr [0x008b5a90]
0076f111  ADD ESP,0x24
0076f114  RET
0076f115  FLD float ptr [ESP + 0x14]
0076f119  FMUL float ptr [ESP + 0x8]
0076f11d  FLD float ptr [ESP + 0x10]
0076f121  FMUL float ptr [ESP + 0x4]
0076f125  FADDP
0076f127  FLD float ptr [ESP]
0076f12a  FMUL float ptr [ESP + 0xc]
0076f12e  FADDP
0076f130  FLD float ptr [0x00890da8]
0076f136  FDIV ST0,ST2
0076f138  FMULP
0076f13a  FSTP ST1
0076f13c  ADD ESP,0x24
0076f13f  RET
