0048d8e0  SUB ESP,0x10
0048d8e3  MOV EAX,dword ptr [ESP + 0x14]
0048d8e7  FLD float ptr [EAX]
0048d8e9  FMUL float ptr [0x008933d4]
0048d8ef  FLD float ptr [EAX + 0x4]
0048d8f2  FMUL float ptr [0x008933d4]
0048d8f8  FLD float ptr [EAX + 0x8]
0048d8fb  MOV EAX,dword ptr [ESP + 0x18]
0048d8ff  FMUL float ptr [0x008933d4]
0048d905  FSTP float ptr [ESP]
0048d908  FLD ST1
0048d90a  FCOS
0048d90c  FSTP float ptr [ESP + 0x4]
0048d910  FLD ST0
0048d912  FCOS
0048d914  FSTP float ptr [ESP + 0x14]
0048d918  FLD float ptr [ESP]
0048d91b  FCOS
0048d91d  FSTP float ptr [ESP + 0x8]
0048d921  FXCH
0048d923  FSIN
0048d925  FSTP float ptr [ESP + 0xc]
0048d929  FSIN
0048d92b  FLD float ptr [ESP]
0048d92e  FSIN
0048d930  FLD float ptr [ESP + 0x8]
0048d934  FMUL float ptr [ESP + 0x4]
0048d938  FSTP float ptr [ESP]
0048d93b  FLD float ptr [ESP + 0x4]
0048d93f  FMUL ST1
0048d941  FLD float ptr [ESP + 0xc]
0048d945  FMUL float ptr [ESP + 0x8]
0048d949  FXCH ST2
0048d94b  FMUL float ptr [ESP + 0xc]
0048d94f  FSTP float ptr [ESP + 0xc]
0048d953  FLD float ptr [ESP + 0x14]
0048d957  FMUL ST2
0048d959  FLD ST1
0048d95b  FMUL ST4
0048d95d  FSUBP
0048d95f  FSTP float ptr [EAX]
0048d961  FLD float ptr [ESP]
0048d964  FMUL ST3
0048d966  FLD float ptr [ESP + 0xc]
0048d96a  FMUL float ptr [ESP + 0x14]
0048d96e  FADDP
0048d970  FSTP float ptr [EAX + 0x4]
0048d973  FMUL float ptr [ESP + 0x14]
0048d977  FXCH
0048d979  FMUL ST2
0048d97b  FSUBP
0048d97d  FSTP float ptr [EAX + 0x8]
0048d980  FLD float ptr [ESP + 0xc]
0048d984  FMUL ST1
0048d986  FLD float ptr [ESP]
0048d989  FMUL float ptr [ESP + 0x14]
0048d98d  FADDP
0048d98f  FSTP float ptr [EAX + 0xc]
0048d992  FSTP ST0
0048d994  ADD ESP,0x10
0048d997  RET
