005c8cc0  MOV EAX,dword ptr [ESP + 0x4]
005c8cc4  FLD float ptr [EAX + 0x4]
005c8cc7  MOV ECX,dword ptr [EAX + 0x10]
005c8cca  FSTP float ptr [EAX + 0x10]
005c8ccd  MOV EDX,dword ptr [EAX + 0x20]
005c8cd0  FLD float ptr [EAX + 0x8]
005c8cd3  MOV dword ptr [EAX + 0x4],ECX
005c8cd6  FSTP float ptr [EAX + 0x20]
005c8cd9  MOV ECX,dword ptr [EAX + 0x24]
005c8cdc  FLD float ptr [EAX + 0x18]
005c8cdf  MOV dword ptr [EAX + 0x8],EDX
005c8ce2  FST float ptr [EAX + 0x24]
005c8ce5  MOV dword ptr [EAX + 0x18],ECX
005c8ce8  FLD float ptr [EAX + 0x30]
005c8ceb  FLD float ptr [EAX + 0x34]
005c8cee  FLD float ptr [EAX + 0x38]
005c8cf1  FLD ST2
005c8cf3  FMUL float ptr [EAX]
005c8cf5  FCHS
005c8cf7  FLD ST2
005c8cf9  FMUL float ptr [EAX + 0x10]
005c8cfc  FSUBP
005c8cfe  FLD ST1
005c8d00  FMUL float ptr [EAX + 0x20]
005c8d03  FSUBP
005c8d05  FSTP float ptr [EAX + 0x30]
005c8d08  FLD ST2
005c8d0a  FMUL float ptr [EAX + 0x4]
005c8d0d  FCHS
005c8d0f  FLD ST2
005c8d11  FMUL float ptr [EAX + 0x14]
005c8d14  FSUBP
005c8d16  FLD ST1
005c8d18  FMUL ST5
005c8d1a  FSUBP
005c8d1c  FSTP float ptr [EAX + 0x34]
005c8d1f  FXCH ST2
005c8d21  FMUL float ptr [EAX + 0x8]
005c8d24  FCHS
005c8d26  FXCH
005c8d28  FMUL float ptr [EAX + 0x18]
005c8d2b  FSUBP
005c8d2d  FXCH
005c8d2f  FMUL float ptr [EAX + 0x28]
005c8d32  FSUBP
005c8d34  FSTP float ptr [EAX + 0x38]
005c8d37  FSTP ST0
005c8d39  RET
