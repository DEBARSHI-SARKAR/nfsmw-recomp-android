0042f630  SUB ESP,0xc
0042f633  PUSH ESI
0042f634  MOV ESI,ECX
0042f636  MOV ECX,dword ptr [ESP + 0x18]
0042f63a  MOV EAX,dword ptr [ECX]
0042f63c  CALL dword ptr [EAX + 0x5c]
0042f63f  FSTP float ptr [ESP + 0x18]
0042f643  MOV EDX,dword ptr [ESI]
0042f645  MOV ECX,ESI
0042f647  CALL dword ptr [EDX + 0x10]
0042f64a  FDIVR float ptr [ESP + 0x18]
0042f64e  MOV EAX,dword ptr [ESI + 0x14]
0042f651  FLD float ptr [ESI + 0x20]
0042f654  FADD float ptr [0x0089096c]
0042f65a  FMUL float ptr [0x00890864]
0042f660  FLD ST0
0042f662  FMULP ST2
0042f664  FLD float ptr [0x0089096c]
0042f66a  FSUB ST0,ST1
0042f66c  FADDP ST2,ST0
0042f66e  FSTP ST0
0042f670  FLD float ptr [0x00890968]
0042f676  FMUL ST1
0042f678  FST float ptr [ESP + 0x8]
0042f67c  MOV EDX,dword ptr [ESP + 0x8]
0042f680  FST float ptr [ESP + 0x4]
0042f684  MOV ECX,dword ptr [ESP + 0x4]
0042f688  MOV dword ptr [EAX],ECX
0042f68a  FLD ST1
0042f68c  FMUL float ptr [0x008918d0]
0042f692  MOV dword ptr [EAX + 0x4],EDX
0042f695  FSTP float ptr [ESP + 0xc]
0042f699  MOV ECX,dword ptr [ESP + 0xc]
0042f69d  MOV dword ptr [EAX + 0x8],ECX
0042f6a0  FLD ST1
0042f6a2  FMUL float ptr [0x008918cc]
0042f6a8  MOV EDX,dword ptr [ESI + 0x14]
0042f6ab  ADD EDX,0x20
0042f6ae  FSTP float ptr [ESP + 0x4]
0042f6b2  MOV EAX,dword ptr [ESP + 0x4]
0042f6b6  MOV dword ptr [EDX],EAX
0042f6b8  FST float ptr [ESP + 0x8]
0042f6bc  MOV ECX,dword ptr [ESP + 0x8]
0042f6c0  MOV dword ptr [EDX + 0x4],ECX
0042f6c3  FST float ptr [ESP + 0xc]
0042f6c7  MOV EAX,dword ptr [ESP + 0xc]
0042f6cb  FLD ST1
0042f6cd  FMUL float ptr [0x008908e8]
0042f6d3  MOV dword ptr [EDX + 0x8],EAX
0042f6d6  MOV ECX,dword ptr [ESI + 0x14]
0042f6d9  ADD ECX,0x40
0042f6dc  FSTP float ptr [ESP + 0x4]
0042f6e0  MOV EDX,dword ptr [ESP + 0x4]
0042f6e4  MOV dword ptr [ECX],EDX
0042f6e6  FST float ptr [ESP + 0x8]
0042f6ea  MOV EAX,dword ptr [ESP + 0x8]
0042f6ee  MOV dword ptr [ECX + 0x4],EAX
0042f6f1  FST float ptr [ESP + 0xc]
0042f6f5  MOV EDX,dword ptr [ESP + 0xc]
0042f6f9  FST float ptr [ESP + 0x4]
0042f6fd  MOV dword ptr [ECX + 0x8],EDX
0042f700  FSTP float ptr [ESP + 0x8]
0042f704  MOV EAX,dword ptr [ESI + 0x14]
0042f707  FMUL float ptr [0x008918c8]
0042f70d  MOV ECX,dword ptr [ESP + 0x4]
0042f711  MOV EDX,dword ptr [ESP + 0x8]
0042f715  ADD EAX,0x60
0042f718  MOV dword ptr [EAX],ECX
0042f71a  FSTP float ptr [ESP + 0xc]
0042f71e  MOV ECX,dword ptr [ESP + 0xc]
0042f722  MOV dword ptr [EAX + 0x4],EDX
0042f725  MOV dword ptr [EAX + 0x8],ECX
0042f728  POP ESI
0042f729  ADD ESP,0xc
0042f72c  RET 0x8
