005e6780  MOV EDX,dword ptr [ESP + 0x4]
005e6784  MOV EAX,dword ptr [EDX]
005e6786  PUSH EBX
005e6787  PUSH ESI
005e6788  MOV ESI,dword ptr [EAX + 0x8]
005e678b  MOV dword ptr [EDX],ESI
005e678d  MOV ESI,dword ptr [EAX + 0x8]
005e6790  MOV BL,byte ptr [ESI + 0xf]
005e6793  TEST BL,BL
005e6795  JNZ 0x005e679a
005e6797  MOV dword ptr [ESI + 0x4],EDX
005e679a  MOV ESI,dword ptr [EDX + 0x4]
005e679d  MOV dword ptr [EAX + 0x4],ESI
005e67a0  MOV ECX,dword ptr [ECX + 0x4]
005e67a3  CMP EDX,dword ptr [ECX + 0x4]
005e67a6  JNZ 0x005e67b6
005e67a8  MOV dword ptr [ECX + 0x4],EAX
005e67ab  POP ESI
005e67ac  MOV dword ptr [EAX + 0x8],EDX
005e67af  MOV dword ptr [EDX + 0x4],EAX
005e67b2  POP EBX
005e67b3  RET 0x4
005e67b6  MOV ECX,dword ptr [EDX + 0x4]
005e67b9  CMP EDX,dword ptr [ECX + 0x8]
005e67bc  JNZ 0x005e67cc
005e67be  MOV dword ptr [ECX + 0x8],EAX
005e67c1  POP ESI
005e67c2  MOV dword ptr [EAX + 0x8],EDX
005e67c5  MOV dword ptr [EDX + 0x4],EAX
005e67c8  POP EBX
005e67c9  RET 0x4
005e67cc  MOV dword ptr [ECX],EAX
005e67ce  POP ESI
005e67cf  MOV dword ptr [EAX + 0x8],EDX
005e67d2  MOV dword ptr [EDX + 0x4],EAX
005e67d5  POP EBX
005e67d6  RET 0x4
