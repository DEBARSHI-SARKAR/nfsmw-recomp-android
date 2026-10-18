006bdfa0  SUB ESP,0x10
006bdfa3  MOV ECX,dword ptr [ESP + 0x18]
006bdfa7  MOV EAX,dword ptr [ESP + 0x1c]
006bdfab  FLD float ptr [ECX + 0x4]
006bdfae  FMUL float ptr [EAX + 0x18]
006bdfb1  FLD float ptr [ECX + 0x8]
006bdfb4  FMUL float ptr [EAX + 0x14]
006bdfb7  FSUBP
006bdfb9  FLD float ptr [EAX + 0x28]
006bdfbc  FMUL float ptr [ECX + 0x4]
006bdfbf  FLD float ptr [EAX + 0x24]
006bdfc2  FMUL float ptr [ECX + 0x8]
006bdfc5  FSUBP
006bdfc7  FLD float ptr [ECX + 0x8]
006bdfca  FMUL float ptr [EAX]
006bdfcc  FLD float ptr [EAX + 0x8]
006bdfcf  FMUL float ptr [ECX]
006bdfd1  FSUBP
006bdfd3  FSTP float ptr [ESP + 0x1c]
006bdfd7  FLD float ptr [ECX + 0x8]
006bdfda  FMUL float ptr [EAX + 0x10]
006bdfdd  FLD float ptr [ECX]
006bdfdf  FMUL float ptr [EAX + 0x18]
006bdfe2  FSUBP
006bdfe4  FSTP float ptr [ESP + 0x18]
006bdfe8  FLD float ptr [ECX + 0x8]
006bdfeb  MOV EDX,dword ptr [ESP + 0x18]
006bdfef  FMUL float ptr [EAX + 0x20]
006bdff2  FLD float ptr [EAX + 0x28]
006bdff5  FMUL float ptr [ECX]
006bdff7  FSUBP
006bdff9  FSTP float ptr [ESP]
006bdffc  FLD float ptr [EAX + 0x4]
006bdfff  FMUL float ptr [ECX]
006be001  FLD float ptr [ECX + 0x4]
006be004  FMUL float ptr [EAX]
006be006  FSUBP
006be008  FSTP float ptr [ESP + 0x4]
006be00c  FLD float ptr [ECX]
006be00e  FMUL float ptr [EAX + 0x14]
006be011  FLD float ptr [EAX + 0x10]
006be014  FMUL float ptr [ECX + 0x4]
006be017  FSUBP
006be019  FSTP float ptr [ESP + 0x8]
006be01d  FLD float ptr [EAX + 0x24]
006be020  FMUL float ptr [ECX]
006be022  FLD float ptr [ECX + 0x4]
006be025  FMUL float ptr [EAX + 0x20]
006be028  FSUBP
006be02a  FSTP float ptr [ESP + 0xc]
006be02e  FLD float ptr [EAX + 0x8]
006be031  FMUL float ptr [ECX + 0x4]
006be034  FLD float ptr [ECX + 0x8]
006be037  MOV ECX,dword ptr [ESP + 0x1c]
006be03b  FMUL float ptr [EAX + 0x4]
006be03e  MOV EAX,dword ptr [ESP + 0x14]
006be042  MOV dword ptr [EAX + 0x4],ECX
006be045  MOV ECX,dword ptr [ESP]
006be048  FSUBP
006be04a  MOV dword ptr [EAX + 0x14],EDX
006be04d  MOV EDX,dword ptr [ESP + 0x4]
006be051  MOV dword ptr [EAX + 0x24],ECX
006be054  MOV ECX,dword ptr [ESP + 0x8]
006be058  FSTP float ptr [EAX]
006be05a  FXCH
006be05c  MOV dword ptr [EAX + 0x8],EDX
006be05f  MOV EDX,dword ptr [ESP + 0xc]
006be063  FSTP float ptr [EAX + 0x10]
006be066  MOV dword ptr [EAX + 0x18],ECX
006be069  FSTP float ptr [EAX + 0x20]
006be06c  MOV dword ptr [EAX + 0x28],EDX
006be06f  ADD ESP,0x10
006be072  RET
