00493850  MOV EAX,dword ptr [ESP + 0x4]
00493854  FLD float ptr [ECX + 0x20]
00493857  FMUL float ptr [EAX + 0x8]
0049385a  MOV EDX,dword ptr [ESP + 0x8]
0049385e  FLD float ptr [ECX + 0x10]
00493861  SUB ESP,0xc
00493864  CMP EAX,EDX
00493866  FMUL float ptr [EAX + 0x4]
00493869  FADDP
0049386b  FLD float ptr [EAX]
0049386d  FMUL float ptr [ECX]
0049386f  FADDP
00493871  FADD float ptr [ECX + 0x30]
00493874  JZ 0x004938b4
00493876  FSTP float ptr [EDX]
00493878  FLD float ptr [ECX + 0x4]
0049387b  FMUL float ptr [EAX]
0049387d  FLD float ptr [ECX + 0x24]
00493880  FMUL float ptr [EAX + 0x8]
00493883  FADDP
00493885  FLD float ptr [ECX + 0x14]
00493888  FMUL float ptr [EAX + 0x4]
0049388b  FADDP
0049388d  FADD float ptr [ECX + 0x34]
00493890  FSTP float ptr [EDX + 0x4]
00493893  FLD float ptr [ECX + 0x8]
00493896  FMUL float ptr [EAX]
00493898  FLD float ptr [ECX + 0x28]
0049389b  FMUL float ptr [EAX + 0x8]
0049389e  FADDP
004938a0  FLD float ptr [ECX + 0x18]
004938a3  FMUL float ptr [EAX + 0x4]
004938a6  FADDP
004938a8  FADD float ptr [ECX + 0x38]
004938ab  FSTP float ptr [EDX + 0x8]
004938ae  ADD ESP,0xc
004938b1  RET 0x8
004938b4  FSTP float ptr [ESP]
004938b7  FLD float ptr [ECX + 0x4]
004938ba  FMUL float ptr [EAX]
004938bc  FLD float ptr [ECX + 0x24]
004938bf  FMUL float ptr [EAX + 0x8]
004938c2  FADDP
004938c4  FLD float ptr [ECX + 0x14]
004938c7  FMUL float ptr [EAX + 0x4]
004938ca  FADDP
004938cc  FADD float ptr [ECX + 0x34]
004938cf  FSTP float ptr [ESP + 0x4]
004938d3  FLD float ptr [ECX + 0x8]
004938d6  FMUL float ptr [EAX]
004938d8  FLD float ptr [ECX + 0x28]
004938db  FMUL float ptr [EAX + 0x8]
004938de  FADDP
004938e0  FLD float ptr [ECX + 0x18]
004938e3  FMUL float ptr [EAX + 0x4]
004938e6  MOV EAX,dword ptr [ESP]
004938e9  FADDP
004938eb  FADD float ptr [ECX + 0x38]
004938ee  MOV ECX,dword ptr [ESP + 0x4]
004938f2  MOV dword ptr [EDX],EAX
004938f4  MOV dword ptr [EDX + 0x4],ECX
004938f7  FSTP float ptr [ESP + 0x8]
004938fb  MOV EAX,dword ptr [ESP + 0x8]
004938ff  MOV dword ptr [EDX + 0x8],EAX
00493902  ADD ESP,0xc
00493905  RET 0x8
