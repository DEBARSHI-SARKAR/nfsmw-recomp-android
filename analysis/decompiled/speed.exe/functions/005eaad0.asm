005eaad0  PUSH ESI
005eaad1  MOV ESI,ECX
005eaad3  MOV EAX,dword ptr [ESI + 0x4]
005eaad6  MOV ECX,dword ptr [EAX + 0x4]
005eaad9  PUSH ECX
005eaada  MOV ECX,ESI
005eaadc  CALL 0x005e7090
005eaae1  MOV EAX,dword ptr [ESI + 0x4]
005eaae4  MOV dword ptr [EAX + 0x4],EAX
005eaae7  MOV EAX,dword ptr [ESI + 0x4]
005eaaea  MOV dword ptr [ESI + 0x8],0x0
005eaaf1  MOV dword ptr [EAX],EAX
005eaaf3  MOV ESI,dword ptr [ESI + 0x4]
005eaaf6  MOV dword ptr [ESI + 0x8],ESI
005eaaf9  POP ESI
005eaafa  RET
