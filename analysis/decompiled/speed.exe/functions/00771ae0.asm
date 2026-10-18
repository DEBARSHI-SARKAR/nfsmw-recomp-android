00771ae0  MOV EDX,dword ptr [ESP + 0x4]
00771ae4  MOV EAX,dword ptr [EDX]
00771ae6  PUSH EBX
00771ae7  PUSH ESI
00771ae8  MOV ESI,dword ptr [EAX + 0x8]
00771aeb  MOV dword ptr [EDX],ESI
00771aed  MOV ESI,dword ptr [EAX + 0x8]
00771af0  MOV BL,byte ptr [ESI + 0xf]
00771af3  TEST BL,BL
00771af5  JNZ 0x00771afa
00771af7  MOV dword ptr [ESI + 0x4],EDX
00771afa  MOV ESI,dword ptr [EDX + 0x4]
00771afd  MOV dword ptr [EAX + 0x4],ESI
00771b00  MOV ECX,dword ptr [ECX + 0x4]
00771b03  CMP EDX,dword ptr [ECX + 0x4]
00771b06  JNZ 0x00771b16
00771b08  MOV dword ptr [ECX + 0x4],EAX
00771b0b  POP ESI
00771b0c  MOV dword ptr [EAX + 0x8],EDX
00771b0f  MOV dword ptr [EDX + 0x4],EAX
00771b12  POP EBX
00771b13  RET 0x4
00771b16  MOV ECX,dword ptr [EDX + 0x4]
00771b19  CMP EDX,dword ptr [ECX + 0x8]
00771b1c  JNZ 0x00771b2c
00771b1e  MOV dword ptr [ECX + 0x8],EAX
00771b21  POP ESI
00771b22  MOV dword ptr [EAX + 0x8],EDX
00771b25  MOV dword ptr [EDX + 0x4],EAX
00771b28  POP EBX
00771b29  RET 0x4
00771b2c  MOV dword ptr [ECX],EAX
00771b2e  POP ESI
00771b2f  MOV dword ptr [EAX + 0x8],EDX
00771b32  MOV dword ptr [EDX + 0x4],EAX
00771b35  POP EBX
00771b36  RET 0x4
