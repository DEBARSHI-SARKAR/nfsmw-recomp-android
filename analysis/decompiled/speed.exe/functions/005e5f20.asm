005e5f20  MOV EDX,dword ptr [ESP + 0x4]
005e5f24  MOV EAX,dword ptr [EDX + 0x8]
005e5f27  PUSH EBX
005e5f28  PUSH ESI
005e5f29  MOV ESI,dword ptr [EAX]
005e5f2b  MOV dword ptr [EDX + 0x8],ESI
005e5f2e  MOV ESI,dword ptr [EAX]
005e5f30  MOV BL,byte ptr [ESI + 0x15]
005e5f33  TEST BL,BL
005e5f35  JNZ 0x005e5f3a
005e5f37  MOV dword ptr [ESI + 0x4],EDX
005e5f3a  MOV ESI,dword ptr [EDX + 0x4]
005e5f3d  MOV dword ptr [EAX + 0x4],ESI
005e5f40  MOV ECX,dword ptr [ECX + 0x4]
005e5f43  CMP EDX,dword ptr [ECX + 0x4]
005e5f46  JNZ 0x005e5f55
005e5f48  MOV dword ptr [ECX + 0x4],EAX
005e5f4b  POP ESI
005e5f4c  MOV dword ptr [EAX],EDX
005e5f4e  MOV dword ptr [EDX + 0x4],EAX
005e5f51  POP EBX
005e5f52  RET 0x4
005e5f55  MOV ECX,dword ptr [EDX + 0x4]
005e5f58  CMP EDX,dword ptr [ECX]
005e5f5a  JNZ 0x005e5f68
005e5f5c  MOV dword ptr [ECX],EAX
005e5f5e  POP ESI
005e5f5f  MOV dword ptr [EAX],EDX
005e5f61  MOV dword ptr [EDX + 0x4],EAX
005e5f64  POP EBX
005e5f65  RET 0x4
005e5f68  MOV dword ptr [ECX + 0x8],EAX
005e5f6b  POP ESI
005e5f6c  MOV dword ptr [EAX],EDX
005e5f6e  MOV dword ptr [EDX + 0x4],EAX
005e5f71  POP EBX
005e5f72  RET 0x4
