004dcb80  PUSH ESI
004dcb81  MOV ESI,dword ptr [ESP + 0x8]
004dcb85  MOV EAX,dword ptr [ESI]
004dcb87  PUSH EDI
004dcb88  MOV EDI,ECX
004dcb8a  MOV ECX,ESI
004dcb8c  CALL dword ptr [EAX + 0x4]
004dcb8f  MOV EAX,dword ptr [EAX]
004dcb91  SAR EAX,0x4
004dcb94  AND EAX,0xfff
004dcb99  SUB EAX,0x2
004dcb9c  JZ 0x004dcbab
004dcb9e  SUB EAX,0x5
004dcba1  JNZ 0x004dcbae
004dcba3  MOV dword ptr [EDI + 0x3c],ESI
004dcba6  POP EDI
004dcba7  POP ESI
004dcba8  RET 0x4
004dcbab  MOV dword ptr [EDI + 0x40],ESI
004dcbae  POP EDI
004dcbaf  POP ESI
004dcbb0  RET 0x4
