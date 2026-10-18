00738ce0  MOV ECX,dword ptr [ESP + 0x8]
00738ce4  MOV EAX,dword ptr [ESP + 0xc]
00738ce8  FLD float ptr [ECX + 0x20]
00738ceb  FMUL float ptr [EAX + 0x8]
00738cee  MOV EDX,dword ptr [ESP + 0x4]
00738cf2  FLD float ptr [ECX + 0x10]
00738cf5  FMUL float ptr [EAX + 0x4]
00738cf8  FADDP
00738cfa  FLD float ptr [ECX]
00738cfc  FMUL float ptr [EAX]
00738cfe  FADDP
00738d00  FSTP float ptr [EDX]
00738d02  FLD float ptr [ECX + 0x24]
00738d05  FMUL float ptr [EAX + 0x8]
00738d08  FLD float ptr [ECX + 0x4]
00738d0b  FMUL float ptr [EAX]
00738d0d  FADDP
00738d0f  FLD float ptr [ECX + 0x14]
00738d12  FMUL float ptr [EAX + 0x4]
00738d15  FADDP
00738d17  FSTP float ptr [EDX + 0x4]
00738d1a  FLD float ptr [ECX + 0x28]
00738d1d  FMUL float ptr [EAX + 0x8]
00738d20  FLD float ptr [ECX + 0x8]
00738d23  FMUL float ptr [EAX]
00738d25  FADDP
00738d27  FLD float ptr [ECX + 0x18]
00738d2a  FMUL float ptr [EAX + 0x4]
00738d2d  FADDP
00738d2f  FSTP float ptr [EDX + 0x8]
00738d32  RET
