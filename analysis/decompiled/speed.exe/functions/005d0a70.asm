005d0a70  SUB ESP,0x10
005d0a73  PUSH ESI
005d0a74  MOV ESI,dword ptr [ESP + 0x18]
005d0a78  MOV EAX,dword ptr [ESI + 0x8]
005d0a7b  MOV dword ptr [ESP + 0x18],EAX
005d0a7f  FLD float ptr [ESP + 0x18]
005d0a83  FCOMP float ptr [0x00890da8]
005d0a89  FNSTSW AX
005d0a8b  TEST AH,0x5
005d0a8e  JP 0x005d0a9a
005d0a90  MOV dword ptr [ESP + 0x18],0xbf800000
005d0a98  JMP 0x005d0ab3
005d0a9a  FLD float ptr [ESP + 0x18]
005d0a9e  FCOMP float ptr [0x0089096c]
005d0aa4  FNSTSW AX
005d0aa6  TEST AH,0x41
005d0aa9  JNZ 0x005d0ab3
005d0aab  MOV dword ptr [ESP + 0x18],0x3f800000
005d0ab3  FLD float ptr [ESP + 0x18]
005d0ab7  FMUL float ptr [ESP + 0x18]
005d0abb  FSUBR float ptr [0x0089096c]
005d0ac1  FSQRT
005d0ac3  FSTP float ptr [ESP + 0x4]
005d0ac7  FLD float ptr [ESI]
005d0ac9  FCOMP float ptr [0x00890968]
005d0acf  FNSTSW AX
005d0ad1  TEST AH,0x5
005d0ad4  JP 0x005d0af0
005d0ad6  FLD float ptr [ESI + 0x28]
005d0ad9  FCOMP float ptr [0x00890968]
005d0adf  FNSTSW AX
005d0ae1  TEST AH,0x5
005d0ae4  JP 0x005d0af0
005d0ae6  FLD float ptr [ESP + 0x4]
005d0aea  FCHS
005d0aec  FSTP float ptr [ESP + 0x4]
005d0af0  FLD float ptr [ESP + 0x4]
005d0af4  FCOMP float ptr [0x00890968]
005d0afa  FLD float ptr [ESP + 0x4]
005d0afe  FNSTSW AX
005d0b00  TEST AH,0x5
005d0b03  JP 0x005d0b07
005d0b05  FCHS
005d0b07  FCOMP float ptr [0x00890d60]
005d0b0d  FNSTSW AX
005d0b0f  TEST AH,0x41
005d0b12  JNZ 0x005d0b8e
005d0b14  FLD float ptr [0x0089096c]
005d0b1a  PUSH EDI
005d0b1b  FDIV float ptr [ESP + 0x8]
005d0b1f  FST float ptr [ESP + 0xc]
005d0b23  FMUL float ptr [ESI + 0x28]
005d0b26  FSTP float ptr [ESP + 0x10]
005d0b2a  FLD float ptr [ESP + 0xc]
005d0b2e  MOV ECX,dword ptr [ESP + 0x10]
005d0b32  FMUL float ptr [ESI + 0x18]
005d0b35  PUSH ECX
005d0b36  FSTP float ptr [ESP + 0x18]
005d0b3a  MOV EDX,dword ptr [ESP + 0x18]
005d0b3e  PUSH EDX
005d0b3f  CALL 0x005cb5d0
005d0b44  MOV EAX,dword ptr [ESP + 0x10]
005d0b48  MOV ECX,dword ptr [ESP + 0x24]
005d0b4c  MOV EDI,dword ptr [ESP + 0x28]
005d0b50  PUSH EAX
005d0b51  FSTP float ptr [EDI]
005d0b53  PUSH ECX
005d0b54  CALL 0x005cb5d0
005d0b59  FCHS
005d0b5b  FSTP float ptr [EDI + 0x4]
005d0b5e  FLD float ptr [ESP + 0x1c]
005d0b62  FMUL float ptr [ESI]
005d0b64  FSTP float ptr [ESP + 0x2c]
005d0b68  FLD float ptr [ESP + 0x1c]
005d0b6c  MOV EDX,dword ptr [ESP + 0x2c]
005d0b70  FMUL float ptr [ESI + 0x4]
005d0b73  PUSH EDX
005d0b74  FSTP float ptr [ESP + 0x28]
005d0b78  MOV EAX,dword ptr [ESP + 0x28]
005d0b7c  PUSH EAX
005d0b7d  CALL 0x005cb5d0
005d0b82  FSTP float ptr [EDI + 0x8]
005d0b85  ADD ESP,0x18
005d0b88  POP EDI
005d0b89  POP ESI
005d0b8a  ADD ESP,0x10
005d0b8d  RET
005d0b8e  FLD float ptr [ESI + 0x24]
005d0b91  MOV ECX,dword ptr [ESI + 0x14]
005d0b94  FCHS
005d0b96  MOV EDX,ECX
005d0b98  FSTP float ptr [ESP + 0xc]
005d0b9c  PUSH EDX
005d0b9d  MOV EAX,dword ptr [ESP + 0x10]
005d0ba1  PUSH EAX
005d0ba2  MOV dword ptr [ESP + 0x18],ECX
005d0ba6  CALL 0x005cb5d0
005d0bab  MOV ESI,dword ptr [ESP + 0x24]
005d0baf  FSTP float ptr [ESI]
005d0bb1  ADD ESP,0x8
005d0bb4  FLD float ptr [ESP + 0x18]
005d0bb8  CALL 0x007c44e0
005d0bbd  FMUL float ptr [0x008a34e4]
005d0bc3  MOV dword ptr [ESI + 0x8],0x0
005d0bca  FSTP float ptr [ESI + 0x4]
005d0bcd  POP ESI
005d0bce  ADD ESP,0x10
005d0bd1  RET
