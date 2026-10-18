005ddec0  PUSH ESI
005ddec1  MOV ESI,ECX
005ddec3  MOV AL,byte ptr [ESI + 0x8]
005ddec6  TEST AL,AL
005ddec8  JZ 0x005dded6
005ddeca  CALL 0x006e8de0
005ddecf  FSUB float ptr [ESI]
005dded1  FADD float ptr [ESI + 0x4]
005dded4  POP ESI
005dded5  RET
005dded6  FLD float ptr [ESI + 0x4]
005dded9  POP ESI
005ddeda  RET
