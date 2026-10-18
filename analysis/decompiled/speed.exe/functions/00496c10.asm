00496c10  SUB ESP,0x10
00496c13  FLD float ptr [EDX]
00496c15  FSUB float ptr [EAX]
00496c17  FMUL float ptr [ESP + 0x14]
00496c1b  FADD float ptr [EAX]
00496c1d  FLD float ptr [EDX + 0x4]
00496c20  FSUB float ptr [EAX + 0x4]
00496c23  FMUL float ptr [ESP + 0x14]
00496c27  FADD float ptr [EAX + 0x4]
00496c2a  FLD float ptr [EDX + 0x8]
00496c2d  FSUB float ptr [EAX + 0x8]
00496c30  FMUL float ptr [ESP + 0x14]
00496c34  FADD float ptr [EAX + 0x8]
00496c37  FSTP float ptr [ESP + 0x8]
00496c3b  FLD float ptr [EDX + 0xc]
00496c3e  FSUB float ptr [EAX + 0xc]
00496c41  FMUL float ptr [ESP + 0x14]
00496c45  FADD float ptr [EAX + 0xc]
00496c48  FST float ptr [ESP + 0xc]
00496c4c  FMUL float ptr [ESP + 0xc]
00496c50  FLD float ptr [ESP + 0x8]
00496c54  FMUL float ptr [ESP + 0x8]
00496c58  FADDP
00496c5a  FLD ST1
00496c5c  FMUL ST2
00496c5e  FADDP
00496c60  FLD ST2
00496c62  FMUL ST3
00496c64  FADDP
00496c66  FSQRT
00496c68  FDIVR float ptr [0x0089096c]
00496c6e  FST float ptr [ESP + 0x14]
00496c72  FMUL ST2
00496c74  FSTP float ptr [ESP]
00496c77  MOV EAX,dword ptr [ESP]
00496c7a  FLD float ptr [ESP + 0x14]
00496c7e  MOV dword ptr [ECX],EAX
00496c80  FMUL ST1
00496c82  FSTP float ptr [ESP + 0x4]
00496c86  MOV EDX,dword ptr [ESP + 0x4]
00496c8a  MOV dword ptr [ECX + 0x4],EDX
00496c8d  FSTP ST0
00496c8f  FSTP ST0
00496c91  FLD float ptr [ESP + 0x14]
00496c95  FMUL float ptr [ESP + 0x8]
00496c99  FSTP float ptr [ESP + 0x8]
00496c9d  MOV EAX,dword ptr [ESP + 0x8]
00496ca1  FLD float ptr [ESP + 0x14]
00496ca5  MOV dword ptr [ECX + 0x8],EAX
00496ca8  FMUL float ptr [ESP + 0xc]
00496cac  FSTP float ptr [ESP + 0xc]
00496cb0  MOV EDX,dword ptr [ESP + 0xc]
00496cb4  MOV dword ptr [ECX + 0xc],EDX
00496cb7  ADD ESP,0x10
00496cba  RET
