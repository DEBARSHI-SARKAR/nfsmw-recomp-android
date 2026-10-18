00414960  SUB ESP,0x28
00414963  PUSH EDI
00414964  MOV EDI,ECX
00414966  MOV ECX,dword ptr [EDI + 0x40]
00414969  MOV EAX,dword ptr [ECX]
0041496b  CALL dword ptr [EAX + 0x48]
0041496e  MOV CL,byte ptr [EAX + 0x2c0]
00414974  TEST CL,CL
00414976  JZ 0x00414985
00414978  FLD float ptr [0x00890968]
0041497e  POP EDI
0041497f  ADD ESP,0x28
00414982  RET 0x8
00414985  MOV ECX,dword ptr [EDI + 0x40]
00414988  MOV EDX,dword ptr [ECX]
0041498a  PUSH ESI
0041498b  CALL dword ptr [EDX + 0x48]
0041498e  MOV ESI,EAX
00414990  LEA EAX,[ESI + 0x98]
00414996  MOV ECX,dword ptr [EAX]
00414998  MOV EDX,dword ptr [EAX + 0x4]
0041499b  MOV EAX,dword ptr [EAX + 0x8]
0041499e  MOV dword ptr [ESP + 0x24],ECX
004149a2  MOV ECX,dword ptr [EDI + 0x48]
004149a5  MOV dword ptr [ESP + 0x28],EDX
004149a9  MOV EDX,dword ptr [ECX]
004149ab  MOV dword ptr [ESP + 0x2c],EAX
004149af  CALL dword ptr [EDX + 0x20]
004149b2  FLD float ptr [ESP + 0x24]
004149b6  MOV ECX,dword ptr [EAX]
004149b8  MOV EDX,dword ptr [EAX + 0x4]
004149bb  MOV EAX,dword ptr [EAX + 0x8]
004149be  MOV dword ptr [ESP + 0x18],ECX
004149c2  FSUB float ptr [ESP + 0x18]
004149c6  FLD float ptr [ESP + 0x28]
004149ca  MOV dword ptr [ESP + 0x1c],EDX
004149ce  FSUB float ptr [ESP + 0x1c]
004149d2  MOV dword ptr [ESP + 0x20],EAX
004149d6  FLD float ptr [ESP + 0x2c]
004149da  FSUB float ptr [ESP + 0x20]
004149de  FSTP float ptr [ESP + 0x20]
004149e2  MOV ECX,dword ptr [ESP + 0x20]
004149e6  FXCH
004149e8  MOV dword ptr [ESP + 0x20],ECX
004149ec  FSTP float ptr [ESP + 0x24]
004149f0  MOV EDX,dword ptr [ESP + 0x24]
004149f4  MOV dword ptr [ESP + 0x18],EDX
004149f8  FSTP float ptr [ESP + 0x28]
004149fc  MOV EAX,dword ptr [ESP + 0x28]
00414a00  FLD float ptr [ESP + 0x20]
00414a04  MOV dword ptr [ESP + 0x1c],EAX
00414a08  FMUL float ptr [ESP + 0x20]
00414a0c  PUSH ECX
00414a0d  MOV dword ptr [ESP + 0x30],ECX
00414a11  FSTP float ptr [ESP + 0x14]
00414a15  FLD float ptr [ESP + 0x1c]
00414a19  FMUL float ptr [ESP + 0x1c]
00414a1d  FSTP float ptr [ESP + 0x10]
00414a21  FLD float ptr [ESP + 0x20]
00414a25  FMUL float ptr [ESP + 0x20]
00414a29  FADD float ptr [ESP + 0x10]
00414a2d  FADD float ptr [ESP + 0x14]
00414a31  FSTP float ptr [ESP]
00414a34  CALL 0x005c5e80
00414a39  LEA EDX,[ESI + 0xbc]
00414a3f  FSTP float ptr [ESP + 0x18]
00414a43  MOV EAX,dword ptr [EDX]
00414a45  MOV ECX,dword ptr [EDX + 0x4]
00414a48  MOV EDX,dword ptr [EDX + 0x8]
00414a4b  MOV dword ptr [ESP + 0x28],EAX
00414a4f  LEA EAX,[ESP + 0x28]
00414a53  PUSH EAX
00414a54  MOV dword ptr [ESP + 0x30],ECX
00414a58  MOV dword ptr [ESP + 0x34],EDX
00414a5c  CALL 0x00410220
00414a61  FSTP ST0
00414a63  FLD float ptr [ESP + 0x2c]
00414a67  ADD ESP,0x8
00414a6a  FMUL float ptr [ESP + 0x24]
00414a6e  FLD float ptr [ESP + 0x2c]
00414a72  FMUL float ptr [ESP + 0x2c]
00414a76  FADDP
00414a78  FLD float ptr [ESP + 0x2c]
00414a7c  FMUL float ptr [ESP + 0x20]
00414a80  FLD float ptr [ESP + 0x24]
00414a84  FMUL float ptr [ESP + 0x18]
00414a88  FADDP
00414a8a  FADD ST0,ST0
00414a8c  FST float ptr [ESP + 0x8]
00414a90  FMUL float ptr [ESP + 0x8]
00414a94  FLD float ptr [ESP + 0xc]
00414a98  FADD float ptr [ESP + 0x10]
00414a9c  FLD float ptr [ESP + 0x34]
00414aa0  FMUL float ptr [ESP + 0x34]
00414aa4  FSUBP
00414aa6  FMUL ST2
00414aa8  FMUL float ptr [0x00890e98]
00414aae  FSUBP
00414ab0  FSTP float ptr [ESP + 0x10]
00414ab4  FADD ST0,ST0
00414ab6  FSTP float ptr [ESP + 0xc]
00414aba  FLD float ptr [ESP + 0x10]
00414abe  FCOMP float ptr [0x00890968]
00414ac4  FNSTSW AX
00414ac6  TEST AH,0x1
00414ac9  JNZ 0x00414b11
00414acb  FLD float ptr [ESP + 0xc]
00414acf  FCOMP float ptr [0x008910cc]
00414ad5  FNSTSW AX
00414ad7  TEST AH,0x41
00414ada  JNZ 0x00414b11
00414adc  FLD float ptr [ESP + 0x10]
00414ae0  FSQRT
00414ae2  FSUB float ptr [ESP + 0x8]
00414ae6  FDIV float ptr [ESP + 0xc]
00414aea  FST float ptr [ESP + 0x10]
00414aee  FCOMP float ptr [0x00890968]
00414af4  FNSTSW AX
00414af6  TEST AH,0x41
00414af9  JNZ 0x00414b11
00414afb  MOV ECX,dword ptr [ESP + 0x34]
00414aff  MOV EDX,dword ptr [ESP + 0x38]
00414b03  MOV EAX,dword ptr [ESP + 0x10]
00414b07  PUSH ECX
00414b08  PUSH EDX
00414b09  PUSH EAX
00414b0a  MOV ECX,ESI
00414b0c  CALL 0x0077bba0
00414b11  PUSH 0x1
00414b13  MOV ECX,ESI
00414b15  CALL 0x00776600
00414b1a  FLD float ptr [ESP + 0x14]
00414b1e  POP ESI
00414b1f  POP EDI
00414b20  ADD ESP,0x28
00414b23  RET 0x8
