005c8d40  SUB ESP,0x8
005c8d43  MOV EAX,dword ptr [ESP + 0xc]
005c8d47  FLD float ptr [EAX + 0x28]
005c8d4a  FMUL float ptr [EAX + 0x3c]
005c8d4d  FLD float ptr [EAX + 0x38]
005c8d50  FMUL float ptr [EAX + 0x2c]
005c8d53  FSUBP
005c8d55  FLD float ptr [EAX + 0x34]
005c8d58  FMUL float ptr [EAX + 0x2c]
005c8d5b  FLD float ptr [EAX + 0x3c]
005c8d5e  FMUL float ptr [EAX + 0x24]
005c8d61  FLD float ptr [EAX + 0x38]
005c8d64  FMUL float ptr [EAX + 0x24]
005c8d67  FLD float ptr [EAX + 0x28]
005c8d6a  FMUL float ptr [EAX + 0x34]
005c8d6d  FSUBP
005c8d6f  FLD float ptr [EAX + 0x3c]
005c8d72  FMUL float ptr [EAX + 0x20]
005c8d75  FLD float ptr [EAX + 0x38]
005c8d78  FMUL float ptr [EAX + 0x20]
005c8d7b  FSTP float ptr [ESP]
005c8d7e  FLD float ptr [EAX + 0x28]
005c8d81  FMUL float ptr [EAX + 0x30]
005c8d84  FSTP float ptr [ESP + 0xc]
005c8d88  FLD float ptr [EAX + 0x34]
005c8d8b  FMUL float ptr [EAX + 0x20]
005c8d8e  FLD float ptr [EAX + 0x30]
005c8d91  FMUL float ptr [EAX + 0x24]
005c8d94  FSUBP
005c8d96  FSTP float ptr [ESP + 0x4]
005c8d9a  FLD ST3
005c8d9c  FSUB ST0,ST3
005c8d9e  FMUL float ptr [EAX + 0x18]
005c8da1  FLD ST2
005c8da3  FMUL float ptr [EAX + 0x1c]
005c8da6  FADDP
005c8da8  FLD ST5
005c8daa  FMUL float ptr [EAX + 0x14]
005c8dad  FADDP
005c8daf  FMUL float ptr [EAX]
005c8db1  FLD float ptr [EAX + 0x30]
005c8db4  FMUL float ptr [EAX + 0x2c]
005c8db7  FSUB ST0,ST2
005c8db9  FMUL float ptr [EAX + 0x18]
005c8dbc  FLD float ptr [ESP]
005c8dbf  FSUB float ptr [ESP + 0xc]
005c8dc3  FMUL float ptr [EAX + 0x1c]
005c8dc6  FADDP
005c8dc8  FXCH ST6
005c8dca  FMUL float ptr [EAX + 0x10]
005c8dcd  FADDP ST6,ST0
005c8dcf  FXCH ST5
005c8dd1  FMUL float ptr [EAX + 0x4]
005c8dd4  FSUBP ST5,ST0
005c8dd6  FLD ST3
005c8dd8  FSUB ST0,ST1
005c8dda  FMUL float ptr [EAX + 0x14]
005c8ddd  FXCH ST3
005c8ddf  FSUB ST0,ST4
005c8de1  FMUL float ptr [EAX + 0x10]
005c8de4  FADDP ST3,ST0
005c8de6  FLD float ptr [ESP + 0x4]
005c8dea  FMUL float ptr [EAX + 0x1c]
005c8ded  FADDP ST3,ST0
005c8def  FXCH ST2
005c8df1  FMUL float ptr [EAX + 0x8]
005c8df4  FADDP ST4,ST0
005c8df6  FLD float ptr [ESP + 0xc]
005c8dfa  FSUB float ptr [ESP]
005c8dfd  FMUL float ptr [EAX + 0x14]
005c8e00  FXCH
005c8e02  FMUL float ptr [EAX + 0x10]
005c8e05  FADDP
005c8e07  FLD float ptr [ESP + 0x4]
005c8e0b  FMUL float ptr [EAX + 0x18]
005c8e0e  FADDP
005c8e10  FMUL float ptr [EAX + 0xc]
005c8e13  FSUBP ST3,ST0
005c8e15  FSTP ST0
005c8e17  FSTP ST0
005c8e19  ADD ESP,0x8
005c8e1c  RET
