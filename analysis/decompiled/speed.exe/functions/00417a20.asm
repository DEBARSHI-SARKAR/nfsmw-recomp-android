00417a20  SUB ESP,0x68
00417a23  PUSH EBX
00417a24  PUSH EBP
00417a25  PUSH ESI
00417a26  MOV ESI,ECX
00417a28  MOV ECX,dword ptr [ESI + 0x34]
00417a2b  MOV EAX,dword ptr [ECX]
00417a2d  PUSH EDI
00417a2e  CALL dword ptr [EAX + 0x54]
00417a31  MOV EBP,EAX
00417a33  MOV EDX,dword ptr [EBP]
00417a36  MOV ECX,EBP
00417a38  CALL dword ptr [EDX + 0x24]
00417a3b  MOV EDI,EAX
00417a3d  MOV EAX,dword ptr [EBP]
00417a40  MOV ECX,EBP
00417a42  CALL dword ptr [EAX + 0x20]
00417a45  FLD float ptr [EDI]
00417a47  FMUL float ptr [0x00890840]
00417a4d  MOV EBX,EAX
00417a4f  LEA ECX,[ESI + 0x7ac]
00417a55  MOV EDX,dword ptr [ECX]
00417a57  FADD float ptr [EBX]
00417a59  MOV EAX,dword ptr [ECX + 0x4]
00417a5c  MOV ECX,dword ptr [ECX + 0x8]
00417a5f  FSTP float ptr [ESP + 0x48]
00417a63  MOV dword ptr [ESP + 0x54],EDX
00417a67  FLD float ptr [EDI + 0x4]
00417a6a  MOV EDX,dword ptr [ESI + 0x8c]
00417a70  FMUL float ptr [0x00890840]
00417a76  MOV dword ptr [ESP + 0x5c],ECX
00417a7a  MOV dword ptr [ESP + 0x58],EAX
00417a7e  LEA EAX,[ESP + 0x3c]
00417a82  FADD float ptr [EBX + 0x4]
00417a85  PUSH EAX
00417a86  MOV ECX,ESI
00417a88  FSTP float ptr [ESP + 0x50]
00417a8c  FLD float ptr [EDI + 0x8]
00417a8f  FMUL float ptr [0x00890840]
00417a95  FADD float ptr [EBX + 0x8]
00417a98  FSTP float ptr [ESP + 0x54]
00417a9c  FLD float ptr [EDI]
00417a9e  FMUL float ptr [0x008910e4]
00417aa4  FLD float ptr [EDI + 0x4]
00417aa7  FMUL float ptr [0x008910e4]
00417aad  FLD float ptr [EDI + 0x8]
00417ab0  FMUL float ptr [0x008910e4]
00417ab6  FSTP float ptr [ESP + 0x6c]
00417aba  FXCH
00417abc  FADD float ptr [EBX]
00417abe  FSTP float ptr [ESP + 0x64]
00417ac2  FADD float ptr [EBX + 0x4]
00417ac5  FSTP float ptr [ESP + 0x68]
00417ac9  FLD float ptr [ESP + 0x6c]
00417acd  FADD float ptr [EBX + 0x8]
00417ad0  MOV dword ptr [ESP + 0x44],EDX
00417ad4  FSTP float ptr [ESP + 0x6c]
00417ad8  FLD float ptr [ESP + 0x58]
00417adc  FMUL float ptr [0x00890840]
00417ae2  FLD float ptr [ESP + 0x60]
00417ae6  FMUL float ptr [0x00890840]
00417aec  FXCH
00417aee  FADD float ptr [ESI + 0x88]
00417af4  FSTP float ptr [ESP + 0x40]
00417af8  FADD float ptr [ESI + 0x90]
00417afe  FSTP float ptr [ESP + 0x48]
00417b02  CALL 0x00417790
00417b07  MOV ECX,dword ptr [0x008a2fb4]
00417b0d  MOV EDX,dword ptr [0x008a2fb8]
00417b13  MOV EAX,[0x008a2fbc]
00417b18  MOV dword ptr [ESP + 0x30],ECX
00417b1c  LEA ECX,[ESP + 0x30]
00417b20  MOV dword ptr [ESP + 0x34],EDX
00417b24  PUSH ECX
00417b25  LEA EDX,[ESP + 0x40]
00417b29  MOV dword ptr [ESP + 0x3c],EAX
00417b2d  PUSH EDX
00417b2e  LEA EAX,[ESP + 0x50]
00417b32  PUSH EAX
00417b33  LEA ECX,[ESP + 0x6c]
00417b37  PUSH ECX
00417b38  PUSH EBX
00417b39  MOV ECX,ESI
00417b3b  CALL 0x00417490
00417b40  FLD float ptr [ESP + 0x3c]
00417b44  FSUB float ptr [ESP + 0x48]
00417b48  FSTP float ptr [ESP + 0x24]
00417b4c  FLD float ptr [ESP + 0x40]
00417b50  FSUB float ptr [ESP + 0x4c]
00417b54  FSTP float ptr [ESP + 0x28]
00417b58  FLD float ptr [ESP + 0x44]
00417b5c  FSUB float ptr [ESP + 0x50]
00417b60  FST float ptr [ESP + 0x2c]
00417b64  FMUL float ptr [ESP + 0x2c]
00417b68  FLD float ptr [ESP + 0x24]
00417b6c  FMUL float ptr [ESP + 0x24]
00417b70  FADDP
00417b72  FLD float ptr [ESP + 0x28]
00417b76  FMUL float ptr [ESP + 0x28]
00417b7a  FADDP
00417b7c  FSTP float ptr [ESP + 0x18]
00417b80  MOV EDX,dword ptr [ESP + 0x18]
00417b84  PUSH EDX
00417b85  CALL 0x005c5e80
00417b8a  FSTP float ptr [ESP + 0x18]
00417b8e  MOV EAX,dword ptr [EBP]
00417b91  ADD ESP,0x4
00417b94  MOV ECX,EBP
00417b96  CALL dword ptr [EAX + 0x2c]
00417b99  FSTP float ptr [ESP + 0x18]
00417b9d  MOV ECX,dword ptr [ESP + 0x28]
00417ba1  MOV dword ptr [ESP + 0x28],0x0
00417ba9  FLD float ptr [EDI]
00417bab  FSUB float ptr [ESP + 0x54]
00417baf  MOV EDX,dword ptr [EDI + 0x4]
00417bb2  LEA EAX,[ESP + 0x54]
00417bb6  MOV dword ptr [ESP + 0x20],ECX
00417bba  FSTP float ptr [ESP + 0x60]
00417bbe  PUSH EAX
00417bbf  FLD float ptr [EDI + 0x8]
00417bc2  LEA ECX,[ESP + 0x28]
00417bc6  FSUB float ptr [ESP + 0x60]
00417bca  PUSH ECX
00417bcb  MOV dword ptr [ESP + 0x6c],EDX
00417bcf  FSTP float ptr [ESP + 0x70]
00417bd3  CALL 0x0040fe20
00417bd8  FLD float ptr [ESP + 0x64]
00417bdc  MOV ECX,dword ptr [ESI + 0x8b0]
00417be2  FMUL float ptr [ESP + 0x70]
00417be6  MOV EDX,dword ptr [ECX]
00417be8  FLD float ptr [ESP + 0x60]
00417bec  ADD ESP,0x8
00417bef  FMUL float ptr [ESP + 0x64]
00417bf3  PUSH 0x0
00417bf5  FADDP
00417bf7  FLD float ptr [ESP + 0x64]
00417bfb  FMUL float ptr [ESP + 0x58]
00417bff  FADDP
00417c01  FSTP float ptr [ESP + 0x14]
00417c05  FLD float ptr [ESP + 0x58]
00417c09  FMUL float ptr [EDI]
00417c0b  FLD float ptr [ESP + 0x60]
00417c0f  FMUL float ptr [EDI + 0x8]
00417c12  FADDP
00417c14  FLD float ptr [ESP + 0x5c]
00417c18  FMUL float ptr [EDI + 0x4]
00417c1b  FADDP
00417c1d  FSTP float ptr [ESP + 0x20]
00417c21  CALL dword ptr [EDX + 0xc]
00417c24  FLD float ptr [ESP + 0x10]
00417c28  FCOMP float ptr [0x00890604]
00417c2e  FNSTSW AX
00417c30  TEST AH,0x41
00417c33  JNZ 0x00417cbc
00417c39  FLD float ptr [ESP + 0x18]
00417c3d  FMUL float ptr [0x00890864]
00417c43  FADD float ptr [0x008f8dd0]
00417c49  FST float ptr [ESP + 0x18]
00417c4d  FCOMP float ptr [0x008f8dcc]
00417c53  FNSTSW AX
00417c55  TEST AH,0x41
00417c58  JNZ 0x00417c63
00417c5a  MOV EAX,[0x008f8dcc]
00417c5f  MOV dword ptr [ESP + 0x18],EAX
00417c63  FLD float ptr [0x008f8dd4]
00417c69  FMUL float ptr [ESP + 0x10]
00417c6d  FCOM float ptr [ESP + 0x18]
00417c71  FNSTSW AX
00417c73  TEST AH,0x41
00417c76  JNZ 0x00417c7e
00417c78  FSTP ST0
00417c7a  FLD float ptr [ESP + 0x18]
00417c7e  FLD float ptr [ESP + 0x10]
00417c82  FMUL float ptr [ESP + 0x10]
00417c86  FXCH
00417c88  FMUL float ptr [0x008910fc]
00417c8e  FDIVP
00417c90  FCOMP float ptr [ESP + 0x14]
00417c94  FNSTSW AX
00417c96  TEST AH,0x1
00417c99  JNZ 0x00417ceb
00417c9b  FLD float ptr [ESI + 0x84]
00417ca1  MOV ECX,dword ptr [ESI + 0x8b0]
00417ca7  FMUL float ptr [0x00891054]
00417cad  PUSH 0x1
00417caf  FSTP float ptr [ESI + 0x84]
00417cb5  MOV EDX,dword ptr [ECX]
00417cb7  CALL dword ptr [EDX + 0xc]
00417cba  JMP 0x00417ceb
00417cbc  FLD float ptr [ESP + 0x1c]
00417cc0  FCOMP float ptr [0x00890da8]
00417cc6  FNSTSW AX
00417cc8  TEST AH,0x5
00417ccb  JP 0x00417ceb
00417ccd  FLD float ptr [ESP + 0x14]
00417cd1  FCOMP float ptr [0x00890dac]
00417cd7  FNSTSW AX
00417cd9  TEST AH,0x5
00417cdc  JP 0x00417ceb
00417cde  MOV ECX,dword ptr [ESI + 0x8b0]
00417ce4  MOV EAX,dword ptr [ECX]
00417ce6  PUSH 0x1
00417ce8  CALL dword ptr [EAX + 0xc]
00417ceb  MOV AL,[0x0090d621]
00417cf0  TEST AL,AL
00417cf2  JZ 0x00417d01
00417cf4  MOV ECX,dword ptr [ESI + 0x8b0]
00417cfa  MOV EDX,dword ptr [ECX]
00417cfc  PUSH 0x1
00417cfe  CALL dword ptr [EDX + 0xc]
00417d01  FLD float ptr [ESP + 0x14]
00417d05  FCOMP float ptr [0x00890d3c]
00417d0b  FNSTSW AX
00417d0d  TEST AH,0x41
00417d10  JNZ 0x00417d32
00417d12  FLD float ptr [ESI + 0x84]
00417d18  FDIV float ptr [ESP + 0x14]
00417d1c  FLD float ptr [ESP + 0x24]
00417d20  FMUL ST1
00417d22  FSTP float ptr [ESP + 0x24]
00417d26  FLD float ptr [ESP + 0x2c]
00417d2a  FMUL ST1
00417d2c  FSTP float ptr [ESP + 0x2c]
00417d30  FSTP ST0
00417d32  FLD float ptr [ESP + 0x20]
00417d36  FCOM float ptr [0x00890968]
00417d3c  FNSTSW AX
00417d3e  TEST AH,0x1
00417d41  JNZ 0x00417d75
00417d43  FCOM float ptr [0x00890858]
00417d49  FNSTSW AX
00417d4b  TEST AH,0x5
00417d4e  JP 0x00417d75
00417d50  FMUL float ptr [0x00890da4]
00417d56  FLD float ptr [ESI + 0x7b0]
00417d5c  FCOMP float ptr [0x00890968]
00417d62  FNSTSW AX
00417d64  TEST AH,0x41
00417d67  JNZ 0x00417dae
00417d69  FLD float ptr [ESI + 0x7b0]
00417d6f  FADD ST0,ST0
00417d71  FADDP
00417d73  JMP 0x00417dae
00417d75  FCOM float ptr [0x00890968]
00417d7b  FNSTSW AX
00417d7d  TEST AH,0x5
00417d80  JP 0x00417dae
00417d82  FCOM float ptr [0x00890db8]
00417d88  FNSTSW AX
00417d8a  TEST AH,0x41
00417d8d  JNZ 0x00417dae
00417d8f  FMUL float ptr [0x00890604]
00417d95  FLD float ptr [ESI + 0x7b0]
00417d9b  FCOMP float ptr [0x00890968]
00417da1  FNSTSW AX
00417da3  TEST AH,0x5
00417da6  JP 0x00417dae
00417da8  FADD float ptr [ESI + 0x7b0]
00417dae  FSTP float ptr [ESP + 0x28]
00417db2  PUSH ECX
00417db3  FLD float ptr [ESP + 0x3c]
00417db7  FMUL float ptr [ESP + 0x3c]
00417dbb  FLD float ptr [ESP + 0x38]
00417dbf  FMUL float ptr [ESP + 0x38]
00417dc3  FADDP
00417dc5  FLD float ptr [ESP + 0x34]
00417dc9  FMUL float ptr [ESP + 0x34]
00417dcd  FADDP
00417dcf  FSTP float ptr [ESP]
00417dd2  CALL 0x005c5e80
00417dd7  FCOM float ptr [0x00890cd4]
00417ddd  ADD ESP,0x4
00417de0  FNSTSW AX
00417de2  TEST AH,0x41
00417de5  JNZ 0x00417e47
00417de7  FDIVR float ptr [ESI + 0x84]
00417ded  FMUL float ptr [0x008906a0]
00417df3  FLD float ptr [ESP + 0x30]
00417df7  FMUL ST1
00417df9  FLD float ptr [ESP + 0x34]
00417dfd  FMUL ST2
00417dff  FSTP float ptr [ESP + 0x34]
00417e03  FLD float ptr [ESP + 0x38]
00417e07  FMUL ST2
00417e09  FSTP float ptr [ESP + 0x38]
00417e0d  FLD float ptr [ESP + 0x24]
00417e11  FMUL float ptr [0x0089107c]
00417e17  FADD ST0,ST1
00417e19  FSTP float ptr [ESP + 0x24]
00417e1d  FSTP ST0
00417e1f  FSTP ST0
00417e21  FLD float ptr [ESP + 0x28]
00417e25  FMUL float ptr [0x0089107c]
00417e2b  FADD float ptr [ESP + 0x34]
00417e2f  FSTP float ptr [ESP + 0x28]
00417e33  FLD float ptr [ESP + 0x2c]
00417e37  FMUL float ptr [0x0089107c]
00417e3d  FADD float ptr [ESP + 0x38]
00417e41  FSTP float ptr [ESP + 0x2c]
00417e45  JMP 0x00417e49
00417e47  FSTP ST0
00417e49  MOV ECX,dword ptr [ESI + 0x8b0]
00417e4f  MOV EAX,dword ptr [ECX]
00417e51  LEA EDX,[ESP + 0x24]
00417e55  PUSH EDX
00417e56  CALL dword ptr [EAX + 0x4]
00417e59  MOV EAX,dword ptr [EBP]
00417e5c  MOV ECX,EBP
00417e5e  CALL dword ptr [EAX + 0x20]
00417e61  FLD float ptr [ESI + 0x7b8]
00417e67  FSUB float ptr [EAX]
00417e69  MOV ECX,dword ptr [ESI + 0x8b0]
00417e6f  FSTP float ptr [ESP + 0x6c]
00417e73  FLD float ptr [ESI + 0x7bc]
00417e79  FSUB float ptr [EAX + 0x4]
00417e7c  FSTP float ptr [ESP + 0x70]
00417e80  FLD float ptr [ESI + 0x7c0]
00417e86  FSUB float ptr [EAX + 0x8]
00417e89  LEA EAX,[ESP + 0x6c]
00417e8d  PUSH EAX
00417e8e  FSTP float ptr [ESP + 0x78]
00417e92  MOV EDX,dword ptr [ECX]
00417e94  CALL dword ptr [EDX + 0x10]
00417e97  POP EDI
00417e98  POP ESI
00417e99  POP EBP
00417e9a  POP EBX
00417e9b  ADD ESP,0x68
00417e9e  RET 0x4
