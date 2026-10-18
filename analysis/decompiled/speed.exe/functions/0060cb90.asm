0060cb90  MOV EDX,dword ptr [ESP + 0x4]
0060cb94  MOV EAX,dword ptr [EDX + 0x8]
0060cb97  PUSH EBX
0060cb98  PUSH ESI
0060cb99  MOV ESI,dword ptr [EAX]
0060cb9b  MOV dword ptr [EDX + 0x8],ESI
0060cb9e  MOV ESI,dword ptr [EAX]
0060cba0  MOV BL,byte ptr [ESI + 0x21]
0060cba3  TEST BL,BL
0060cba5  JNZ 0x0060cbaa
0060cba7  MOV dword ptr [ESI + 0x4],EDX
0060cbaa  MOV ESI,dword ptr [EDX + 0x4]
0060cbad  MOV dword ptr [EAX + 0x4],ESI
0060cbb0  MOV ECX,dword ptr [ECX + 0x4]
0060cbb3  CMP EDX,dword ptr [ECX + 0x4]
0060cbb6  JNZ 0x0060cbc5
0060cbb8  MOV dword ptr [ECX + 0x4],EAX
0060cbbb  POP ESI
0060cbbc  MOV dword ptr [EAX],EDX
0060cbbe  MOV dword ptr [EDX + 0x4],EAX
0060cbc1  POP EBX
0060cbc2  RET 0x4
0060cbc5  MOV ECX,dword ptr [EDX + 0x4]
0060cbc8  CMP EDX,dword ptr [ECX]
0060cbca  JNZ 0x0060cbd8
0060cbcc  MOV dword ptr [ECX],EAX
0060cbce  POP ESI
0060cbcf  MOV dword ptr [EAX],EDX
0060cbd1  MOV dword ptr [EDX + 0x4],EAX
0060cbd4  POP EBX
0060cbd5  RET 0x4
0060cbd8  MOV dword ptr [ECX + 0x8],EAX
0060cbdb  POP ESI
0060cbdc  MOV dword ptr [EAX],EDX
0060cbde  MOV dword ptr [EDX + 0x4],EAX
0060cbe1  POP EBX
0060cbe2  RET 0x4
