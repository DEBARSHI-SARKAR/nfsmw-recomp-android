0048ddf0  MOV ECX,dword ptr [ESP + 0x4]
0048ddf4  MOV EAX,dword ptr [ESP + 0x8]
0048ddf8  FLD float ptr [ECX]
0048ddfa  FMUL float ptr [EAX + 0xc]
0048ddfd  MOV EDX,dword ptr [ESP + 0xc]
0048de01  FLD float ptr [EAX + 0x8]
0048de04  FMUL float ptr [ECX + 0x4]
0048de07  FSUBP
0048de09  FLD float ptr [EAX + 0x4]
0048de0c  FMUL float ptr [ECX + 0x8]
0048de0f  FADDP
0048de11  FLD float ptr [ECX + 0xc]
0048de14  FMUL float ptr [EAX]
0048de16  FADDP
0048de18  FSTP float ptr [EDX]
0048de1a  FLD float ptr [ECX + 0x4]
0048de1d  FMUL float ptr [EAX + 0xc]
0048de20  FLD float ptr [EAX + 0x8]
0048de23  FMUL float ptr [ECX]
0048de25  FADDP
0048de27  FLD float ptr [ECX + 0x8]
0048de2a  FMUL float ptr [EAX]
0048de2c  FSUBP
0048de2e  FLD float ptr [EAX + 0x4]
0048de31  FMUL float ptr [ECX + 0xc]
0048de34  FADDP
0048de36  FSTP float ptr [EDX + 0x4]
0048de39  FLD float ptr [EAX + 0x8]
0048de3c  FMUL float ptr [ECX + 0xc]
0048de3f  FLD float ptr [ECX + 0x8]
0048de42  FMUL float ptr [EAX + 0xc]
0048de45  FADDP
0048de47  FLD float ptr [EAX + 0x4]
0048de4a  FMUL float ptr [ECX]
0048de4c  FSUBP
0048de4e  FLD float ptr [ECX + 0x4]
0048de51  FMUL float ptr [EAX]
0048de53  FADDP
0048de55  FSTP float ptr [EDX + 0x8]
0048de58  FLD float ptr [ECX + 0xc]
0048de5b  FMUL float ptr [EAX + 0xc]
0048de5e  FLD float ptr [ECX]
0048de60  FMUL float ptr [EAX]
0048de62  FLD float ptr [EAX + 0x4]
0048de65  FMUL float ptr [ECX + 0x4]
0048de68  FADDP
0048de6a  FLD float ptr [EAX + 0x8]
0048de6d  FMUL float ptr [ECX + 0x8]
0048de70  FADDP
0048de72  FSUBP
0048de74  FSTP float ptr [EDX + 0xc]
0048de77  RET
