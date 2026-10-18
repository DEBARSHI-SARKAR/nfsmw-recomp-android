005c5ec0  MOV EAX,dword ptr [ESP + 0x4]
005c5ec4  FLD float ptr [EAX]
005c5ec6  MOV ECX,dword ptr [ESP + 0x8]
005c5eca  FMUL float ptr [0x008a2f94]
005c5ed0  MOV EDX,dword ptr [ESP + 0xc]
005c5ed4  FLD ST0
005c5ed6  FSIN
005c5ed8  FSTP float ptr [ECX]
005c5eda  FCOS
005c5edc  FSTP float ptr [EDX]
005c5ede  RET
