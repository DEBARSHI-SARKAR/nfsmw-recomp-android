00478b70  PUSH EBP
00478b71  MOV EBP,ESP
00478b73  AND ESP,0xfffffff0
00478b76  SUB ESP,0x1c
00478b79  MOV AL,byte ptr [ECX + 0x6]
00478b7c  CMP AL,byte ptr [ECX + 0x5]
00478b7f  PUSH ESI
00478b80  JNC 0x00478b87
00478b82  INC AL
00478b84  MOV byte ptr [ECX + 0x6],AL
00478b87  MOVZX EAX,byte ptr [ECX + 0x7]
00478b8b  MOV EDX,dword ptr [ECX + 0x8]
00478b8e  SHL EAX,0x4
00478b91  ADD EAX,EDX
00478b93  MOV EDX,dword ptr [EBP + 0x8]
00478b96  FLD float ptr [EAX + 0x4]
00478b99  FLD float ptr [EAX + 0x8]
00478b9c  FLD float ptr [ECX + 0x10]
00478b9f  FSUB float ptr [EAX]
00478ba1  FSTP float ptr [ECX + 0x10]
00478ba4  FLD float ptr [ECX + 0x14]
00478ba7  FSUB ST0,ST2
00478ba9  FSTP float ptr [ECX + 0x14]
00478bac  FLD float ptr [ECX + 0x18]
00478baf  FSUB ST0,ST1
00478bb1  FSTP float ptr [ECX + 0x18]
00478bb4  FSTP ST0
00478bb6  FSTP ST0
00478bb8  FLD float ptr [EDX + 0x4]
00478bbb  FLD float ptr [EDX + 0x8]
00478bbe  FLD float ptr [EDX]
00478bc0  FADD float ptr [ECX + 0x10]
00478bc3  FSTP float ptr [ECX + 0x10]
00478bc6  FXCH
00478bc8  FADD float ptr [ECX + 0x14]
00478bcb  FSTP float ptr [ECX + 0x14]
00478bce  FADD float ptr [ECX + 0x18]
00478bd1  FSTP float ptr [ECX + 0x18]
00478bd4  MOVZX EAX,byte ptr [ECX + 0x7]
00478bd8  FLD float ptr [EDX + 0x4]
00478bdb  MOV ESI,dword ptr [ECX + 0x8]
00478bde  FLD float ptr [EDX + 0x8]
00478be1  MOV EDX,dword ptr [EDX]
00478be3  SHL EAX,0x4
00478be6  FXCH
00478be8  ADD EAX,ESI
00478bea  MOV dword ptr [EAX],EDX
00478bec  FSTP float ptr [EAX + 0x4]
00478bef  FSTP float ptr [EAX + 0x8]
00478bf2  MOVZX EAX,byte ptr [ECX + 0x6]
00478bf6  MOV dword ptr [ESP + 0xc],EAX
00478bfa  FILD dword ptr [ESP + 0xc]
00478bfe  FDIVR float ptr [0x0089096c]
00478c04  FLD ST0
00478c06  FMUL float ptr [ECX + 0x10]
00478c09  FLD ST1
00478c0b  FMUL float ptr [ECX + 0x14]
00478c0e  FXCH ST2
00478c10  FMUL float ptr [ECX + 0x18]
00478c13  FSTP float ptr [ESP + 0x18]
00478c17  MOV EDX,dword ptr [ESP + 0x18]
00478c1b  MOV dword ptr [ECX + 0x28],EDX
00478c1e  FSTP float ptr [ECX + 0x20]
00478c21  FSTP float ptr [ECX + 0x24]
00478c24  MOV AL,byte ptr [ECX + 0x7]
00478c27  MOV DL,byte ptr [ECX + 0x5]
00478c2a  INC AL
00478c2c  CMP AL,DL
00478c2e  MOV byte ptr [ECX + 0x7],AL
00478c31  JC 0x00478c37
00478c33  MOV byte ptr [ECX + 0x7],0x0
00478c37  POP ESI
00478c38  MOV ESP,EBP
00478c3a  POP EBP
00478c3b  RET 0x4
