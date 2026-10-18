00771a80  MOV EDX,dword ptr [ESP + 0x4]
00771a84  MOV EAX,dword ptr [EDX + 0x8]
00771a87  PUSH EBX
00771a88  PUSH ESI
00771a89  MOV ESI,dword ptr [EAX]
00771a8b  MOV dword ptr [EDX + 0x8],ESI
00771a8e  MOV ESI,dword ptr [EAX]
00771a90  MOV BL,byte ptr [ESI + 0xf]
00771a93  TEST BL,BL
00771a95  JNZ 0x00771a9a
00771a97  MOV dword ptr [ESI + 0x4],EDX
00771a9a  MOV ESI,dword ptr [EDX + 0x4]
00771a9d  MOV dword ptr [EAX + 0x4],ESI
00771aa0  MOV ECX,dword ptr [ECX + 0x4]
00771aa3  CMP EDX,dword ptr [ECX + 0x4]
00771aa6  JNZ 0x00771ab5
00771aa8  MOV dword ptr [ECX + 0x4],EAX
00771aab  POP ESI
00771aac  MOV dword ptr [EAX],EDX
00771aae  MOV dword ptr [EDX + 0x4],EAX
00771ab1  POP EBX
00771ab2  RET 0x4
00771ab5  MOV ECX,dword ptr [EDX + 0x4]
00771ab8  CMP EDX,dword ptr [ECX]
00771aba  JNZ 0x00771ac8
00771abc  MOV dword ptr [ECX],EAX
00771abe  POP ESI
00771abf  MOV dword ptr [EAX],EDX
00771ac1  MOV dword ptr [EDX + 0x4],EAX
00771ac4  POP EBX
00771ac5  RET 0x4
00771ac8  MOV dword ptr [ECX + 0x8],EAX
00771acb  POP ESI
00771acc  MOV dword ptr [EAX],EDX
00771ace  MOV dword ptr [EDX + 0x4],EAX
00771ad1  POP EBX
00771ad2  RET 0x4
