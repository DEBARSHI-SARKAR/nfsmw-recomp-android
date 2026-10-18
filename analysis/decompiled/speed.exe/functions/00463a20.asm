00463a20  SUB ESP,0x1c
00463a23  PUSH ESI
00463a24  PUSH EDI
00463a25  MOV EDI,dword ptr [ESP + 0x2c]
00463a29  FLD float ptr [EDI + 0x8]
00463a2c  MOV ESI,ECX
00463a2e  FMUL float ptr [ESI + 0x8]
00463a31  FLD float ptr [EDI + 0x4]
00463a34  FMUL float ptr [ESI + 0x4]
00463a37  FADDP
00463a39  FLD float ptr [EDI]
00463a3b  FMUL float ptr [ESI]
00463a3d  FADDP
00463a3f  FLD float ptr [ESI + 0xc]
00463a42  FMUL float ptr [EDI + 0xc]
00463a45  FADDP
00463a47  FST float ptr [ESP + 0x10]
00463a4b  FABS
00463a4d  FSTP float ptr [ESP + 0x2c]
00463a51  FLD float ptr [0x0089096c]
00463a57  FSUB float ptr [ESP + 0x2c]
00463a5b  FCOMP float ptr [0x00890ea8]
00463a61  FNSTSW AX
00463a63  TEST AH,0x41
00463a66  JNZ 0x00463ad9
00463a68  MOV EAX,dword ptr [ESP + 0x2c]
00463a6c  PUSH EAX
00463a6d  CALL 0x0045dd10
00463a72  MOV ECX,0x4000
00463a77  SUB ECX,EAX
00463a79  PUSH ECX
00463a7a  CALL 0x0045db30
00463a7f  MOVZX ECX,CX
00463a82  MOV dword ptr [ESP + 0x34],ECX
00463a86  FILD dword ptr [ESP + 0x34]
00463a8a  FSTP float ptr [ESP + 0x10]
00463a8e  FLD float ptr [0x0089096c]
00463a94  FDIV ST0,ST1
00463a96  FSTP float ptr [ESP + 0x14]
00463a9a  FSTP ST0
00463a9c  FLD float ptr [0x0089096c]
00463aa2  FSUB float ptr [ESP + 0x38]
00463aa6  FMUL float ptr [ESP + 0x10]
00463aaa  CALL 0x007c4b80
00463aaf  PUSH EAX
00463ab0  CALL 0x0045db30
00463ab5  FMUL float ptr [ESP + 0x18]
00463ab9  FSTP float ptr [ESP + 0x38]
00463abd  FLD float ptr [ESP + 0x14]
00463ac1  FMUL float ptr [ESP + 0x3c]
00463ac5  CALL 0x007c4b80
00463aca  PUSH EAX
00463acb  CALL 0x0045db30
00463ad0  FMUL float ptr [ESP + 0x1c]
00463ad4  ADD ESP,0x10
00463ad7  JMP 0x00463aeb
00463ad9  FLD float ptr [0x0089096c]
00463adf  FSUB float ptr [ESP + 0x30]
00463ae3  FSTP float ptr [ESP + 0x2c]
00463ae7  FLD float ptr [ESP + 0x30]
00463aeb  FLD float ptr [ESP + 0x10]
00463aef  FCOMP float ptr [0x00890968]
00463af5  FNSTSW AX
00463af7  TEST AH,0x5
00463afa  JP 0x00463b06
00463afc  FLD float ptr [ESP + 0x2c]
00463b00  FCHS
00463b02  FSTP float ptr [ESP + 0x2c]
00463b06  FLD float ptr [ESP + 0x2c]
00463b0a  MOV EAX,dword ptr [ESP + 0x28]
00463b0e  FMUL float ptr [ESI]
00463b10  MOV EDX,EAX
00463b12  FLD float ptr [ESP + 0x2c]
00463b16  FMUL float ptr [ESI + 0x4]
00463b19  FLD float ptr [ESP + 0x2c]
00463b1d  FMUL float ptr [ESI + 0x8]
00463b20  FSTP float ptr [ESP + 0x1c]
00463b24  FLD float ptr [ESP + 0x2c]
00463b28  FMUL float ptr [ESI + 0xc]
00463b2b  FSTP float ptr [ESP + 0x20]
00463b2f  FLD ST2
00463b31  FMUL float ptr [EDI]
00463b33  FADD ST0,ST2
00463b35  FSTP float ptr [ESP + 0x14]
00463b39  MOV ECX,dword ptr [ESP + 0x14]
00463b3d  FLD ST2
00463b3f  FMUL float ptr [EDI + 0x4]
00463b42  FADD ST0,ST1
00463b44  FSTP float ptr [ESP + 0x18]
00463b48  FSTP ST0
00463b4a  FSTP ST0
00463b4c  FLD ST0
00463b4e  FMUL float ptr [EDI + 0x8]
00463b51  FADD float ptr [ESP + 0x1c]
00463b55  FSTP float ptr [ESP + 0x1c]
00463b59  FMUL float ptr [EDI + 0xc]
00463b5c  MOV dword ptr [EDX],ECX
00463b5e  MOV ECX,dword ptr [ESP + 0x18]
00463b62  MOV dword ptr [EDX + 0x4],ECX
00463b65  FADD float ptr [ESP + 0x20]
00463b69  MOV ECX,dword ptr [ESP + 0x1c]
00463b6d  MOV dword ptr [EDX + 0x8],ECX
00463b70  POP EDI
00463b71  FSTP float ptr [ESP + 0x1c]
00463b75  MOV ECX,dword ptr [ESP + 0x1c]
00463b79  MOV dword ptr [EDX + 0xc],ECX
00463b7c  POP ESI
00463b7d  ADD ESP,0x1c
00463b80  RET 0xc
