005e6b30  MOV EDX,dword ptr [ESP + 0x4]
005e6b34  MOV EAX,dword ptr [EDX]
005e6b36  PUSH EBX
005e6b37  PUSH ESI
005e6b38  MOV ESI,dword ptr [EAX + 0x8]
005e6b3b  MOV dword ptr [EDX],ESI
005e6b3d  MOV ESI,dword ptr [EAX + 0x8]
005e6b40  MOV BL,byte ptr [ESI + 0x21]
005e6b43  TEST BL,BL
005e6b45  JNZ 0x005e6b4a
005e6b47  MOV dword ptr [ESI + 0x4],EDX
005e6b4a  MOV ESI,dword ptr [EDX + 0x4]
005e6b4d  MOV dword ptr [EAX + 0x4],ESI
005e6b50  MOV ECX,dword ptr [ECX + 0x4]
005e6b53  CMP EDX,dword ptr [ECX + 0x4]
005e6b56  JNZ 0x005e6b66
005e6b58  MOV dword ptr [ECX + 0x4],EAX
005e6b5b  POP ESI
005e6b5c  MOV dword ptr [EAX + 0x8],EDX
005e6b5f  MOV dword ptr [EDX + 0x4],EAX
005e6b62  POP EBX
005e6b63  RET 0x4
005e6b66  MOV ECX,dword ptr [EDX + 0x4]
005e6b69  CMP EDX,dword ptr [ECX + 0x8]
005e6b6c  JNZ 0x005e6b7c
005e6b6e  MOV dword ptr [ECX + 0x8],EAX
005e6b71  POP ESI
005e6b72  MOV dword ptr [EAX + 0x8],EDX
005e6b75  MOV dword ptr [EDX + 0x4],EAX
005e6b78  POP EBX
005e6b79  RET 0x4
005e6b7c  MOV dword ptr [ECX],EAX
005e6b7e  POP ESI
005e6b7f  MOV dword ptr [EAX + 0x8],EDX
005e6b82  MOV dword ptr [EDX + 0x4],EAX
005e6b85  POP EBX
005e6b86  RET 0x4
