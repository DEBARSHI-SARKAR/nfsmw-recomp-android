005e4fd0  PUSH ESI
005e4fd1  MOV ESI,ECX
005e4fd3  MOV AL,byte ptr [ESI + 0x8]
005e4fd6  TEST AL,AL
005e4fd8  JZ 0x005e4ff4
005e4fda  CALL 0x006e8de0
005e4fdf  FSUB float ptr [ESI]
005e4fe1  FADD float ptr [ESI + 0x4]
005e4fe4  FSTP float ptr [ESI + 0x4]
005e4fe7  CALL 0x006e8de0
005e4fec  FSTP float ptr [ESI]
005e4fee  MOV byte ptr [ESI + 0x8],0x1
005e4ff2  POP ESI
005e4ff3  RET
005e4ff4  FLD float ptr [ESI + 0x4]
005e4ff7  FSTP float ptr [ESI + 0x4]
005e4ffa  CALL 0x006e8de0
005e4fff  FSTP float ptr [ESI]
005e5001  MOV byte ptr [ESI + 0x8],0x1
005e5005  POP ESI
005e5006  RET
