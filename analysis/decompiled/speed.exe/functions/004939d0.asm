004939d0  SUB ESP,0xc
004939d3  FLD float ptr [EAX + 0x28]
004939d6  FMUL float ptr [EAX + 0x3c]
004939d9  FLD float ptr [EAX + 0x38]
004939dc  FMUL float ptr [EAX + 0x2c]
004939df  FSUBP
004939e1  FLD float ptr [EAX + 0x34]
004939e4  FMUL float ptr [EAX + 0x2c]
004939e7  FLD float ptr [EAX + 0x3c]
004939ea  FMUL float ptr [EAX + 0x24]
004939ed  FLD float ptr [EAX + 0x38]
004939f0  FMUL float ptr [EAX + 0x24]
004939f3  FLD float ptr [EAX + 0x28]
004939f6  FMUL float ptr [EAX + 0x34]
004939f9  FSUBP
004939fb  FLD float ptr [EAX + 0x3c]
004939fe  FMUL float ptr [EAX + 0x20]
00493a01  FLD float ptr [EAX + 0x38]
00493a04  FMUL float ptr [EAX + 0x20]
00493a07  FSTP float ptr [ESP + 0x4]
00493a0b  FLD float ptr [EAX + 0x28]
00493a0e  FMUL float ptr [EAX + 0x30]
00493a11  FSTP float ptr [ESP]
00493a14  FLD float ptr [EAX + 0x34]
00493a17  FMUL float ptr [EAX + 0x20]
00493a1a  FLD float ptr [EAX + 0x30]
00493a1d  FMUL float ptr [EAX + 0x24]
00493a20  FSUBP
00493a22  FSTP float ptr [ESP + 0x8]
00493a26  FLD ST3
00493a28  FSUB ST0,ST3
00493a2a  FMUL float ptr [EAX + 0x18]
00493a2d  FLD ST2
00493a2f  FMUL float ptr [EAX + 0x1c]
00493a32  FADDP
00493a34  FLD ST5
00493a36  FMUL float ptr [EAX + 0x14]
00493a39  FADDP
00493a3b  FMUL float ptr [EAX]
00493a3d  FLD float ptr [EAX + 0x30]
00493a40  FMUL float ptr [EAX + 0x2c]
00493a43  FSUB ST0,ST2
00493a45  FMUL float ptr [EAX + 0x18]
00493a48  FLD float ptr [ESP + 0x4]
00493a4c  FSUB float ptr [ESP]
00493a4f  FMUL float ptr [EAX + 0x1c]
00493a52  FADDP
00493a54  FXCH ST6
00493a56  FMUL float ptr [EAX + 0x10]
00493a59  FADDP ST6,ST0
00493a5b  FXCH ST5
00493a5d  FMUL float ptr [EAX + 0x4]
00493a60  FSUBP ST5,ST0
00493a62  FLD ST3
00493a64  FSUB ST0,ST1
00493a66  FMUL float ptr [EAX + 0x14]
00493a69  FXCH ST3
00493a6b  FSUB ST0,ST4
00493a6d  FMUL float ptr [EAX + 0x10]
00493a70  FADDP ST3,ST0
00493a72  FLD float ptr [ESP + 0x8]
00493a76  FMUL float ptr [EAX + 0x1c]
00493a79  FADDP ST3,ST0
00493a7b  FXCH ST2
00493a7d  FMUL float ptr [EAX + 0x8]
00493a80  FADDP ST4,ST0
00493a82  FLD float ptr [ESP]
00493a85  FSUB float ptr [ESP + 0x4]
00493a89  FMUL float ptr [EAX + 0x14]
00493a8c  FXCH
00493a8e  FMUL float ptr [EAX + 0x10]
00493a91  FADDP
00493a93  FLD float ptr [ESP + 0x8]
00493a97  FMUL float ptr [EAX + 0x18]
00493a9a  FADDP
00493a9c  FMUL float ptr [EAX + 0xc]
00493a9f  FSUBP ST3,ST0
00493aa1  FSTP ST0
00493aa3  FSTP ST0
00493aa5  ADD ESP,0xc
00493aa8  RET
