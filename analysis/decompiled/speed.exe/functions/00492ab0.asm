00492ab0  SUB ESP,0x18
00492ab3  MOV EAX,dword ptr [ESP + 0x1c]
00492ab7  FLD float ptr [EAX]
00492ab9  FADD ST0,ST0
00492abb  FLD float ptr [EAX + 0x4]
00492abe  FADD ST0,ST0
00492ac0  FLD float ptr [EAX + 0x8]
00492ac3  FADD ST0,ST0
00492ac5  FSTP float ptr [ESP + 0x1c]
00492ac9  FLD ST1
00492acb  FMUL float ptr [EAX + 0xc]
00492ace  FSTP float ptr [ESP + 0x10]
00492ad2  FLD ST0
00492ad4  FMUL float ptr [EAX + 0xc]
00492ad7  FSTP float ptr [ESP + 0xc]
00492adb  FLD float ptr [ESP + 0x1c]
00492adf  FMUL float ptr [EAX + 0xc]
00492ae2  FSTP float ptr [ESP + 0x4]
00492ae6  FXCH
00492ae8  FMUL float ptr [EAX]
00492aea  FSTP float ptr [ESP + 0x14]
00492aee  FLD ST0
00492af0  FMUL float ptr [EAX]
00492af2  FSTP float ptr [ESP]
00492af5  FLD float ptr [ESP + 0x1c]
00492af9  FMUL float ptr [EAX]
00492afb  FSTP float ptr [ESP + 0x8]
00492aff  FMUL float ptr [EAX + 0x4]
00492b02  FLD float ptr [ESP + 0x1c]
00492b06  FMUL float ptr [EAX + 0x4]
00492b09  FLD float ptr [ESP + 0x1c]
00492b0d  FMUL float ptr [EAX + 0x8]
00492b10  MOV EAX,dword ptr [ESP + 0x20]
00492b14  FLD ST0
00492b16  FADD ST0,ST3
00492b18  FSUBR float ptr [0x0089096c]
00492b1e  FSTP float ptr [EAX]
00492b20  FLD float ptr [ESP]
00492b23  FSUB float ptr [ESP + 0x4]
00492b27  FSTP float ptr [EAX + 0xc]
00492b2a  FLD float ptr [ESP + 0x8]
00492b2e  FADD float ptr [ESP + 0xc]
00492b32  FSTP float ptr [EAX + 0x18]
00492b35  FLD float ptr [ESP]
00492b38  FADD float ptr [ESP + 0x4]
00492b3c  FSTP float ptr [EAX + 0x4]
00492b3f  FADD float ptr [ESP + 0x14]
00492b43  FSUBR float ptr [0x0089096c]
00492b49  FSTP float ptr [EAX + 0x10]
00492b4c  FLD float ptr [ESP + 0x10]
00492b50  FSUBR ST0,ST1
00492b52  FSTP float ptr [EAX + 0x1c]
00492b55  FLD float ptr [ESP + 0x8]
00492b59  FSUB float ptr [ESP + 0xc]
00492b5d  FSTP float ptr [EAX + 0x8]
00492b60  FADD float ptr [ESP + 0x10]
00492b64  FSTP float ptr [EAX + 0x14]
00492b67  FADD float ptr [ESP + 0x14]
00492b6b  FSUBR float ptr [0x0089096c]
00492b71  FSTP float ptr [EAX + 0x20]
00492b74  ADD ESP,0x18
00492b77  RET
