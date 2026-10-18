004022e0  FLD float ptr [ESP + 0x4]
004022e4  MOV EAX,ECX
004022e6  FMUL float ptr [EAX]
004022e8  FSTP float ptr [EAX]
004022ea  FLD float ptr [ESP + 0x4]
004022ee  FMUL float ptr [EAX + 0x4]
004022f1  FSTP float ptr [EAX + 0x4]
004022f4  FLD float ptr [ESP + 0x4]
004022f8  FMUL float ptr [EAX + 0x8]
004022fb  FSTP float ptr [EAX + 0x8]
004022fe  RET 0x4
