004669b0  FLD float ptr [ESP + 0x4]
004669b4  MOV EAX,ECX
004669b6  FMUL float ptr [EAX]
004669b8  FSTP float ptr [EAX]
004669ba  FLD float ptr [ESP + 0x4]
004669be  FMUL float ptr [EAX + 0x4]
004669c1  FSTP float ptr [EAX + 0x4]
004669c4  FLD float ptr [ESP + 0x4]
004669c8  FMUL float ptr [EAX + 0x8]
004669cb  FSTP float ptr [EAX + 0x8]
004669ce  FLD float ptr [ESP + 0x4]
004669d2  FMUL float ptr [EAX + 0xc]
004669d5  FSTP float ptr [EAX + 0xc]
004669d8  RET 0x4
