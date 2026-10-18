005caea0  SUB ESP,0x24
005caea3  MOV EAX,dword ptr [ESP + 0x28]
005caea7  MOV ECX,dword ptr [ESP + 0x2c]
005caeab  FLD float ptr [ECX + 0x8]
005caeae  FMUL float ptr [EAX + 0x4]
005caeb1  FLD float ptr [ECX + 0x4]
005caeb4  FMUL float ptr [EAX + 0x8]
005caeb7  FSUBP
005caeb9  FSTP float ptr [ESP + 0xc]
005caebd  MOV EDX,dword ptr [ESP + 0xc]
005caec1  FLD float ptr [ECX]
005caec3  MOV dword ptr [ESP],EDX
005caec6  FMUL float ptr [EAX + 0x8]
005caec9  FLD float ptr [EAX]
005caecb  FMUL float ptr [ECX + 0x8]
005caece  FSUBP
005caed0  FSTP float ptr [ESP + 0x10]
005caed4  MOV EDX,dword ptr [ESP + 0x10]
005caed8  FLD float ptr [EAX]
005caeda  MOV dword ptr [ESP + 0x4],EDX
005caede  FMUL float ptr [ECX + 0x4]
005caee1  FLD float ptr [ECX]
005caee3  FMUL float ptr [EAX + 0x4]
005caee6  FSUBP
005caee8  FSTP float ptr [ESP + 0x14]
005caeec  MOV EDX,dword ptr [ESP + 0x14]
005caef0  FLD float ptr [EAX + 0xc]
005caef3  MOV dword ptr [ESP + 0x8],EDX
005caef7  FLD ST0
005caef9  FMUL float ptr [ECX]
005caefb  FADD float ptr [ESP]
005caefe  FLD ST1
005caf00  FMUL float ptr [ECX + 0x4]
005caf03  FADD float ptr [ESP + 0x4]
005caf07  FSTP float ptr [ESP + 0x4]
005caf0b  FXCH
005caf0d  FMUL float ptr [ECX + 0x8]
005caf10  FADD float ptr [ESP + 0x8]
005caf14  FSTP float ptr [ESP + 0x8]
005caf18  FLD float ptr [ESP + 0x4]
005caf1c  FMUL float ptr [EAX + 0x8]
005caf1f  FLD float ptr [ESP + 0x8]
005caf23  FMUL float ptr [EAX + 0x4]
005caf26  FSUBP
005caf28  FSTP float ptr [ESP + 0xc]
005caf2c  MOV EDX,dword ptr [ESP + 0xc]
005caf30  FLD float ptr [ESP + 0x8]
005caf34  MOV dword ptr [ESP + 0x18],EDX
005caf38  FMUL float ptr [EAX]
005caf3a  FLD ST1
005caf3c  FMUL float ptr [EAX + 0x8]
005caf3f  FSUBP
005caf41  FSTP float ptr [ESP + 0x10]
005caf45  MOV EDX,dword ptr [ESP + 0x10]
005caf49  MOV dword ptr [ESP + 0x1c],EDX
005caf4d  FLD ST0
005caf4f  FMUL float ptr [EAX + 0x4]
005caf52  FLD float ptr [ESP + 0x4]
005caf56  FMUL float ptr [EAX]
005caf58  FSUBP
005caf5a  FSTP float ptr [ESP + 0x14]
005caf5e  MOV EDX,dword ptr [ESP + 0x14]
005caf62  FLD float ptr [EAX]
005caf64  MOV dword ptr [ESP + 0x20],EDX
005caf68  FMUL float ptr [ECX]
005caf6a  FLD float ptr [ECX + 0x8]
005caf6d  FMUL float ptr [EAX + 0x8]
005caf70  FADDP
005caf72  FLD float ptr [ECX + 0x4]
005caf75  FMUL float ptr [EAX + 0x4]
005caf78  FADDP
005caf7a  FLD ST0
005caf7c  FMUL float ptr [EAX]
005caf7e  FSTP float ptr [ESP + 0xc]
005caf82  FLD ST0
005caf84  FMUL float ptr [EAX + 0x4]
005caf87  FSTP float ptr [ESP + 0x10]
005caf8b  FMUL float ptr [EAX + 0x8]
005caf8e  MOV EAX,dword ptr [EAX + 0xc]
005caf91  MOV dword ptr [ESP + 0x28],EAX
005caf95  MOV EAX,dword ptr [ESP + 0x30]
005caf99  FSTP float ptr [ESP + 0x14]
005caf9d  FMUL float ptr [ESP + 0x28]
005cafa1  FADD float ptr [ESP + 0xc]
005cafa5  FLD float ptr [ESP + 0x4]
005cafa9  FMUL float ptr [ESP + 0x28]
005cafad  FADD float ptr [ESP + 0x10]
005cafb1  FLD float ptr [ESP + 0x8]
005cafb5  FMUL float ptr [ESP + 0x28]
005cafb9  FADD float ptr [ESP + 0x14]
005cafbd  FSTP float ptr [ESP + 0x14]
005cafc1  FXCH
005cafc3  FSUB float ptr [ESP + 0x18]
005cafc7  FSTP float ptr [EAX]
005cafc9  FSUB float ptr [ESP + 0x1c]
005cafcd  FSTP float ptr [EAX + 0x4]
005cafd0  FLD float ptr [ESP + 0x14]
005cafd4  FSUB float ptr [ESP + 0x20]
005cafd8  FSTP float ptr [EAX + 0x8]
005cafdb  ADD ESP,0x24
005cafde  RET
