00401670  SUB ESP,0xc
00401673  MOV EAX,dword ptr [ESP + 0x10]
00401677  MOV ECX,dword ptr [EAX]
00401679  MOV EDX,dword ptr [EAX + 0x4]
0040167c  MOV EAX,dword ptr [EAX + 0x8]
0040167f  MOV dword ptr [ESP + 0x8],EAX
00401683  FLD float ptr [ESP + 0x8]
00401687  MOV EAX,dword ptr [ESP + 0x14]
0040168b  FMUL float ptr [EAX + 0x20]
0040168e  MOV dword ptr [ESP + 0x4],EDX
00401692  FLD float ptr [ESP + 0x4]
00401696  MOV dword ptr [ESP],ECX
00401699  FMUL float ptr [EAX + 0x10]
0040169c  MOV ECX,dword ptr [ESP + 0x18]
004016a0  FADDP
004016a2  FLD float ptr [ESP]
004016a5  FMUL float ptr [EAX]
004016a7  FADDP
004016a9  FSTP float ptr [ECX]
004016ab  FLD float ptr [ESP + 0x8]
004016af  FMUL float ptr [EAX + 0x24]
004016b2  FLD float ptr [ESP + 0x4]
004016b6  FMUL float ptr [EAX + 0x14]
004016b9  FADDP
004016bb  FLD float ptr [ESP]
004016be  FMUL float ptr [EAX + 0x4]
004016c1  FADDP
004016c3  FSTP float ptr [ECX + 0x4]
004016c6  FLD float ptr [ESP + 0x8]
004016ca  FMUL float ptr [EAX + 0x28]
004016cd  FLD float ptr [ESP + 0x4]
004016d1  FMUL float ptr [EAX + 0x18]
004016d4  FADDP
004016d6  FLD float ptr [ESP]
004016d9  FMUL float ptr [EAX + 0x8]
004016dc  FADDP
004016de  FSTP float ptr [ECX + 0x8]
004016e1  ADD ESP,0xc
004016e4  RET
