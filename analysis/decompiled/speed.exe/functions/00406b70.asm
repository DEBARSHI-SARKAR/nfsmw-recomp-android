00406b70  SUB ESP,0x28
00406b73  PUSH EBX
00406b74  MOV EBX,ECX
00406b76  MOV ECX,dword ptr [EBX + 0x48]
00406b79  MOV EAX,dword ptr [ECX]
00406b7b  PUSH ESI
00406b7c  PUSH EDI
00406b7d  CALL dword ptr [EAX + 0x48]
00406b80  MOV ECX,dword ptr [EBX + 0x4c]
00406b83  MOV EDX,dword ptr [ECX]
00406b85  MOV ESI,EAX
00406b87  ADD ESI,0xc
00406b8a  CALL dword ptr [EDX + 0x20]
00406b8d  MOV ECX,dword ptr [EBX + 0x4c]
00406b90  MOV EDI,EAX
00406b92  MOV EAX,dword ptr [ECX]
00406b94  CALL dword ptr [EAX + 0x24]
00406b97  FLD float ptr [ESI + 0x10]
00406b9a  FCHS
00406b9c  MOV ECX,dword ptr [ESI + 0x14]
00406b9f  FSTP float ptr [ESP + 0x20]
00406ba3  MOV dword ptr [ESP + 0x1c],ECX
00406ba7  FLD float ptr [EDI]
00406ba9  MOV EDX,ECX
00406bab  FSUB float ptr [ESI]
00406bad  MOV ECX,dword ptr [ESP + 0x20]
00406bb1  MOV dword ptr [ESP + 0x28],EDX
00406bb5  MOV dword ptr [ESP + 0x2c],ECX
00406bb9  FSTP float ptr [ESP + 0x1c]
00406bbd  MOV EDX,dword ptr [ESP + 0x1c]
00406bc1  FLD float ptr [EDI + 0x8]
00406bc4  MOV dword ptr [ESP + 0xc],EDX
00406bc8  FSUB float ptr [ESI + 0x4]
00406bcb  FSTP float ptr [ESP + 0x20]
00406bcf  MOV ECX,dword ptr [ESP + 0x20]
00406bd3  FLD float ptr [EDI]
00406bd5  MOV dword ptr [ESP + 0x10],ECX
00406bd9  FSUB float ptr [ESI + 0x8]
00406bdc  FSTP float ptr [ESP + 0x1c]
00406be0  MOV EDX,dword ptr [ESP + 0x1c]
00406be4  FLD float ptr [EDI + 0x8]
00406be7  MOV dword ptr [ESP + 0x14],EDX
00406beb  FSUB float ptr [ESI + 0xc]
00406bee  MOV EDX,dword ptr [EAX]
00406bf0  MOV EAX,dword ptr [EAX + 0x8]
00406bf3  MOV dword ptr [ESP + 0x1c],EDX
00406bf7  FSTP float ptr [ESP + 0x20]
00406bfb  MOV ECX,dword ptr [ESP + 0x20]
00406bff  MOV dword ptr [ESP + 0x18],ECX
00406c03  FLD float ptr [ESP + 0x18]
00406c07  FMUL float ptr [ESP + 0x2c]
00406c0b  MOV ECX,EDX
00406c0d  FLD float ptr [ESP + 0x14]
00406c11  MOV EDX,EAX
00406c13  FMUL float ptr [ESP + 0x28]
00406c17  MOV dword ptr [ESP + 0x18],EDX
00406c1b  MOV dword ptr [ESP + 0x14],ECX
00406c1f  FADDP
00406c21  MOV dword ptr [ESP + 0x20],EAX
00406c25  FCHS
00406c27  FLD float ptr [ESP + 0x18]
00406c2b  FMUL float ptr [ESP + 0x2c]
00406c2f  FLD float ptr [ESP + 0x14]
00406c33  FMUL float ptr [ESP + 0x28]
00406c37  FADDP
00406c39  FSTP float ptr [ESP + 0x14]
00406c3d  FLD float ptr [ESP + 0x10]
00406c41  FMUL float ptr [ESP + 0x2c]
00406c45  FLD float ptr [ESP + 0xc]
00406c49  FMUL float ptr [ESP + 0x28]
00406c4d  FADDP
00406c4f  FADD float ptr [0x0089096c]
00406c55  FLD float ptr [0x00890cd4]
00406c5b  POP EDI
00406c5c  FCOMP
00406c5e  POP ESI
00406c5f  POP EBX
00406c60  FNSTSW AX
00406c62  TEST AH,0x41
00406c65  JNZ 0x00406c72
00406c67  FSTP ST0
00406c69  MOV dword ptr [ESP],0x3dcccccd
00406c70  JMP 0x00406c75
00406c72  FSTP float ptr [ESP]
00406c75  FADD float ptr [0x0089096c]
00406c7b  FLD float ptr [0x00890cd4]
00406c81  FCOMP
00406c83  FNSTSW AX
00406c85  TEST AH,0x41
00406c88  JNZ 0x00406c92
00406c8a  FSTP ST0
00406c8c  FLD float ptr [0x00890cd4]
00406c92  FLD float ptr [ESP + 0x8]
00406c96  FCHS
00406c98  FLD float ptr [0x00890968]
00406c9e  FCOMP
00406ca0  FNSTSW AX
00406ca2  TEST AH,0x41
00406ca5  JNZ 0x00406caf
00406ca7  FSTP ST0
00406ca9  FLD float ptr [0x00890968]
00406caf  FDIV float ptr [ESP]
00406cb2  FSTP float ptr [ESP + 0x10]
00406cb6  FLD float ptr [0x00890968]
00406cbc  FCOMP float ptr [ESP + 0x8]
00406cc0  FNSTSW AX
00406cc2  TEST AH,0x41
00406cc5  JNZ 0x00406ccf
00406cc7  FLD float ptr [0x00890968]
00406ccd  JMP 0x00406cd3
00406ccf  FLD float ptr [ESP + 0x8]
00406cd3  FDIV ST0,ST1
00406cd5  FLD float ptr [ESP]
00406cd8  FMUL float ptr [ESP]
00406cdb  FDIVR float ptr [0x00890634]
00406ce1  FLD float ptr [ESP + 0x10]
00406ce5  FMUL float ptr [ESP + 0x10]
00406ce9  FADD ST0,ST0
00406ceb  FADDP
00406ced  FSTP float ptr [ESP]
00406cf0  FLD ST1
00406cf2  FMULP ST2
00406cf4  FXCH
00406cf6  FDIVR float ptr [0x00890634]
00406cfc  FLD ST1
00406cfe  FMUL ST2
00406d00  FADD ST0,ST0
00406d02  FADDP
00406d04  FSTP ST1
00406d06  FLD float ptr [0x00890d40]
00406d0c  FCOMP float ptr [ESP]
00406d0f  FNSTSW AX
00406d11  TEST AH,0x5
00406d14  JP 0x00406d1d
00406d16  MOV dword ptr [ESP],0x41de38e4
00406d1d  FLD float ptr [0x00890d40]
00406d23  FCOMP
00406d25  FNSTSW AX
00406d27  TEST AH,0x5
00406d2a  JP 0x00406d34
00406d2c  FSTP ST0
00406d2e  FLD float ptr [0x00890d40]
00406d34  MOV EAX,dword ptr [ESP + 0x1c]
00406d38  FCHS
00406d3a  MOV ECX,dword ptr [ESP + 0x20]
00406d3e  MOV EDX,EAX
00406d40  MOV dword ptr [ESP + 0x1c],EDX
00406d44  FLD float ptr [ESP + 0x1c]
00406d48  FMUL ST1
00406d4a  MOV dword ptr [ESP + 0x10],EAX
00406d4e  FLD float ptr [ESP + 0x1c]
00406d52  MOV dword ptr [ESP + 0x14],0x0
00406d5a  FMUL float ptr [ESP]
00406d5d  MOV EAX,dword ptr [ESP + 0x14]
00406d61  MOV dword ptr [ESP + 0x20],EAX
00406d65  MOV EAX,dword ptr [ESP + 0x2c]
00406d69  FADDP
00406d6b  MOV dword ptr [ESP + 0x24],ECX
00406d6f  MOV dword ptr [ESP + 0x18],ECX
00406d73  FSTP float ptr [EAX]
00406d75  FLD float ptr [ESP + 0x20]
00406d79  FMUL ST1
00406d7b  FLD float ptr [ESP + 0x20]
00406d7f  FMUL float ptr [ESP]
00406d82  FADDP
00406d84  FSTP float ptr [EAX + 0x4]
00406d87  FLD float ptr [ESP + 0x24]
00406d8b  FMUL ST1
00406d8d  FLD float ptr [ESP + 0x24]
00406d91  FMUL float ptr [ESP]
00406d94  FADDP
00406d96  FSTP float ptr [EAX + 0x8]
00406d99  FSTP ST0
00406d9b  ADD ESP,0x28
00406d9e  RET 0x4
