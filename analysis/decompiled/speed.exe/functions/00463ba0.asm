00463ba0  PUSH EBP
00463ba1  MOV EBP,ESP
00463ba3  AND ESP,0xfffffff0
00463ba6  SUB ESP,0x20
00463ba9  MOV EAX,dword ptr [EBP + 0xc]
00463bac  MOV ECX,dword ptr [EAX + 0xc]
00463baf  MOV dword ptr [ESP + 0x8],ECX
00463bb3  MOV ECX,dword ptr [EBP + 0x10]
00463bb6  MOV EDX,dword ptr [ECX + 0xc]
00463bb9  MOV dword ptr [ESP + 0xc],EDX
00463bbd  FLD float ptr [ESP + 0xc]
00463bc1  FMUL float ptr [ESP + 0x8]
00463bc5  FLD float ptr [EAX + 0x8]
00463bc8  FMUL float ptr [ECX + 0x8]
00463bcb  FLD float ptr [ECX + 0x4]
00463bce  FMUL float ptr [EAX + 0x4]
00463bd1  FADDP
00463bd3  FLD float ptr [EAX]
00463bd5  FMUL float ptr [ECX]
00463bd7  FADDP
00463bd9  FSUBP
00463bdb  FLD float ptr [EAX + 0x4]
00463bde  FMUL float ptr [ECX + 0x8]
00463be1  FLD float ptr [EAX + 0x8]
00463be4  FMUL float ptr [ECX + 0x4]
00463be7  FSUBP
00463be9  FLD float ptr [EAX + 0x8]
00463bec  FMUL float ptr [ECX]
00463bee  FLD float ptr [EAX]
00463bf0  FMUL float ptr [ECX + 0x8]
00463bf3  FSUBP
00463bf5  FLD float ptr [ECX + 0x4]
00463bf8  FMUL float ptr [EAX]
00463bfa  FLD float ptr [EAX + 0x4]
00463bfd  FMUL float ptr [ECX]
00463bff  FSUBP
00463c01  FSTP float ptr [ESP + 0x18]
00463c05  FLD float ptr [ESP + 0x8]
00463c09  FMUL float ptr [ECX]
00463c0b  FADD ST0,ST2
00463c0d  FSTP float ptr [ESP + 0x10]
00463c11  FLD float ptr [ESP + 0x8]
00463c15  FMUL float ptr [ECX + 0x4]
00463c18  FADD ST0,ST1
00463c1a  FSTP ST2
00463c1c  FSTP ST0
00463c1e  FLD float ptr [ESP + 0x8]
00463c22  FMUL float ptr [ECX + 0x8]
00463c25  FADD float ptr [ESP + 0x18]
00463c29  FSTP float ptr [ESP + 0x18]
00463c2d  FLD float ptr [ESP + 0xc]
00463c31  FMUL float ptr [EAX + 0x4]
00463c34  FADDP
00463c36  FLD float ptr [ESP + 0xc]
00463c3a  FMUL float ptr [EAX + 0x8]
00463c3d  FADD float ptr [ESP + 0x18]
00463c41  FLD float ptr [ESP + 0xc]
00463c45  FMUL float ptr [EAX]
00463c47  MOV EAX,dword ptr [EBP + 0x8]
00463c4a  FADD float ptr [ESP + 0x10]
00463c4e  FSTP float ptr [EAX]
00463c50  FXCH
00463c52  FSTP float ptr [EAX + 0x4]
00463c55  FSTP float ptr [EAX + 0x8]
00463c58  FSTP float ptr [EAX + 0xc]
00463c5b  MOV ESP,EBP
00463c5d  POP EBP
00463c5e  RET
