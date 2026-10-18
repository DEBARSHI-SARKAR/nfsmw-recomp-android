005c6c80  FLD float ptr [ESP + 0x8]
005c6c84  MOV EAX,dword ptr [ESP + 0x4]
005c6c88  FMUL float ptr [0x008a2f94]
005c6c8e  MOV ECX,dword ptr [ESP + 0xc]
005c6c92  FLD ST0
005c6c94  FSIN
005c6c96  FXCH
005c6c98  FCOS
005c6c9a  FLD float ptr [EAX]
005c6c9c  FLD ST0
005c6c9e  FMUL ST2
005c6ca0  FLD ST3
005c6ca2  FMUL float ptr [EAX + 0x4]
005c6ca5  FSUBP
005c6ca7  FSTP float ptr [ECX]
005c6ca9  FLD ST1
005c6cab  FMUL float ptr [EAX + 0x4]
005c6cae  FXCH
005c6cb0  FMUL ST3
005c6cb2  FADDP
005c6cb4  FSTP float ptr [ECX + 0x4]
005c6cb7  MOV EDX,dword ptr [EAX + 0x8]
005c6cba  MOV dword ptr [ECX + 0x8],EDX
005c6cbd  MOV EDX,dword ptr [EAX + 0xc]
005c6cc0  MOV dword ptr [ECX + 0xc],EDX
005c6cc3  FLD float ptr [EAX + 0x10]
005c6cc6  FLD ST0
005c6cc8  FMUL ST2
005c6cca  FLD ST3
005c6ccc  FMUL float ptr [EAX + 0x14]
005c6ccf  FSUBP
005c6cd1  FSTP float ptr [ECX + 0x10]
005c6cd4  FLD ST1
005c6cd6  FMUL float ptr [EAX + 0x14]
005c6cd9  FXCH
005c6cdb  FMUL ST3
005c6cdd  FADDP
005c6cdf  FSTP float ptr [ECX + 0x14]
005c6ce2  MOV EDX,dword ptr [EAX + 0x18]
005c6ce5  MOV dword ptr [ECX + 0x18],EDX
005c6ce8  MOV EDX,dword ptr [EAX + 0x1c]
005c6ceb  MOV dword ptr [ECX + 0x1c],EDX
005c6cee  FLD float ptr [EAX + 0x20]
005c6cf1  FLD ST0
005c6cf3  FMUL ST2
005c6cf5  FLD ST3
005c6cf7  FMUL float ptr [EAX + 0x24]
005c6cfa  FSUBP
005c6cfc  FSTP float ptr [ECX + 0x20]
005c6cff  FLD ST1
005c6d01  FMUL float ptr [EAX + 0x24]
005c6d04  FXCH
005c6d06  FMUL ST3
005c6d08  FADDP
005c6d0a  FSTP float ptr [ECX + 0x24]
005c6d0d  MOV EDX,dword ptr [EAX + 0x28]
005c6d10  MOV dword ptr [ECX + 0x28],EDX
005c6d13  MOV EDX,dword ptr [EAX + 0x2c]
005c6d16  MOV dword ptr [ECX + 0x2c],EDX
005c6d19  FLD float ptr [EAX + 0x30]
005c6d1c  FLD ST0
005c6d1e  FMUL ST2
005c6d20  FLD ST3
005c6d22  FMUL float ptr [EAX + 0x34]
005c6d25  FSUBP
005c6d27  FSTP float ptr [ECX + 0x30]
005c6d2a  FMUL ST2
005c6d2c  FXCH
005c6d2e  FMUL float ptr [EAX + 0x34]
005c6d31  FADDP
005c6d33  FSTP float ptr [ECX + 0x34]
005c6d36  MOV EDX,dword ptr [EAX + 0x38]
005c6d39  MOV dword ptr [ECX + 0x38],EDX
005c6d3c  MOV EAX,dword ptr [EAX + 0x3c]
005c6d3f  FSTP ST0
005c6d41  MOV dword ptr [ECX + 0x3c],EAX
005c6d44  RET
