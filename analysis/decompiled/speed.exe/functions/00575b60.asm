00575b60  PUSH ESI
00575b61  MOV ESI,ECX
00575b63  MOV AL,byte ptr [ESI + 0xf0]
00575b69  TEST AL,AL
00575b6b  JZ 0x00575ca5
00575b71  MOV ECX,dword ptr [ESP + 0xc]
00575b75  CMP ECX,0xb5971bf1
00575b7b  JNZ 0x00575b8b
00575b7d  FLD float ptr [ESI + 0xec]
00575b83  FADD float ptr [ESI + 0xe8]
00575b89  JMP 0x00575b9f
00575b8b  CMP ECX,0x9120409e
00575b91  JNZ 0x00575ba5
00575b93  FLD float ptr [ESI + 0xe8]
00575b99  FSUB float ptr [ESI + 0xec]
00575b9f  FSTP float ptr [ESI + 0xe8]
00575ba5  FLD float ptr [ESI + 0xe0]
00575bab  FLD float ptr [ESI + 0xe8]
00575bb1  FST float ptr [ESP + 0xc]
00575bb5  FCOMP
00575bb7  FNSTSW AX
00575bb9  TEST AH,0x41
00575bbc  JNZ 0x00575bc4
00575bbe  FSTP ST0
00575bc0  FLD float ptr [ESP + 0xc]
00575bc4  MOV EAX,dword ptr [ESI + 0xe4]
00575bca  MOV dword ptr [ESP + 0xc],EAX
00575bce  FCOM float ptr [ESP + 0xc]
00575bd2  FNSTSW AX
00575bd4  TEST AH,0x5
00575bd7  JNP 0x00575bdf
00575bd9  FSTP ST0
00575bdb  FLD float ptr [ESP + 0xc]
00575bdf  FST float ptr [ESI + 0xe8]
00575be5  MOV EAX,dword ptr [ESI + 0x80]
00575beb  FLD float ptr [ESI + 0xe4]
00575bf1  MOV EDX,dword ptr [ESI + 0x88]
00575bf7  FADD float ptr [ESI + 0xe0]
00575bfd  MOV dword ptr [ESP + 0xc],EAX
00575c01  FMUL float ptr [0x008933d4]
00575c07  FADD float ptr [ESI + 0xe0]
00575c0d  MOV dword ptr [ESI + 0x84],EDX
00575c13  FSUBRP
00575c15  FCOM float ptr [ESP + 0xc]
00575c19  FNSTSW AX
00575c1b  TEST AH,0x41
00575c1e  JZ 0x00575c26
00575c20  FSTP ST0
00575c22  FLD float ptr [ESP + 0xc]
00575c26  MOV EDX,dword ptr [ESI + 0x7c]
00575c29  MOV dword ptr [ESP + 0xc],EDX
00575c2d  FCOM float ptr [ESP + 0xc]
00575c31  FNSTSW AX
00575c33  TEST AH,0x5
00575c36  JNP 0x00575c3e
00575c38  FSTP ST0
00575c3a  FLD float ptr [ESP + 0xc]
00575c3e  FSTP float ptr [ESI + 0x88]
00575c44  MOV EDX,dword ptr [ESI + 0xbc]
00575c4a  FLD float ptr [ESI + 0xe8]
00575c50  MOV EAX,dword ptr [ESI + 0xc4]
00575c56  MOV dword ptr [ESP + 0xc],EDX
00575c5a  FCOM float ptr [ESP + 0xc]
00575c5e  MOV dword ptr [ESI + 0xc0],EAX
00575c64  FNSTSW AX
00575c66  TEST AH,0x41
00575c69  JZ 0x00575c71
00575c6b  FSTP ST0
00575c6d  FLD float ptr [ESP + 0xc]
00575c71  MOV EAX,dword ptr [ESI + 0xb8]
00575c77  MOV dword ptr [ESP + 0xc],EAX
00575c7b  FCOM float ptr [ESP + 0xc]
00575c7f  FNSTSW AX
00575c81  TEST AH,0x5
00575c84  JNP 0x00575c8c
00575c86  FSTP ST0
00575c88  FLD float ptr [ESP + 0xc]
00575c8c  FSTP float ptr [ESI + 0xc4]
00575c92  MOV EDX,dword ptr [ESI]
00575c94  PUSH ECX
00575c95  MOV ECX,ESI
00575c97  MOV byte ptr [ESI + 0x2a],0x1
00575c9b  CALL dword ptr [EDX + 0x38]
00575c9e  MOV EAX,dword ptr [ESI]
00575ca0  MOV ECX,ESI
00575ca2  CALL dword ptr [EAX + 0xc]
00575ca5  POP ESI
00575ca6  RET 0x8
