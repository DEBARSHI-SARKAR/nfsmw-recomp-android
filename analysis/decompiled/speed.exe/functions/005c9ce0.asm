005c9ce0  SUB ESP,0x8
005c9ce3  MOV ECX,dword ptr [ESP + 0x14]
005c9ce7  MOV EAX,dword ptr [ESP + 0x10]
005c9ceb  FLD float ptr [ECX]
005c9ced  FSUB float ptr [EAX]
005c9cef  FLD float ptr [ECX + 0x4]
005c9cf2  FSUB float ptr [EAX + 0x4]
005c9cf5  FLD float ptr [ECX + 0x8]
005c9cf8  MOV ECX,dword ptr [ESP + 0xc]
005c9cfc  FSUB float ptr [EAX + 0x8]
005c9cff  FSTP float ptr [ESP + 0x14]
005c9d03  FLD float ptr [ECX]
005c9d05  FSUB float ptr [EAX]
005c9d07  FLD float ptr [ECX + 0x4]
005c9d0a  FSUB float ptr [EAX + 0x4]
005c9d0d  FSTP float ptr [ESP + 0xc]
005c9d11  FLD float ptr [ECX + 0x8]
005c9d14  FSUB float ptr [EAX + 0x8]
005c9d17  FST float ptr [ESP]
005c9d1a  FMUL float ptr [ESP + 0x14]
005c9d1e  FLD float ptr [ESP + 0xc]
005c9d22  FMUL ST3
005c9d24  FADDP
005c9d26  FLD ST1
005c9d28  FMUL ST4
005c9d2a  FADDP
005c9d2c  FLD float ptr [ESP + 0x14]
005c9d30  FMUL float ptr [ESP + 0x14]
005c9d34  FLD ST3
005c9d36  FMUL ST4
005c9d38  FADDP
005c9d3a  FLD ST4
005c9d3c  FMUL ST5
005c9d3e  FADDP
005c9d40  FDIVP
005c9d42  FST float ptr [ESP + 0x10]
005c9d46  FMUL ST3
005c9d48  FSUBR ST0,ST1
005c9d4a  FSTP float ptr [ESP + 0x4]
005c9d4e  FSTP ST0
005c9d50  FLD float ptr [ESP + 0x10]
005c9d54  FMUL ST1
005c9d56  FSUBR float ptr [ESP + 0xc]
005c9d5a  FSTP ST2
005c9d5c  FSTP ST0
005c9d5e  FLD float ptr [ESP + 0x10]
005c9d62  FMUL float ptr [ESP + 0x14]
005c9d66  FSUBR float ptr [ESP]
005c9d69  FLD ST0
005c9d6b  FMUL ST1
005c9d6d  FLD ST2
005c9d6f  FMUL ST3
005c9d71  FADDP
005c9d73  FLD float ptr [ESP + 0x4]
005c9d77  FMUL float ptr [ESP + 0x4]
005c9d7b  FADDP
005c9d7d  FSTP ST2
005c9d7f  FSTP ST0
005c9d81  ADD ESP,0x8
005c9d84  RET
