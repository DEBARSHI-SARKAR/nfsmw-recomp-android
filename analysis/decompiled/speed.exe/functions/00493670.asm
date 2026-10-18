00493670  MOV EDX,dword ptr [ECX]
00493672  MOV EAX,dword ptr [ESP + 0x4]
00493676  MOV dword ptr [EAX],EDX
00493678  MOV EDX,dword ptr [ECX + 0x10]
0049367b  MOV dword ptr [EAX + 0x4],EDX
0049367e  MOV EDX,dword ptr [ECX + 0x20]
00493681  MOV dword ptr [EAX + 0x8],EDX
00493684  MOV EDX,dword ptr [ECX + 0x4]
00493687  MOV dword ptr [EAX + 0x10],EDX
0049368a  MOV EDX,dword ptr [ECX + 0x14]
0049368d  MOV dword ptr [EAX + 0x14],EDX
00493690  MOV EDX,dword ptr [ECX + 0x24]
00493693  MOV dword ptr [EAX + 0x18],EDX
00493696  MOV EDX,dword ptr [ECX + 0x8]
00493699  MOV dword ptr [EAX + 0x20],EDX
0049369c  MOV EDX,dword ptr [ECX + 0x18]
0049369f  MOV dword ptr [EAX + 0x24],EDX
004936a2  MOV EDX,dword ptr [ECX + 0x28]
004936a5  MOV dword ptr [EAX + 0x28],EDX
004936a8  FLD float ptr [ECX + 0x30]
004936ab  FMUL float ptr [ECX]
004936ad  FCHS
004936af  FLD float ptr [ECX + 0x4]
004936b2  FMUL float ptr [ECX + 0x34]
004936b5  FSUBP
004936b7  FLD float ptr [ECX + 0x38]
004936ba  FMUL float ptr [ECX + 0x8]
004936bd  FSUBP
004936bf  FSTP float ptr [EAX + 0x30]
004936c2  FLD float ptr [ECX + 0x30]
004936c5  FMUL float ptr [ECX + 0x10]
004936c8  FCHS
004936ca  FLD float ptr [ECX + 0x14]
004936cd  FMUL float ptr [ECX + 0x34]
004936d0  FSUBP
004936d2  FLD float ptr [ECX + 0x38]
004936d5  FMUL float ptr [ECX + 0x18]
004936d8  FSUBP
004936da  FSTP float ptr [EAX + 0x34]
004936dd  FLD float ptr [ECX + 0x30]
004936e0  FMUL float ptr [ECX + 0x20]
004936e3  FCHS
004936e5  FLD float ptr [ECX + 0x24]
004936e8  FMUL float ptr [ECX + 0x34]
004936eb  FSUBP
004936ed  FLD float ptr [ECX + 0x28]
004936f0  FMUL float ptr [ECX + 0x38]
004936f3  FSUBP
004936f5  FSTP float ptr [EAX + 0x38]
004936f8  RET 0x4
