004669e0  MOV EAX,dword ptr [ESP + 0x8]
004669e4  FLD float ptr [EAX + 0x4]
004669e7  FADD float ptr [ECX + 0x4]
004669ea  FLD float ptr [EAX + 0x8]
004669ed  FADD float ptr [ECX + 0x8]
004669f0  FLD float ptr [EAX + 0xc]
004669f3  FADD float ptr [ECX + 0xc]
004669f6  FSTP float ptr [ESP + 0x8]
004669fa  FLD float ptr [EAX]
004669fc  MOV EAX,dword ptr [ESP + 0x4]
00466a00  FADD float ptr [ECX]
00466a02  MOV ECX,dword ptr [ESP + 0x8]
00466a06  MOV dword ptr [EAX + 0xc],ECX
00466a09  FSTP float ptr [EAX]
00466a0b  FXCH
00466a0d  FSTP float ptr [EAX + 0x4]
00466a10  FSTP float ptr [EAX + 0x8]
00466a13  RET 0x8
