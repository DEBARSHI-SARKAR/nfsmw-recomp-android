00674b70  MOV EDX,dword ptr [ESP + 0x4]
00674b74  MOV EAX,dword ptr [EDX + 0x8]
00674b77  PUSH EBX
00674b78  PUSH ESI
00674b79  MOV ESI,dword ptr [EAX]
00674b7b  MOV dword ptr [EDX + 0x8],ESI
00674b7e  MOV ESI,dword ptr [EAX]
00674b80  MOV BL,byte ptr [ESI + 0x15]
00674b83  TEST BL,BL
00674b85  JNZ 0x00674b8a
00674b87  MOV dword ptr [ESI + 0x4],EDX
00674b8a  MOV ESI,dword ptr [EDX + 0x4]
00674b8d  MOV dword ptr [EAX + 0x4],ESI
00674b90  MOV ECX,dword ptr [ECX + 0x4]
00674b93  CMP EDX,dword ptr [ECX + 0x4]
00674b96  JNZ 0x00674ba5
00674b98  MOV dword ptr [ECX + 0x4],EAX
00674b9b  POP ESI
00674b9c  MOV dword ptr [EAX],EDX
00674b9e  MOV dword ptr [EDX + 0x4],EAX
00674ba1  POP EBX
00674ba2  RET 0x4
00674ba5  MOV ECX,dword ptr [EDX + 0x4]
00674ba8  CMP EDX,dword ptr [ECX]
00674baa  JNZ 0x00674bb8
00674bac  MOV dword ptr [ECX],EAX
00674bae  POP ESI
00674baf  MOV dword ptr [EAX],EDX
00674bb1  MOV dword ptr [EDX + 0x4],EAX
00674bb4  POP EBX
00674bb5  RET 0x4
00674bb8  MOV dword ptr [ECX + 0x8],EAX
00674bbb  POP ESI
00674bbc  MOV dword ptr [EAX],EDX
00674bbe  MOV dword ptr [EDX + 0x4],EAX
00674bc1  POP EBX
00674bc2  RET 0x4
