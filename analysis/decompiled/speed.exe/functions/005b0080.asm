005b0080  MOV EAX,dword ptr [ESP + 0x8]
005b0084  MOV ECX,dword ptr [ESP + 0xc]
005b0088  FLD float ptr [EAX + 0x24]
005b008b  FMUL float ptr [ECX + 0x8]
005b008e  FLD float ptr [EAX + 0x4]
005b0091  FMUL float ptr [ECX]
005b0093  FADDP
005b0095  FLD float ptr [EAX + 0x14]
005b0098  FMUL float ptr [ECX + 0x4]
005b009b  FADDP
005b009d  FADD float ptr [EAX + 0x34]
005b00a0  FLD float ptr [EAX + 0x28]
005b00a3  FMUL float ptr [ECX + 0x8]
005b00a6  FLD float ptr [EAX + 0x8]
005b00a9  FMUL float ptr [ECX]
005b00ab  FADDP
005b00ad  FLD float ptr [EAX + 0x18]
005b00b0  FMUL float ptr [ECX + 0x4]
005b00b3  FADDP
005b00b5  FADD float ptr [EAX + 0x38]
005b00b8  FLD float ptr [EAX + 0x20]
005b00bb  FMUL float ptr [ECX + 0x8]
005b00be  FLD float ptr [EAX + 0x10]
005b00c1  FMUL float ptr [ECX + 0x4]
005b00c4  FADDP
005b00c6  FLD float ptr [EAX]
005b00c8  FMUL float ptr [ECX]
005b00ca  FADDP
005b00cc  FADD float ptr [EAX + 0x30]
005b00cf  MOV EAX,dword ptr [ESP + 0x4]
005b00d3  FSTP float ptr [EAX]
005b00d5  FXCH
005b00d7  FSTP float ptr [EAX + 0x4]
005b00da  FSTP float ptr [EAX + 0x8]
005b00dd  RET
