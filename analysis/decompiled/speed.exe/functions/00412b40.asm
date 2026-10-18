00412b40  SUB ESP,0x70
00412b43  PUSH EBX
00412b44  PUSH ESI
00412b45  MOV ESI,ECX
00412b47  MOV ECX,dword ptr [ESI + 0x54]
00412b4a  MOV EAX,dword ptr [ECX]
00412b4c  PUSH EDI
00412b4d  CALL dword ptr [EAX + 0x20]
00412b50  MOV ECX,dword ptr [EAX]
00412b52  MOV EDX,dword ptr [EAX + 0x4]
00412b55  MOV EAX,dword ptr [EAX + 0x8]
00412b58  MOV dword ptr [ESP + 0x40],ECX
00412b5c  FLD float ptr [ESP + 0x40]
00412b60  FSUB float ptr [ESI + 0x84]
00412b66  MOV ECX,dword ptr [ESI + 0x80]
00412b6c  MOV dword ptr [ESP + 0x44],EDX
00412b70  MOV EDX,dword ptr [ECX]
00412b72  FSTP float ptr [ESP + 0x1c]
00412b76  MOV dword ptr [ESP + 0x48],EAX
00412b7a  FLD float ptr [ESP + 0x44]
00412b7e  LEA EAX,[ESP + 0x58]
00412b82  FSUB float ptr [ESI + 0x88]
00412b88  PUSH EAX
00412b89  FSTP float ptr [ESP + 0x24]
00412b8d  FLD float ptr [ESP + 0x4c]
00412b91  FSUB float ptr [ESI + 0x8c]
00412b97  FSTP float ptr [ESP + 0x28]
00412b9b  CALL dword ptr [EDX + 0x34]
00412b9e  MOV ECX,dword ptr [ESI + 0x80]
00412ba4  MOV EDX,dword ptr [ECX]
00412ba6  CALL dword ptr [EDX + 0x24]
00412ba9  MOV ECX,dword ptr [EAX]
00412bab  MOV EDX,dword ptr [EAX + 0x4]
00412bae  MOV EAX,dword ptr [EAX + 0x8]
00412bb1  MOV dword ptr [ESP + 0x28],ECX
00412bb5  MOV ECX,dword ptr [ESI + 0x80]
00412bbb  MOV dword ptr [ESP + 0x30],EAX
00412bbf  LEA EAX,[ESP + 0x4c]
00412bc3  MOV dword ptr [ESP + 0x2c],EDX
00412bc7  MOV EDX,dword ptr [ECX]
00412bc9  PUSH EAX
00412bca  CALL dword ptr [EDX + 0x38]
00412bcd  FLD float ptr [ESP + 0x60]
00412bd1  FMUL float ptr [ESP + 0x24]
00412bd5  MOV EAX,dword ptr [ESI + 0xa4]
00412bdb  FLD float ptr [ESP + 0x1c]
00412bdf  XOR EDI,EDI
00412be1  CMP EAX,0x2
00412be4  FMUL float ptr [ESP + 0x58]
00412be8  FADDP
00412bea  FLD float ptr [ESP + 0x5c]
00412bee  FMUL float ptr [ESP + 0x20]
00412bf2  FADDP
00412bf4  FSTP float ptr [ESP + 0x18]
00412bf8  FLD float ptr [ESP + 0x24]
00412bfc  FMUL float ptr [ESP + 0x24]
00412c00  FLD float ptr [ESP + 0x1c]
00412c04  FMUL float ptr [ESP + 0x1c]
00412c08  FADDP
00412c0a  FLD float ptr [ESP + 0x20]
00412c0e  FMUL float ptr [ESP + 0x20]
00412c12  FADDP
00412c14  FSTP float ptr [ESP + 0x10]
00412c18  FLD float ptr [ESP + 0x54]
00412c1c  FMUL float ptr [ESP + 0x24]
00412c20  FLD float ptr [ESP + 0x4c]
00412c24  FMUL float ptr [ESP + 0x1c]
00412c28  FADDP
00412c2a  FLD float ptr [ESP + 0x50]
00412c2e  FMUL float ptr [ESP + 0x20]
00412c32  FADDP
00412c34  FSTP float ptr [ESP + 0xc]
00412c38  JNZ 0x00412da9
00412c3e  FLD float ptr [0x00891048]
00412c44  FLD float ptr [ESP + 0xc]
00412c48  FCOMP float ptr [0x00890968]
00412c4e  FNSTSW AX
00412c50  TEST AH,0x5
00412c53  JP 0x00412c5d
00412c55  FSTP ST0
00412c57  FLD float ptr [0x00891078]
00412c5d  FLD float ptr [ESP + 0x4c]
00412c61  FMUL ST1
00412c63  FSTP float ptr [ESI + 0x90]
00412c69  FLD float ptr [ESP + 0x50]
00412c6d  FMUL ST1
00412c6f  FSTP float ptr [ESI + 0x94]
00412c75  FLD float ptr [ESP + 0x54]
00412c79  FMUL ST1
00412c7b  FSTP float ptr [ESI + 0x98]
00412c81  FSTP ST0
00412c83  FLD float ptr [ESP + 0x28]
00412c87  FMUL float ptr [0x0089064c]
00412c8d  FADD float ptr [ESI + 0x90]
00412c93  FLD float ptr [ESP + 0x2c]
00412c97  FMUL float ptr [0x0089064c]
00412c9d  FADD float ptr [ESI + 0x94]
00412ca3  FLD float ptr [ESP + 0x30]
00412ca7  FMUL float ptr [0x0089064c]
00412cad  FADD float ptr [ESI + 0x98]
00412cb3  FSTP float ptr [ESP + 0x78]
00412cb7  FADD float ptr [0x00891074]
00412cbd  FLD float ptr [ESP + 0x20]
00412cc1  FCOMP float ptr [0x00890d3c]
00412cc7  FNSTSW AX
00412cc9  TEST AH,0x5
00412ccc  JP 0x00412cd4
00412cce  FADD float ptr [0x00890604]
00412cd4  FXCH
00412cd6  FADD float ptr [ESI + 0x84]
00412cdc  FSTP float ptr [ESP + 0x34]
00412ce0  FADD float ptr [ESI + 0x88]
00412ce6  FSTP float ptr [ESP + 0x38]
00412cea  FLD float ptr [ESP + 0x78]
00412cee  FADD float ptr [ESI + 0x8c]
00412cf4  FSTP float ptr [ESP + 0x3c]
00412cf8  FLD float ptr [ESP + 0x48]
00412cfc  FSUB float ptr [ESP + 0x3c]
00412d00  FLD float ptr [ESP + 0x40]
00412d04  FSUB float ptr [ESP + 0x34]
00412d08  FLD ST0
00412d0a  FMUL ST1
00412d0c  FLD ST2
00412d0e  FMUL ST3
00412d10  FADDP
00412d12  FSTP float ptr [ESP + 0x14]
00412d16  MOV ECX,dword ptr [ESP + 0x14]
00412d1a  FSTP ST0
00412d1c  PUSH ECX
00412d1d  FSTP ST0
00412d1f  CALL 0x005c5e80
00412d24  FCOMP float ptr [0x00890e98]
00412d2a  ADD ESP,0x4
00412d2d  FNSTSW AX
00412d2f  TEST AH,0x5
00412d32  JP 0x00412e29
00412d38  FLD float ptr [ESP + 0xc]
00412d3c  FCOMP float ptr [0x00890968]
00412d42  FLD float ptr [ESP + 0xc]
00412d46  FNSTSW AX
00412d48  TEST AH,0x5
00412d4b  JP 0x00412d4f
00412d4d  FCHS
00412d4f  FCOMP float ptr [0x00891070]
00412d55  FNSTSW AX
00412d57  TEST AH,0x41
00412d5a  JNZ 0x00412e29
00412d60  FLD float ptr [ESI + 0x64]
00412d63  MOV dword ptr [ESI + 0xa4],0x3
00412d6d  FCOMP float ptr [0x00890d3c]
00412d73  FNSTSW AX
00412d75  TEST AH,0x5
00412d78  JP 0x00412d81
00412d7a  MOV dword ptr [ESI + 0x64],0x40000000
00412d81  MOV EAX,[0x00993cc8]
00412d86  CMP EAX,EDI
00412d88  JZ 0x00412e29
00412d8e  MOV ECX,dword ptr [EAX + 0xe0]
00412d94  CMP ECX,EDI
00412d96  JZ 0x00412e29
00412d9c  MOV EDX,dword ptr [ECX]
00412d9e  CALL dword ptr [EDX + 0xf8]
00412da4  JMP 0x00412e29
00412da9  FLD float ptr [ESP + 0x28]
00412dad  FMUL float ptr [0x0089106c]
00412db3  FLD float ptr [ESP + 0x2c]
00412db7  FMUL float ptr [0x0089106c]
00412dbd  FLD float ptr [ESP + 0x30]
00412dc1  FMUL float ptr [0x0089106c]
00412dc7  FSTP float ptr [ESP + 0x24]
00412dcb  FLD float ptr [ESI + 0x90]
00412dd1  FMUL float ptr [0x00891068]
00412dd7  FADD ST0,ST2
00412dd9  FSTP float ptr [ESP + 0x1c]
00412ddd  FLD float ptr [ESI + 0x94]
00412de3  FMUL float ptr [0x00891068]
00412de9  FADD ST0,ST1
00412deb  FSTP ST2
00412ded  FSTP ST0
00412def  FLD float ptr [ESI + 0x98]
00412df5  FMUL float ptr [0x00891068]
00412dfb  FADD float ptr [ESP + 0x24]
00412dff  FXCH
00412e01  FADD float ptr [0x00891054]
00412e07  FLD float ptr [ESP + 0x1c]
00412e0b  FADD float ptr [ESI + 0x84]
00412e11  FSTP float ptr [ESP + 0x34]
00412e15  FADD float ptr [ESI + 0x88]
00412e1b  FSTP float ptr [ESP + 0x38]
00412e1f  FADD float ptr [ESI + 0x8c]
00412e25  FSTP float ptr [ESP + 0x3c]
00412e29  FLD float ptr [ESP + 0x28]
00412e2d  MOV ECX,dword ptr [ESI + 0x58]
00412e30  FADD float ptr [ESI + 0x84]
00412e36  MOV EAX,dword ptr [ECX]
00412e38  SUB ESP,0xc
00412e3b  MOV EDX,ESP
00412e3d  FSTP float ptr [ESP + 0x28]
00412e41  MOV EBX,dword ptr [ESP + 0x28]
00412e45  FLD float ptr [ESP + 0x38]
00412e49  MOV dword ptr [EDX],EBX
00412e4b  FADD float ptr [ESI + 0x88]
00412e51  FSTP float ptr [ESP + 0x2c]
00412e55  MOV EBX,dword ptr [ESP + 0x2c]
00412e59  FLD float ptr [ESP + 0x3c]
00412e5d  MOV dword ptr [EDX + 0x4],EBX
00412e60  FADD float ptr [ESI + 0x8c]
00412e66  FSTP float ptr [ESP + 0x30]
00412e6a  MOV EBX,dword ptr [ESP + 0x30]
00412e6e  MOV dword ptr [EDX + 0x8],EBX
00412e71  CALL dword ptr [EAX + 0xc]
00412e74  MOV ECX,dword ptr [ESI + 0x4c]
00412e77  MOV EAX,dword ptr [ECX]
00412e79  PUSH 0x42c80000
00412e7e  CALL dword ptr [EAX + 0x38]
00412e81  MOV ECX,dword ptr [ESI + 0x80]
00412e87  MOV EDX,dword ptr [ECX]
00412e89  CALL dword ptr [EDX + 0x24]
00412e8c  MOV ECX,dword ptr [EAX]
00412e8e  MOV dword ptr [ESP + 0x64],ECX
00412e92  MOV EDX,dword ptr [EAX + 0x4]
00412e95  MOV ECX,dword ptr [ESI + 0x58]
00412e98  MOV dword ptr [ESP + 0x68],EDX
00412e9c  MOV EAX,dword ptr [EAX + 0x8]
00412e9f  MOV dword ptr [ESP + 0x6c],EAX
00412ea3  MOV EDX,dword ptr [ECX]
00412ea5  LEA EAX,[ESP + 0x64]
00412ea9  PUSH EAX
00412eaa  CALL dword ptr [EDX + 0x14]
00412ead  MOV ECX,dword ptr [ESI + 0x4c]
00412eb0  MOV EDX,dword ptr [ECX]
00412eb2  LEA EAX,[ESP + 0x34]
00412eb6  PUSH EAX
00412eb7  CALL dword ptr [EDX + 0x3c]
00412eba  MOV ECX,dword ptr [ESI + 0x4c]
00412ebd  MOV EDX,dword ptr [ECX]
00412ebf  PUSH 0x7
00412ec1  CALL dword ptr [EDX + 0x2c]
00412ec4  FLD float ptr [ESP + 0x18]
00412ec8  FCOMP float ptr [0x00890968]
00412ece  FLD float ptr [ESP + 0x10]
00412ed2  FNSTSW AX
00412ed4  TEST AH,0x41
00412ed7  JNZ 0x00412efc
00412ed9  FCOMP float ptr [0x00891064]
00412edf  FNSTSW AX
00412ee1  TEST AH,0x41
00412ee4  JNZ 0x00412ee9
00412ee6  MOV dword ptr [ESI + 0x64],EDI
00412ee9  FLD float ptr [ESP + 0x44]
00412eed  FCOMP float ptr [ESI + 0x88]
00412ef3  FNSTSW AX
00412ef5  TEST AH,0x5
00412ef8  JP 0x00412f0c
00412efa  JMP 0x00412f09
00412efc  FCOMP float ptr [0x00891060]
00412f02  FNSTSW AX
00412f04  TEST AH,0x41
00412f07  JNZ 0x00412f0c
00412f09  MOV dword ptr [ESI + 0x64],EDI
00412f0c  FLD float ptr [ESI + 0x64]
00412f0f  FCOMP float ptr [0x00890968]
00412f15  FNSTSW AX
00412f17  TEST AH,0x41
00412f1a  JP 0x00412f22
00412f1c  MOV dword ptr [ESI + 0xa4],EDI
00412f22  POP EDI
00412f23  POP ESI
00412f24  POP EBX
00412f25  ADD ESP,0x70
00412f28  RET
