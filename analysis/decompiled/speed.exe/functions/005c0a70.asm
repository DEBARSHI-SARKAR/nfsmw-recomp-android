005c0a70  PUSH EBX
005c0a71  PUSH ESI
005c0a72  PUSH EDI
005c0a73  MOV EDI,dword ptr [ESP + 0x10]
005c0a77  XOR BL,BL
005c0a79  CMP EDI,-0x1
005c0a7c  MOV ESI,ECX
005c0a7e  JNZ 0x005c0a9f
005c0a80  MOV EAX,dword ptr [ESP + 0x14]
005c0a84  MOV ECX,dword ptr [EAX]
005c0a86  MOV dword ptr [ESI + 0x18],ECX
005c0a89  MOV EDX,dword ptr [EAX + 0x4]
005c0a8c  MOV dword ptr [ESI + 0x1c],EDX
005c0a8f  MOV AL,byte ptr [ESI + 0x3]
005c0a92  AND AL,0x7f
005c0a94  POP EDI
005c0a95  MOV byte ptr [ESI + 0x3],AL
005c0a98  POP ESI
005c0a99  MOV AL,BL
005c0a9b  POP EBX
005c0a9c  RET 0x8
005c0a9f  PUSH EDI
005c0aa0  MOV ECX,ESI
005c0aa2  CALL 0x005aecb0
005c0aa7  CMP dword ptr [EAX + 0xc],EDI
005c0aaa  JZ 0x005c0ab6
005c0aac  PUSH EDI
005c0aad  MOV ECX,ESI
005c0aaf  MOV BL,0x1
005c0ab1  CALL 0x005c0830
005c0ab6  MOV ECX,dword ptr [ESP + 0x14]
005c0aba  FLD float ptr [ECX]
005c0abc  POP EDI
005c0abd  FSUB float ptr [ESI + 0x18]
005c0ac0  FLD float ptr [ECX + 0x4]
005c0ac3  FSUB float ptr [ESI + 0x1c]
005c0ac6  FXCH
005c0ac8  FSTP float ptr [EAX + 0x10]
005c0acb  FSTP float ptr [EAX + 0x14]
005c0ace  MOV AL,byte ptr [ESI + 0x3]
005c0ad1  AND AL,0x7f
005c0ad3  MOV byte ptr [ESI + 0x3],AL
005c0ad6  POP ESI
005c0ad7  MOV AL,BL
005c0ad9  POP EBX
005c0ada  RET 0x8
