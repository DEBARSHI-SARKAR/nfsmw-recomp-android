006200f0  MOV EDX,dword ptr [ECX]
006200f2  MOV EAX,dword ptr [ESP + 0x4]
006200f6  MOV dword ptr [EAX],EDX
006200f8  MOV EDX,dword ptr [ECX + 0x4]
006200fb  MOV dword ptr [EAX + 0x4],EDX
006200fe  MOV EDX,dword ptr [ECX + 0x8]
00620101  MOV dword ptr [EAX + 0x8],EDX
00620104  XOR EDX,EDX
00620106  PUSH EDI
00620107  MOV dword ptr [EAX + 0xc],EDX
0062010a  TEST dword ptr [ECX + 0x10],0x100000
00620111  JZ 0x00620146
00620113  FLD float ptr [ECX + 0x24]
00620116  FMUL float ptr [ECX + 0x8]
00620119  FLD float ptr [ECX + 0x28]
0062011c  FMUL float ptr [ECX + 0x4]
0062011f  FSUBP
00620121  FSTP float ptr [EAX + 0x10]
00620124  FLD float ptr [ECX + 0x28]
00620127  FMUL float ptr [ECX]
00620129  FLD float ptr [ECX + 0x20]
0062012c  FMUL float ptr [ECX + 0x8]
0062012f  FSUBP
00620131  FSTP float ptr [EAX + 0x14]
00620134  FLD float ptr [ECX + 0x4]
00620137  FMUL float ptr [ECX + 0x20]
0062013a  FLD float ptr [ECX + 0x24]
0062013d  FMUL float ptr [ECX]
0062013f  FSUBP
00620141  FSTP float ptr [EAX + 0x18]
00620144  JMP 0x00620153
00620146  MOV dword ptr [EAX + 0x10],EDX
00620149  MOV dword ptr [EAX + 0x14],0x3f800000
00620150  MOV dword ptr [EAX + 0x18],EDX
00620153  CMP byte ptr [ESP + 0xc],DL
00620157  MOV dword ptr [EAX + 0x1c],EDX
0062015a  MOV EDI,dword ptr [ECX + 0x20]
0062015d  MOV dword ptr [EAX + 0x20],EDI
00620160  MOV EDI,dword ptr [ECX + 0x24]
00620163  MOV dword ptr [EAX + 0x24],EDI
00620166  MOV EDI,dword ptr [ECX + 0x28]
00620169  MOV dword ptr [EAX + 0x28],EDI
0062016c  MOV dword ptr [EAX + 0x2c],EDX
0062016f  JZ 0x006201ca
00620171  MOV EDI,dword ptr [ECX + 0x30]
00620174  CMP byte ptr [ESP + 0x10],DL
00620178  MOV dword ptr [EAX + 0x30],EDI
0062017b  MOV EDI,dword ptr [ECX + 0x34]
0062017e  MOV dword ptr [EAX + 0x34],EDI
00620181  MOV EDI,dword ptr [ECX + 0x38]
00620184  MOV dword ptr [EAX + 0x38],EDI
00620187  MOV dword ptr [EAX + 0x3c],0x3f800000
0062018e  JZ 0x006201da
00620190  FLD float ptr [ECX + 0x14]
00620193  POP EDI
00620194  FMUL float ptr [EAX + 0x10]
00620197  FMUL float ptr [0x008933d4]
0062019d  FSUBR float ptr [EAX + 0x30]
006201a0  FSTP float ptr [EAX + 0x30]
006201a3  FLD float ptr [ECX + 0x14]
006201a6  FMUL float ptr [EAX + 0x14]
006201a9  FMUL float ptr [0x008933d4]
006201af  FSUBR float ptr [EAX + 0x34]
006201b2  FSTP float ptr [EAX + 0x34]
006201b5  FLD float ptr [EAX + 0x18]
006201b8  FMUL float ptr [ECX + 0x14]
006201bb  FMUL float ptr [0x008933d4]
006201c1  FSUBR float ptr [EAX + 0x38]
006201c4  FSTP float ptr [EAX + 0x38]
006201c7  RET 0xc
006201ca  MOV dword ptr [EAX + 0x30],EDX
006201cd  MOV dword ptr [EAX + 0x34],EDX
006201d0  MOV dword ptr [EAX + 0x38],EDX
006201d3  MOV dword ptr [EAX + 0x3c],0x3f800000
006201da  POP EDI
006201db  RET 0xc
