00478c40  PUSH EBP
00478c41  MOV EBP,ESP
00478c43  AND ESP,0xfffffff0
00478c46  SUB ESP,0x1c
00478c49  FLD float ptr [ECX + 0x10]
00478c4c  XOR EDX,EDX
00478c4e  FMUL float ptr [0x00890968]
00478c54  PUSH ESI
00478c55  FSTP float ptr [ECX + 0x10]
00478c58  FLD float ptr [ECX + 0x14]
00478c5b  FMUL float ptr [0x00890968]
00478c61  FSTP float ptr [ECX + 0x14]
00478c64  FLD float ptr [ECX + 0x18]
00478c67  FMUL float ptr [0x00890968]
00478c6d  FSTP float ptr [ECX + 0x18]
00478c70  MOV AL,byte ptr [ECX + 0x6]
00478c73  TEST AL,AL
00478c75  JBE 0x00478cae
00478c77  XOR ESI,ESI
00478c79  LEA ESP,[ESP]
00478c80  MOV EAX,dword ptr [ECX + 0x8]
00478c83  FLD float ptr [EAX + ESI*0x1 + 0x4]
00478c87  ADD EAX,ESI
00478c89  FLD float ptr [EAX + 0x8]
00478c8c  INC EDX
00478c8d  FLD float ptr [ECX + 0x10]
00478c90  ADD ESI,0x10
00478c93  FADD float ptr [EAX]
00478c95  FSTP float ptr [ECX + 0x10]
00478c98  FXCH
00478c9a  FADD float ptr [ECX + 0x14]
00478c9d  FSTP float ptr [ECX + 0x14]
00478ca0  FADD float ptr [ECX + 0x18]
00478ca3  FSTP float ptr [ECX + 0x18]
00478ca6  MOVZX EAX,byte ptr [ECX + 0x6]
00478caa  CMP EDX,EAX
00478cac  JL 0x00478c80
00478cae  MOVZX EAX,byte ptr [ECX + 0x6]
00478cb2  CMP EAX,0x1
00478cb5  MOV dword ptr [ESP + 0xc],0x1
00478cbd  JL 0x00478cc3
00478cbf  MOV dword ptr [ESP + 0xc],EAX
00478cc3  FILD dword ptr [ESP + 0xc]
00478cc7  POP ESI
00478cc8  FDIVR float ptr [0x0089096c]
00478cce  FLD ST0
00478cd0  FMUL float ptr [ECX + 0x10]
00478cd3  FLD ST1
00478cd5  FMUL float ptr [ECX + 0x14]
00478cd8  FXCH ST2
00478cda  FMUL float ptr [ECX + 0x18]
00478cdd  FSTP float ptr [ESP + 0x14]
00478ce1  MOV EDX,dword ptr [ESP + 0x14]
00478ce5  MOV dword ptr [ECX + 0x28],EDX
00478ce8  FSTP float ptr [ECX + 0x20]
00478ceb  FSTP float ptr [ECX + 0x24]
00478cee  MOV ESP,EBP
00478cf0  POP EBP
00478cf1  RET
