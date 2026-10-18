0069a970  SUB ESP,0xc
0069a973  MOV EAX,dword ptr [ECX + 0x18]
0069a976  MOV EAX,dword ptr [EAX]
0069a978  MOV ECX,dword ptr [ESP + 0x10]
0069a97c  FLD float ptr [ECX]
0069a97e  PUSH ESI
0069a97f  FSUB float ptr [EAX + 0x10]
0069a982  FLD float ptr [ECX + 0x4]
0069a985  FSUB float ptr [EAX + 0x14]
0069a988  FLD float ptr [ECX + 0x8]
0069a98b  MOV ECX,dword ptr [ESP + 0x18]
0069a98f  FSUB float ptr [EAX + 0x18]
0069a992  MOV EDX,ECX
0069a994  FLD ST0
0069a996  FMUL float ptr [EAX + 0x34]
0069a999  FLD ST2
0069a99b  FMUL float ptr [EAX + 0x38]
0069a99e  FSUBP
0069a9a0  FSTP float ptr [ESP + 0x4]
0069a9a4  MOV ESI,dword ptr [ESP + 0x4]
0069a9a8  FLD ST2
0069a9aa  FMUL float ptr [EAX + 0x38]
0069a9ad  FXCH
0069a9af  FMUL float ptr [EAX + 0x30]
0069a9b2  FSUBP
0069a9b4  FSTP float ptr [ESP + 0x8]
0069a9b8  FMUL float ptr [EAX + 0x30]
0069a9bb  FXCH
0069a9bd  FMUL float ptr [EAX + 0x34]
0069a9c0  MOV dword ptr [EDX],ESI
0069a9c2  MOV ESI,dword ptr [ESP + 0x8]
0069a9c6  MOV dword ptr [EDX + 0x4],ESI
0069a9c9  FSUBP
0069a9cb  FSTP float ptr [ESP + 0xc]
0069a9cf  MOV ESI,dword ptr [ESP + 0xc]
0069a9d3  MOV dword ptr [EDX + 0x8],ESI
0069a9d6  FLD float ptr [ECX]
0069a9d8  FADD float ptr [EAX + 0x20]
0069a9db  POP ESI
0069a9dc  FSTP float ptr [ECX]
0069a9de  FLD float ptr [EAX + 0x24]
0069a9e1  FADD float ptr [ECX + 0x4]
0069a9e4  FSTP float ptr [ECX + 0x4]
0069a9e7  FLD float ptr [EAX + 0x28]
0069a9ea  FADD float ptr [ECX + 0x8]
0069a9ed  FSTP float ptr [ECX + 0x8]
0069a9f0  ADD ESP,0xc
0069a9f3  RET 0x8
