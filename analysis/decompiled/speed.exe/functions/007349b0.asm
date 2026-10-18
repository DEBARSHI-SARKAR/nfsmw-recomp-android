007349b0  PUSH ESI
007349b1  MOV ESI,ECX
007349b3  FLD float ptr [ESI + 0x64]
007349b6  PUSH EDI
007349b7  FCOMP float ptr [0x00890968]
007349bd  FNSTSW AX
007349bf  TEST AH,0x5
007349c2  JP 0x007349cb
007349c4  MOV dword ptr [ESI + 0x64],0x41555555
007349cb  FLD float ptr [ESP + 0x10]
007349cf  MOV EDI,dword ptr [ESP + 0xc]
007349d3  FMUL float ptr [ESI + 0x64]
007349d6  FADD float ptr [ESI + 0x68]
007349d9  FCOM float ptr [0x0089096c]
007349df  FST float ptr [ESI + 0x68]
007349e2  FNSTSW AX
007349e4  TEST AH,0x5
007349e7  JP 0x00734b30
007349ed  FLD ST0
007349ef  LEA EAX,[EDI + 0x30]
007349f2  FADD ST0,ST1
007349f4  LEA EDX,[ESI + 0x30]
007349f7  FSUBR float ptr [0x008959e4]
007349fd  FMUL ST1
007349ff  FMUL ST1
00734a01  FSUBR float ptr [0x0089096c]
00734a07  FSTP float ptr [ESP + 0x10]
00734a0b  MOV ECX,dword ptr [ESP + 0x10]
00734a0f  FSTP ST0
00734a11  PUSH ECX
00734a12  FLD float ptr [EDI]
00734a14  PUSH EAX
00734a15  FSUB float ptr [ESI]
00734a17  PUSH EAX
00734a18  PUSH EDX
00734a19  FSTP float ptr [EDI]
00734a1b  FLD float ptr [EDI + 0x4]
00734a1e  FSUB float ptr [ESI + 0x4]
00734a21  FSTP float ptr [EDI + 0x4]
00734a24  FLD float ptr [EDI + 0x8]
00734a27  FSUB float ptr [ESI + 0x8]
00734a2a  FSTP float ptr [EDI + 0x8]
00734a2d  FLD float ptr [ESP + 0x20]
00734a31  FMUL float ptr [EDI]
00734a33  FADD float ptr [ESI]
00734a35  FSTP float ptr [EDI]
00734a37  FLD float ptr [ESP + 0x20]
00734a3b  FMUL float ptr [EDI + 0x4]
00734a3e  FADD float ptr [ESI + 0x4]
00734a41  FSTP float ptr [EDI + 0x4]
00734a44  FLD float ptr [ESP + 0x20]
00734a48  FMUL float ptr [EDI + 0x8]
00734a4b  FADD float ptr [ESI + 0x8]
00734a4e  FSTP float ptr [EDI + 0x8]
00734a51  FLD float ptr [EDI + 0x10]
00734a54  FSUB float ptr [ESI + 0x10]
00734a57  FSTP float ptr [EDI + 0x10]
00734a5a  FLD float ptr [EDI + 0x14]
00734a5d  FSUB float ptr [ESI + 0x14]
00734a60  FSTP float ptr [EDI + 0x14]
00734a63  FLD float ptr [EDI + 0x18]
00734a66  FSUB float ptr [ESI + 0x18]
00734a69  FSTP float ptr [EDI + 0x18]
00734a6c  FLD float ptr [ESP + 0x20]
00734a70  FMUL float ptr [EDI + 0x10]
00734a73  FADD float ptr [ESI + 0x10]
00734a76  FSTP float ptr [EDI + 0x10]
00734a79  FLD float ptr [ESP + 0x20]
00734a7d  FMUL float ptr [EDI + 0x14]
00734a80  FADD float ptr [ESI + 0x14]
00734a83  FSTP float ptr [EDI + 0x14]
00734a86  FLD float ptr [ESP + 0x20]
00734a8a  FMUL float ptr [EDI + 0x18]
00734a8d  FADD float ptr [ESI + 0x18]
00734a90  FSTP float ptr [EDI + 0x18]
00734a93  CALL 0x005d2b90
00734a98  FLD float ptr [EDI + 0x40]
00734a9b  ADD ESP,0x10
00734a9e  FSUB float ptr [ESI + 0x40]
00734aa1  FSTP float ptr [EDI + 0x40]
00734aa4  FLD float ptr [EDI + 0x44]
00734aa7  FSUB float ptr [ESI + 0x44]
00734aaa  FSTP float ptr [EDI + 0x44]
00734aad  FLD float ptr [EDI + 0x48]
00734ab0  FSUB float ptr [ESI + 0x48]
00734ab3  FSTP float ptr [EDI + 0x48]
00734ab6  FLD float ptr [ESP + 0x10]
00734aba  FMUL float ptr [EDI + 0x40]
00734abd  FADD float ptr [ESI + 0x40]
00734ac0  FSTP float ptr [EDI + 0x40]
00734ac3  FLD float ptr [ESP + 0x10]
00734ac7  FMUL float ptr [EDI + 0x44]
00734aca  FADD float ptr [ESI + 0x44]
00734acd  FSTP float ptr [EDI + 0x44]
00734ad0  FLD float ptr [ESP + 0x10]
00734ad4  FMUL float ptr [EDI + 0x48]
00734ad7  FADD float ptr [ESI + 0x48]
00734ada  FSTP float ptr [EDI + 0x48]
00734add  FLD float ptr [EDI + 0xc]
00734ae0  FSUB float ptr [ESI + 0xc]
00734ae3  FMUL float ptr [ESP + 0x10]
00734ae7  FADD float ptr [ESI + 0xc]
00734aea  FSTP float ptr [EDI + 0xc]
00734aed  FLD float ptr [EDI + 0x1c]
00734af0  FSUB float ptr [ESI + 0x1c]
00734af3  FMUL float ptr [ESP + 0x10]
00734af7  FADD float ptr [ESI + 0x1c]
00734afa  FSTP float ptr [EDI + 0x1c]
00734afd  FLD float ptr [EDI + 0x2c]
00734b00  FSUB float ptr [ESI + 0x2c]
00734b03  FMUL float ptr [ESP + 0x10]
00734b07  FADD float ptr [ESI + 0x2c]
00734b0a  FSTP float ptr [EDI + 0x2c]
00734b0d  FLD float ptr [EDI + 0x60]
00734b10  FSUB float ptr [ESI + 0x60]
00734b13  FMUL float ptr [ESP + 0x10]
00734b17  FADD float ptr [ESI + 0x60]
00734b1a  FSTP float ptr [EDI + 0x60]
00734b1d  MOV AL,byte ptr [ESI + 0x72]
00734b20  MOV byte ptr [EDI + 0x72],AL
00734b23  MOV CL,byte ptr [ESI + 0x71]
00734b26  MOV byte ptr [EDI + 0x71],CL
00734b29  POP EDI
00734b2a  XOR AL,AL
00734b2c  POP ESI
00734b2d  RET 0x8
00734b30  MOV ECX,0x1d
00734b35  FSTP ST0
00734b37  MOVSD.REP ES:EDI,ESI
00734b39  POP EDI
00734b3a  MOV AL,0x1
00734b3c  POP ESI
00734b3d  RET 0x8
