007fcaea  PUSH EBP
007fcaeb  MOV EBP,ESP
007fcaed  SUB ESP,0x93c
007fcaf3  PUSH EBX
007fcaf4  PUSH ESI
007fcaf5  PUSH EDI
007fcaf6  PUSH 0x3f
007fcaf8  POP EAX
007fcaf9  SUB EAX,dword ptr [EBP + 0x18]
007fcafc  XOR ESI,ESI
007fcafe  MOV dword ptr [EBP + 0x18],EAX
007fcb01  FILD dword ptr [EBP + 0x18]
007fcb04  FMUL double ptr [0x008c38b0]
007fcb0a  FADD double ptr [0x008942e8]
007fcb10  FSTP double ptr [EBP + -0x10]
007fcb13  FLD double ptr [0x0089eb88]
007fcb19  FSTP double ptr [EBP + -0x8]
007fcb1c  FLD double ptr [EBP + -0x8]
007fcb1f  SUB ESP,0x18
007fcb22  FSTP double ptr [ESP + 0x10]
007fcb26  FLDZ
007fcb28  FSTP double ptr [ESP + 0x8]
007fcb2c  FLD double ptr [EBP + -0x10]
007fcb2f  FSTP double ptr [ESP]
007fcb32  CALL 0x007fcabb
007fcb37  FMUL double ptr [0x008c38a8]
007fcb3d  ADD ESP,0x18
007fcb40  FADD double ptr [0x008987a8]
007fcb46  CALL 0x007c4b80
007fcb4b  MOV EBX,EAX
007fcb4d  TEST EBX,EBX
007fcb4f  MOV dword ptr [EBP + 0x18],EBX
007fcb52  JZ 0x007fcb89
007fcb54  XOR EAX,EAX
007fcb56  TEST EBX,EBX
007fcb58  JLE 0x007fcb87
007fcb5a  FLD double ptr [EBP + -0x8]
007fcb5d  LEA EDI,[EBP + ESI*0x1 + 0xfffffec4]
007fcb64  CALL 0x007c4b80
007fcb69  MOV ECX,EBX
007fcb6b  MOV BL,AL
007fcb6d  MOV BH,BL
007fcb6f  MOV EDX,ECX
007fcb71  SHR ECX,0x2
007fcb74  MOV EAX,EBX
007fcb76  SHL EAX,0x10
007fcb79  MOV AX,BX
007fcb7c  STOSD.REP ES:EDI
007fcb7e  MOV ECX,EDX
007fcb80  AND ECX,0x3
007fcb83  STOSB.REP ES:EDI
007fcb85  MOV EAX,EDX
007fcb87  ADD ESI,EAX
007fcb89  FLD double ptr [EBP + -0x8]
007fcb8c  FADD double ptr [0x008942e8]
007fcb92  FST double ptr [EBP + -0x8]
007fcb95  FCOMP double ptr [0x008c38a0]
007fcb9b  FNSTSW AX
007fcb9d  TEST AH,0x5
007fcba0  JNP 0x007fcb1c
007fcba6  MOV ECX,0x100
007fcbab  CMP ESI,ECX
007fcbad  JGE 0x007fcbc8
007fcbaf  SUB ECX,ESI
007fcbb1  MOV EDX,ECX
007fcbb3  SHR ECX,0x2
007fcbb6  XOR EAX,EAX
007fcbb8  LEA EDI,[EBP + ESI*0x1 + 0xfffffec4]
007fcbbf  STOSD.REP ES:EDI
007fcbc1  MOV ECX,EDX
007fcbc3  AND ECX,0x3
007fcbc6  STOSB.REP ES:EDI
007fcbc8  XOR ESI,ESI
007fcbca  CALL 0x007cbf90
007fcbcf  AND EAX,0xff
007fcbd4  MOV AL,byte ptr [EBP + EAX*0x1 + 0xfffffec4]
007fcbdb  MOV byte ptr [EBP + ESI*0x1 + 0xfffff6c4],AL
007fcbe2  INC ESI
007fcbe3  CMP ESI,0x800
007fcbe9  JC 0x007fcbca
007fcbeb  MOV EAX,dword ptr [EBP + 0x10]
007fcbee  TEST EAX,EAX
007fcbf0  JBE 0x007fcc6b
007fcbf2  MOV EBX,dword ptr [EBP + 0x8]
007fcbf5  MOV dword ptr [EBP + -0xc],EBX
007fcbf8  MOV dword ptr [EBP + -0x4],EAX
007fcbfb  CALL 0x007cbf90
007fcc00  MOV EDX,dword ptr [EBP + 0xc]
007fcc03  AND EAX,0xff
007fcc08  TEST EDX,EDX
007fcc0a  LEA ECX,[EBP + EAX*0x1 + 0xfffff6c4]
007fcc11  JBE 0x007fcc60
007fcc13  MOVSX ESI,byte ptr [EBP + 0xfffffec4]
007fcc1a  MOV AL,byte ptr [EBP + 0xfffffec4]
007fcc20  NEG AL
007fcc22  NEG ESI
007fcc24  MOV byte ptr [EBP + 0x1b],AL
007fcc27  LEA EDI,[ESI + 0xff]
007fcc2d  MOV EAX,EBX
007fcc2f  SUB ECX,EBX
007fcc31  MOV dword ptr [EBP + 0x10],EDX
007fcc34  MOVZX EDX,byte ptr [EAX]
007fcc37  CMP EDX,ESI
007fcc39  JGE 0x007fcc40
007fcc3b  MOV DL,byte ptr [EBP + 0x1b]
007fcc3e  MOV byte ptr [EAX],DL
007fcc40  MOVZX EDX,byte ptr [EAX]
007fcc43  CMP EDX,EDI
007fcc45  JLE 0x007fcc55
007fcc47  MOV EBX,dword ptr [EBP + -0xc]
007fcc4a  OR DL,0xff
007fcc4d  SUB DL,byte ptr [EBP + 0xfffffec4]
007fcc53  MOV byte ptr [EAX],DL
007fcc55  MOV DL,byte ptr [ECX + EAX*0x1]
007fcc58  ADD byte ptr [EAX],DL
007fcc5a  INC EAX
007fcc5b  DEC dword ptr [EBP + 0x10]
007fcc5e  JNZ 0x007fcc34
007fcc60  ADD EBX,dword ptr [EBP + 0x14]
007fcc63  DEC dword ptr [EBP + -0x4]
007fcc66  MOV dword ptr [EBP + -0xc],EBX
007fcc69  JNZ 0x007fcbfb
007fcc6b  POP EDI
007fcc6c  POP ESI
007fcc6d  POP EBX
007fcc6e  LEAVE
007fcc6f  RET
