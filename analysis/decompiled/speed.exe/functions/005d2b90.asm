005d2b90  SUB ESP,0x30
005d2b93  MOV EAX,dword ptr [ESP + 0x38]
005d2b97  FLD float ptr [0x0089096c]
005d2b9d  FSUB float ptr [ESP + 0x40]
005d2ba1  MOV ECX,dword ptr [ESP + 0x34]
005d2ba5  FLD float ptr [EAX]
005d2ba7  FSUB float ptr [ECX]
005d2ba9  FLD float ptr [EAX + 0x4]
005d2bac  FSUB float ptr [ECX + 0x4]
005d2baf  FLD float ptr [EAX + 0x8]
005d2bb2  FSUB float ptr [ECX + 0x8]
005d2bb5  FLD float ptr [EAX + 0xc]
005d2bb8  FSUB float ptr [ECX + 0xc]
005d2bbb  FLD float ptr [ECX]
005d2bbd  FADD float ptr [EAX]
005d2bbf  FSTP float ptr [ESP]
005d2bc2  FLD float ptr [ECX + 0x4]
005d2bc5  FADD float ptr [EAX + 0x4]
005d2bc8  FSTP float ptr [ESP + 0x4]
005d2bcc  FLD float ptr [ECX + 0x8]
005d2bcf  FADD float ptr [EAX + 0x8]
005d2bd2  FSTP float ptr [ESP + 0x8]
005d2bd6  FLD float ptr [ECX + 0xc]
005d2bd9  FADD float ptr [EAX + 0xc]
005d2bdc  FSTP float ptr [ESP + 0xc]
005d2be0  FLD float ptr [ESP + 0x40]
005d2be4  FMUL float ptr [EAX]
005d2be6  FSTP float ptr [ESP + 0x10]
005d2bea  FLD float ptr [ESP + 0x40]
005d2bee  FMUL float ptr [EAX + 0x4]
005d2bf1  FSTP float ptr [ESP + 0x14]
005d2bf5  FLD float ptr [ESP + 0x40]
005d2bf9  FMUL float ptr [EAX + 0x8]
005d2bfc  FSTP float ptr [ESP + 0x18]
005d2c00  FLD float ptr [ESP + 0x40]
005d2c04  FMUL float ptr [EAX + 0xc]
005d2c07  FSTP float ptr [ESP + 0x1c]
005d2c0b  FLD ST4
005d2c0d  FMUL float ptr [ECX]
005d2c0f  FSTP float ptr [ESP + 0x20]
005d2c13  FLD ST4
005d2c15  FMUL float ptr [ECX + 0x4]
005d2c18  FSTP float ptr [ESP + 0x24]
005d2c1c  FLD ST4
005d2c1e  FMUL float ptr [ECX + 0x8]
005d2c21  FSTP float ptr [ESP + 0x28]
005d2c25  FXCH ST4
005d2c27  FMUL float ptr [ECX + 0xc]
005d2c2a  FSTP float ptr [ESP + 0x2c]
005d2c2e  FXCH ST3
005d2c30  FLD ST0
005d2c32  FMUL ST1
005d2c34  FLD ST4
005d2c36  FMUL ST5
005d2c38  FADDP
005d2c3a  FLD ST3
005d2c3c  FMUL ST4
005d2c3e  FADDP
005d2c40  FLD ST2
005d2c42  FMUL ST3
005d2c44  FADDP
005d2c46  FLD float ptr [ESP + 0xc]
005d2c4a  FMUL float ptr [ESP + 0xc]
005d2c4e  FLD float ptr [ESP + 0x8]
005d2c52  FMUL float ptr [ESP + 0x8]
005d2c56  FADDP
005d2c58  FLD float ptr [ESP + 0x4]
005d2c5c  FMUL float ptr [ESP + 0x4]
005d2c60  FADDP
005d2c62  FLD float ptr [ESP]
005d2c65  FMUL float ptr [ESP]
005d2c68  FADDP
005d2c6a  FCOMPP
005d2c6c  FSTP ST0
005d2c6e  FSTP ST2
005d2c70  FNSTSW AX
005d2c72  FSTP ST1
005d2c74  TEST AH,0x1
005d2c77  FSTP ST0
005d2c79  MOV EAX,dword ptr [ESP + 0x3c]
005d2c7d  JNZ 0x005d2ca9
005d2c7f  FLD float ptr [ESP + 0x20]
005d2c83  FADD float ptr [ESP + 0x10]
005d2c87  FSTP float ptr [EAX]
005d2c89  FLD float ptr [ESP + 0x24]
005d2c8d  FADD float ptr [ESP + 0x14]
005d2c91  FSTP float ptr [EAX + 0x4]
005d2c94  FLD float ptr [ESP + 0x28]
005d2c98  FADD float ptr [ESP + 0x18]
005d2c9c  FSTP float ptr [EAX + 0x8]
005d2c9f  FLD float ptr [ESP + 0x2c]
005d2ca3  FADD float ptr [ESP + 0x1c]
005d2ca7  JMP 0x005d2cd1
005d2ca9  FLD float ptr [ESP + 0x10]
005d2cad  FSUB float ptr [ESP + 0x20]
005d2cb1  FSTP float ptr [EAX]
005d2cb3  FLD float ptr [ESP + 0x14]
005d2cb7  FSUB float ptr [ESP + 0x24]
005d2cbb  FSTP float ptr [EAX + 0x4]
005d2cbe  FLD float ptr [ESP + 0x18]
005d2cc2  FSUB float ptr [ESP + 0x28]
005d2cc6  FSTP float ptr [EAX + 0x8]
005d2cc9  FLD float ptr [ESP + 0x1c]
005d2ccd  FSUB float ptr [ESP + 0x2c]
005d2cd1  FSTP float ptr [EAX + 0xc]
005d2cd4  FLD float ptr [EAX + 0xc]
005d2cd7  FLD float ptr [EAX + 0x8]
005d2cda  FLD float ptr [EAX + 0x4]
005d2cdd  FLD float ptr [EAX]
005d2cdf  FLD ST0
005d2ce1  FMUL ST1
005d2ce3  FLD ST2
005d2ce5  FMUL ST3
005d2ce7  FADDP
005d2ce9  FLD ST3
005d2ceb  FMUL ST4
005d2ced  FADDP
005d2cef  FLD ST4
005d2cf1  FMUL ST5
005d2cf3  FADDP
005d2cf5  FSQRT
005d2cf7  FSTP ST4
005d2cf9  FSTP ST0
005d2cfb  FSTP ST0
005d2cfd  FSTP ST0
005d2cff  FDIVR float ptr [0x0089096c]
005d2d05  FLD ST0
005d2d07  FMUL float ptr [EAX]
005d2d09  FSTP float ptr [EAX]
005d2d0b  FLD ST0
005d2d0d  FMUL float ptr [EAX + 0x4]
005d2d10  FSTP float ptr [EAX + 0x4]
005d2d13  FLD ST0
005d2d15  FMUL float ptr [EAX + 0x8]
005d2d18  FSTP float ptr [EAX + 0x8]
005d2d1b  FMUL float ptr [EAX + 0xc]
005d2d1e  FSTP float ptr [EAX + 0xc]
005d2d21  ADD ESP,0x30
005d2d24  RET
