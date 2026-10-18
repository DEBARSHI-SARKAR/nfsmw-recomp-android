006c88d0  SUB ESP,0x34
006c88d3  FLD float ptr [EDX]
006c88d5  PUSH ESI
006c88d6  MOV ESI,dword ptr [EAX]
006c88d8  FLD float ptr [EDX + 0x4]
006c88db  FLD float ptr [EDX + 0x8]
006c88de  MOV dword ptr [ESP + 0x8],ESI
006c88e2  MOV ESI,dword ptr [EAX + 0x4]
006c88e5  FLD float ptr [ECX]
006c88e7  FLD float ptr [ECX + 0x4]
006c88ea  MOV dword ptr [ESP + 0xc],ESI
006c88ee  MOV ESI,dword ptr [EAX + 0x8]
006c88f1  FLD float ptr [ECX + 0x8]
006c88f4  MOV dword ptr [ESP + 0x10],ESI
006c88f8  FLD float ptr [ESP + 0x10]
006c88fc  FMUL ST2
006c88fe  FLD float ptr [ESP + 0xc]
006c8902  FMUL ST2
006c8904  FSUBP
006c8906  FSTP float ptr [ESP + 0x20]
006c890a  MOV ESI,dword ptr [ESP + 0x20]
006c890e  FLD float ptr [ESP + 0x8]
006c8912  MOV dword ptr [ESP + 0x14],ESI
006c8916  FMUL ST1
006c8918  FLD float ptr [ESP + 0x10]
006c891c  FMUL ST4
006c891e  FSUBP
006c8920  FSTP float ptr [ESP + 0x24]
006c8924  MOV ESI,dword ptr [ESP + 0x24]
006c8928  FLD float ptr [ESP + 0xc]
006c892c  MOV dword ptr [ESP + 0x18],ESI
006c8930  FMUL ST3
006c8932  FLD ST2
006c8934  FMUL float ptr [ESP + 0x8]
006c8938  FSUBP
006c893a  FSTP float ptr [ESP + 0x28]
006c893e  MOV ESI,dword ptr [ESP + 0x28]
006c8942  FLD float ptr [ESP + 0xc]
006c8946  MOV dword ptr [ESP + 0x1c],ESI
006c894a  FMUL ST4
006c894c  FLD float ptr [ESP + 0x10]
006c8950  FMUL ST6
006c8952  FSUBP
006c8954  FSTP float ptr [ESP + 0x20]
006c8958  MOV ESI,dword ptr [ESP + 0x20]
006c895c  FLD float ptr [ESP + 0x10]
006c8960  FMUL ST6
006c8962  FLD ST4
006c8964  FMUL float ptr [ESP + 0x8]
006c8968  FSUBP
006c896a  FSTP float ptr [ESP + 0x24]
006c896e  FLD ST4
006c8970  FMUL float ptr [ESP + 0x8]
006c8974  MOV dword ptr [ESP + 0x8],ESI
006c8978  FLD float ptr [ESP + 0xc]
006c897c  MOV ESI,dword ptr [ESP + 0x24]
006c8980  FMUL ST7
006c8982  MOV dword ptr [ESP + 0xc],ESI
006c8986  FSUBP
006c8988  FSTP float ptr [ESP + 0x28]
006c898c  MOV ESI,dword ptr [ESP + 0x28]
006c8990  MOV dword ptr [ESP + 0x10],ESI
006c8994  FLD ST0
006c8996  FMUL ST5
006c8998  FLD ST2
006c899a  FMUL ST5
006c899c  FSUBP
006c899e  FSTP float ptr [ESP + 0x2c]
006c89a2  MOV ESI,dword ptr [ESP + 0x2c]
006c89a6  FLD ST3
006c89a8  MOV dword ptr [ESP + 0x20],ESI
006c89ac  FMUL ST3
006c89ae  FXCH
006c89b0  FMUL ST6
006c89b2  FSUBP
006c89b4  FSTP float ptr [ESP + 0x30]
006c89b8  FMUL ST4
006c89ba  FLD ST3
006c89bc  FMUL ST2
006c89be  FSUBP
006c89c0  FSTP float ptr [ESP + 0x34]
006c89c4  FSTP ST0
006c89c6  FLD float ptr [ESP + 0x1c]
006c89ca  MOV ESI,dword ptr [ESP + 0x30]
006c89ce  FMUL ST1
006c89d0  MOV dword ptr [ESP + 0x24],ESI
006c89d4  FLD float ptr [ESP + 0x18]
006c89d8  MOV ESI,dword ptr [ESP + 0x34]
006c89dc  FMUL ST3
006c89de  MOV dword ptr [ESP + 0x28],ESI
006c89e2  FADDP
006c89e4  FXCH ST3
006c89e6  FMUL float ptr [ESP + 0x14]
006c89ea  FADDP ST3,ST0
006c89ec  FXCH ST2
006c89ee  FSTP float ptr [ESP + 0x4]
006c89f2  MOV ESI,dword ptr [ESP + 0x4]
006c89f6  AND ESI,0x7f800000
006c89fc  FSTP ST1
006c89fe  FSTP ST0
006c8a00  JZ 0x006c8b4d
006c8a06  CMP ESI,0x7f800000
006c8a0c  JZ 0x006c8b4d
006c8a12  FLD float ptr [0x0089096c]
006c8a18  FDIV float ptr [ESP + 0x4]
006c8a1c  FLD float ptr [EDX + 0xc]
006c8a1f  FLD float ptr [ESP + 0x14]
006c8a23  FMUL ST1
006c8a25  FSTP float ptr [ESP + 0x2c]
006c8a29  MOV EDX,dword ptr [ESP + 0x2c]
006c8a2d  FLD float ptr [ESP + 0x18]
006c8a31  MOV dword ptr [ESP + 0x14],EDX
006c8a35  FMUL ST1
006c8a37  FSTP float ptr [ESP + 0x30]
006c8a3b  MOV EDX,dword ptr [ESP + 0x30]
006c8a3f  FLD float ptr [ESP + 0x1c]
006c8a43  MOV dword ptr [ESP + 0x18],EDX
006c8a47  FMUL ST1
006c8a49  FSTP float ptr [ESP + 0x34]
006c8a4d  MOV EDX,dword ptr [ESP + 0x34]
006c8a51  MOV dword ptr [ESP + 0x1c],EDX
006c8a55  FSTP ST0
006c8a57  FLD float ptr [ECX + 0xc]
006c8a5a  FLD float ptr [ESP + 0x8]
006c8a5e  FMUL ST1
006c8a60  FSTP float ptr [ESP + 0x2c]
006c8a64  MOV ECX,dword ptr [ESP + 0x2c]
006c8a68  FLD float ptr [ESP + 0xc]
006c8a6c  MOV dword ptr [ESP + 0x8],ECX
006c8a70  FMUL ST1
006c8a72  FSTP float ptr [ESP + 0x30]
006c8a76  MOV EDX,dword ptr [ESP + 0x30]
006c8a7a  FLD float ptr [ESP + 0x10]
006c8a7e  MOV dword ptr [ESP + 0xc],EDX
006c8a82  FMUL ST1
006c8a84  FSTP float ptr [ESP + 0x34]
006c8a88  MOV ECX,dword ptr [ESP + 0x34]
006c8a8c  MOV dword ptr [ESP + 0x10],ECX
006c8a90  FSTP ST0
006c8a92  FLD float ptr [EAX + 0xc]
006c8a95  FLD float ptr [ESP + 0x20]
006c8a99  FMUL ST1
006c8a9b  FSTP float ptr [ESP + 0x2c]
006c8a9f  MOV EDX,dword ptr [ESP + 0x2c]
006c8aa3  FLD float ptr [ESP + 0x24]
006c8aa7  MOV dword ptr [ESP + 0x20],EDX
006c8aab  FMUL ST1
006c8aad  FSTP float ptr [ESP + 0x30]
006c8ab1  MOV EAX,dword ptr [ESP + 0x30]
006c8ab5  FLD float ptr [ESP + 0x28]
006c8ab9  MOV dword ptr [ESP + 0x24],EAX
006c8abd  FMUL ST1
006c8abf  FSTP float ptr [ESP + 0x34]
006c8ac3  MOV ECX,dword ptr [ESP + 0x34]
006c8ac7  MOV dword ptr [ESP + 0x28],ECX
006c8acb  FSTP ST0
006c8acd  FLD float ptr [ESP + 0x8]
006c8ad1  FADD float ptr [ESP + 0x14]
006c8ad5  FLD float ptr [ESP + 0xc]
006c8ad9  FADD float ptr [ESP + 0x18]
006c8add  FLD float ptr [ESP + 0x10]
006c8ae1  FADD float ptr [ESP + 0x1c]
006c8ae5  FSTP float ptr [ESP + 0x34]
006c8ae9  FXCH
006c8aeb  FADD float ptr [ESP + 0x20]
006c8aef  FSTP float ptr [ESP + 0x14]
006c8af3  FADD float ptr [ESP + 0x24]
006c8af7  FLD float ptr [ESP + 0x34]
006c8afb  FADD float ptr [ESP + 0x28]
006c8aff  FLD float ptr [ESP + 0x14]
006c8b03  FCHS
006c8b05  FSTP float ptr [ESP + 0x20]
006c8b09  FXCH
006c8b0b  FCHS
006c8b0d  FSTP float ptr [ESP + 0x24]
006c8b11  FCHS
006c8b13  FLD float ptr [ESP + 0x20]
006c8b17  FMUL ST2
006c8b19  FSTP float ptr [ESP + 0x2c]
006c8b1d  FLD float ptr [ESP + 0x24]
006c8b21  FMUL ST2
006c8b23  FSTP float ptr [ESP + 0x30]
006c8b27  FMUL ST1
006c8b29  FSTP float ptr [ESP + 0x34]
006c8b2d  MOV EDX,dword ptr [ESP + 0x2c]
006c8b31  FSTP ST0
006c8b33  MOV EAX,dword ptr [ESP + 0x30]
006c8b37  MOV ECX,dword ptr [ESP + 0x34]
006c8b3b  MOV dword ptr [EDI],EDX
006c8b3d  MOV dword ptr [EDI + 0x4],EAX
006c8b40  MOV dword ptr [EDI + 0x8],ECX
006c8b43  MOV EAX,0x1
006c8b48  POP ESI
006c8b49  ADD ESP,0x34
006c8b4c  RET
006c8b4d  XOR EAX,EAX
006c8b4f  POP ESI
006c8b50  ADD ESP,0x34
006c8b53  RET
