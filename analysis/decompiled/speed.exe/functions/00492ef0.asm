00492ef0  SUB ESP,0xc
00492ef3  PUSH EDI
00492ef4  MOV EDI,dword ptr [ESP + 0x14]
00492ef8  TEST EDI,EDI
00492efa  JZ 0x00493000
00492f00  MOV EDX,dword ptr [ESP + 0x1c]
00492f04  PUSH EBX
00492f05  MOV EBX,dword ptr [ESP + 0x1c]
00492f09  CMP EBX,EDX
00492f0b  PUSH ESI
00492f0c  JNZ 0x00492f92
00492f12  LEA EAX,[EBX + 0x4]
00492f15  FLD float ptr [EAX]
00492f17  MOV ESI,EDX
00492f19  FMUL float ptr [ECX + 0x10]
00492f1c  ADD EAX,0xc
00492f1f  FLD float ptr [ECX + 0x20]
00492f22  ADD EDX,0xc
00492f25  DEC EDI
00492f26  FMUL float ptr [EAX + -0x8]
00492f29  FADDP
00492f2b  FLD float ptr [ECX]
00492f2d  FMUL float ptr [EAX + -0x10]
00492f30  FADDP
00492f32  FADD float ptr [ECX + 0x30]
00492f35  FSTP float ptr [ESP + 0xc]
00492f39  MOV EBX,dword ptr [ESP + 0xc]
00492f3d  FLD float ptr [ECX + 0x24]
00492f40  FMUL float ptr [EAX + -0x8]
00492f43  FLD float ptr [EAX + -0xc]
00492f46  FMUL float ptr [ECX + 0x14]
00492f49  FADDP
00492f4b  FLD float ptr [ECX + 0x4]
00492f4e  FMUL float ptr [EAX + -0x10]
00492f51  FADDP
00492f53  FADD float ptr [ECX + 0x34]
00492f56  FSTP float ptr [ESP + 0x10]
00492f5a  FLD float ptr [ECX + 0x8]
00492f5d  FMUL float ptr [EAX + -0x10]
00492f60  FLD float ptr [ECX + 0x28]
00492f63  FMUL float ptr [EAX + -0x8]
00492f66  FADDP
00492f68  FLD float ptr [EAX + -0xc]
00492f6b  FMUL float ptr [ECX + 0x18]
00492f6e  FADDP
00492f70  FADD float ptr [ECX + 0x38]
00492f73  MOV dword ptr [ESI],EBX
00492f75  MOV EBX,dword ptr [ESP + 0x10]
00492f79  MOV dword ptr [ESI + 0x4],EBX
00492f7c  FSTP float ptr [ESP + 0x14]
00492f80  MOV EBX,dword ptr [ESP + 0x14]
00492f84  MOV dword ptr [ESI + 0x8],EBX
00492f87  JNZ 0x00492f15
00492f89  POP ESI
00492f8a  POP EBX
00492f8b  POP EDI
00492f8c  ADD ESP,0xc
00492f8f  RET 0xc
00492f92  MOV ESI,EDX
00492f94  LEA EAX,[EBX + 0x8]
00492f97  SUB EDX,EBX
00492f99  LEA ESP,[ESP]
00492fa0  FLD float ptr [EAX + -0x8]
00492fa3  ADD EAX,0xc
00492fa6  FMUL float ptr [ECX]
00492fa8  ADD ESI,0xc
00492fab  DEC EDI
00492fac  FLD float ptr [ECX + 0x20]
00492faf  FMUL float ptr [EAX + -0xc]
00492fb2  FADDP
00492fb4  FLD float ptr [EAX + -0x10]
00492fb7  FMUL float ptr [ECX + 0x10]
00492fba  FADDP
00492fbc  FADD float ptr [ECX + 0x30]
00492fbf  FSTP float ptr [ESI + -0xc]
00492fc2  FLD float ptr [ECX + 0x24]
00492fc5  FMUL float ptr [EAX + -0xc]
00492fc8  FLD float ptr [ECX + 0x14]
00492fcb  FMUL float ptr [EAX + -0x10]
00492fce  FADDP
00492fd0  FLD float ptr [EAX + -0x14]
00492fd3  FMUL float ptr [ECX + 0x4]
00492fd6  FADDP
00492fd8  FADD float ptr [ECX + 0x34]
00492fdb  FSTP float ptr [EAX + EDX*0x1 + -0x10]
00492fdf  FLD float ptr [ECX + 0x8]
00492fe2  FMUL float ptr [EAX + -0x14]
00492fe5  FLD float ptr [EAX + -0xc]
00492fe8  FMUL float ptr [ECX + 0x28]
00492feb  FADDP
00492fed  FLD float ptr [EAX + -0x10]
00492ff0  FMUL float ptr [ECX + 0x18]
00492ff3  FADDP
00492ff5  FADD float ptr [ECX + 0x38]
00492ff8  FSTP float ptr [EAX + EDX*0x1 + -0xc]
00492ffc  JNZ 0x00492fa0
00492ffe  POP ESI
00492fff  POP EBX
00493000  POP EDI
00493001  ADD ESP,0xc
00493004  RET 0xc
