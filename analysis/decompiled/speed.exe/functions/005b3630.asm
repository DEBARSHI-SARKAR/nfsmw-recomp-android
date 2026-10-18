005b3630  MOV EAX,dword ptr [ESP + 0x4]
005b3634  CMP EAX,0x3
005b3637  JNC 0x005b3665
005b3639  MOV EDX,dword ptr [ECX + 0x2c]
005b363c  FLD float ptr [ESP + 0x8]
005b3640  FSTP float ptr [EDX + EAX*0x8 + 0x54]
005b3644  MOV EDX,dword ptr [ECX + 0x2c]
005b3647  FLD float ptr [ESP + 0xc]
005b364b  FSTP float ptr [EDX + EAX*0x8 + 0x58]
005b364f  MOV EDX,dword ptr [ECX + 0x2c]
005b3652  FLD float ptr [ESP + 0x10]
005b3656  FSTP float ptr [EDX + EAX*0x8 + 0x6c]
005b365a  MOV ECX,dword ptr [ECX + 0x2c]
005b365d  FLD float ptr [ESP + 0x14]
005b3661  FSTP float ptr [ECX + EAX*0x8 + 0x70]
005b3665  RET 0x14
