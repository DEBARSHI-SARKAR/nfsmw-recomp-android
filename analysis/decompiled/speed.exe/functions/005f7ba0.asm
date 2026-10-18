005f7ba0  PUSH ESI
005f7ba1  MOV ESI,ECX
005f7ba3  CALL 0x005e6dc0
005f7ba8  MOV dword ptr [ESI + 0x4],EAX
005f7bab  MOV byte ptr [EAX + 0x21],0x1
005f7baf  MOV EAX,dword ptr [ESI + 0x4]
005f7bb2  MOV dword ptr [EAX + 0x4],EAX
005f7bb5  MOV EAX,dword ptr [ESI + 0x4]
005f7bb8  MOV dword ptr [EAX],EAX
005f7bba  MOV EAX,dword ptr [ESI + 0x4]
005f7bbd  MOV dword ptr [EAX + 0x8],EAX
005f7bc0  MOV dword ptr [ESI + 0x8],0x0
005f7bc7  MOV EAX,ESI
005f7bc9  POP ESI
005f7bca  RET
