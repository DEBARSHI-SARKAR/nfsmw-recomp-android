005c6bb0  FLD float ptr [ESP + 0x8]
005c6bb4  MOV EAX,dword ptr [ESP + 0x4]
005c6bb8  FMUL float ptr [0x008a2f94]
005c6bbe  MOV ECX,dword ptr [ESP + 0xc]
005c6bc2  FLD ST0
005c6bc4  FSIN
005c6bc6  FXCH
005c6bc8  FCOS
005c6bca  FLD float ptr [EAX]
005c6bcc  FLD ST2
005c6bce  FMUL float ptr [EAX + 0x8]
005c6bd1  FLD ST1
005c6bd3  FMUL ST3
005c6bd5  FADDP
005c6bd7  FSTP float ptr [ECX]
005c6bd9  MOV EDX,dword ptr [EAX + 0x4]
005c6bdc  MOV dword ptr [ECX + 0x4],EDX
005c6bdf  FLD ST1
005c6be1  FMUL float ptr [EAX + 0x8]
005c6be4  FXCH
005c6be6  FMUL ST3
005c6be8  FSUBP
005c6bea  FSTP float ptr [ECX + 0x8]
005c6bed  MOV EDX,dword ptr [EAX + 0xc]
005c6bf0  MOV dword ptr [ECX + 0xc],EDX
005c6bf3  FLD float ptr [EAX + 0x10]
005c6bf6  FLD ST2
005c6bf8  FMUL float ptr [EAX + 0x18]
005c6bfb  FLD ST1
005c6bfd  FMUL ST3
005c6bff  FADDP
005c6c01  FSTP float ptr [ECX + 0x10]
005c6c04  MOV EDX,dword ptr [EAX + 0x14]
005c6c07  MOV dword ptr [ECX + 0x14],EDX
005c6c0a  FLD ST1
005c6c0c  FMUL float ptr [EAX + 0x18]
005c6c0f  FXCH
005c6c11  FMUL ST3
005c6c13  FSUBP
005c6c15  FSTP float ptr [ECX + 0x18]
005c6c18  MOV EDX,dword ptr [EAX + 0x1c]
005c6c1b  MOV dword ptr [ECX + 0x1c],EDX
005c6c1e  FLD float ptr [EAX + 0x20]
005c6c21  FLD ST2
005c6c23  FMUL float ptr [EAX + 0x28]
005c6c26  FLD ST1
005c6c28  FMUL ST3
005c6c2a  FADDP
005c6c2c  FSTP float ptr [ECX + 0x20]
005c6c2f  MOV EDX,dword ptr [EAX + 0x24]
005c6c32  MOV dword ptr [ECX + 0x24],EDX
005c6c35  FLD ST1
005c6c37  FMUL float ptr [EAX + 0x28]
005c6c3a  FXCH
005c6c3c  FMUL ST3
005c6c3e  FSUBP
005c6c40  FSTP float ptr [ECX + 0x28]
005c6c43  MOV EDX,dword ptr [EAX + 0x2c]
005c6c46  MOV dword ptr [ECX + 0x2c],EDX
005c6c49  FLD float ptr [EAX + 0x30]
005c6c4c  FLD ST0
005c6c4e  FMUL ST2
005c6c50  FLD ST3
005c6c52  FMUL float ptr [EAX + 0x38]
005c6c55  FADDP
005c6c57  FSTP float ptr [ECX + 0x30]
005c6c5a  MOV EDX,dword ptr [EAX + 0x34]
005c6c5d  FXCH
005c6c5f  MOV dword ptr [ECX + 0x34],EDX
005c6c62  FMUL float ptr [EAX + 0x38]
005c6c65  FXCH
005c6c67  FMUL ST2
005c6c69  FSUBP
005c6c6b  FSTP float ptr [ECX + 0x38]
005c6c6e  MOV EAX,dword ptr [EAX + 0x3c]
005c6c71  MOV dword ptr [ECX + 0x3c],EAX
005c6c74  FSTP ST0
005c6c76  RET
