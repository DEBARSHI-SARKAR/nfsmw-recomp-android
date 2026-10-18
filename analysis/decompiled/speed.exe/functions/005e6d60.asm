005e6d60  MOV EDX,dword ptr [ESP + 0x4]
005e6d64  MOV EAX,dword ptr [EDX]
005e6d66  PUSH EBX
005e6d67  PUSH ESI
005e6d68  MOV ESI,dword ptr [EAX + 0x8]
005e6d6b  MOV dword ptr [EDX],ESI
005e6d6d  MOV ESI,dword ptr [EAX + 0x8]
005e6d70  MOV BL,byte ptr [ESI + 0x21]
005e6d73  TEST BL,BL
005e6d75  JNZ 0x005e6d7a
005e6d77  MOV dword ptr [ESI + 0x4],EDX
005e6d7a  MOV ESI,dword ptr [EDX + 0x4]
005e6d7d  MOV dword ptr [EAX + 0x4],ESI
005e6d80  MOV ECX,dword ptr [ECX + 0x4]
005e6d83  CMP EDX,dword ptr [ECX + 0x4]
005e6d86  JNZ 0x005e6d96
005e6d88  MOV dword ptr [ECX + 0x4],EAX
005e6d8b  POP ESI
005e6d8c  MOV dword ptr [EAX + 0x8],EDX
005e6d8f  MOV dword ptr [EDX + 0x4],EAX
005e6d92  POP EBX
005e6d93  RET 0x4
005e6d96  MOV ECX,dword ptr [EDX + 0x4]
005e6d99  CMP EDX,dword ptr [ECX + 0x8]
005e6d9c  JNZ 0x005e6dac
005e6d9e  MOV dword ptr [ECX + 0x8],EAX
005e6da1  POP ESI
005e6da2  MOV dword ptr [EAX + 0x8],EDX
005e6da5  MOV dword ptr [EDX + 0x4],EAX
005e6da8  POP EBX
005e6da9  RET 0x4
005e6dac  MOV dword ptr [ECX],EAX
005e6dae  POP ESI
005e6daf  MOV dword ptr [EAX + 0x8],EDX
005e6db2  MOV dword ptr [EDX + 0x4],EAX
005e6db5  POP EBX
005e6db6  RET 0x4
