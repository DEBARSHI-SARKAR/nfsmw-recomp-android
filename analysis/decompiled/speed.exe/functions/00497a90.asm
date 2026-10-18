00497a90  SUB ESP,0x10
00497a93  FLD float ptr [ESI]
00497a95  FMUL float ptr [EDX + 0xc]
00497a98  FLD float ptr [EDX + 0x4]
00497a9b  FMUL float ptr [ESI + 0xc]
00497a9e  FLD float ptr [EDX + 0x4]
00497aa1  FMUL float ptr [ESI]
00497aa3  FCHS
00497aa5  FSTP float ptr [ESP + 0x8]
00497aa9  FLD float ptr [ESI + 0xc]
00497aac  FMUL float ptr [EDX + 0xc]
00497aaf  FSTP float ptr [ESP + 0xc]
00497ab3  FLD ST1
00497ab5  FMUL float ptr [EAX + 0xc]
00497ab8  FLD ST1
00497aba  FMUL float ptr [EAX + 0x8]
00497abd  FSUBP
00497abf  FSTP float ptr [ECX]
00497ac1  FMUL float ptr [EAX + 0xc]
00497ac4  FXCH
00497ac6  FMUL float ptr [EAX + 0x8]
00497ac9  FADDP
00497acb  FSTP float ptr [ECX + 0x4]
00497ace  FLD float ptr [ESP + 0xc]
00497ad2  FMUL float ptr [EAX + 0x8]
00497ad5  FLD float ptr [ESP + 0x8]
00497ad9  FMUL float ptr [EAX + 0xc]
00497adc  FADDP
00497ade  FSTP float ptr [ECX + 0x8]
00497ae1  FLD float ptr [ESP + 0xc]
00497ae5  FMUL float ptr [EAX + 0xc]
00497ae8  FLD float ptr [ESP + 0x8]
00497aec  FMUL float ptr [EAX + 0x8]
00497aef  FSUBP
00497af1  FSTP float ptr [ECX + 0xc]
00497af4  ADD ESP,0x10
00497af7  RET
