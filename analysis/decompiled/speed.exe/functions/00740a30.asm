00740a30  SUB ESP,0x64
00740a33  PUSH ESI
00740a34  MOV ESI,ECX
00740a36  FLD float ptr [ESI + 0x64]
00740a39  FCOMP float ptr [0x00890968]
00740a3f  FNSTSW AX
00740a41  TEST AH,0x5
00740a44  JP 0x00740a92
00740a46  FLD float ptr [ESP + 0x6c]
00740a4a  FSUB float ptr [ESI + 0x6c]
00740a4d  FMUL float ptr [0x008b2bd4]
00740a53  FST float ptr [ESP + 0x4]
00740a57  FCOMP float ptr [0x00895074]
00740a5d  FNSTSW AX
00740a5f  TEST AH,0x5
00740a62  JP 0x00740aeb
00740a68  FLD float ptr [ESP + 0x4]
00740a6c  FLD float ptr [0x008b2bd8]
00740a72  FCOMP float ptr [ESP + 0x4]
00740a76  FNSTSW AX
00740a78  TEST AH,0x41
00740a7b  JNZ 0x00740a85
00740a7d  FSTP ST0
00740a7f  FLD float ptr [0x008b2bd8]
00740a85  FLD float ptr [0x0089096c]
00740a8b  FDIV ST0,ST1
00740a8d  FSTP float ptr [ESI + 0x64]
00740a90  FSTP ST0
00740a92  FLD float ptr [ESP + 0x6c]
00740a96  FLD float ptr [ESI + 0x6c]
00740a99  FUCOMPP
00740a9b  FNSTSW AX
00740a9d  TEST AH,0x44
00740aa0  JNP 0x00740c84
00740aa6  PUSH EBX
00740aa7  PUSH EBP
00740aa8  PUSH EDI
00740aa9  LEA EBP,[ESI + 0x40]
00740aac  LEA EDI,[ESI + 0x30]
00740aaf  LEA EBX,[ESI + 0x20]
00740ab2  FLD float ptr [ESP + 0x78]
00740ab6  FSUB float ptr [ESI + 0x6c]
00740ab9  FST float ptr [ESP + 0x14]
00740abd  FCOMP float ptr [0x008970f0]
00740ac3  FNSTSW AX
00740ac5  TEST AH,0x5
00740ac8  JP 0x00740af3
00740aca  FLD float ptr [ESP + 0x14]
00740ace  FLD float ptr [0x008b4b30]
00740ad4  FCOMP float ptr [ESP + 0x14]
00740ad8  FNSTSW AX
00740ada  TEST AH,0x41
00740add  JNZ 0x00740af9
00740adf  FSTP ST0
00740ae1  MOV dword ptr [ESP + 0x10],0xbc888889
00740ae9  JMP 0x00740afd
00740aeb  FLD float ptr [0x00895074]
00740af1  JMP 0x00740a85
00740af3  FLD float ptr [0x008970f0]
00740af9  FSTP float ptr [ESP + 0x10]
00740afd  FLD float ptr [ESP + 0x10]
00740b01  FMUL float ptr [EBX]
00740b03  FADD float ptr [ESI + 0x10]
00740b06  FSTP float ptr [ESI + 0x10]
00740b09  FLD float ptr [ESP + 0x10]
00740b0d  FMUL float ptr [EBX + 0x4]
00740b10  FADD float ptr [ESI + 0x14]
00740b13  FSTP float ptr [ESI + 0x14]
00740b16  FLD float ptr [ESP + 0x10]
00740b1a  FMUL float ptr [EBX + 0x8]
00740b1d  FADD float ptr [ESI + 0x18]
00740b20  FSTP float ptr [ESI + 0x18]
00740b23  MOV AL,byte ptr [ESI + 0x70]
00740b26  TEST AL,AL
00740b28  FLD float ptr [ESP + 0x10]
00740b2c  FMUL float ptr [ESI + 0x10]
00740b2f  FADD float ptr [ESI]
00740b31  FSTP float ptr [ESI]
00740b33  FLD float ptr [ESP + 0x10]
00740b37  FMUL float ptr [ESI + 0x14]
00740b3a  FADD float ptr [ESI + 0x4]
00740b3d  FSTP float ptr [ESI + 0x4]
00740b40  FLD float ptr [ESP + 0x10]
00740b44  FMUL float ptr [ESI + 0x18]
00740b47  FADD float ptr [ESI + 0x8]
00740b4a  FSTP float ptr [ESI + 0x8]
00740b4d  JNZ 0x00740b83
00740b4f  FLD float ptr [ESP + 0x10]
00740b53  FMUL float ptr [ESI + 0x50]
00740b56  FADD float ptr [EBP]
00740b59  FSTP float ptr [EBP]
00740b5c  FLD float ptr [ESP + 0x10]
00740b60  FMUL float ptr [ESI + 0x54]
00740b63  FADD float ptr [EBP + 0x4]
00740b66  FSTP float ptr [EBP + 0x4]
00740b69  FLD float ptr [ESP + 0x10]
00740b6d  FMUL float ptr [ESI + 0x58]
00740b70  FADD float ptr [EBP + 0x8]
00740b73  FSTP float ptr [EBP + 0x8]
00740b76  FLD float ptr [ESP + 0x10]
00740b7a  FMUL float ptr [ESI + 0x5c]
00740b7d  FADD float ptr [EBP + 0xc]
00740b80  FSTP float ptr [EBP + 0xc]
00740b83  LEA EAX,[ESP + 0x24]
00740b87  PUSH EAX
00740b88  PUSH EBP
00740b89  PUSH EDI
00740b8a  CALL 0x004866c0
00740b8f  FLD float ptr [ESP + 0x1c]
00740b93  FMUL float ptr [0x008933d4]
00740b99  PUSH EDI
00740b9a  FLD float ptr [ESP + 0x34]
00740b9e  FMUL ST1
00740ba0  FADD float ptr [EDI]
00740ba2  FSTP float ptr [EDI]
00740ba4  FLD float ptr [ESP + 0x38]
00740ba8  FMUL ST1
00740baa  FADD float ptr [EDI + 0x4]
00740bad  FSTP float ptr [EDI + 0x4]
00740bb0  FLD float ptr [ESP + 0x3c]
00740bb4  FMUL ST1
00740bb6  FADD float ptr [EDI + 0x8]
00740bb9  FSTP float ptr [EDI + 0x8]
00740bbc  FLD float ptr [ESP + 0x40]
00740bc0  FMUL ST1
00740bc2  FADD float ptr [EDI + 0xc]
00740bc5  FSTP float ptr [EDI + 0xc]
00740bc8  FSTP ST0
00740bca  CALL 0x004885d0
00740bcf  FSTP ST0
00740bd1  ADD ESP,0xc
00740bd4  FLD float ptr [ESP + 0x14]
00740bd8  LEA ECX,[ESP + 0x38]
00740bdc  FMUL float ptr [ESI + 0x44]
00740bdf  FMUL float ptr [0x00890964]
00740be5  FSTP float ptr [ESP]
00740be8  PUSH ECX
00740be9  CALL 0x005cb420
00740bee  FLD float ptr [ESP + 0x5c]
00740bf2  MOV EDX,EBX
00740bf4  MOV EAX,dword ptr [EDX]
00740bf6  MOV ECX,dword ptr [EDX + 0x4]
00740bf9  MOV EDX,dword ptr [EDX + 0x8]
00740bfc  MOV dword ptr [ESP + 0x28],EDX
00740c00  FMUL float ptr [ESP + 0x28]
00740c04  FLD float ptr [ESP + 0x4c]
00740c08  MOV dword ptr [ESP + 0x24],ECX
00740c0c  FMUL float ptr [ESP + 0x24]
00740c10  MOV dword ptr [ESP + 0x20],EAX
00740c14  ADD ESP,0x8
00740c17  FADDP
00740c19  FLD float ptr [ESP + 0x34]
00740c1d  FMUL float ptr [ESP + 0x18]
00740c21  FADDP
00740c23  FSTP float ptr [EBX]
00740c25  FLD float ptr [ESP + 0x58]
00740c29  FMUL float ptr [ESP + 0x20]
00740c2d  FLD float ptr [ESP + 0x48]
00740c31  FMUL float ptr [ESP + 0x1c]
00740c35  FADDP
00740c37  FLD float ptr [ESP + 0x38]
00740c3b  FMUL float ptr [ESP + 0x18]
00740c3f  FADDP
00740c41  FSTP float ptr [EBX + 0x4]
00740c44  FLD float ptr [ESP + 0x5c]
00740c48  FMUL float ptr [ESP + 0x20]
00740c4c  FLD float ptr [ESP + 0x4c]
00740c50  FMUL float ptr [ESP + 0x1c]
00740c54  FADDP
00740c56  FLD float ptr [ESP + 0x3c]
00740c5a  FMUL float ptr [ESP + 0x18]
00740c5e  FADDP
00740c60  FSTP float ptr [EBX + 0x8]
00740c63  FLD float ptr [ESP + 0x10]
00740c67  FADD float ptr [ESI + 0x6c]
00740c6a  FSTP float ptr [ESI + 0x6c]
00740c6d  FLD float ptr [ESP + 0x78]
00740c71  FLD float ptr [ESI + 0x6c]
00740c74  FUCOMPP
00740c76  FNSTSW AX
00740c78  TEST AH,0x44
00740c7b  JP 0x00740ab2
00740c81  POP EDI
00740c82  POP EBP
00740c83  POP EBX
00740c84  POP ESI
00740c85  ADD ESP,0x64
00740c88  RET 0x4
