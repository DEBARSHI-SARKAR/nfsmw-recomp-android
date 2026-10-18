004935c0  MOV EAX,dword ptr [ESP + 0x4]
004935c4  FLD float ptr [ECX + 0x20]
004935c7  FMUL float ptr [EAX + 0x8]
004935ca  MOV EDX,dword ptr [ESP + 0x8]
004935ce  FLD float ptr [ECX + 0x10]
004935d1  SUB ESP,0xc
004935d4  CMP EAX,EDX
004935d6  FMUL float ptr [EAX + 0x4]
004935d9  FADDP
004935db  FLD float ptr [EAX]
004935dd  FMUL float ptr [ECX]
004935df  FADDP
004935e1  JZ 0x0049361b
004935e3  FSTP float ptr [EDX]
004935e5  FLD float ptr [ECX + 0x4]
004935e8  FMUL float ptr [EAX]
004935ea  FLD float ptr [ECX + 0x24]
004935ed  FMUL float ptr [EAX + 0x8]
004935f0  FADDP
004935f2  FLD float ptr [ECX + 0x14]
004935f5  FMUL float ptr [EAX + 0x4]
004935f8  FADDP
004935fa  FSTP float ptr [EDX + 0x4]
004935fd  FLD float ptr [ECX + 0x8]
00493600  FMUL float ptr [EAX]
00493602  FLD float ptr [ECX + 0x28]
00493605  FMUL float ptr [EAX + 0x8]
00493608  FADDP
0049360a  FLD float ptr [ECX + 0x18]
0049360d  FMUL float ptr [EAX + 0x4]
00493610  FADDP
00493612  FSTP float ptr [EDX + 0x8]
00493615  ADD ESP,0xc
00493618  RET 0x8
0049361b  FSTP float ptr [ESP]
0049361e  FLD float ptr [ECX + 0x4]
00493621  FMUL float ptr [EAX]
00493623  FLD float ptr [ECX + 0x24]
00493626  FMUL float ptr [EAX + 0x8]
00493629  FADDP
0049362b  FLD float ptr [ECX + 0x14]
0049362e  FMUL float ptr [EAX + 0x4]
00493631  FADDP
00493633  FSTP float ptr [ESP + 0x4]
00493637  FLD float ptr [ECX + 0x8]
0049363a  FMUL float ptr [EAX]
0049363c  FLD float ptr [ECX + 0x28]
0049363f  FMUL float ptr [EAX + 0x8]
00493642  FADDP
00493644  FLD float ptr [ECX + 0x18]
00493647  MOV ECX,dword ptr [ESP + 0x4]
0049364b  FMUL float ptr [EAX + 0x4]
0049364e  MOV EAX,dword ptr [ESP]
00493651  MOV dword ptr [EDX],EAX
00493653  MOV dword ptr [EDX + 0x4],ECX
00493656  FADDP
00493658  FSTP float ptr [ESP + 0x8]
0049365c  MOV EAX,dword ptr [ESP + 0x8]
00493660  MOV dword ptr [EDX + 0x8],EAX
00493663  ADD ESP,0xc
00493666  RET 0x8
