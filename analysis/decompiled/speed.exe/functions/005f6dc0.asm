005f6dc0  PUSH ESI
005f6dc1  MOV ESI,ECX
005f6dc3  CALL 0x005e6e40
005f6dc8  MOV dword ptr [ESI + 0x4],EAX
005f6dcb  MOV byte ptr [EAX + 0xf],0x1
005f6dcf  MOV EAX,dword ptr [ESI + 0x4]
005f6dd2  MOV dword ptr [EAX + 0x4],EAX
005f6dd5  MOV EAX,dword ptr [ESI + 0x4]
005f6dd8  MOV dword ptr [EAX],EAX
005f6dda  MOV EAX,dword ptr [ESI + 0x4]
005f6ddd  MOV dword ptr [EAX + 0x8],EAX
005f6de0  MOV dword ptr [ESI + 0x8],0x0
005f6de7  MOV EAX,ESI
005f6de9  POP ESI
005f6dea  RET
