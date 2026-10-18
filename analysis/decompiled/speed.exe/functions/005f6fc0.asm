005f6fc0  PUSH ESI
005f6fc1  MOV ESI,ECX
005f6fc3  CALL 0x005e6c40
005f6fc8  MOV dword ptr [ESI + 0x4],EAX
005f6fcb  MOV byte ptr [EAX + 0x15],0x1
005f6fcf  MOV EAX,dword ptr [ESI + 0x4]
005f6fd2  MOV dword ptr [EAX + 0x4],EAX
005f6fd5  MOV EAX,dword ptr [ESI + 0x4]
005f6fd8  MOV dword ptr [EAX],EAX
005f6fda  MOV EAX,dword ptr [ESI + 0x4]
005f6fdd  MOV dword ptr [EAX + 0x8],EAX
005f6fe0  MOV dword ptr [ESI + 0x8],0x0
005f6fe7  MOV EAX,ESI
005f6fe9  POP ESI
005f6fea  RET
