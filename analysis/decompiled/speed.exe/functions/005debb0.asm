005debb0  MOV EDX,dword ptr [ESP + 0x4]
005debb4  MOV EAX,dword ptr [EDX]
005debb6  PUSH EBX
005debb7  PUSH ESI
005debb8  MOV ESI,dword ptr [EAX + 0x8]
005debbb  MOV dword ptr [EDX],ESI
005debbd  MOV ESI,dword ptr [EAX + 0x8]
005debc0  MOV BL,byte ptr [ESI + 0x15]
005debc3  TEST BL,BL
005debc5  JNZ 0x005debca
005debc7  MOV dword ptr [ESI + 0x4],EDX
005debca  MOV ESI,dword ptr [EDX + 0x4]
005debcd  MOV dword ptr [EAX + 0x4],ESI
005debd0  MOV ECX,dword ptr [ECX + 0x4]
005debd3  CMP EDX,dword ptr [ECX + 0x4]
005debd6  JNZ 0x005debe6
005debd8  MOV dword ptr [ECX + 0x4],EAX
005debdb  POP ESI
005debdc  MOV dword ptr [EAX + 0x8],EDX
005debdf  MOV dword ptr [EDX + 0x4],EAX
005debe2  POP EBX
005debe3  RET 0x4
005debe6  MOV ECX,dword ptr [EDX + 0x4]
005debe9  CMP EDX,dword ptr [ECX + 0x8]
005debec  JNZ 0x005debfc
005debee  MOV dword ptr [ECX + 0x8],EAX
005debf1  POP ESI
005debf2  MOV dword ptr [EAX + 0x8],EDX
005debf5  MOV dword ptr [EDX + 0x4],EAX
005debf8  POP EBX
005debf9  RET 0x4
005debfc  MOV dword ptr [ECX],EAX
005debfe  POP ESI
005debff  MOV dword ptr [EAX + 0x8],EDX
005dec02  MOV dword ptr [EDX + 0x4],EAX
005dec05  POP EBX
005dec06  RET 0x4
