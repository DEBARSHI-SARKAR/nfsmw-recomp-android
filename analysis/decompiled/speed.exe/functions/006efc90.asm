006efc90  MOV EDX,dword ptr [ESP + 0x4]
006efc94  MOV EAX,dword ptr [EDX + 0x8]
006efc97  PUSH EBX
006efc98  PUSH ESI
006efc99  MOV ESI,dword ptr [EAX]
006efc9b  MOV dword ptr [EDX + 0x8],ESI
006efc9e  MOV ESI,dword ptr [EAX]
006efca0  MOV BL,byte ptr [ESI + 0x15]
006efca3  TEST BL,BL
006efca5  JNZ 0x006efcaa
006efca7  MOV dword ptr [ESI + 0x4],EDX
006efcaa  MOV ESI,dword ptr [EDX + 0x4]
006efcad  MOV dword ptr [EAX + 0x4],ESI
006efcb0  MOV ECX,dword ptr [ECX + 0x4]
006efcb3  CMP EDX,dword ptr [ECX + 0x4]
006efcb6  JNZ 0x006efcc5
006efcb8  MOV dword ptr [ECX + 0x4],EAX
006efcbb  POP ESI
006efcbc  MOV dword ptr [EAX],EDX
006efcbe  MOV dword ptr [EDX + 0x4],EAX
006efcc1  POP EBX
006efcc2  RET 0x4
006efcc5  MOV ECX,dword ptr [EDX + 0x4]
006efcc8  CMP EDX,dword ptr [ECX]
006efcca  JNZ 0x006efcd8
006efccc  MOV dword ptr [ECX],EAX
006efcce  POP ESI
006efccf  MOV dword ptr [EAX],EDX
006efcd1  MOV dword ptr [EDX + 0x4],EAX
006efcd4  POP EBX
006efcd5  RET 0x4
006efcd8  MOV dword ptr [ECX + 0x8],EAX
006efcdb  POP ESI
006efcdc  MOV dword ptr [EAX],EDX
006efcde  MOV dword ptr [EDX + 0x4],EAX
006efce1  POP EBX
006efce2  RET 0x4
