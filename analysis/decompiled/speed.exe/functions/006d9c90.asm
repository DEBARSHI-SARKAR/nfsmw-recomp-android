006d9c90  MOV EDX,dword ptr [ESP + 0x4]
006d9c94  MOV EAX,dword ptr [EDX + 0x8]
006d9c97  PUSH EBX
006d9c98  PUSH ESI
006d9c99  MOV ESI,dword ptr [EAX]
006d9c9b  MOV dword ptr [EDX + 0x8],ESI
006d9c9e  MOV ESI,dword ptr [EAX]
006d9ca0  MOV BL,byte ptr [ESI + 0x25]
006d9ca3  TEST BL,BL
006d9ca5  JNZ 0x006d9caa
006d9ca7  MOV dword ptr [ESI + 0x4],EDX
006d9caa  MOV ESI,dword ptr [EDX + 0x4]
006d9cad  MOV dword ptr [EAX + 0x4],ESI
006d9cb0  MOV ECX,dword ptr [ECX + 0x4]
006d9cb3  CMP EDX,dword ptr [ECX + 0x4]
006d9cb6  JNZ 0x006d9cc5
006d9cb8  MOV dword ptr [ECX + 0x4],EAX
006d9cbb  POP ESI
006d9cbc  MOV dword ptr [EAX],EDX
006d9cbe  MOV dword ptr [EDX + 0x4],EAX
006d9cc1  POP EBX
006d9cc2  RET 0x4
006d9cc5  MOV ECX,dword ptr [EDX + 0x4]
006d9cc8  CMP EDX,dword ptr [ECX]
006d9cca  JNZ 0x006d9cd8
006d9ccc  MOV dword ptr [ECX],EAX
006d9cce  POP ESI
006d9ccf  MOV dword ptr [EAX],EDX
006d9cd1  MOV dword ptr [EDX + 0x4],EAX
006d9cd4  POP EBX
006d9cd5  RET 0x4
006d9cd8  MOV dword ptr [ECX + 0x8],EAX
006d9cdb  POP ESI
006d9cdc  MOV dword ptr [EAX],EDX
006d9cde  MOV dword ptr [EDX + 0x4],EAX
006d9ce1  POP EBX
006d9ce2  RET 0x4
