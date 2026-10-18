004012f0  SUB ESP,0xc
004012f3  MOV ECX,dword ptr [ESP + 0x14]
004012f7  MOV EAX,dword ptr [ESP + 0x10]
004012fb  FLD float ptr [ECX + 0x8]
004012fe  FMUL float ptr [EAX + 0x4]
00401301  FLD float ptr [ECX + 0x4]
00401304  FMUL float ptr [EAX + 0x8]
00401307  FSUBP
00401309  FSTP float ptr [ESP]
0040130c  FLD float ptr [ECX]
0040130e  FMUL float ptr [EAX + 0x8]
00401311  FLD float ptr [EAX]
00401313  FMUL float ptr [ECX + 0x8]
00401316  FSUBP
00401318  FSTP float ptr [ESP + 0x4]
0040131c  MOV EDX,dword ptr [ESP + 0x4]
00401320  FLD float ptr [EAX]
00401322  FMUL float ptr [ECX + 0x4]
00401325  FLD float ptr [ECX]
00401327  MOV ECX,dword ptr [ESP]
0040132a  FMUL float ptr [EAX + 0x4]
0040132d  MOV EAX,dword ptr [ESP + 0x18]
00401331  MOV dword ptr [EAX],ECX
00401333  FSUBP
00401335  MOV dword ptr [EAX + 0x4],EDX
00401338  FSTP float ptr [ESP + 0x8]
0040133c  MOV ECX,dword ptr [ESP + 0x8]
00401340  MOV dword ptr [EAX + 0x8],ECX
00401343  ADD ESP,0xc
00401346  RET
