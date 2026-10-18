0065cb90  MOV EDX,dword ptr [ESP + 0x4]
0065cb94  MOV EAX,dword ptr [EDX + 0x8]
0065cb97  PUSH EBX
0065cb98  PUSH ESI
0065cb99  MOV ESI,dword ptr [EAX]
0065cb9b  MOV dword ptr [EDX + 0x8],ESI
0065cb9e  MOV ESI,dword ptr [EAX]
0065cba0  MOV BL,byte ptr [ESI + 0x15]
0065cba3  TEST BL,BL
0065cba5  JNZ 0x0065cbaa
0065cba7  MOV dword ptr [ESI + 0x4],EDX
0065cbaa  MOV ESI,dword ptr [EDX + 0x4]
0065cbad  MOV dword ptr [EAX + 0x4],ESI
0065cbb0  MOV ECX,dword ptr [ECX + 0x4]
0065cbb3  CMP EDX,dword ptr [ECX + 0x4]
0065cbb6  JNZ 0x0065cbc5
0065cbb8  MOV dword ptr [ECX + 0x4],EAX
0065cbbb  POP ESI
0065cbbc  MOV dword ptr [EAX],EDX
0065cbbe  MOV dword ptr [EDX + 0x4],EAX
0065cbc1  POP EBX
0065cbc2  RET 0x4
0065cbc5  MOV ECX,dword ptr [EDX + 0x4]
0065cbc8  CMP EDX,dword ptr [ECX]
0065cbca  JNZ 0x0065cbd8
0065cbcc  MOV dword ptr [ECX],EAX
0065cbce  POP ESI
0065cbcf  MOV dword ptr [EAX],EDX
0065cbd1  MOV dword ptr [EDX + 0x4],EAX
0065cbd4  POP EBX
0065cbd5  RET 0x4
0065cbd8  MOV dword ptr [ECX + 0x8],EAX
0065cbdb  POP ESI
0065cbdc  MOV dword ptr [EAX],EDX
0065cbde  MOV dword ptr [EDX + 0x4],EAX
0065cbe1  POP EBX
0065cbe2  RET 0x4
