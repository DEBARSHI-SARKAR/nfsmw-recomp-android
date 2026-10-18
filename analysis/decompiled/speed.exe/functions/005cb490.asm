005cb490  FLD float ptr [ESP + 0x8]
005cb494  MOV EAX,dword ptr [ESP + 0x4]
005cb498  FMUL float ptr [0x008a2f94]
005cb49e  XOR ECX,ECX
005cb4a0  MOV EDX,EAX
005cb4a2  MOV dword ptr [EDX],ECX
005cb4a4  FST float ptr [ESP + 0x8]
005cb4a8  MOV dword ptr [EDX + 0x4],ECX
005cb4ab  FCOS
005cb4ad  MOV dword ptr [EDX + 0x8],ECX
005cb4b0  MOV dword ptr [EDX + 0xc],ECX
005cb4b3  MOV dword ptr [EDX + 0x10],ECX
005cb4b6  MOV dword ptr [EDX + 0x14],ECX
005cb4b9  MOV dword ptr [EDX + 0x18],ECX
005cb4bc  MOV dword ptr [EDX + 0x1c],ECX
005cb4bf  MOV dword ptr [EDX + 0x20],ECX
005cb4c2  MOV dword ptr [EDX + 0x24],ECX
005cb4c5  MOV dword ptr [EDX + 0x28],ECX
005cb4c8  MOV dword ptr [EDX + 0x2c],ECX
005cb4cb  MOV dword ptr [EDX + 0x30],ECX
005cb4ce  MOV dword ptr [EDX + 0x34],ECX
005cb4d1  MOV dword ptr [EDX + 0x38],ECX
005cb4d4  MOV dword ptr [EDX + 0x3c],ECX
005cb4d7  MOV ECX,0x3f800000
005cb4dc  MOV dword ptr [EAX + 0x28],ECX
005cb4df  MOV dword ptr [EAX + 0x3c],ECX
005cb4e2  FLD float ptr [ESP + 0x8]
005cb4e6  FSIN
005cb4e8  FLD ST1
005cb4ea  FSTP float ptr [EAX + 0x14]
005cb4ed  FXCH
005cb4ef  FSTP float ptr [EAX]
005cb4f1  FST float ptr [EAX + 0x4]
005cb4f4  FCHS
005cb4f6  FSTP float ptr [EAX + 0x10]
005cb4f9  RET
