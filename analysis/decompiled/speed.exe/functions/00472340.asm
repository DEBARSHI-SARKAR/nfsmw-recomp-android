00472340  FLD float ptr [ECX + 0x8]
00472343  MOV EAX,dword ptr [ECX + 0x4]
00472346  FSUB float ptr [ECX]
00472348  MOV EDX,dword ptr [ECX]
0047234a  FLD float ptr [ECX + 0x4]
0047234d  MOV dword ptr [ECX + 0x18],EAX
00472350  FADD float ptr [ECX + 0xc]
00472353  MOV dword ptr [ECX + 0x1c],EDX
00472356  FLD ST1
00472358  FADD ST0,ST0
0047235a  FSUBP
0047235c  FSTP float ptr [ECX + 0x10]
0047235f  FMUL float ptr [0x008945ec]
00472365  FSUB float ptr [ECX + 0xc]
00472368  FLD float ptr [ECX + 0x4]
0047236b  FADD ST0,ST0
0047236d  FSUBP
0047236f  FSTP float ptr [ECX + 0x14]
00472372  MOV EAX,dword ptr [ECX + 0x30]
00472375  FLD float ptr [ECX + 0x34]
00472378  MOV EDX,dword ptr [ECX + 0x2c]
0047237b  FSUB float ptr [ECX + 0x2c]
0047237e  MOV dword ptr [ECX + 0x44],EAX
00472381  FLD float ptr [ECX + 0x30]
00472384  MOV dword ptr [ECX + 0x48],EDX
00472387  FADD float ptr [ECX + 0x38]
0047238a  FLD ST1
0047238c  FADD ST0,ST0
0047238e  FSUBP
00472390  FSTP float ptr [ECX + 0x3c]
00472393  FMUL float ptr [0x008945ec]
00472399  FSUB float ptr [ECX + 0x38]
0047239c  FLD float ptr [ECX + 0x30]
0047239f  FADD ST0,ST0
004723a1  FSUBP
004723a3  FSTP float ptr [ECX + 0x40]
004723a6  MOV EAX,dword ptr [ECX + 0x5c]
004723a9  FLD float ptr [ECX + 0x60]
004723ac  MOV EDX,dword ptr [ECX + 0x58]
004723af  FSUB float ptr [ECX + 0x58]
004723b2  MOV dword ptr [ECX + 0x70],EAX
004723b5  FLD float ptr [ECX + 0x5c]
004723b8  MOV dword ptr [ECX + 0x74],EDX
004723bb  FADD float ptr [ECX + 0x64]
004723be  FLD ST1
004723c0  FADD ST0,ST0
004723c2  FSUBP
004723c4  FSTP float ptr [ECX + 0x68]
004723c7  FMUL float ptr [0x008945ec]
004723cd  FSUB float ptr [ECX + 0x64]
004723d0  FLD float ptr [ECX + 0x5c]
004723d3  FADD ST0,ST0
004723d5  FSUBP
004723d7  FSTP float ptr [ECX + 0x6c]
004723da  RET
