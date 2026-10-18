005e8ba0  PUSH ESI
005e8ba1  MOV ESI,ECX
005e8ba3  MOV AL,byte ptr [ESI + 0x1978]
005e8ba9  TEST AL,AL
005e8bab  JZ 0x005e8bcd
005e8bad  CALL 0x006e8de0
005e8bb2  FSUB float ptr [ESI + 0x1970]
005e8bb8  MOV byte ptr [ESI + 0x1978],0x0
005e8bbf  FADD float ptr [ESI + 0x1974]
005e8bc5  FSTP float ptr [ESI + 0x1974]
005e8bcb  POP ESI
005e8bcc  RET
005e8bcd  FLD float ptr [ESI + 0x1974]
005e8bd3  MOV byte ptr [ESI + 0x1978],0x0
005e8bda  FSTP float ptr [ESI + 0x1974]
005e8be0  POP ESI
005e8be1  RET
