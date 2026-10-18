00499990  SUB ESP,0x38
00499993  MOV EAX,dword ptr [ESP + 0x3c]
00499997  MOV ECX,dword ptr [EAX]
00499999  FLD float ptr [EAX + 0x8]
0049999c  MOV EDX,dword ptr [EAX + 0x10]
0049999f  FLD ST0
004999a1  FMUL ST1
004999a3  MOV dword ptr [ESP + 0x28],ECX
004999a7  FLD float ptr [ESP + 0x28]
004999ab  MOV ECX,dword ptr [EAX + 0x18]
004999ae  FMUL float ptr [ESP + 0x28]
004999b2  MOV dword ptr [ESP + 0x10],ECX
004999b6  MOV dword ptr [ESP + 0x8],EDX
004999ba  MOV EDX,dword ptr [EAX + 0x20]
004999bd  MOV EAX,dword ptr [EAX + 0x28]
004999c0  FADDP
004999c2  MOV dword ptr [ESP + 0x20],EAX
004999c6  MOV dword ptr [ESP + 0x18],EDX
004999ca  FSTP float ptr [ESP + 0x3c]
004999ce  FLD float ptr [ESP + 0x10]
004999d2  FMUL float ptr [ESP + 0x10]
004999d6  FLD float ptr [ESP + 0x8]
004999da  FMUL float ptr [ESP + 0x8]
004999de  FADDP
004999e0  FSTP float ptr [ESP]
004999e3  FLD float ptr [ESP + 0x20]
004999e7  FMUL float ptr [ESP + 0x20]
004999eb  FLD float ptr [ESP + 0x18]
004999ef  FMUL float ptr [ESP + 0x18]
004999f3  FADDP
004999f5  FSTP float ptr [ESP + 0x4]
004999f9  FLD float ptr [ESP + 0x3c]
004999fd  FCOMP float ptr [ESP]
00499a00  FNSTSW AX
00499a02  TEST AH,0x1
00499a05  JNZ 0x00499a3f
00499a07  FLD float ptr [ESP + 0x3c]
00499a0b  FCOMP float ptr [ESP + 0x4]
00499a0f  FNSTSW AX
00499a11  TEST AH,0x1
00499a14  JNZ 0x00499a3f
00499a16  MOV EAX,dword ptr [ESP + 0x40]
00499a1a  FLD float ptr [ESP + 0x28]
00499a1e  MOV ECX,dword ptr [ESP + 0x44]
00499a22  MOV dword ptr [ECX],0x0
00499a28  FSTP float ptr [EAX]
00499a2a  MOV dword ptr [EAX + 0x4],0x0
00499a31  FSTP float ptr [EAX + 0x8]
00499a34  MOV dword ptr [EAX + 0xc],0x3f800000
00499a3b  ADD ESP,0x38
00499a3e  RET
00499a3f  FSTP ST0
00499a41  FLD float ptr [ESP]
00499a44  FCOMP float ptr [ESP + 0x3c]
00499a48  FNSTSW AX
00499a4a  TEST AH,0x1
00499a4d  JNZ 0x00499a71
00499a4f  FLD float ptr [ESP]
00499a52  FCOMP float ptr [ESP + 0x4]
00499a56  FNSTSW AX
00499a58  TEST AH,0x1
00499a5b  JNZ 0x00499a71
00499a5d  MOV EDX,dword ptr [ESP + 0x44]
00499a61  FLD float ptr [ESP + 0x8]
00499a65  MOV ECX,dword ptr [ESP + 0x10]
00499a69  MOV dword ptr [EDX],0x1
00499a6f  JMP 0x00499a83
00499a71  MOV EDX,dword ptr [ESP + 0x44]
00499a75  FLD float ptr [ESP + 0x18]
00499a79  MOV ECX,dword ptr [ESP + 0x20]
00499a7d  MOV dword ptr [EDX],0x2
00499a83  MOV EAX,dword ptr [ESP + 0x40]
00499a87  FSTP float ptr [EAX]
00499a89  MOV dword ptr [EAX + 0x8],ECX
00499a8c  MOV dword ptr [EAX + 0x4],0x0
00499a93  MOV dword ptr [EAX + 0xc],0x3f800000
00499a9a  ADD ESP,0x38
00499a9d  RET
