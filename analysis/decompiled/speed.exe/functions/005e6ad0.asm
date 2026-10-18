005e6ad0  MOV EDX,dword ptr [ESP + 0x4]
005e6ad4  MOV EAX,dword ptr [EDX + 0x8]
005e6ad7  PUSH EBX
005e6ad8  PUSH ESI
005e6ad9  MOV ESI,dword ptr [EAX]
005e6adb  MOV dword ptr [EDX + 0x8],ESI
005e6ade  MOV ESI,dword ptr [EAX]
005e6ae0  MOV BL,byte ptr [ESI + 0x21]
005e6ae3  TEST BL,BL
005e6ae5  JNZ 0x005e6aea
005e6ae7  MOV dword ptr [ESI + 0x4],EDX
005e6aea  MOV ESI,dword ptr [EDX + 0x4]
005e6aed  MOV dword ptr [EAX + 0x4],ESI
005e6af0  MOV ECX,dword ptr [ECX + 0x4]
005e6af3  CMP EDX,dword ptr [ECX + 0x4]
005e6af6  JNZ 0x005e6b05
005e6af8  MOV dword ptr [ECX + 0x4],EAX
005e6afb  POP ESI
005e6afc  MOV dword ptr [EAX],EDX
005e6afe  MOV dword ptr [EDX + 0x4],EAX
005e6b01  POP EBX
005e6b02  RET 0x4
005e6b05  MOV ECX,dword ptr [EDX + 0x4]
005e6b08  CMP EDX,dword ptr [ECX]
005e6b0a  JNZ 0x005e6b18
005e6b0c  MOV dword ptr [ECX],EAX
005e6b0e  POP ESI
005e6b0f  MOV dword ptr [EAX],EDX
005e6b11  MOV dword ptr [EDX + 0x4],EAX
005e6b14  POP EBX
005e6b15  RET 0x4
005e6b18  MOV dword ptr [ECX + 0x8],EAX
005e6b1b  POP ESI
005e6b1c  MOV dword ptr [EAX],EDX
005e6b1e  MOV dword ptr [EDX + 0x4],EAX
005e6b21  POP EBX
005e6b22  RET 0x4
