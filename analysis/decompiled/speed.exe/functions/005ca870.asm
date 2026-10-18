005ca870  MOV EAX,dword ptr [ESP + 0x4]
005ca874  FLD float ptr [EAX]
005ca876  FLD ST0
005ca878  FMULP
005ca87a  FADD ST0,ST0
005ca87c  FLD float ptr [EAX + 0x4]
005ca87f  FLD ST0
005ca881  FMULP
005ca883  FADD ST0,ST0
005ca885  FLD float ptr [EAX + 0xc]
005ca888  FMUL float ptr [EAX]
005ca88a  FADD ST0,ST0
005ca88c  FLD float ptr [EAX + 0x8]
005ca88f  FMUL float ptr [EAX + 0x4]
005ca892  FADD ST0,ST0
005ca894  FLD float ptr [EAX + 0x8]
005ca897  FMUL float ptr [EAX]
005ca899  FADD ST0,ST0
005ca89b  FLD float ptr [EAX + 0xc]
005ca89e  FMUL float ptr [EAX + 0x4]
005ca8a1  MOV EAX,dword ptr [ESP + 0x8]
005ca8a5  FADD ST0,ST0
005ca8a7  FADDP
005ca8a9  FSTP float ptr [EAX]
005ca8ab  FSUB ST0,ST1
005ca8ad  FSTP float ptr [EAX + 0x4]
005ca8b0  FSTP ST0
005ca8b2  FADD ST0,ST1
005ca8b4  FSUBR float ptr [0x0089096c]
005ca8ba  FSTP float ptr [EAX + 0x8]
005ca8bd  FSTP ST0
005ca8bf  RET
